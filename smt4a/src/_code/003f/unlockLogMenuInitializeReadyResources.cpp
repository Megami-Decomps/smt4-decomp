/* NON_MATCHING: native unrolls nine neighbor writes and retains a redundant initial visible=4 store that this compiler removes. */
#include "gamedata/PartnerTopicTable.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"


struct UnlockLogWork {
    u8 unk00[0x20];
    PartnerTopicRecord *entries;
    u32 unk24;
    void *resource;
    void *screen;
    void *flow;
    ScriptProcess *script;
    u32 entryCount;
    u32 unk3c;
    u8 unread;
    u8 unk41[7];
    s32 selected;
    s32 visible;
    u8 unk50[8];
    ScrollSelection list;
    u8 unkbc[0x70];
    u16 rowRegions[4];
    u8 unk134[0x0e];
    u16 buttons[3];
    s16 regionCount;
    u8 unk14a[0x496];
    PartnerTopicRecord *current;
    u16 unk5e4;
    u16 filtered[100];
    u16 unk6ae;
    s32 count;
    s32 neighbors[9];
};

extern "C" {
void FUN_003f5bd8(UnlockLogWork *work, s32 count);
void gridNavigationConfigure(ScrollSelection *list, s32 count, s32 visible, s32 columns, s32 enabled, s32 colors);
s32 ifTouchRegionAddRequested(u32 group, u32 index);
void dialogEnterState(UnlockLogWork *work, u32 state, u32 argument);

void unlockLogMenuInitializeReadyResources(UnlockLogWork *work)
{
    if (work->resource == NULL || work->screen == NULL || work->flow == NULL ||
        textureGetIndexedResource(0x31) == NULL)
        return;
    for (s32 index = 0; index < 2; ++index) {
        if (!asdTMTexTableNodeIsLoaded(0x31, index))
            return;
    }
    void *table = dataTableGet(0x44, 0);
    work->entries = partnerTopicRecords(table);
    work->entryCount = dataTableGetCount(table);
    work->script = scrScriptProcessCreate(work->flow, work->screen);
    scriptProcessSetMode(work->script, 2);
    work->unk3c = 0;
    FUN_003f5bd8(work, (s32)work->entryCount);
    for (s32 index = 0; index < 9; ++index)
        work->neighbors[index] = work->selected + index - 5;
    work->current = &work->entries[work->filtered[0]];
    work->visible = work->count < 4 ? work->count : 4;
    gridNavigationConfigure(&work->list, work->count, work->visible, 1, 1, 1);
    for (s32 index = 0; index < 4 && index < work->visible; ++index) {
        work->rowRegions[index] = ifTouchRegionAddRequested(0x31, index + 0x88);
        ++work->regionCount;
    }
    work->buttons[0] = ifTouchRegionAddRequested(0x31, 0xa9);
    work->buttons[1] = ifTouchRegionAddRequested(0x31, 0xaa);
    work->buttons[2] = ifTouchRegionAddRequested(0x31, 0xab);
    work->regionCount += 3;
    dialogEnterState(work, 2, 3);
}
}
