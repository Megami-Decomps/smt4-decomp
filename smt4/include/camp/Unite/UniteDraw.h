/* The fusion screen's panel draws (Shin Megami Tensei IV). */
#ifndef SMT4_CAMP_UNITE_DRAW_H
#define SMT4_CAMP_UNITE_DRAW_H

#include "common.h"

extern "C" {

s32 uniteDrawPanel(u32 job);
void uniteOptionListDraw(s32 x, s32 y);
void FUN_001dddd8(s32 x, s32 y, s32 mode);
void FUN_001f1bc4(s32 x, s32 y);
void FUN_002d96d4(s32 x, s32 y, s32 panel, s32 opened);
void FUN_001eef8c(s32 x, s32 y, s32 opened);
void FUN_001f0540(s32 x, s32 y, u32 mode, s32 preview, u32 opened, s32 detail);
void FUN_00215d68(s32 x, s32 y);

}
#endif
