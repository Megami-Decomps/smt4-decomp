/* NON_MATCHING: deferred file-destination evaluation restores retail address timing; battle/record saved registers and immediate-ready null-result helper shape still differ. */
#include "battle/BattleArrangementLoad.h"
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
s32 textFormatBuffer(char *destination, const char *format, ...);
void aocQueueType38(AocSystemA *system, u16 id, void **destination, const char *path);
void FUN_003e12a8(BattleArrangementLoadState *load, BtlMainStateA *battle);
void FUN_003e3188(BattleArrangementLoadState *load, BtlMainStateA *battle);

// Load the selected combatant's arrangement from base or add-on content, then advance loading.
void FUN_003e03b0(BattleArrangementLoadState *load, BtlMainStateA *battle)
{
    // This pointer lies inside padding beginning at an unaligned offset in BtlMainStateA.
    struct ArrangementFileView { u8 prefix[0x1EC4]; void *file; };
    s32 index = btlFindSelectionIndexByOrdinal(battle, 1);
    if (index >= 0) {
        battle->stateFlags64.bits |= g_btlEncount.queuedStateMask;
        NkmEnemyRecordA *record = nkmEnemyFindById(battle->entries[index].id);
        char path[128];
        sysMemClear(path, sizeof(path));
        textFormatBuffer(path, "battle/arngmt/%02d_%02d.earg", record->bustUp, record->bustUpVariation);
        if (aocReadyAndAccepts(g_aocSystem, record->id))
            aocQueueType38(g_aocSystem, record->id, &reinterpret_cast<ArrangementFileView *>(battle)->file, path);
        else
            asdLoadFileAsyncSimple(path, reinterpret_cast<u32 *>(&reinterpret_cast<ArrangementFileView *>(battle)->file), 0);
        load->state = 9;
        load->count = 0;
        load->frame = 0;
        if (reinterpret_cast<ArrangementFileView *>(battle)->file != NULL) {
            load->state = 10;
            FUN_003e12a8(load, battle);
        }
        return;
    }
    load->count = 0;
    load->state = 17;
    load->frame = 0;
    FUN_003e3188(load, battle);
}
}
