#include "common.h"

extern "C" {
void dataTableFree(u32 table);
void FUN_00471890(void *system);
extern void *g_aocSystem;
}

// Release the script's table and reset the add-on content system.
extern "C" void aocScriptReleaseTableAndReset()
{
    dataTableFree(69);
    FUN_00471890(g_aocSystem);
}
