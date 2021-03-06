// Lab 7.2.5 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class MyException
{
public:
	string mes;
	MyException(string mes) { this->mes = mes; }
};


class Matrix
{
private:
	int **elements;
	int rowsCount;
	int columnsCount;

public:
	Matrix();
	Matrix(int rows, int columns);
	void FillCell(int row, int column, int value);
	void Print();
	void Add(Matrix *matrix);
};

Matrix::Matrix()
{
	*elements = new int[1];
	elements[0] = new int[1];
	rowsCount = 1;
	columnsCount = 1;
}

Matrix::Matrix(int rows, int columns)
{
	if (rows <= 0)
		throw new MyException("wrong number of rows");
	if (columns <= 0)
		throw new MyException("wrong number of columns");

	this->elements = new int*[rows];

	for (int i = 0; i < rows; ++i)
		this->elements[i] = new int[columns];

	this->rowsCount = rows;
	this->columnsCount = columns;
}

void Matrix::FillCell(int row, int column, int value)
{
	if (row >= rowsCount || column >= columnsCount)
		throw new MyException("Non existing cell!");

	if (row < 0 || column < 0)
		throw new MyException("error, wrong index");

	this->elements[row][column] = value;
}

void Matrix::Print()
{
	for (int i = 0; i < this->rowsCount; i++)
	{
		for (int j = 0; j < this->columnsCount; j++)
		{
			cout << this->elements[i][j] << ' ';
		}
		cout << endl;
	}
}

void Matrix::Add(Matrix *matrix)
{
	if (matrix->columnsCount != this->columnsCount
		|| matrix->rowsCount != this->rowsCount)
		throw new MyException("error, different sizes");
	for (int i = 0; i < this->rowsCount; i++)
		for (int j = 0; j < this->columnsCount; j++)
			this->elements[i][j] += matrix->elements[i][j];
}

Matrix* CreateMatrix(int matrixNumber)
{
	Matrix* matrix;
	int rows, columns;
	int val;
	cout << "matrix " << matrixNumber << ": " << endl;
	cout << "rows:";
	cin >> rows;
	cout << "columns:";
	cin >> columns;

	matrix = new Matrix(rows, columns);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cin >> val;
			try
			{ matrix->FillCell(i, j, val); }
			catch (MyException *e)
			{ cout << e->mes << endl; }
		}
	}

	return matrix;
}

int main()
{
	try
	{
		Matrix *matrix1 = CreateMatrix(1);
		Matrix *matrix2 = CreateMatrix(2);
		Matrix *matrix3 = CreateMatrix(3);
		cout << "Matrix1: " << endl;
		matrix1->Print();
		cout << endl;
		cout << "Matrix2: " << endl;
		matrix2->Print();
		cout << endl;
		cout << "Matrix3: " << endl;
		matrix3->Print();
		cout << endl;

		try
		{
			matrix1->Add(matrix2);
			matrix1->Print();
		}
		catch (MyException *e)
		{ cout << e->mes << endl; }

		try
		{
			matrix1->Add(matrix3);
			matrix1->Print();
		}
		catch (MyException *e)
		{ cout << e->mes << endl; }
	}
	catch (MyException *e)
	{ cout << e->mes << endl; }

	return 0;
}
