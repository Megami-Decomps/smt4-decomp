/* NON_MATCHING: screen/system allocation, total-count and texture scheduling differ; -O2 candidate. */
#include "addon/aocMain.h"

struct ContentListScroller { u8 data[0x6c]; };
struct ContentListScreen {
    u8 unk000[8];
    void *resource; // 0x008
    void *messages; // 0x00c
    u32 unk010;
    s32 totalCount; // 0x014
    u8 neededTextures[2]; // 0x018
    u8 unk01a[0x76];
    ContentListScroller scroller; // 0x090
    s32 visibleCount; // 0x0fc
    u8 unk100[0xc];
    u16 rowTouches[10]; // 0x10c
    u16 unk120;
    u16 previousTouch; // 0x122
    u16 nextTouch; // 0x124
    u16 backTouch; // 0x126
    u16 touchCount; // 0x128
    u8 unk12a[0x2de];
    u16 selectedId; // 0x408
    u8 unk40a[0x256];
    void *rows; // 0x660
    u32 selected; // 0x664
};
extern "C" {
extern AocSystemA *g_aocSystem;
s32 FUN_00471960(AocSystemA *);
s32 textureGetIndexedResource(u32);
s32 asdTMTexTableNodeIsLoaded(u32, s32);
void *dataTableGet(u32, u32);
void *dataTableGetEntries(void *);
s32 dataTableGetCount(void *);
s32 FUN_004717e0(AocSystemA *);
void FUN_00403b84(ContentListScreen *);
void FUN_00203b40(ContentListScroller *, void *, s32, s32, s32, s32);
u16 FUN_001643b4(u32, s32);
u32 FUN_0039b984(u16);
void sortOwnerRun(ContentListScreen *);
void FUN_00202400();
void FUN_004029f4(ContentListScreen *, s32, s32);

static __inline u32 contentListTexture(u8 index)
{
    if (index == 0)
        return 1;
    if (index == 1)
        return 15;
    return -1;
}

// Wait for list resources, then populate downloadable content rows and touch controls.
void contentListWaitAndInitialize(ContentListScreen *screen)
{
    if (!screen->resource || !screen->messages || !FUN_00471960(g_aocSystem) ||
        !textureGetIndexedResource(0x32))
        return;
    for (s32 i = 0; i < 2; ++i) {
        if (!asdTMTexTableNodeIsLoaded(0x32, i))
            return;
    }
    for (s32 i = 0; i < 2; ++i) {
        if (screen->neededTextures[i] && !textureGetIndexedResource(contentListTexture((u8)i)))
            return;
    }
    void *table = dataTableGet(0x45, 0);
    dataTableGetEntries(table);
    s32 count = dataTableGetCount(table);
    screen->totalCount = count + FUN_004717e0(g_aocSystem);
    FUN_00403b84(screen);
    FUN_00203b40(&screen->scroller, screen->rows, screen->visibleCount, 1, 1, 1);
    for (s32 i = 0; i < 10; ++i) {
        if (i >= screen->visibleCount)
            break;
        screen->rowTouches[i] = FUN_001643b4(0x32, i + 0x67);
        ++screen->touchCount;
    }
    screen->previousTouch = FUN_001643b4(0x32, 0x8c);
    screen->nextTouch = FUN_001643b4(0x32, 0x8d);
    screen->backTouch = FUN_001643b4(0x32, 0x8b);
    screen->touchCount += 3;
    screen->selected = FUN_0039b984(screen->selectedId);
    sortOwnerRun(screen);
    FUN_00202400();
    FUN_004029f4(screen, 2, 3);
}
}
