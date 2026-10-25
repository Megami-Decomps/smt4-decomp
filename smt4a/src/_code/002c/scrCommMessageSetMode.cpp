#include "common.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

typedef struct Global57f560 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 value;
} Global57f560;
extern Global57f560 DAT_0057f560;

/* Stores `value` at 0x4 of the global at 0x57F560 when it is -1, 0 or 1. */
void scrCommMessageSetMode(s32 value)
{
    if (value + 1U < 3) {
        DAT_0057f560.value = value;
    }
}

} /* extern "C" */
