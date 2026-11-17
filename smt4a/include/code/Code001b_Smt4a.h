#pragma once
#include "common.h"
#include "gamedata/GameSaveDataA.h"

/* Functions in the 0x001b0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Bytes6;
extern "C" {

/* Whether inherited-skill flag `index` of a unit record is set. */
u8 bitSetTest(const SlotRecordA *record, u32 index);

void ARM_common_memset4_6(Bytes6 *dest, u32 value);

} /* extern "C" */
