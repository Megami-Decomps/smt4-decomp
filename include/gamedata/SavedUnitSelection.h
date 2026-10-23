#ifndef GAMEDATA_SAVED_UNIT_SELECTION_H
#define GAMEDATA_SAVED_UNIT_SELECTION_H
#include "shard/Shard0032.h"
#include <stddef.h>

struct UnitSevenStats { u16 values[7]; };
struct SavedUnitChoice {
    /* 0x00 */ char name[0x12];
    /* 0x12 */ UnitSevenStats base;
    /* 0x20 */ u32 bits;
    /* 0x24 */ u16 hp;
    /* 0x26 */ u16 mp;
    u8 unk28[8];
    /* 0x30 */ UnitSevenStats current;
    /* 0x3E */ UnitSevenStats maximum;
    /* 0x4C */ u8 alternate;
    u8 unk4D[0x17];
    /* 0x64 */ u16 id;
    u8 unk66[4];
    /* 0x6A */ u8 kind;
    u8 unk6B[0x15];
};
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
struct SavedUnitSelection {
    union {
        u8 unk000[0x54];
        struct {
            u8 prefix[7];
            /* 0x007 */ u8 state;
            /* 0x008 */ u32 frame;
            /* 0x00C */ u8 pending;
            /* 0x00D */ u8 previous;
            u8 padding0E[3];
            /* 0x011 */ u8 canApply;
            u8 padding12[0x16];
            /* 0x028 */ UnitSevenStats stats;
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
};
typedef char SavedUnitChoiceOffsets[
    sizeof(UnitSevenStats) == 0xE && sizeof(SavedUnitChoice) == 0x80 &&
    offsetof(SavedUnitChoice, base) == 0x12 &&
    offsetof(SavedUnitChoice, maximum) == 0x3E &&
    offsetof(SavedUnitChoice, id) == 0x64 &&
    offsetof(SavedUnitSelection, choices) == 0x6C &&
    offsetof(SavedUnitSelection, changes) == 0x2EC &&
    offsetof(SavedUnitSelection, selected) == 0x2F8 ? 1 : -1];
typedef char SavedUnitSelectionEditorOffsetsCheck[
    offsetof(SavedUnitSelection, editor.state) == 7 &&
    offsetof(SavedUnitSelection, editor.frame) == 8 &&
    offsetof(SavedUnitSelection, editor.canApply) == 0x11 &&
    offsetof(SavedUnitSelection, editor.stats) == 0x28 &&
    offsetof(SavedUnitSelection, active) == 0x5C &&
    sizeof(SavedUnitSelectionResource) == 8 && sizeof(SavedUnitSelection) == 0x2FC ? 1 : -1];
#endif
