/* NON_MATCHING: story popup trigger; the milestone chain, cooldown and table scan follow retail. Retail keeps the 0x535 copy of the cross-jumped flag-set block (this build keeps the 0x541 one), tests `immediate` and `triggered` separately in the loop where this build hoists their OR, spills the section pointer to [sp] instead of fp, and allocates r7/r8 where this build uses r5/r7. */
#include "gamedata/DataTable.h"
#include "game/GameStateA.h"
#include "gamedata/GameFlags.h"
#include "map/PopupStateA.h"
#include "util/Random.h"

struct PopupEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 kind;
    /* 0x08 */ s16 requireFlag;     /* entry needs this flag set (0: none) */
    /* 0x0A */ s16 excludeFlag;     /* entry is skipped once this flag is set (0: none) */
    /* 0x0C */ s16 chance;          /* percent */
    /* 0x0E */ u8 unk0E[0x12];
};


#define POPUP_STATE_STORY 0x12
#define POPUP_KIND_STORY 0x13
#define POPUP_TABLE 0x43
#define POPUP_ENTRY_SPECIAL 0xAD
#define POPUP_COOLDOWN 10

extern "C" {
s32 gameFlagIsSet(s32 flag);

void popupQueueInsertUnique(s32 state);
const char *popupSelectWeightedMessage(s32 kind);

/* Picks a story popup. `immediate` skips the random gates. */
void popupTryStartStory(s32 immediate)
{
    bool triggered = false;
    if (g_popupState->state != 0) {
        if (immediate != 0)
            return;
        if (g_popupState->state == POPUP_STATE_STORY)
            return;
        if ((s32)(randRange(99) + 1) <= 10)
            popupQueueInsertUnique(POPUP_STATE_STORY);
        return;
    }

    /* The first story milestone in progress records its popup flag once. */
    if (gameFlagIsSet(0x8D) != 0 && gameFlagIsSet(0x8E) == 0) {
        if (gameFlagIsSet(0xC2) != 0 && gameFlagIsSet(0x535) == 0) {
            gameFlagSetValue(0x535, 1, 1);
            triggered = true;
            g_gameState.popupCooldown = 0;
        }
    } else if (gameFlagIsSet(0x90) != 0 && gameFlagIsSet(0x92) == 0) {
        if (gameFlagIsSet(0xC2) != 0 && gameFlagIsSet(0x540) == 0) {
            gameFlagSetValue(0x540, 1, 1);
            triggered = true;
            g_gameState.popupCooldown = 0;
        }
    } else if (gameFlagIsSet(0x95) != 0 && gameFlagIsSet(0x98) == 0) {
        if (gameFlagIsSet(0x541) == 0) {
            gameFlagSetValue(0x541, 1, 1);
            triggered = true;
            g_gameState.popupCooldown = 0;
        }
    } else if (gameFlagIsSet(0xD9) != 0 && gameFlagIsSet(0xED) == 0) {
        if (gameFlagIsSet(0x542) == 0) {
            gameFlagSetValue(0x542, 1, 1);
            triggered = true;
            g_gameState.popupCooldown = 0;
        }
    }

    if (!triggered && g_gameState.popupCooldown != 0) {
        g_gameState.popupCooldown++;
        if (g_gameState.popupCooldown >= POPUP_COOLDOWN)
            g_gameState.popupCooldown = 0;
    }

    DataTableView<PopupEntry> table(POPUP_TABLE, 0);
    for (u32 i = 0; (s32)i < (s32)table.count; i++) {
        DataTableView<PopupEntry> view(POPUP_TABLE, 0);
        PopupEntry *entry = view.at(i);
        if (entry->kind == POPUP_KIND_STORY
            && (entry->requireFlag == 0 || gameFlagIsSet(entry->requireFlag) != 0)
            && (entry->excludeFlag == 0 || gameFlagIsSet(entry->excludeFlag) == 0)
            && (entry->id != POPUP_ENTRY_SPECIAL || g_gameState.mapId == 0x1C || g_gameState.mapId == 0x1D
                || g_gameState.mapId == 0x1E || g_gameState.mapId == 0x1F || g_gameState.mapId == 0x20)) {
            if (immediate == 0 && !triggered && (s32)(randRange(99) + 1) <= entry->chance)
                return;
            if (g_gameState.popupCooldown == 0) {
                g_gameState.popupCooldown = 1;
                g_popupState->speakerId = entry->id;
                g_popupState->message = popupSelectWeightedMessage(POPUP_KIND_STORY);
                g_popupState->state = POPUP_STATE_STORY;
                g_popupState->timer = 0;
                return;
            }
        }
    }
}

} /* extern "C" */
