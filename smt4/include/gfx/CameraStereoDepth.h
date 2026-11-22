/* The screen camera's stereo depth (AsdSDK/Source/Gfx/Camera/AsdCamera.cpp): the two floats at the end of AsdCamera. */
#ifndef GFX_CAMERASTEREODEPTH_H
#define GFX_CAMERASTEREODEPTH_H

#include "common.h"

extern "C" {
/* Sets a screen camera's stereo depth: the distance of the base plane (`depthLevel`, 5.0 by default) and the
 * parallax factor (1.0 almost everywhere). `camera` is the AsdCamera (or the object that embeds it first). */
void asdCameraSetStereoDepth(void *camera, f32 depthLevel, f32 factor);
}

#endif
