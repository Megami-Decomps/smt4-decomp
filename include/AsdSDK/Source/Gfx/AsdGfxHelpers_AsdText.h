#pragma once
#include "common.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

/* Graphics, texture and scene helpers of the Asd SDK. */
extern "C" {

/* Sets the default color of a text object (the low byte is cleared). */
void asdTextSetBaseColor(AsdText *text, u32 color);

} /* extern "C" */
