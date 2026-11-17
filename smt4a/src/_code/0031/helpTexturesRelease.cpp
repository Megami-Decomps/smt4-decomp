#include "ui/ButtonHelpGlobal.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void helpReleaseDataTable();
void asdMemFree(void* memory);
void asdTMTexTableReleaseNode(s32 table, s32 node);

// Release the shared help textures and allocations after the last reference.
void helpTexturesRelease()
{
    ButtonHelpGlobalsA *help = &g_buttonHelp;
    --help->loadCount;
    if (help->loadCount <= 0) {
        helpReleaseDataTable();
        asdMemFree(help->mbm);
        asdMemFree(help->bf);
        asdTMTexTableReleaseNode(10, 0);
        asdTMTexTableFreeEntry(10);
        help->loadCount = 0;
    }
}
}
