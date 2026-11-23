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
            u8 padding12[0x16];
            /* 0x028 */ UnitSevenStats stats;
            u8 padding36[0xA];
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
    u8 unk2F1[7];
    /* 0x2F8 */ s32 selected;
    /* 0x2FC */ u8 unk2FC[0x154];
    /* 0x450 */ s32 operationFrames;
};
typedef char SavedUnitSelectionOffsets[
    offsetof(SavedUnitSelection, choices) == 0x6C &&
    offsetof(SavedUnitSelection, changes) == 0x2EC &&
    offsetof(SavedUnitSelection, selected) == 0x2F8 ? 1 : -1];
typedef char SavedUnitSelectionEditorOffsetsCheck[
    offsetof(SavedUnitSelection, editor.state) == 7 &&
    offsetof(SavedUnitSelection, editor.frame) == 8 &&
    offsetof(SavedUnitSelection, editor.canApply) == 0x11 &&
    offsetof(SavedUnitSelection, editor.stats) == 0x28 &&
    offsetof(SavedUnitSelection, active) == 0x5C &&
    offsetof(SavedUnitSelection, editor.script) == 0x40 &&
    offsetof(SavedUnitSelection, operationFrames) == 0x450 &&
    sizeof(SavedUnitSelectionResource) == 8 && sizeof(SavedUnitSelection) == 0x454 ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void buttonHelpTransitionPresetFlags(u32 id);
/* Refreshes the player preview after the selected slot changes. */
void saveLoadRefreshHighlightedPlayerPreview(SavedUnitSelection *work);
void savedUnitEditorPollLoad(SavedUnitSelection *work);
#ifdef __cplusplus
}
#endif

#endif
