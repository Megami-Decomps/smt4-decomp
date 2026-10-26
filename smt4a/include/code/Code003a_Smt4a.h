#pragma once
#include "common.h"

/* Functions in the 0x003a0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct ColorHolder;
struct Table29Record;
struct EffHolder;
extern "C" {

void colorHolderSet(ColorHolder *holder, u8 r, u8 g, u8 b, u8 a);

Table29Record * FUN_003a315c(u32 index);

void effHolderSetParams(EffHolder *holder, u32 kind, u32 *params);

} /* extern "C" */
