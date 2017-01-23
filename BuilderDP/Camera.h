#pragma once
#include "PictureBuilder.h"
#include "RePreventBuilder.h"
#include "SmoothBuilder.h"

class Camera
{
	PictureBuilder *pbs[2];
	Picture picture;

public:
	Camera(void);
	~Camera(void);

	Picture PressAShutter(string origin, bool night = false);
	Picture GetPicture();
};
