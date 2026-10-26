/* NON_MATCHING: retail keeps a null test on the manager address (`this != NULL` of a member call on a global, as `cmp r1, #0; beq`) and copies the index to r2 before setting the result; armcc folds the always-true test of a global's address away (also with __weak). */
#include "common.h"

typedef struct SlotObject {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ u32 value;
} SlotObject;

/* The slot manager: sixteen slot objects at 0x8BC. */
struct SlotManager {
    /* 0x000 */ u8 unk000[0x8BC];
    /* 0x8BC */ SlotObject *slots[16];

    u32 getValue(u32 index);
};

/* The value of slot `index`, or 0xFFFFFFFF when the index is out of range or the slot empty. */
u32 SlotManager::getValue(u32 index)
{
    if (index < 16 && this != NULL && slots[index] != NULL) {
        return slots[index]->value;
    }
    return 0xffffffff;
}

extern "C" {

extern SlotManager DAT_0063ea3c;

/* Returns the value of slot `index` of the slot manager, or 0xFFFFFFFF when out of range or empty. */
u32 FUN_0036bc6c(u32 index)
{
    return DAT_0063ea3c.getValue(index);
}

} /* extern "C" */
