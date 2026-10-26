#pragma once
#include "common.h"

/* Functions in the 0x00130000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct LightRenderOwner;
struct LightRenderParameters;
struct List;
struct IdEntry;
struct IdEntryTable;
struct CommandListDesc;
extern "C" {

void FUN_001394c8(int a);

void FUN_0013290c(LightRenderOwner* owner, LightRenderParameters* argument);

void FUN_00138c14(List *list);

IdEntry * FUN_001317c8(IdEntryTable *table, u32 id);

void FUN_00138c94(CommandListDesc *list);

} /* extern "C" */
