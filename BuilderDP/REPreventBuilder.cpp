#include "stdafx.h"
#include "RePreventBuilder.h"

void REPreventBuilder::CollectImage()
{
	string origin = GetPicture();
	index = origin.find_first_of(RED_EYE);
}

void REPreventBuilder::Change()
{
	string origin = GetPicture();
	const char *cstr = origin.c_str();
	int len = origin.size();
	int flen = strlen(RED_EYE);
	string front = origin.substr(0, index);
	string las = origin.substr(index + flen, len - index - flen);
	SetPicture(front + NORMAL_EYE);
	index = 0;

}