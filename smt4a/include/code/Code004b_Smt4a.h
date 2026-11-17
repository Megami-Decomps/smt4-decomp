#pragma once
#include "common.h"

/* Functions in the 0x004b0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct CampScriptPanelResources;
struct Table02Record;
struct SlotRecordA;
struct SoundCueContext;
extern "C" {

void campScriptPanelResourcesRelease(CampScriptPanelResources *work);

Table02Record* dataTable02GetRecordWithAocPackage(s32 index);

u8 isFlag1F0Set(void);

s32 skillGetAdjustedCost(const SlotRecordA *holder, u32 skillId);

void FUN_004b7d88(const SoundCueContext* context);

} /* extern "C" */
