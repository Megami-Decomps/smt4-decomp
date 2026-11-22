#pragma once
#include "common.h"
#include "nw/math/MTX33.h"

/* Functions in the 0x00180000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct FileHandle;
struct Holder;
struct Owner;
extern "C" {

void * asdFileAllocZeroedBuffer(u32 a, u32 b, u32 c, u32 size, u32 alignment, u32 extra);

void FUN_00180000(void);

/* Draw/layout at x, y with flags and a character limit, then depth and opacity (the callers'
 * schedules give this parameter order; smt4 FUN_002b080c). Returns the maximum line width. */
f32 textLayoutDraw(const void *text, f32 x, f32 y, u32 flags, s32 limit, f32 depth, f32 opacity);

FileHandle * fileHandleClose(FileHandle *file);

void asdMdlNodeGetWorldPosition(Holder *object, u32 unused, u32 *out);

void FUN_001882fc(Owner *owner);

/* Receives one quad vertex (packed colour, position, texture coordinate) from the sprite builders; the release
 * build forwards it to a debug hook that was not linked. */
void debugQuadVertex(u32 color, nw::math::VEC3 position, f32 u, f32 v);

} /* extern "C" */
