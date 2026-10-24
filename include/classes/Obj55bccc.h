#ifndef CLASSES_OBJ55BCCC_H
#define CLASSES_OBJ55BCCC_H

#include "common.h"

/* A 30-bit value and a 2-bit tag packed in one word. */
struct Obj55bcccPacked {
    u32 value : 30;
    u32 tag : 2;
};

/* One of the four tracked slots. */
struct Obj55bcccSlot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ Obj55bcccPacked packed;
};

/* A record with four slots (vtable at 0x55bccc; named after it until its real name is known). */
class Obj55bccc {
public:
    Obj55bccc(u32 second, u32 third, u32 first);
    virtual ~Obj55bccc();

    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ Obj55bcccPacked packed18;
    /* 0x1C */ u32 third;
    /* 0x20 */ Obj55bcccSlot slots[4];
    /* 0x60 */ u32 unk60;
    /* 0x64 */ u8 unk64;
};

typedef char Obj55bcccSizeCheck[sizeof(Obj55bccc) == 0x68 ? 1 : -1];

#endif
