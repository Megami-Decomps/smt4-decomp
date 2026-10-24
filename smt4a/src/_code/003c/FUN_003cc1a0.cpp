/* NON_MATCHING: retail keeps DAT_0059ef80 in a register and subtracts 0xa8 from it; armcc folds the offset into the literal. */
#include "common.h"

struct Effect003cc1a0 {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u8 body[0x2c];
    /* 0x8c */ u32 value;
};

struct Object003cc1a0 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Effect003cc1a0 *effect;
};

extern "C" {

extern u8 DAT_0059ef80[];

void FUN_0031ab38(void *body, u32 value, const void *entry);

/* Forwards the effect's body (0x60) and value (0x8c) with the entry 0xa8 before DAT_0059ef80. */
void FUN_003cc1a0(Object003cc1a0 *object)
{
    Effect003cc1a0 *effect = object->effect;
    FUN_0031ab38(effect->body, effect->value, DAT_0059ef80 - 0xa8);
}

} /* extern "C" */
