#ifndef GAMEDATA_SAVED_UNIT_SELECTION_H
#define GAMEDATA_SAVED_UNIT_SELECTION_H
#include "shard/Shard0032.h"
#include "gamedata/SavedUnitChoice.h"
struct SavedUnitSelectionResource;
struct SavedUnitSelectionResourceVtable {
    void *unk00;
    void (*destroy)(SavedUnitSelectionResource *resource);
};
struct SavedUnitSelectionResource {
    union {
        u32 unk00;
        SavedUnitSelectionResourceVtable *vtable;
    };
    u32 handle;
};
struct ScriptProcess;
struct SavedUnitSelection {
    union {
        u8 unk000[0x54];
        /* The selection screen's state track. */
        struct SavedUnitSelectionEditor {
            u8 prefix[7];
            /* 0x007 */ u8 state;
            /* 0x008 */ u32 frame;
            /* 0x00C */ u8 pending;
            /* 0x00D */ u8 previous;
            /* 0x00E */ u8 readyToFinish;
            /* 0x00F */ u8 finishing;
            /* 0x010 */ u8 started;
            /* 0x011 */ u8 canApply;
            /* 0x012 */ u8 busy;
            /* 0x013 */ u8 waitScript;
            /* 0x014 */ u8 unk014;
            /* 0x015 */ u8 slotHeadersReady;
            /* 0x016 */ u8 padding16[6];
            /* 0x01C */ void *tableSnapshot;
            /* 0x020 */ void *settingsSnapshot;
            /* 0x024 */ void *saveSnapshot;
            /* 0x028 */ UnitSevenStats stats;
            /* 0x036 */ u8 padding36[2];
            /* 0x038 */ void *scriptFile;
            /* 0x03C */ void *scriptOwner;
            /* 0x040 */ ScriptProcess *script;
        } editor;
    };
    /* 0x054 */ UnitRecord *unit;
    /* 0x058 */ SavedUnitSelectionResource *resource;
    union {
        u8 unk05C[8];
        /* 0x05C */ u8 active;
    };
    /* 0x064 */ s32 current;
    /* 0x068 */ u8 changed;
    u8 unk069[3];
    /* 0x06C */ SavedUnitChoice choices[5];
    /* 0x2EC */ u8 changes[5];
    /* 0x2F1 */ u8 unk2F1[3];
    /* 0x2F4 */ s32 slotIndex;
    /* 0x2F8 */ s32 selected;
    /* 0x2FC */ u8 unk2FC[0x154];
    /* 0x450 */ s32 operationFrames;
};
typedef char SavedUnitSelectionOffsets[
    offsetof(SavedUnitSelection, choices) == 0x6C &&
    offsetof(SavedUnitSelection, changes) == 0x2EC &&
    offsetof(SavedUnitSelection, slotIndex) == 0x2F4 &&
    offsetof(SavedUnitSelection, selected) == 0x2F8 ? 1 : -1];
typedef char SavedUnitSelectionEditorOffsetsCheck[
    offsetof(SavedUnitSelection, editor.state) == 7 &&
    offsetof(SavedUnitSelection, editor.frame) == 8 &&
    offsetof(SavedUnitSelection, editor.canApply) == 0x11 &&
    offsetof(SavedUnitSelection, editor.waitScript) == 0x13 &&
    offsetof(SavedUnitSelection, editor.slotHeadersReady) == 0x15 &&
    offsetof(SavedUnitSelection, editor.tableSnapshot) == 0x1C &&
    offsetof(SavedUnitSelection, editor.saveSnapshot) == 0x24 &&
    offsetof(SavedUnitSelection, editor.stats) == 0x28 &&
    offsetof(SavedUnitSelection, editor.scriptFile) == 0x38 &&
    offsetof(SavedUnitSelection, editor.scriptOwner) == 0x3C &&
    offsetof(SavedUnitSelection, active) == 0x5C &&
    offsetof(SavedUnitSelection, editor.script) == 0x40 &&
    offsetof(SavedUnitSelection, operationFrames) == 0x450 &&
    sizeof(SavedUnitSelectionResource) == 8 && sizeof(SavedUnitSelection) == 0x454 ? 1 : -1];

/* Enters a new editor state, remembering the old state and restarting its frame count. */
static __inline void savedUnitEditorEnter(SavedUnitSelection *selection, u8 next)
{
    SavedUnitSelection::SavedUnitSelectionEditor *editor = &selection->editor;
    u8 previous = editor->state;
    editor->state = next;
    editor->previous = previous;
    editor->frame = 0;
}

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void buttonHelpTransitionPresetFlags(u32 id);
/* Refreshes the player preview after the selected slot changes. */
void saveLoadRefreshHighlightedPlayerPreview(SavedUnitSelection *work);
void savedUnitEditorPollLoad(SavedUnitSelection *work);
void savedUnitEditorApplyOrClose(SavedUnitSelection *work);
void FUN_0041eb94(SavedUnitSelection *work);
void FUN_0041f6e0(SavedUnitSelection *work);
#ifdef __cplusplus
}
#endif

#endif
