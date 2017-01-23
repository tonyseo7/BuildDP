#include "stdafx.h"
#include "SmoothBuilder.h"

void SmoothBuilder::CollectImage()
{
	string origin = GetPicture();
	index = origin.find_first_of(SHARP);
}

void SmoothBuilder::Change()
{
	string origin = GetPicture();
	const char *cstr = origin.c_str();
	int len = origin.size();
	int flen = strlen(SHARP);

	string front = origin.substr(0, index);		//부분 문자열 복사
	string last = origin.substr(index + flen, len - index - flen);
	SetPicture(front + SMOOTH + last);	//이미지 수정
	
	index = 0;
}