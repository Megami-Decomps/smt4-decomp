/* NON_MATCHING: readable rewrite of the texture-slot effect setup (nine fade/hold modes with their default durations); retail shares the tail of cases 2 and 7 and loads the 0.0f/1.0f constants through different VFP registers, which the build schedules differently. */
#include "common.h"

// A texture entry returned by the sprite table lookup (observed field).
struct TextureEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 id;
};

// A sprite texture slot with a timed fade effect (observed fields).
struct TextureSlot {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 sprite;
    /* 0x08 */ s32 source;
    /* 0x0C */ s32 busy;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 pending;     // -1 when no replacement is pending
    /* 0x18 */ u8 unk18[0xc];
    /* 0x24 */ u32 mode;
    /* 0x28 */ f32 fade;
    /* 0x2C */ f32 fadeAux;
    /* 0x30 */ u8 active;
    /* 0x31 */ u8 unk31[3];
    /* 0x34 */ u8 state[0x24];
    /* 0x58 */ f32 offsetX;
    /* 0x5C */ f32 offsetY;
    /* 0x60 */ f32 offsetZ;
    /* 0x64 */ u8 unk64[0x10];
    /* 0x74 */ f32 duration;
    /* 0x78 */ u8 unk78[0x10];
    /* 0x88 */ f32 hold;
    /* 0x8C */ u8 unk8c;
    /* 0x8D */ u8 holdActive;
};

extern "C" {
void FUN_002a4e18(u8 *state, s32 source);
void aocSlotRelease(TextureSlot *slot);
TextureEntry *aocContentGetIndexedRecord(s32 sprite, s32 index);
void uiSpriteReplaceTextureEntry(TextureSlot *slot, u16 id, s32 mode);

// Starts the slot's effect `mode` (1..9) with `requested` frames (0 selects the mode's default), then queues the
// texture replacement when the slot is active and idle.
void FUN_002a880c(TextureSlot *slot, u32 mode, s32 requested)
{
    slot->mode = mode;
    switch (mode) {
    case 1:
        if (requested == 0) {
            slot->duration = 4.0f;
        } else {
            slot->duration = (f32)requested;
        }
        slot->fade = 1.0f;
        slot->active = 0;
        break;
    case 2:
        if (requested == 0) {
            slot->duration = 12.0f;
        } else {
            slot->duration = (f32)requested;
        }
        slot->fade = 0.0f;
        slot->active = 1;
        aocSlotRelease(slot);
        break;
    case 3:
        slot->holdActive = 1;
        if (requested == 0) {
            slot->duration = 6.0f;
        } else {
            slot->duration = (f32)requested;
        }
        slot->fade = 1.0f;
        slot->hold = 1.0f;
        break;
    case 4:
        if (requested == 0) {
            slot->duration = 12.0f;
        } else {
            slot->duration = (f32)requested;
        }
        slot->fade = 0.0f;
        slot->hold = 1.0f;
        break;
    case 5:
        if (requested == 0) {
            slot->duration = 10.0f;
        } else {
            slot->duration = (f32)requested;
        }
        break;
    case 6:
        if (requested == 0) {
            slot->duration = 10.0f;
        } else {
            slot->duration = (f32)requested;
        }
        FUN_002a4e18(slot->state, slot->source);
        slot->active = 1;
        slot->offsetY = 0.0f;
        slot->offsetX = 0.0f;
        slot->offsetZ = 0.0f;
        slot->fade = 0.0f;
        aocSlotRelease(slot);
        break;
    case 7:
        if (requested == 0) {
            slot->duration = 4.0f;
        } else {
            slot->duration = (f32)requested;
        }
        slot->fade = 0.0f;
        slot->active = 1;
        aocSlotRelease(slot);
        break;
    case 8:
        if (requested == 0) {
            slot->duration = 120.0f;
        } else {
            slot->duration = (f32)requested;
        }
        slot->active = 1;
        slot->fade = 0.0f;
        slot->fadeAux = 0.0f;
        aocSlotRelease(slot);
        break;
    case 9:
        if (requested == 0) {
            slot->duration = 120.0f;
        } else {
            slot->duration = (f32)requested;
        }
        slot->fade = 1.0f;
        slot->active = 1;
        slot->fadeAux = 0.0f;
        aocSlotRelease(slot);
        break;
    }
    if (slot->active != 0 && slot->busy == 0 && slot->pending == -1 && slot->sprite != 0) {
        TextureEntry *entry = aocContentGetIndexedRecord(slot->sprite, 1);
        uiSpriteReplaceTextureEntry(slot, entry->id, -1);
    }
}
}
