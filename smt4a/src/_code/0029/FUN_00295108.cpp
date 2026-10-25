/* NON_MATCHING: story popup trigger (milestone flags, then a weighted scan of the popup table); written from the decompilation, flag-chain branch layout not compared with retail */
#include "gamedata/DataTable.h"
#include "gamedata/GameFlags.h"

struct PopupEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 kind;
    /* 0x08 */ s16 requireFlag;     /* entry needs this flag set (0: none) */
    /* 0x0A */ s16 excludeFlag;     /* entry is skipped once this flag is set (0: none) */
    /* 0x0C */ s16 chance;          /* percent */
    /* 0x0E */ u8 unk0E[0x12];
};

struct PopupState {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ s32 kindId;
    /* 0x18 */ s32 entryId;
};

#define POPUP_STATE_STORY 0x12
#define POPUP_KIND_STORY 0x13
#define POPUP_TABLE 0x43
#define POPUP_ENTRY_SPECIAL 0xAD
#define POPUP_COOLDOWN 10

extern "C" {
extern PopupState *g_popupState;
extern s32 g_gameState;
extern s32 DAT_005f1994;

s32 gameFlagIsSet(s32 flag);

s32 randRange(u32 maximum);
void popupQueueInsertUnique(s32 state);
s32 FUN_002d8b58(s32 kind);

/* Picks a story popup. `immediate` skips the random gates. */
void FUN_00295108(s32 immediate)
{
    bool triggered = false;
    if (g_popupState->state != 0) {
        if (immediate != 0)
            return;
        if (g_popupState->state == POPUP_STATE_STORY)
            return;
        if (randRange(99) + 1 >= 11)
            return;
        popupQueueInsertUnique(POPUP_STATE_STORY);
        return;
    }

    /* The milestone that is reached first selects the flag recording it. */
    s32 milestoneFlag = 0;
    if (gameFlagIsSet(0x8D) != 0 && gameFlagIsSet(0x8E) == 0) {
        if (gameFlagIsSet(0xC2) != 0)
            milestoneFlag = 0x535;
    } else if (gameFlagIsSet(0x90) != 0 && gameFlagIsSet(0x92) == 0) {
        if (gameFlagIsSet(0xC2) != 0)
            milestoneFlag = 0x540;
    } else if (gameFlagIsSet(0x95) != 0 && gameFlagIsSet(0x98) == 0) {
        milestoneFlag = 0x541;
    } else if (gameFlagIsSet(0xD9) != 0 && gameFlagIsSet(0xED) == 0) {
        milestoneFlag = 0x542;
    }

    if (milestoneFlag != 0 && gameFlagIsSet(milestoneFlag) == 0) {
        gameFlagSetValue(milestoneFlag, 1, 1);
        triggered = true;
        DAT_005f1994 = 0;
    } else if (DAT_005f1994 != 0) {
        DAT_005f1994++;
        if (DAT_005f1994 >= POPUP_COOLDOWN)
            DAT_005f1994 = 0;
    }

    DataTableView<PopupEntry> table(POPUP_TABLE, 0);
    for (u32 i = 0; (s32)i < (s32)table.count; i++) {
        DataTableView<PopupEntry> view(POPUP_TABLE, 0);
        PopupEntry *entry = view.at(i);
        if (entry->kind == POPUP_KIND_STORY
            && (entry->requireFlag == 0 || gameFlagIsSet(entry->requireFlag) != 0)
            && (entry->excludeFlag == 0 || gameFlagIsSet(entry->excludeFlag) == 0)
            && (entry->id != POPUP_ENTRY_SPECIAL || (g_gameState >= 0x1C && g_gameState <= 0x20))) {
            if (immediate == 0 && !triggered && randRange(99) + 1 <= entry->chance)
                return;
            if (DAT_005f1994 == 0) {
                DAT_005f1994 = 1;
                g_popupState->entryId = entry->id;
                g_popupState->kindId = FUN_002d8b58(POPUP_KIND_STORY);
                g_popupState->state = POPUP_STATE_STORY;
                g_popupState->unk04 = 0;
                return;
            }
        }
    }
}

} /* extern "C" */
