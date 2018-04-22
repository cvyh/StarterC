#pragma once
int Reverse(int original) {
	int result;
	int oriHun = original / 100;
	int oriTen = original % 100 / 10;
	int oriUnit = original % 10;
	result = oriHun + oriTen * 10 + oriUnit * 100;
	return result;
	//A simple method to solve the question:
	//return return original/100+original%100/10*10+original%10*100;
}