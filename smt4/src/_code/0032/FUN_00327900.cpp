/* NON_MATCHING: retail keeps DAT_0044fdc0 in a register and adds 0x38 to it; armcc folds the offset into the literal. */
#include "common.h"

struct Effect00327900 {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ u8 body[0x2c];
    /* 0xb8 */ u32 value;
};

struct Owner00327900 {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ Effect00327900 effect;
};

struct Object00327900 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Owner00327900 *owner;
};

struct Table00327900 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u8 entry[1];
};

extern "C" {

extern Table00327900 DAT_0044fdc0;

void FUN_0024330c(void *body, u32 value, const void *entry);

/* Forwards the owner's effect (0x1c): its body (0x8c) and value (0xb8) with the entry at 0x38 of DAT_0044fdc0. */
void FUN_00327900(Object00327900 *object)
{
    Effect00327900 *effect = &object->owner->effect;
    FUN_0024330c(effect->body, effect->value, DAT_0044fdc0.entry);
}

} /* extern "C" */
