#pragma once
#include "common.h"

/* Functions in the 0x004b0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct CampScriptPanelResources;
struct Table02Record;
struct ItemRankRecord;
struct SoundCueContext;
extern "C" {

void FUN_004b7a54(CampScriptPanelResources *work);

Table02Record* FUN_004bb80c(s32 index);

u8 isFlag1F0Set(void);

s32 FUN_004bcbb4(const ItemRankRecord *holder, u32 skillId);

void FUN_004b7d88(const SoundCueContext* context);

} /* extern "C" */
