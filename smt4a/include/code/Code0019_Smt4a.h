#pragma once
#include "common.h"

/* Functions in the 0x00190000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Holder;
struct UniformContext;
struct AcmpHeader;
extern "C" {

u32 FUN_0019196c(Holder *object, s32 kind);

void FUN_0019f828(UniformContext* context, const u32 values[4]);

void acmpUnpackInPlace(u32 unused, AcmpHeader *header, u32 capacity);

s32 padGetMappedValue(u32 id);

} /* extern "C" */
