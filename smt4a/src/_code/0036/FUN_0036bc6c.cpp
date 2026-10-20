/* NON_MATCHING: retail keeps a null test on the manager address (a weak or this-checked object); built folds the always-true test away */
#include "common.h"

extern "C" {

typedef struct SlotObject {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ u32 value;
} SlotObject;

typedef struct SlotManager {
    /* 0x000 */ u8 unk000[0x8BC];
    /* 0x8BC */ SlotObject *slots[16];
} SlotManager;

extern SlotManager DAT_0063ea3c;

static inline u32 slotManagerGetValue(SlotManager *manager, u32 index)
{
    if (index < 16 && manager != NULL && manager->slots[index] != NULL) {
        return manager->slots[index]->value;
    }
    return 0xffffffff;
}

/* Returns the value of slot `index` of the slot manager, or 0xFFFFFFFF when out of range or empty. */
u32 FUN_0036bc6c(u32 index)
{
    return slotManagerGetValue(&DAT_0063ea3c, index);
}

} /* extern "C" */
