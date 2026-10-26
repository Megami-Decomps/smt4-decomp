#pragma once
#include "common.h"

/* Functions in the 0x00470000 code block whose subsystem is not known yet; each declaration matches its definition. */
struct LoadedRecordTable;
extern "C" {

void loadedRecordTableClear(LoadedRecordTable *table);

} /* extern "C" */
