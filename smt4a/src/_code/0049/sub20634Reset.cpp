#include "shard/Shard0049.h"

extern "C" {

typedef struct Sub20634 {
    /* 0x00000 */ u8 unk00000[0x20634];
    /* 0x20634 */ u8 unk20634;
    /* 0x20635 */ u8 unk20635[0x13];
    /* 0x20648 */ u32 unk20648;
    /* 0x2064C */ u32 unk2064C;
} Sub20634;

void sub20634Reset(Sub20634 *sub)
{
    sub->unk20634 = 0;
    sub->unk20648 = 0xA0;
    sub->unk2064C = 0x78;
}

} /* extern "C" */
