#include "shard/Shard0049.h"

extern "C" {

typedef struct RectPair {
    /* 0x00 */ s16 first;
    /* 0x02 */ s16 second;
} RectPair;

typedef struct RectRec {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u16 unk06;
    /* 0x08 */ s16 unk08;
    /* 0x0A */ s16 unk0A;
    /* 0x0C */ RectPair *rect;
} RectRec;

extern RectRec *FUN_001834a4(u32 a, u32 b);

/* Reads the record's two shorts (+8/+0xA) and its rect pair (from +0xC, or +4/+6 with bit 15 masked off). */
void rectRecRead(u32 unused, u32 index, s32 *a, s32 *b, u32 *c, u32 *d)
{
    RectRec *rec = FUN_001834a4(unused, index);
    u32 second;

    *a = rec->unk08;
    *b = rec->unk0A;
    if (rec->rect != NULL) {
        *c = rec->rect->first;
        second = rec->rect->second;
    } else {
        *c = rec->unk04 & 0xFFFF7FFF;
        second = rec->unk06 & 0xFFFF7FFF;
    }
    *d = second;
}

} /* extern "C" */
