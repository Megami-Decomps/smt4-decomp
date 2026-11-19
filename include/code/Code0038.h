#pragma once
#include "common.h"

/* Functions in the 0x00380000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Loads the camera file `path` and returns the camera created from it (which keeps the file at 0x14). */
void *asdCameraLoadFromFile(const char *path);

u32 renderCtxPackPassFlagsWithAlpha(u32 kind, f32 value);

} /* extern "C" */
