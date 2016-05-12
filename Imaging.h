//
//  Imaging.h
//  GGrayTest
//
//  Created by Johan Holland on 01/28/2016.
//  Copyright (c) 2016 com.johan.GGrayTest. All rights reserved.
//

#ifndef IMAGING_H
#define IMAGING_H

#include <OpenGLES/ES1/gl.h>
#include <OpenGLES/ES1/glext.h>
#include "Debug.h"

#define MAX_FILTER_RADIUS 2


enum {
	APPLE_texture_2D_limited_npot,
	IMG_texture_format_BGRA8888,
	NUM_EXTENSIONS
};

// Renderer capabilities that affect this application
typedef struct {
	GLboolean extension[NUM_EXTENSIONS];
	GLint     maxTextureSize;
} RendererInfo;

// A simple 2D image
typedef struct {
	GLuint texID;
	GLsizei wide, high;	// Texture dimensions
	GLfloat s, t;		// Texcoords to show full image, taking any POT padding into account
} Image;

// A simple vertex format
typedef struct {
	GLfloat x, y, s, t;
} V2fT2f;


void initGL(void);
void drawGL(int wide, int high, float val, int mode);

#endif /* IMAGING_H */
