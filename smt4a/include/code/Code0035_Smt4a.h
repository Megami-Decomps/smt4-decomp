#pragma once
#include "common.h"

/* Functions in the 0x00350000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct GeometryOwner;
extern "C" {

void FUN_0035d03c(u8 value);

void FUN_0035105c(GeometryOwner *owner, u32 id, u32 kind);

} /* extern "C" */
