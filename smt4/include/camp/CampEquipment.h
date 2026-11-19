#ifndef SMT4_CAMP_EQUIPMENT_H
#define SMT4_CAMP_EQUIPMENT_H

#include "common.h"

extern "C" {
void campDrawSelectedEquipmentDetails(s32 category, s32 row, u32 itemId, s32 x, s32 y);
void messageKindForward(s32 category, u32 x, u32 y, u32 layer);
}

#endif
