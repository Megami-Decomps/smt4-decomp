/* NON_MATCHING: scheduling only: retail stores the entry count (r0) before loading screen->index; built stores the copy (r1) after the load */
/* Opens the entry screen: validates the resources, loads the selected entry of table 0x46 and starts the intro sequence. */
#include "gamedata/DataTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shop/shopMain.h"

extern "C" {

typedef struct TableEntry {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ u16 resourceA;
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ u16 resourceB;
    /* 0x42 */ u8 unk42[2];
} TableEntry; /* 0x44 */

typedef struct Screen {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 active;
    /* 0x00C */ s32 ready;
    /* 0x010 */ TableEntry *entries;
    /* 0x014 */ u32 entryCount;
    /* 0x018 */ u8 unk018[0x6C];
    /* 0x084 */ TableEntry *current;
    /* 0x088 */ u8 unk088[0x0C];
    /* 0x094 */ u32 unk094;
    /* 0x098 */ u8 unk098[0x8C];
    /* 0x124 */ u8 panel[0x64];
    /* 0x188 */ u32 unk188;
    /* 0x18C */ u8 unk18C[0xB0];
    /* 0x23C */ u8 widgetA[0x8C];
    /* 0x2C8 */ u8 widgetB[0x1A8];
    /* 0x470 */ u32 index;
} Screen;

extern void uiSpriteSelectAnim(void *widget, s32 arg);
extern void asdTMTexLoadMainHeap(s32 group, s32 id);
extern void FUN_00203b40(void *panel, u32 arg, s32 a, s32 b, s32 c, s32 d);
extern void flagsSetOrClearBit(void *panel, s32 arg);
extern s32 textureGetIndexedResource(s32 id);
extern void sysPlayVoice(u32 id);
extern s32 loadSlotIsLoaded(s32 id);
extern void FUN_0049de10(Screen *screen);

void FUN_0049ea54(Screen *screen)
{
    void *table;
    s32 resource;

    if (screen->active == 0 || screen->ready == 0) {
        return;
    }
    if (textureGetIndexedResource(0x33) == 0 || asdTMTexTableNodeIsLoaded(0x33, 0) == 0 || loadSlotIsLoaded(0x46) == 0) {
        return;
    }
    table = dataTableGet(0x46, 0);
    screen->entries = static_cast<TableEntry *>(dataTableGetEntries(table));
    screen->entryCount = dataTableGetCount(table);
    if ((s32)screen->index <= 0 && screen->index >= screen->entryCount) {
        FUN_0049d140(reinterpret_cast<int>(screen), 0, 0);
        return;
    }
    screen->current = &screen->entries[screen->index];
    resource = screen->current->resourceA;
    if (resource > 0 && asdTMTexTableNodeIsLoaded(0x33, resource) == 0) {
        asdTMTexLoadMainHeap(0x33, resource);
    }
    resource = screen->current->resourceB;
    if (resource > 0 && asdTMTexTableNodeIsLoaded(0x33, resource) == 0) {
        asdTMTexLoadMainHeap(0x33, resource);
    }
    FUN_0049de10(screen);
    FUN_00203b40(screen->panel, screen->unk094, 9, 1, 1, 1);
    flagsSetOrClearBit(screen->panel, 0);
    screen->unk188 = 0;
    uiSpriteSelectAnim(screen->widgetA, 0);
    uiSpriteSelectAnim(screen->widgetB, 0);
    FUN_0049d140(reinterpret_cast<int>(screen), 8, 9);
    sysPlayVoice(0x1000170);
}

}
