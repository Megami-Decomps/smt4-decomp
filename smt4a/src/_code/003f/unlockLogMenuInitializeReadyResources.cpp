/* NON_MATCHING: native unrolls nine neighbor writes and retains a redundant initial visible=4 store that this compiler removes. */
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

struct UnlockLogEntry {
    u16 id;
    u8 unk02[0x30];
    u16 unlockFlag;
};
struct UnlockLogScript {
    u8 unk000[0x108];
    u32 state;
};
struct UnlockLogWork {
    u8 unk00[0x20];
    UnlockLogEntry *entries;
    u32 unk24;
    void *resource;
    u32 screen;
    void *flow;
    UnlockLogScript *script;
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
    UnlockLogEntry *current;
    u16 unk5e4;
    u16 filtered[100];
    u16 unk6ae;
    s32 count;
    s32 neighbors[9];
};

extern "C" {
UnlockLogScript *FUN_00275bc8(void *flow, u32 screen);
void FUN_003f5bd8(UnlockLogWork *work, s32 count);
void FUN_00203b40(ScrollSelection *list, s32 count, s32 visible, s32 columns, s32 enabled, s32 colors);
s32 FUN_001643b4(u32 group, u32 index);
void dialogEnterState(UnlockLogWork *work, u32 state, u32 argument);

void unlockLogMenuInitializeReadyResources(UnlockLogWork *work)
{
    if (work->resource == NULL || work->screen == 0 || work->flow == NULL ||
        textureGetIndexedResource(0x31) == NULL)
        return;
    for (s32 index = 0; index < 2; ++index) {
        if (!asdTMTexTableNodeIsLoaded(0x31, index))
            return;
    }
    void *table = dataTableGet(0x44, 0);
    work->entries = static_cast<UnlockLogEntry *>(dataTableGetEntries(table));
    work->entryCount = dataTableGetCount(table);
    work->script = FUN_00275bc8(work->flow, work->screen);
    work->script->state = 2;
    work->unk3c = 0;
    FUN_003f5bd8(work, (s32)work->entryCount);
    for (s32 index = 0; index < 9; ++index)
        work->neighbors[index] = work->selected + index - 5;
    work->current = &work->entries[work->filtered[0]];
    work->visible = work->count < 4 ? work->count : 4;
    FUN_00203b40(&work->list, work->count, work->visible, 1, 1, 1);
    for (s32 index = 0; index < 4 && index < work->visible; ++index) {
        work->rowRegions[index] = FUN_001643b4(0x31, index + 0x88);
        ++work->regionCount;
    }
    work->buttons[0] = FUN_001643b4(0x31, 0xa9);
    work->buttons[1] = FUN_001643b4(0x31, 0xaa);
    work->buttons[2] = FUN_001643b4(0x31, 0xab);
    work->regionCount += 3;
    dialogEnterState(work, 2, 3);
}
}
