// Fill out your copyright notice in the Description page of Project Settings.


#include "HexTranslator.h"

void UHexTranslator::HexToDecimal(const FString& Zero, const FString& Ten, int32& Decimal) {
	
	/*����ֲ�����*/
	int32 HexArrayIndex;
	int32 ZeroNum;
	int32 TenNum;

	/*����ʮ�����������������ֵ�*/
	TArray<FString> HexWord;

	/*��ʼ������*/
	HexWord = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};

	/*�ж�Zero�����Ƿ�Ϊ��*/
	if (Zero.IsEmpty()) {
		ZeroNum = 0;
	}
	/*��������Ԫ�أ�����Index*/
	else {
		HexWord.Find(Zero, HexArrayIndex);
		ZeroNum = HexArrayIndex;
	}

	/*�ж�Ten�����Ƿ�Ϊ��*/
	if (Ten.IsEmpty()){
		TenNum = 0;
	}
	/*��������Ԫ�أ�����Index*/
	else {
		HexWord.Find(Ten, HexArrayIndex);
		TenNum = HexArrayIndex;
	}

	/*ʮ�����Ƽ���*/
	Decimal = ZeroNum + TenNum * 16;

}