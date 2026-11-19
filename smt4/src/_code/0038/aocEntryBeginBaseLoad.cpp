#include "common.h"
#include <stdio.h>
#include "addon/AocPackage.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern int aocQueueFileLoad(u32 context, char *path, void *arg0, int arg1, int size, void *arg2);

extern u32 g_aocDisplay; /* 0x433130 */

/* Builds "<mount>/aoc_base.bin" for the package, clears its directory state and hands the path to the display queue. */
void aocEntryBeginBaseLoad(AocPackage *package)
{
    char path[128];

    reinterpret_cast<int>(memClear(path, 0x80));
    package->directoryRequest[0] = 0;
    package->directoryRequest[1] = 0;
    package->directoryRequest[2] = 0;
    package->unk44 = 0;
    package->directoryLoaded = 0;
    sprintf(path, "%s/%s", package->mountName, "aoc_base.bin");
    aocQueueFileLoad(g_aocDisplay, path, &package->directoryFile, 1, 0x80, package->directoryRequest);
}

}
