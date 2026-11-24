/* NON_MATCHING: 245 lines (181 by shape); same calls, branches, copies and case order as retail. What differs:
 * - the frame: retail's is 144 bytes with the three kept-flag arrays first (sp+4, sp+60, sp+80) and the spilled
 *   flag tests above them; the build's is 152 bytes with the arrays between the spills, so every sp offset of
 *   the spilled tests and of the hoisted block addresses differs;
 * - the first loop's constants: retail keeps the three skipped ids in r7-r9 and the limit in sl, the build the
 *   limit in r7; the test of flag 0x557 is kept in sl (fp here);
 * - the play time's load (`[cleared + 128000, #88]` in retail, the full address first here) and the scratch
 *   registers of the selection state's copy. */
#include <string.h>
#include "gamedata/GameSaveData.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "gamedata/GameFlags.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/FlagBitTests.h"
#include "code/Code0029.h"
#include "addon/AocSystem.h"

struct ItemBoxCounts;

/* What a cleared game's new game carries over when its option is chosen (clearSave's options). */
enum {
    CLEAR_SAVE_KEEP_PLAYER,
    CLEAR_SAVE_KEEP_ITEMS,
    CLEAR_SAVE_KEEP_COMPENDIUM,
    CLEAR_SAVE_KEEP_ITEM_FLAGS,     /* read by the item merge, not an option of its own */
    CLEAR_SAVE_KEEP_MONEY,
    CLEAR_SAVE_KEEP_POINTS,
    CLEAR_SAVE_KEEP_UNITS,
    CLEAR_SAVE_KEEP_COMPENDIUM_FREE,
    CLEAR_SAVE_OPTION_COUNT
};

extern "C" {
u32 gameDataGetWorkBlock(void);
void gameCopyPersistentSave(void);
void playerInitNewGame(s32 mode);
void mapSceneResetState(s32 mode);
void flagBitsMergeBlock(u8 *destination, const u8 *source);
void FUN_00394fd8(ItemBoxCounts *dst, const ItemBoxCounts *src, s32 keepFlags);
void gameSaveAddPointsClamped(s32 amount);
void objectFlagSetBit(StatBlock *unit, u32 bit);
void unitRecalculateEffectiveStats(StatBlock *unit);
void saveGetMapFlag(u32 mask, s32 enabled);
u32 appTryPurchase(u32 id, s32 ignoreRequirements, s32 checkOnly);
void playerRecalcStatsFromEquipment(PlayerDataIV *player);
void playerSyncPair2AOnce(void);

/* Start a new game from a cleared one: remember the flags that survive, reset the save to a new game, then
 * copy back from the cleared game (the work block) what always carries over and what the options chose. */
void clearSaveStartNewGame(u8 *options)
{
    u8 flagsA[54] = { 0 };
    u32 id;
    s32 index;
    for (id = 0x426, index = 0; id < 0x45C; ++id, ++index) {
        if (id == 0x452 || id == 0x453 || id == 0x454) {
            continue;
        }
        if (gameFlagIsSet(id)) {
            flagsA[index] = 1;
        }
    }
    u8 flagsB[14] = { 0 };
    for (id = 0x467, index = 0; id < 0x475; ++id, ++index) {
        if (id == 0x46F) {
            continue;
        }
        if (gameFlagIsSet(id)) {
            flagsB[index] = 1;
        }
    }
    u8 purchases[8] = { 0 };
    for (id = 0x77, index = 0; id < 0x7F; ++id, ++index) {
        if (flagBitIsSet(id)) {
            purchases[index] = 1;
        }
    }
    s32 flag556 = gameFlagIsSet(0x556);
    s32 flag557 = gameFlagIsSet(0x557);
    s32 flag555 = gameFlagIsSet(0x555);
    s32 flag674 = gameFlagIsSet(0x674);
    s32 flag675 = gameFlagIsSet(0x675);
    s32 flag676 = gameFlagIsSet(0x676);
    s32 flag677 = gameFlagIsSet(0x677);
    s32 flag678 = gameFlagIsSet(0x678);
    s32 flag679 = gameFlagIsSet(0x679);
    s32 flag67A = gameFlagIsSet(0x67A);
    s32 flag67B = gameFlagIsSet(0x67B);
    s32 flag464 = gameFlagIsSet(0x464);
    s32 flag551 = gameFlagIsSet(0x551);

    gameCopyPersistentSave();
    playerInitNewGame(0);
    mapSceneResetState(0);

    GameSaveBody *save = (GameSaveBody *)gameDataBlocksGetSaveData();
    GameSaveBody *cleared = (GameSaveBody *)gameDataGetWorkBlock();
    save->playSeconds = cleared->playSeconds;
    memcpy(save->counters, cleared->counters, 0x400);
    save->flagWordsA[0] = cleared->flagWordsA[0];
    save->flagWordsA[1] = cleared->flagWordsA[1];
    save->extendedFlagWords.words = cleared->extendedFlagWords.words;
    for (index = 0; index < 54; ++index) {
        if (flagsA[index]) {
            gameFlagSetValue(0x426 + index, 1, 1);
        }
    }
    for (index = 0; index < 14; ++index) {
        if (flagsB[index]) {
            gameFlagSetValue(0x467 + index, 1, 1);
        }
    }
    flagBitsMergeBlock(save->flagBlock, cleared->flagBlock);
    if (flag556) {
        gameFlagSetValue(0x556, 1, 1);
    }
    if (flag557) {
        gameFlagSetValue(0x557, 1, 1);
    }
    if (flag555) {
        gameFlagSetValue(0x555, 1, 1);
    }
    if (flag674) {
        gameFlagSetValue(0x674, 1, 1);
    }
    if (flag675) {
        gameFlagSetValue(0x675, 1, 1);
    }
    if (flag676) {
        gameFlagSetValue(0x676, 1, 1);
    }
    if (flag677) {
        gameFlagSetValue(0x677, 1, 1);
    }
    if (flag678) {
        gameFlagSetValue(0x678, 1, 1);
    }
    if (flag679) {
        gameFlagSetValue(0x679, 1, 1);
    }
    if (flag67A) {
        gameFlagSetValue(0x67A, 1, 1);
    }
    if (flag67B) {
        gameFlagSetValue(0x67B, 1, 1);
    }
    if (flag464) {
        gameFlagSetValue(0x464, 1, 1);
    }
    save->config.selection.state = cleared->config.selection.state;
    memcpy(save->summary.records, cleared->summary.records, sizeof(save->summary.records));
    memcpy(save->slots.player.name, cleared->slots.player.name, sizeof(save->slots.player.name));

    bool playerKept = false;
    for (s32 option = 0; option < CLEAR_SAVE_OPTION_COUNT; ++option) {
        if (!options[option]) {
            continue;
        }
        switch (option) {
        case CLEAR_SAVE_KEEP_PLAYER:
            save->slots.player.level = cleared->slots.player.level;
            save->slots.player.baseStats = cleared->slots.player.baseStats;
            save->slots.player.experience = cleared->slots.player.experience;
            save->slots.player.equipped = cleared->slots.player.equipped;
            memcpy(save->slots.player.skills, cleared->slots.player.skills, sizeof(save->slots.player.skills));
            memcpy(save->slots.player.skillRanks, cleared->slots.player.skillRanks, sizeof(save->slots.player.skillRanks));
            playerRecalcStatsFromEquipment(NULL);
            playerSyncPair2AOnce();
            playerKept = true;
            break;
        case CLEAR_SAVE_KEEP_ITEMS:
            FUN_00394fd8((ItemBoxCounts *)save->unlockFlags, (const ItemBoxCounts *)cleared->unlockFlags,
                         (s8)options[CLEAR_SAVE_KEEP_ITEM_FLAGS]);
            break;
        case CLEAR_SAVE_KEEP_COMPENDIUM:
            memcpy(&save->items[1], &cleared->items[1], 0x500 * sizeof(GameSavedItem));
            break;
        case CLEAR_SAVE_KEEP_COMPENDIUM_FREE:
            memcpy(&save->items[1], &cleared->items[1], 0x500 * sizeof(GameSavedItem));
            for (s32 item = 0; item < 0x500; ++item) {
                save->items[item + 1].value = 0;
            }
            break;
        case CLEAR_SAVE_KEEP_MONEY:
            save->slots.money = cleared->slots.money;
            break;
        case CLEAR_SAVE_KEEP_POINTS:
            gameSaveAddPointsClamped(cleared->pointsTotal);
            break;
        case CLEAR_SAVE_KEEP_UNITS:
            for (s32 unit = 0; unit < 24; ++unit) {
                StatBlock *source = &cleared->slots.units[unit];
                if (flagWordTestBit(source, 2)) {
                    dispatchIfFound(0, source->id, 0);
                    StatBlock *record = gameGetUnitRecord(0);
                    *record = *source;
                    record->growth.slot = 0;
                    record->growth.unk49 = 0;
                    record->growth.unk4B = 0;
                    record->growth.probabilityTier = 0;
                    record->ailments = 0;
                    objectFlagSetBit(record, 2);
                    unitRecalculateEffectiveStats(record);
                    saveGetMapFlag(0x20, 1);
                    if (flag551) {
                        gameFlagSetValue(0x551, 1, 1);
                    }
                }
            }
            break;
        }
    }
    for (id = 0; id < 8; ++id) {
        if (purchases[id]) {
            appTryPurchase(0x77 + id, 1, 0);
        }
    }
    gameFlagSetValue(0x565, 1, 1);
    if (playerKept) {
        gameFlagSetValue(0x466, 1, 1);
        gameFlagSetValue(0x410, 1, 1);
    }
    aocActivateFileGroupFlags(g_aocSystem);
}
}

