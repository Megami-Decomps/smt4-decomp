#pragma once
#include "common.h"

/* Functions in the 0x004b0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct CampScriptPanelResources;
struct EncountGroupRecordA;
struct SlotRecordA;
struct SoundCueContext;
extern "C" {

void campScriptPanelResourcesRelease(CampScriptPanelResources *work);

EncountGroupRecordA *dataTable02GetRecordWithAocPackage(s32 index);

u8 isFlag1F0Set(void);

s32 skillGetAdjustedCost(const SlotRecordA *holder, u32 skillId);

void soundPlayCueForContextKind(const SoundCueContext* context);

} /* extern "C" */
