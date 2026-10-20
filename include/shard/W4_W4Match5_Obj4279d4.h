#ifndef W4_W4MATCH5_OBJ4279D4_H
#define W4_W4MATCH5_OBJ4279D4_H

#include "common.h"

/* A pair of words set together. */
class Obj4279d4Range {
public:
    Obj4279d4Range(u32 first, u32 second) : first(first), second(second) {}

    u32 first;
    u32 second;
};

/* An object whose words start out zero, with a range set at construction (no vtable: named after
 * its constructor's address). */
class Obj4279d4 {
public:
    Obj4279d4(u32 first, u32 second);

private:
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u8 unk28;
    /* 0x2C */ Obj4279d4Range range;
};

#endif
