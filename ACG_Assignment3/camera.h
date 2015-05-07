#ifndef _CAMERA_H
#define _CAMERA_H

class Camera
{
public:
	vec3 position[5];
	vec3 direction;
	float FOV;
	float F = 1.8;
	float aperture = F / 3.5;
};

#endif