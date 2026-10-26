#pragma once
#include "common.h"

/* Functions in the 0x00490000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct ShopEntry;
struct ScreenRect;
struct SubmenuWork;
struct EffectRect;
extern "C" {

u32 FUN_00492c70(void);

void FUN_0049d048(unsigned int param_1,unsigned int param_2);

s32 shopGetEntryPrice(const ShopEntry *entry);

void FUN_004934ac(ScreenRect *rect, u32 id, s32 dx, s32 dy, u32 extra);

u32 FUN_004954e8(SubmenuWork *work);

void FUN_00493518(f32 speed, const EffectRect *rect, u32 id, s32 dx, s32 dy, u32 last);

} /* extern "C" */
