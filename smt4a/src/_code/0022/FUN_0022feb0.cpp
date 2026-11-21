/* NON_MATCHING: one register: retail computes the counter-46 difference (play total minus counter B) into r2, the build into r0. */
#include "gamedata/PlayLogTable.h"
#include "camp/Config/Config.h"
#include "gamedata/GameDataAccess.h"

struct CounterSelectionList {
    /* 0x000 */ u32 count;
    /* 0x004 */ u32 values[50];
    /* 0x0CC */ u16 indices[50];
};
struct CounterSelectionWork {
    /* 0x000 */ u8 unk000[0x48c];
    /* 0x48C */ CounterSelectionList first;
    /* 0x5BC */ CounterSelectionList second;
};
extern "C" {
void sysMemClear(void *data, u32 size);
u32 gameCountersGetWord(u8 counter);
u32 gameDataGetTableValue();
}

/* Play log row `index`, or NULL past the end: dataTableGetEntry37's body, which retail inlines here. */
static __inline PlayLogRecord *playLogRowAt(u32 index)
{
    void *table;
    PlayLogRecord *entries;
    u32 count;

    table = dataTableGet(0x37, 0);
    entries = static_cast<PlayLogRecord *>(dataTableGetEntries(table));
    count = dataTableGetCount(table);
    if (index >= count) {
        entries = NULL;
    } else {
        entries = entries + index;
    }
    return entries;
}

/* Rebuild nonzero-counter lists, applying the two special counter interpretations. */
extern "C" void FUN_0022feb0(CounterSelectionWork *work)
{
    if (work == NULL) {
        return;
    }
    PlayLogRecord *records;
    s32 count = playLogRecords(&records);
    sysMemClear(&work->first, sizeof(work->first) + sizeof(work->second));
    for (s32 i = 0; i < count; ++i) {
        const PlayLogRecord *definition = playLogRowAt(i);
        if (definition == NULL || definition->counter < 0) {
            continue;
        }
        if (definition->counter == 46) {
            u32 total = FUN_002e50d4();
            work->first.values[i] = total - countersGetB(46);
            work->second.values[i] = total;
        } else if (definition->counter == 44) {
            work->first.values[i] = gameDataGetTableValue();
            work->second.values[i] = gameDataGetTableValue();
        } else {
            work->first.values[i] = gameCountersGetWord(static_cast<u8>(definition->counter));
            work->second.values[i] = countersGetB(static_cast<u8>(definition->counter));
        }
        if (definition->counter == 23 || definition->counter == 32) {
            continue;
        }
        if (work->first.values[i] != 0) {
            work->first.indices[work->first.count] = static_cast<u16>(i);
            work->first.count++;
        }
        if (work->second.values[i] != 0) {
            work->second.indices[work->second.count] = static_cast<u16>(i);
            work->second.count++;
        }
    }
}
