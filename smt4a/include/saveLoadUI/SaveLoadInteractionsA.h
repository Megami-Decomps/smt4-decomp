#ifndef SAVELOADUI_SAVELOADINTERACTIONSA_H
#define SAVELOADUI_SAVELOADINTERACTIONSA_H

#include "common.h"

struct SaveSlotHeaderWork;

extern "C" {
void saveLoadUiRebuildTouchRegions(SaveSlotHeaderWork *ui, s32 enabled);
void FUN_0041de6c(SaveSlotHeaderWork *ui);
}

#endif
