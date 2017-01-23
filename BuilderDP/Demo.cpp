#include "stdafx.h"
#include "Camera.h"

void main()
{
	Camera *camera = new Camera();
	camera->PressAShutter("RedEyeSharpBody", true);
	cout << camera->GetPicture() << endl;
	camera->PressAShutter("RedEyeSharpBody", false);
	cout << camera->GetPicture() << endl;

	delete camera;
}