#include "common.h"
#include "code/Code003c_Smt4.h"

extern "C" {

typedef struct Flags {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 unk1[3];
    /* 0x4 */ u32 unk4;
    /* 0x8 */ u8 unk8;
    /* 0x9 */ u8 unk9;
    /* 0xA */ u8 unkA;
    /* 0xB */ u8 unkB;
    /* 0xC */ u8 unkC;
} Flags;

void NaviMain_ResetFlags(Flags *flags, u8 value)
{
    flags->unkC = value;
    flags->unk4 = 0;
    flags->unk8 = 0;
    flags->unk9 = 0;
    flags->unkA = 0;
    flags->unkB = 0;
    flags->unk0 = 0;
}

} /* extern "C" */
