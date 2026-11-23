/* NON_MATCHING: 194 lines. Rewritten from retail: the recent-hint list is GameStateA::recentHintIds (retail reaches
 * both lists from g_gameState), the chosen id is reset when a candidate fails, and a full recent list rotates the
 * new id in at the front. Left: retail tests both lists with loops unrolled by two (a plain static search helper
 * per list gives that and 126 lines, but each would have one call site), keeps 0 in a saved register for the
 * entry lookup and the popup timer, and allocates the registers differently. */
#include <stdio.h>
#include "util/Random.h"
#include "gamedata/DataTable.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/NkmEnemyLookup.h"
#include "code/Code0015.h"
#include "code/Code002a_Smt4a.h"
#include "gamedata/GamePlayerData.h"
#include "map/PopupStateA.h"
#include "game/GameStateA.h"

struct PopupEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 kind;
    /* 0x08 */ s16 requireFlag;
    /* 0x0A */ s16 excludeFlag;
    /* 0x0C */ s16 chance;
    /* 0x0E */ u8 unk0E[0x12];
};

struct SaveSlotView {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 id;
};

struct HintCandidates {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u16 ids[6];
};

#define HINT_CANDIDATE_COUNT 6
#define HINT_RECENT_COUNT 6
#define HINT_KNOWN_COUNT 32
#define HINT_POPUP_STATE 7
#define HINT_KIND 10
#define HINT_LEVEL_WINDOW 6
#define HINT_TABLE 0x43

extern "C" {
SaveSlotView *saveSlotFindSelected(void);
s32 gameFlagIsSet(s32 flag);
HintCandidates *dataTable02GetRecordWithAocPackage(u32 owner);
const char *popupSelectWeightedMessage(s32 kind, u32 id);
void __aeabi_memcpy(void *destination, const void *source, u32 size);
const char *dataTable01GetRecordWithAocOverride(u32 id);

/* Picks a hint popup for one of `owner`'s candidate demons (in the player's level window, not yet registered
 * nor named by a recent hint) and remembers the demon in the recent-hint list. */
void popupTryStartDemonHint(u32 owner)
{
    messageVoiceFlagsGet();
    if (g_popupState->state != 0)
        return;
    SaveSlotView *slot = saveSlotFindSelected();
    if (slot == NULL)
        return;
    if (gameFlagIsSet(0x1A2) != 0 && randRange(99) + 1 <= 50)
        return;
    if (gameFlagIsSet(0x15) == 0)
        return;

    HintCandidates *candidates = dataTable02GetRecordWithAocPackage(owner);
    u32 chosen = 0;
    s32 level = gameGetPlayerData()->level;
    s32 lowest = level - HINT_LEVEL_WINDOW;

    for (s32 i = 0; i < HINT_CANDIDATE_COUNT; i++) {
        if (compendiumEntryIsRegistered(candidates->ids[i]) != 0)
            continue;
        chosen = candidates->ids[i];
        NkmEnemyRecordA *record = nkmEnemyFindById(chosen);
        bool rejected = (nkmBaseGetRecord(chosen)->flags & 1) == 0 || (nkmEnemyFindById((u16)chosen)->flags & 4) == 0;

        for (s32 j = 0; !rejected && j < HINT_KNOWN_COUNT; j++) {
            if (g_gameState.pendingEntryIds[j] == chosen)
                rejected = true;
        }
        for (s32 j = 0; !rejected && j < HINT_RECENT_COUNT; j++) {
            if (g_gameState.recentHintIds[j] == chosen)
                rejected = true;
        }
        if (!rejected) {
            s32 requirement = record->level & 0x7FFF;
            if (level >= requirement && requirement >= lowest)
                break;
        }
        chosen = 0;
    }

    DataTableView<PopupEntry> table(HINT_TABLE, 0);
    if (chosen == 0 || table.count <= 0)
        return;
    for (u32 i = 0; (s32)i < (s32)table.count; i++) {
        DataTableView<PopupEntry> view(HINT_TABLE, 0);
        PopupEntry *entry = view.at(i);
        if (entry->kind != HINT_KIND || entry->id != slot->id)
            continue;
        if (entry->requireFlag != 0 && gameFlagIsSet(entry->requireFlag) == 0)
            continue;
        if (entry->excludeFlag != 0 && gameFlagIsSet(entry->excludeFlag) != 0)
            continue;
        if (entry->chance < randRange(99) + 1)
            continue;

        PopupStateA *popup = g_popupState;
        popup->state = HINT_POPUP_STATE;
        popup->timer = 0;
        const char *message = popupSelectWeightedMessage(HINT_KIND, slot->id);
        popup = g_popupState;
        popup->message = message;
        popup->speakerId = slot->id;
        char format[0x48];
        __aeabi_memcpy(format, message, sizeof(format));
        sprintf(g_popupState->text, format, dataTable01GetRecordWithAocOverride((u16)chosen));

        /* Put the demon first in the recent list unless it is already there. */
        s32 index;
        for (index = 0; index < HINT_RECENT_COUNT; index++) {
            if (g_gameState.recentHintIds[index] == chosen)
                break;
            if (g_gameState.recentHintIds[index] == 0) {
                g_gameState.recentHintIds[index] = chosen;
                break;
            }
        }
        if (index == HINT_RECENT_COUNT) {
            u32 carried = chosen;

            for (s32 shift = 0; shift < HINT_RECENT_COUNT; shift++) {
                u32 next = g_gameState.recentHintIds[shift];

                g_gameState.recentHintIds[shift] = carried;
                carried = next;
            }
        }
        g_popupState->message = g_popupState->text;
        return;
    }
}

} /* extern "C" */
