﻿#include "tasks.h"

/*	Task 04. The Leap Year [високосный год]
 *
 *	Определите, является ли заданный год високосным (как нашей эры, так и до нашей эры).
 *	Год является високосным, если его номер кратен 4, но не кратен 100, или если он кратен 400.
 *
 *	Примечание
 *	Можно попробовать реализовать алгоритм в одну строчку.
 *
 *	Формат входных данных [input]
 *	На вход даётся целое число в диапазоне типа int.
 *
 *	Формат выходных данных [output]
 *	Должен быть возвращён результат в виде булевского значения.
 *
 *	[ input 1]: 2023
 *	[output 1]: false
 *
 *	[ input 2]: 1984
 *	[output 2]: true
 *
 *	[ input 3]: 2000
 *	[output 3]: true
 *
 *	[ input 4]: 0
 *	[output 4]: true
 *
 *	[ input 5]: -100
 *	[output 5]: false
 */

bool task04(int year) {
	bool result = false;

	if (year < 0) {
		return false;
	}

	result = (year % 4 == 0 && year % 100 == 0 && year % 400) ? true : (year % 4 == 0 && year % 100 == 0) ? false : (year % 4 == 0) ? true : false;

	return result;
}