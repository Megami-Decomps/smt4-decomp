/* NON_MATCHING: one register: retail computes the counter-46 difference (play total minus counter B) into r2, the build into r0. */
#include "gamedata/PlayLogTable.h"
#include "camp/PlayLog/PlayLog.h"
#include "camp/Config/Config.h"
#include "gamedata/GameDataAccess.h"

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
extern "C" void playLogBuildPages(PlayLogWorkA *work)
{
    if (work == NULL) {
        return;
    }
    PlayLogRecord *records;
    s32 count = playLogRecords(&records);
    sysMemClear(work->pages, sizeof(work->pages));
    for (s32 i = 0; i < count; ++i) {
        const PlayLogRecord *definition = playLogRowAt(i);
        if (definition == NULL || definition->counter < 0) {
            continue;
        }
        if (definition->counter == 46) {
            u32 total = saveBlockGetPlaySeconds();
            work->pages[0].values[i] = total - countersGetB(46);
            work->pages[1].values[i] = total;
        } else if (definition->counter == 44) {
            work->pages[0].values[i] = gameDataGetTableValue();
            work->pages[1].values[i] = gameDataGetTableValue();
        } else {
            work->pages[0].values[i] = gameCountersGetWord(static_cast<u8>(definition->counter));
            work->pages[1].values[i] = countersGetB(static_cast<u8>(definition->counter));
        }
        if (definition->counter == 23 || definition->counter == 32) {
            continue;
        }
        if (work->pages[0].values[i] != 0) {
            work->pages[0].ids[work->pages[0].count] = static_cast<u16>(i);
            work->pages[0].count++;
        }
        if (work->pages[1].values[i] != 0) {
            work->pages[1].ids[work->pages[1].count] = static_cast<u16>(i);
            work->pages[1].count++;
        }
    }
}
