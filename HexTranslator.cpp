// Fill out your copyright notice in the Description page of Project Settings.


#include "HexTranslator.h"

void UHexTranslator::HexToDecimal(const FString& Zero, const FString& Ten, int32& Decimal) {
	
	/*定义局部变量*/
	int32 HexArrayIndex;
	int32 ZeroNum;
	int32 TenNum;

	/*定义十六进制数组作查找字典*/
	TArray<FString> HexWord;

	/*初始化数组*/
	HexWord = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};

	/*判断Zero参数是否为空*/
	if (Zero.IsEmpty()) {
		ZeroNum = 0;
	}
	/*查找数组元素，返回Index*/
	else {
		HexWord.Find(Zero, HexArrayIndex);
		ZeroNum = HexArrayIndex;
	}

	/*判断Ten参数是否为空*/
	if (Ten.IsEmpty()){
		TenNum = 0;
	}
	/*查找数组元素，返回Index*/
	else {
		HexWord.Find(Ten, HexArrayIndex);
		TenNum = HexArrayIndex;
	}

	/*十六进制计算*/
	Decimal = ZeroNum + TenNum * 16;

}