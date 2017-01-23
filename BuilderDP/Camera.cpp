#include "stdafx.h"
#include "Camera.h"

Camera::Camera(void)
{
	pbs[0] = new REPreventBuilder();
	pbs[1] = new SmoothBuilder();
	picture = "";
}

Camera::~Camera(void)
{
	delete pbs[0];
	delete pbs[1];
}

Picture Camera::GetPicture()
{
	return "»çÁø:" + picture;
}

Picture Camera::PressAShutter(string origin, bool night)
{
	PictureBuilder *pb = 0;

	if (night)
	{
		pb = pbs[0];
	}
	else
	{
		pb = pbs[1];
	}

	pb->SetPicture(origin);
	pb->CollectImage();
	pb->Change();

	picture = pb->GetPicture();

	return GetPicture();
}