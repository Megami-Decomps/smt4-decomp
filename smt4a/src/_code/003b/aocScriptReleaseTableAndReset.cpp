#include "common.h"

extern "C" {
void dataTableFree(u32 table);
void aocRowOwnerFreeRows(void *system);
extern void *g_aocSystem;
}

// Release the script's table and reset the add-on content system.
extern "C" void aocScriptReleaseTableAndReset()
{
    dataTableFree(69);
    aocRowOwnerFreeRows(g_aocSystem);
}
