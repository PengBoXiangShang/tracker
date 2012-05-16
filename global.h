/*
 *	File: global.h
 *	---------------------------
 *	This file contains global variable definitions, preprocessor defines and macros.
 *
 *	Author: Michael Andersch, 2012
 */
#ifndef GLOBAL_H_
#define GLOBAL_H_

#define DEFAULT_CAMERA 0

#define ERROR(e) (string("ERROR: ") + string(e))
#define abs(x) ((x) < 0 ? -(x) : (x))

#define DEFAULT_MODEL_TRAINING_COUNT 100
#define GAUSSIAN_WINDOW_RADIUS 3
#define THRESH 100
#define DEFAULT_LEARNING_RATE (0.01)

#endif