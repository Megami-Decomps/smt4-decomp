#include <stdio.h>
#include "battle/btlMain.h"
#include "battle/btlEncount.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/NkmEnemyRecord.h"
#include "addon/aocMain.h"
#include "addon/AocSystemA.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
extern BtlEncounterGlobalsA g_btlEncount;
s32 btlFindSelectionIndexByOrdinal(BtlMainStateA *battle, s32 kind);
void sysMemClear(void *destination, u32 size);
void aocQueueType38(AocSystemA *system, u16 id, void **destination, const char *path);
s32 entryCollectNewIdentifiers(BtlStep *step, BtlMainStateA *battle);
s32 FUN_003e3188(BtlStep *step, BtlMainStateA *battle);

/* State 9: waits for the arrangement file, then collects its entries (same inline body as battleEncounterTaskUpdate case 9). */
static __inline s32 encounterWaitArrangementFile(BtlStep *step, BtlMainStateA *state)
{
    if (state->arrangementFile == NULL) {
        return 0;
    }
    step->counters.unk0C = step->counters.unk10 = 0;
    step->state = 10;
    return entryCollectNewIdentifiers(step, state);
}

/* Loads the selected combatant's arrangement from base or add-on content, then advances loading. */
s32 FUN_003e03b0(BtlStep *step, BtlMainStateA *battle)
{
    s32 index = btlFindSelectionIndexByOrdinal(battle, 1);
    if (index >= 0) {
        battle->stateFlags64.bits |= g_btlEncount.queuedStateMask;
        NkmEnemyRecordA *record = nkmEnemyFindById(battle->entries[index].data.id);
        char path[128];
        sysMemClear(path, sizeof(path));
        sprintf(path, "battle/arngmt/%02d_%02d.earg", record->bustUp, record->bustUpVariation);
        if (aocReadyAndAccepts(g_aocSystem, record->id)) {
            aocQueueType38(g_aocSystem, record->id, &battle->arrangementFile, path);
        } else {
            asdLoadFileAsyncSimple(path, (u32 *)&battle->arrangementFile, 0);
        }
        step->state = 9;
        step->counters.unk10 = 0;
        step->counters.unk0C = 0;
        return encounterWaitArrangementFile(step, battle);
    }
    btlStepEnter(step, 17);
    return FUN_003e3188(step, battle);
}

} /* extern "C" */
