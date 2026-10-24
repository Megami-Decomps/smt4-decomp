/* NON_MATCHING: retail keeps the table's address in a register and adds 0x70 to it; armcc folds the offset into the literal. */
#include "common.h"

struct Effect00321c48 {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ u8 body[0x2c];
    /* 0xb8 */ u32 value;
};

struct Object00321c48 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Effect00321c48 *effect;
};

struct Entry00321c48 {
    /* 0x00 */ u8 data[0x70];
};

extern "C" {

extern Entry00321c48 DAT_0044fd18[];

void FUN_0024330c(void *body, u32 value, const void *entry);

/* Forwards the effect's body (0x8c) and value (0xb8) with entry 1 of DAT_0044fd18. */
void FUN_00321c48(Object00321c48 *object)
{
    Effect00321c48 *effect = object->effect;
    FUN_0024330c(effect->body, effect->value, &DAT_0044fd18[1]);
}

} /* extern "C" */
