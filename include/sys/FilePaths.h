#pragma once
#include "common.h"

/* Path building. */
extern "C" {

/* Prefixes `input` with the archive root `root` (0-3) and widens it into `output`, a 496-byte buffer
 * (u16[248] path); returns 0 when the path is too long. */
u32 pathBuildWide(const char *input, s16 *output, s32 root);

} /* extern "C" */
