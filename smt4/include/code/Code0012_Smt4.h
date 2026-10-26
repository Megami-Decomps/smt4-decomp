#pragma once
#include "common.h"

/* Functions in the 0x00120000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct InitialWorkState;
struct VBaseOwner;
struct ByteStatus;
struct Obj48;
struct Block;
extern "C" {

void FUN_00121fa0(InitialWorkState *work);

u32 FUN_00129020(VBaseOwner *owner);

s32 FUN_00121e50(const ByteStatus *work);

u8 FUN_001247d0(Obj48 *obj);

u8 * soundBlockGetPayloadEnd(Block *block);

void FUN_001299f8(void);

void FUN_00121e38(void);

} /* extern "C" */
