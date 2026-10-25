/* NON_MATCHING: retail loads resource->value before starter->key; built loads them the other way round */
/* Starts the object once: records the resource's value in its first slot, then runs the start callback. */
#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 value;
    /* 0x1C */ u32 key;
} Slot;

typedef struct SlotSet {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 count;
} SlotSet;

typedef struct Resource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
} Resource;

typedef struct Starter {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *owner;
    /* 0x0C */ u32 key;
    /* 0x10 */ SlotSet *slotSet;
    /* 0x14 */ Slot *slots;
    /* 0x18 */ u8 unk18[0x25];
    /* 0x3D */ u8 started;
} Starter;

extern Resource *asdTMTexTableGetNode(void *owner, u32 key);
extern u8 resourceIsReady(Resource *resource);
extern void FUN_003fc294(Starter *starter, u32 arg);
extern s32 FUN_003fcbe0(Starter *starter);
extern void aocReleaseObjectBufferAndFlag(Starter *starter);

s32 FUN_003fce08(Starter *starter, u32 arg)
{
    Resource *resource = asdTMTexTableGetNode(starter->owner, starter->key);

    if (resourceIsReady(resource) == 0) {
        return 0;
    }
    if (starter->started == 0) {
        if (FUN_003fcbe0(starter) != 0) {
            aocReleaseObjectBufferAndFlag(starter);
        }
        u32 key = starter->key;
        u32 value = resource->value;
        starter->started = 1;
        s32 slotCount = starter->slotSet->count;
        if (slotCount > 0) {
            Slot *slot = starter->slots;
            slot->value = value;
            slot->key = key;
        }
        FUN_003fc294(starter, arg);
    }
    return 1;
}

}
