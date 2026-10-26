#pragma once
#include "common.h"

/* Functions in the 0x00320000 code block whose subsystem is not known yet. */
extern "C" {

/* Plays/starts item `id` for a tag pair at (x, y) with a two-float extent (hard-float: x, y, then
 * the extent in s2/s3). */
void FUN_0032b4f8(s32 id, s32 tag, s32 subTag, f32 x, f32 y, f32 extentX, f32 extentY);

}
