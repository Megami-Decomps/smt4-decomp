#pragma once
#include "common.h"

/* Graphics, texture and scene helpers of the Asd SDK. */
struct TextureNode;
struct TexNode;
extern "C" {

s32 asdModelForwardChecked(u32 handle, u32 arg, s32 level, u32 extra);

/* Loads the texture of node `index` of texture table `table` into the main heap. */
struct TextureNode *asdTMTexLoadMainHeap(u32 table, u32 index);

void colorSetRgba(void *color, u8 r, u8 g, u8 b, u8 a);

bool devilIsTextureLoaded(s32 id, s32 resolve);

u32 effGetFrameStep(void);

void *effPartCreate(void);

u32 gfxTexFormatGetBitsPerPixel(u32 format, u32 type);

u32 *gpuCmdWriteCopy(u32 *cursor, u32 **patchSlot, const void *source, u32 size);

f32 *mathMatrixApplyScale(f32 *m, const f32 *scale, int mode);

u32 osVirtToPhysAddress(u32 address);

u32 renderPopStateStacks(void);

void sceneTraverserVisit(void *owner, void *visitor);

void slotInit(void *slot, u32 a, u32 b, u32 c);

TexNode *texTableFindNode(s32 slot, s32 id);

} /* extern "C" */
