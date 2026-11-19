#ifndef CAMP_UIQUEST_UIQUEST_H
#define CAMP_UIQUEST_UIQUEST_H

#include "common.h"
#include "shard/W6_W6Match3_PointDifference.h"

extern "C" {
void uiGetLayoutPointDifference(PointDeltaWork* output, u32 bank, u32 firstIndex, u32 secondIndex);
}

#endif
