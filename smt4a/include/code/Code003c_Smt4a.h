#pragma once
#include "common.h"

/* Functions in the 0x003c0000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct Entry;
struct EntryOwner;
extern "C" {

void FUN_003c3e14(void);

void FUN_003c1060(void);

void FUN_003c91e8(void);

Entry * FUN_003c316c(s32 id);

u32 FUN_003c4984(EntryOwner *owner, char *buffer);

} /* extern "C" */
