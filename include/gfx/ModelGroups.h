#ifndef GFX_MODELGROUPS_H
#define GFX_MODELGROUPS_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include <stddef.h>

struct ModelGroupEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 changed;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 elapsed;
    /* 0x0C */ s32 delay;
    /* 0x10 */ u8 visible;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ f32 position[3];
    /* 0x20 */ f32 unk20;
    /* 0x24 */ u32 transition;
    /* 0x28 */ s32 bank;
    /* 0x2C */ u8 triggerIds[8];
    /* 0x34 */ u8 unk34;
    /* 0x35 */ u8 unk35[3];
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u8 unk3c;
    /* 0x3D */ u8 unk3d[3];
    /* 0x40 */ s32 slotIndex;
};

struct ModelGroupSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 changed;
    /* 0x02 */ u8 assigned;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ f32 position[3];
    /* 0x10 */ f32 unk10;
    /* 0x14 */ u32 transition;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1c;
    /* 0x1D */ u8 unk1d[3];
    /* 0x20 */ AsdMdlObject *model;
    /* 0x24 */ u8 pending;
    /* 0x25 */ u8 unk25[3];
    /* 0x28 */ s32 entryIndex;
};
struct ModelGroupEntries {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u16 mode;
    /* 0x0E */ u16 unk0e;
    /* 0x10 */ u8 active;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ ModelGroupEntry records[64];
};

struct ModelGroups {
    /* 0x0000 */ ModelGroupEntries entries;
    /* 0x1114 */ ModelGroupSlot primary[9];
    /* 0x12A0 */ ModelGroupSlot secondary[3];
};

typedef char ModelGroupSlotSizeCheck[sizeof(ModelGroupSlot) == 0x2C &&
    offsetof(ModelGroupSlot, model) == 0x20 && offsetof(ModelGroupSlot, entryIndex) == 0x28 ? 1 : -1];
typedef char ModelGroupEntriesLayoutCheck[sizeof(ModelGroupEntry) == 0x44 &&
    offsetof(ModelGroupEntry, slotIndex) == 0x40 && offsetof(ModelGroups, entries.records) == 0x14 &&
    offsetof(ModelGroups, primary) == 0x1114 && offsetof(ModelGroups, secondary) == 0x12A0 &&
    sizeof(ModelGroups) == 0x1324 ? 1 : -1];

enum { MODEL_GROUP_UNASSIGNED = -1 };

/* Clears a model slot and detaches it from its controlling entry. */
static __inline void modelGroupResetSlot(ModelGroupSlot *slot)
{
    slot->active = 0;
    slot->changed = 0;
    slot->assigned = 0;
    slot->position[0] = 0.0f;
    slot->position[1] = 0.0f;
    slot->position[2] = 0.0f;
    slot->unk10 = 0.0f;
    slot->transition = 0;
    slot->unk18 = 0;
    slot->unk1c = 0;
    slot->model = NULL;
    slot->pending = 0;
    slot->entryIndex = MODEL_GROUP_UNASSIGNED;
}

#endif
