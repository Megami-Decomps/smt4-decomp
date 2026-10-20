/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Opens the Config screen: allocates and clears its work area, acquires its resources and picks
 * the initial selection from the story flags. */
#include "common.h"
#include "camp/Config/Config.h"

extern "C" {

int fileSlotLoad(int id);
int FUN_00297468(void (*fn)(void), void **out, int arg);
int FUN_0029f848(ConfigWork *config, u32 value, int a, int b, int c, int d);
int asdTMTexTableLoadEntryAsync(int type, int index);
int dataTableGetEntries(void);
int memClear(void *ptr, int size);                  /* zero a block */
void *asdMemAlloc(int heap, int align, int arg2, int size, int arg4);
int asdTMTexTableLoadSprites(int type);
void LAB_0018b954(void);
void LAB_0018b964(void);

extern ConfigWork *g_config;

extern int FUN_002973ec(void);
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
        g_config = (ConfigWork *)asdMemAlloc(0x100, 0x100, 0, 0xbc, 1);
    }
    config = g_config;
    memClear(config, 0xbc);
    config->state = 0;
    config->flag = 0;
    asdTMTexTableLoadSprites(0x2f);
    asdTMTexTableLoadEntryAsync(0x2f, 0);
    FUN_00297468(LAB_0018b954, &config->heapA, 0);
    FUN_00297468(LAB_0018b964, &config->heapB, 0);
    fileSlotLoad(0x36);
    value = dataTableGet(0x36, 0);
    dataTableGetEntries();
    value = dataTableGetCount(value);
    FUN_0029f848(config, value, 1, 1, 0, 1);
    mode = FUN_002973ec();
    selection = 1;
    if (gameFlagIsSet(0x555) != 0 && gameFlagIsSet(0x557) != 0) {
        if (mode == 1) {
            selection = 0;
        } else if (mode == 2) {
            selection = 2;
        }
    } else if (gameFlagIsSet(0x557) != 0) {
        if (mode == 1) {
            selection = 0;
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
