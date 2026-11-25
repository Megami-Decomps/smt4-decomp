#ifndef SMT4_GFX_TEXTURE_DRAW_BACKEND_H
#define SMT4_GFX_TEXTURE_DRAW_BACKEND_H

#include "common.h"

/* Draws a texture-table entry using the caller's prepared draw parameters.
 * The implementation currently accesses those records through halfword and word views. */
extern "C" u32 FUN_002a8ac4(u16 *sprite, u32 *request, s32 node);

#endif
