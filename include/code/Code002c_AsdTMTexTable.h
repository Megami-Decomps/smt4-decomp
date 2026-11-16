#pragma once
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* Functions in the 0x002c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

TexNode* asdTMTexTablePrepareNodeImage(s32 tableIndex, s32 nodeIndex);

} /* extern "C" */
