/* NON_MATCHING: screen and add-on globals are allocated to different registers. */
#include "addon/AocSystemA.h"
#include "addon/ContentListScreen.h"
#include "addon/PackageSelection.h"
#include "addon/aocMain.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "gamedata/DataTable.h"

extern "C" {
u32 FUN_00471960(AocSystemA *);
s32 aocCountTableRecords(AocSystemA *);
void gridNavigationConfigure(GridNavigation *work, s32 count, s32 visibleRows, s32 columns, s32 wrap,
                             s32 alternateKeys);
s16 ifTouchRegionAddRequested(u32, s32);
void sortOwnerRun(ContentListScreen *);
void FUN_00202400();
void FUN_004029f4(ContentListScreen *, s32, s32);

static __inline u32 contentListTexture(u8 index)
{
    switch (index) {
    case 0: return 1;
    case 1: return 15;
    default: return -1;
    }
}

enum {
    CONTENT_LIST_TEXTURES = 0x32,
    CONTENT_CATALOG_TABLE = 0x45,
    CONTENT_LIST_VISIBLE_ROWS = 10
};

/* Waits for list resources, then populates downloadable content rows and touch controls. */
void contentListWaitAndInitialize(ContentListScreen *screen)
{
    if (!screen->resource || !screen->messages || !FUN_00471960(g_aocSystem) ||
        !textureGetIndexedResource(CONTENT_LIST_TEXTURES))
        return;
    for (s32 i = 0; i < 2; ++i) {
        if (!asdTMTexTableNodeIsLoaded(CONTENT_LIST_TEXTURES, i))
            return;
    }
    for (s32 i = 0; i < 2; ++i) {
        if (screen->neededTextures[i] && !textureGetIndexedResource(contentListTexture((u8)i)))
            return;
    }

    void *table = dataTableGet(CONTENT_CATALOG_TABLE, 0);
    dataTableGetEntries(table);
    s32 totalCount = dataTableGetCount(table) + aocCountTableRecords(g_aocSystem);
    screen->totalCount = totalCount;
    contentListRebuildAvailableEntries(screen, totalCount);
    gridNavigationConfigure(&screen->scrollNavigation, screen->rowCount, screen->visibleCount, 1, 1, 1);

    for (s32 i = 0; i < CONTENT_LIST_VISIBLE_ROWS; ++i) {
        if (i >= screen->visibleCount)
            break;
        screen->rowRegions[i] = ifTouchRegionAddRequested(CONTENT_LIST_TEXTURES, i + 0x67);
        ++screen->touchCount;
    }
    screen->scrollUpRegion = ifTouchRegionAddRequested(CONTENT_LIST_TEXTURES, 0x8c);
    screen->scrollDownRegion = ifTouchRegionAddRequested(CONTENT_LIST_TEXTURES, 0x8d);
    screen->scrollThumbRegion = ifTouchRegionAddRequested(CONTENT_LIST_TEXTURES, 0x8b);
    screen->touchCount += 3;
    screen->selectedRecord = contentFindRecordById(screen->ids[0]);
    sortOwnerRun(screen);
    FUN_00202400();
    FUN_004029f4(screen, 2, 3);
}
} /* extern "C" */
