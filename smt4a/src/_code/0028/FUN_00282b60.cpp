#include "common.h"

extern "C" {

void asdTMTexTableLoadSprites(s32 table);
void FUN_0014afd0(s32 table, s32 index);

typedef struct Global57f208 {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 users;
} Global57f208;
extern Global57f208 g_commonBg;

/* Counts one more user of table 9: the first user (count 0 or less) prepares it and runs FUN_0014afd0 on entry 0. */
void FUN_00282b60(void)
{
    if (g_commonBg.users <= 0) {
        asdTMTexTableLoadSprites(9);
        FUN_0014afd0(9, 0);
    }
    g_commonBg.users = g_commonBg.users + 1;
}

} /* extern "C" */
