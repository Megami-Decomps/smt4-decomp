/* NON_MATCHING: Control flow now matches; list/index/entry/global saved registers, kind loads and one secondary-list index register differ. */
#include "ui/TransientSpriteList.h"
#include "map/mapDepart.h"
#include "gamedata/FlagBitTests.h"

extern "C" {
extern GameState g_gameState;
s32 saveTestFlagRow(u8 row);
s32 gameFlagIsSet(s32 flag);
}

static __inline bool transientSpriteIsUnlocked(const TransientSpriteEntry *entry, bool allowAlternate)
{
    if (entry->condition.kind == 0xFF) {
        return mapBlockBitTest(entry->condition.id) != 0;
    }
    if (allowAlternate && entry->condition.kind == 0xFE) {
        return FUN_002fb094(entry->condition.id) != 0;
    }
    return saveTestFlagRow(entry->condition.saveFlagRow) != 0 &&
        (entry->condition.requiredFlag == 0 || gameFlagIsSet(entry->condition.requiredFlag) != 0) &&
        (entry->condition.excludedFlag == 0 || gameFlagIsSet(entry->condition.excludedFlag) == 0);
}

extern "C" void FUN_0039edf0(TransientSpriteList *list)
{
    /* The smaller secondary list and dirty byte follow the shared primary-list prefix. */
    struct SecondaryListView {
        u8 unk0000[0x5A8C];
        u8 dirty;
        u8 unk5A8D[3];
        TransientSpriteEntry entries[24];
        s32 count;
    };
    typedef char SecondaryListOffsetsCheck[offsetof(SecondaryListView, entries) == 0x5A90 &&
        offsetof(SecondaryListView, count) == 0x61B0 ? 1 : -1];
    for (s32 index = 0; index < list->count; ++index) {
        TransientSpriteEntry *entry = &list->entries[index];
        if (entry->condition.map != list->selection.map ||
            (g_gameState.spriteVisibility.forceVisible == 0 && !transientSpriteIsUnlocked(entry, true))) {
            entry->visible = 0;
        } else {
            entry->visible = 1;
        }
    }
    SecondaryListView *secondary = (SecondaryListView *)list;
    for (s32 index = 0; index < secondary->count; ++index) {
        TransientSpriteEntry *entry = &secondary->entries[index];
        if (entry->condition.map != list->selection.map ||
            (g_gameState.spriteVisibility.forceVisible == 0 && !transientSpriteIsUnlocked(entry, false))) {
            entry->visible = 0;
        } else {
            entry->visible = 1;
        }
    }
    secondary->dirty = 0;
}
