/* NON_MATCHING: retail keeps the table's address in a register and adds 0x70 to it; armcc folds the offset into the literal. */
#include "common.h"

struct Effect003249cc {
    /* 0x00 */ u8 unk00[0xb8];
    /* 0xb8 */ u32 value;
    /* 0xbc */ u8 unkbc[0x68];
    /* 0x124 */ u8 body[0x10];
};

struct Object003249cc {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Effect003249cc *effect;
};

struct Table003249cc {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u8 entry[1];
};

extern "C" {

extern Table003249cc DAT_0044fd18;

void FUN_0024330c(void *body, u32 value, const void *entry);

/* Forwards the effect's body (0x124) and value (0xb8) with the entry at 0x70 of DAT_0044fd18. */
void FUN_003249cc(Object003249cc *object)
{
    Effect003249cc *effect = object->effect;
    FUN_0024330c(effect->body, effect->value, DAT_0044fd18.entry);
}

} /* extern "C" */
