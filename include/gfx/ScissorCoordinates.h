#ifndef GFX_SCISSORCOORDINATES_H
#define GFX_SCISSORCOORDINATES_H
#include "common.h"

/* Inferred name for the removed linker-inlined helper: x | (y << 16).
 * Both games' scissor callers retain its r0/r1 argument setup. Keep the
 * call boundary; an ordinary inlined expression loses those parameter copies.
 * See docs/notes/scissor-coordinate-packing.md for the independent retail evidence. */
extern "C" u32 packScissorCoordinates(u32 x, u32 y);

#endif
