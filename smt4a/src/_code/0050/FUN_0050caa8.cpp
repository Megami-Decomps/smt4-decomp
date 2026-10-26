#include "common.h"

struct InnerRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u16 value;
};
struct MiddleRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ InnerRecord *inner;
};
struct OuterRecord {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MiddleRecord *middle;
};

/* Reads the value two links down the record chain. */
extern "C" u32 FUN_0050caa8(OuterRecord *outer)
{
    return outer->middle->inner->value;
}
