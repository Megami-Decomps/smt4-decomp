#include "shard/Shard004C.h"
#include "code/Code004c_Smt4a.h"

extern "C" {

typedef struct Flags4C {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u8 unk0A;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u8 mode;
} Flags4C;

void NaviMain_ResetFlags(Flags4C *obj, u8 mode)
{
    obj->mode = mode;
    obj->unk04 = 0;
    obj->unk08 = 0;
    obj->unk09 = 0;
    obj->unk0A = 0;
    obj->unk0B = 0;
    obj->unk00 = 0;
}

} /* extern "C" */
