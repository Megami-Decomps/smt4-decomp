/* NON_MATCHING: stripped debug trace and the mode switch shape now match retail; remaining differences are register choice (retail keeps the constant 1 in r7), FUN_0029f848's stack arguments (two str vs stm) and literal pool order. */
/* Opens the Config screen: allocates and clears its work area, acquires its resources and picks
 * the initial selection from the story flags. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "camp/Config/Config.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

int fileSlotLoad(int id);
int FUN_0029f848(ConfigWork *config, u32 value, int a, int b, int c, int d);
int asdTMTexTableLoadEntryAsync(int type, int index);
int dataTableGetEntries(void);
int memClear(void *ptr, int size);                  /* zero a block */
int asdTMTexTableLoadSprites(int type);

extern ConfigWork *g_config;

extern int gameFlagIsSet(u32 flag);
extern u32 dataTableGetCount(u32 value);
extern u32 dataTableGet(u32 a, u32 b);

void configOpen(void)
{
    ConfigWork *config;
    u32 value;
    int mode;
    int selection;

    if (g_config == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\Config\\Config.cpp", 639);
        g_config = (ConfigWork *)asdMemAlloc(0x100, 0x100, 0, 0xbc, 1);
    }
    config = g_config;
    memClear(config, 0xbc);
    config->state = 0;
    config->flag = 0;
    asdTMTexTableLoadSprites(0x2f);
    asdTMTexTableLoadEntryAsync(0x2f, 0);
    asdLoadFileAsyncSimple("camp/config.bf", reinterpret_cast<u32 *>(&config->heapA), 0);
    asdLoadFileAsyncSimple("camp/config.mbm", reinterpret_cast<u32 *>(&config->heapB), 0);
    fileSlotLoad(0x36);
    value = dataTableGet(0x36, 0);
    dataTableGetEntries();
    value = dataTableGetCount(value);
    FUN_0029f848(config, value, 1, 1, 0, 1);
    mode = FUN_002973ec();
    selection = 1;
    if (gameFlagIsSet(0x555) != 0 && gameFlagIsSet(0x557) != 0) {
        switch (mode) {
        case 0:
            break;
        case 1:
            selection = 0;
            break;
        case 2:
            selection = 2;
            break;
        }
    } else if (gameFlagIsSet(0x557) != 0) {
        switch (mode) {
        case 0:
            break;
        case 1:
            selection = 0;
            break;
        }
    } else if (gameFlagIsSet(0x555) != 0 && mode == 0) {
        selection = 0;
    }
    config->unk80 = selection;
    if (gameFlagIsSet(0x555) != 0 && gameFlagIsSet(0x557) != 0) {
        config->flag = 1;
    } else {
        config->flag = 0;
    }
}

} /* extern "C" */
