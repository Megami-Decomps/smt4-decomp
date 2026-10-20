/* NON_MATCHING: retail copies r1 into r5 before r0 into r4. */
#include "common.h"

extern "C" {

typedef struct Inner {
    u8 unk00[0xb0];
    u32 value; /* 0xb0 */
} Inner;

typedef struct Outer {
    u8 unk00[4];
    u8 enabled; /* 0x04 */
    u8 result;  /* 0x05 */
    u8 unk06[6];
    Inner *inner; /* 0x0c */
} Outer;

extern void handleWatcherPoll(void);
extern u8 FUN_00306d18(u32 value, Inner *inner, int a, int b);

void FUN_001212a0(Outer *outer, u32 value)
{
    handleWatcherPoll();
    outer->inner->value = value;
    if (outer->enabled) {
        outer->result = FUN_00306d18(value, outer->inner, 1, 0);
    }
}

} /* extern "C" */
