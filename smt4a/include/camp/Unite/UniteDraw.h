#ifndef SMT4A_CAMP_UNITE_DRAW_H
#define SMT4A_CAMP_UNITE_DRAW_H

#include "common.h"

extern "C" {

s32 FUN_001f5294(u32 job);
s32 uniteDrawPanel(u32 job);
void FUN_00285b58(s32 x, s32 y, s32 mode, f32 opacity);
void FUN_002aa038(s32 x, s32 y, f32 opacity);
void FUN_002c8940(s32 x, s32 y, f32 opacity);
void FUN_0034abe0(s32 x, s32 y, s32 panel, s32 opened, f32 opacity);
void FUN_002a7bb8(s32 x, s32 y, s32 opened, f32 opacity);
void FUN_002a968c(s32 x, s32 y, u32 mode, s32 preview, u32 opened, s32 detail, s32 alternate, f32 opacity);
void FUN_002f197c(s32 x, s32 y, f32 opacity);

}
#endif
