/* NON_MATCHING: one register: retail computes the counter-46 difference (play total minus counter B) into r2, the build into r0.
 * Wave 90: the play time row is playLogSetPlayTime (camp/PlayLog/PlayLogSprites.h), which makes the screen's update,
 * the other site of these three statements, IDENTICAL; here it compiles to what the statements in place did
 * (4 lines). Retail keeps r0 out of the subtraction although countersGetB's result has no later use. A plain
 * `static` helper, an unsigned row, a signed total, the helper returning the total (all 4), the counter in a local
 * (8: the difference before the row address, which is the update's order), the pages as the helper's argument (30)
 * and the second page stored first (18) do not give it. */
#include "gamedata/PlayLogTable.h"
#include "camp/PlayLog/PlayLog.h"
#include "camp/PlayLog/PlayLogSprites.h"
#include "camp/Config/Config.h"
#include "gamedata/GameDataAccess.h"

extern "C" {
void sysMemClear(void *data, u32 size);
u32 gameCountersGetWord(u8 counter);
u32 gameDataGetTableValue();
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
        if (definition->counter == PLAY_LOG_COUNTER_PLAY_TIME) {
            playLogSetPlayTime(work, i);
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
