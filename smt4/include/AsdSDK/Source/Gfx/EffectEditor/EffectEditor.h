#pragma once
#include "common.h"
#include "shard/W5_W5Match2_LinkedItems.h"

extern "C" {

void sysFlagsSetBits(u32 mask);

} /* extern "C" */

extern "C" {
u8 padAlternateButtonIndex(int index);
}
