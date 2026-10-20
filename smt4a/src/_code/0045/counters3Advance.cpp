#include "shard/Shard0045.h"

extern "C" {

typedef struct Counters3 {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ s32 limit0;
    /* 0x74 */ s32 current0;
    /* 0x78 */ u8 unk78[0x18];
    /* 0x90 */ s32 limit1;
    /* 0x94 */ s32 current1;
    /* 0x98 */ u8 unk98[0x28];
    /* 0xC0 */ s32 limit2;
    /* 0xC4 */ s32 current2;
} Counters3;

/* Advances each of the three counters that has not reached its limit. */
void counters3Advance(Counters3 *obj)
{
    if (obj->current0 < obj->limit0) {
        obj->current0 = obj->current0 + 1;
    }
    if (obj->current1 < obj->limit1) {
        obj->current1 = obj->current1 + 1;
    }
    if (obj->current2 < obj->limit2) {
        obj->current2 = obj->current2 + 1;
    }
}

} /* extern "C" */
