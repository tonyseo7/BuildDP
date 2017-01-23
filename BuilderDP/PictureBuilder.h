#pragma once
#include "common.h"

typedef string Picture;

class PictureBuilder
{
	string picture;

public:
	string GetPicture()
	{
		return picture;
	}

	void SetPicture(string picture)
	{
		this->picture = picture;
	}

	virtual void CollectImage() = 0;
	virtual void Change() = 0;
};


