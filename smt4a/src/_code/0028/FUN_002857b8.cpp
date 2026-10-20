/* Returns the signed flag byte at +0x2015 of the global session object, or 0 when there is no session. */
#include "common.h"

extern "C" {

typedef struct Session {
    /* 0x0000 */ u8 unk0000[0x2015];
    /* 0x2015 */ s8 value;
} Session;

typedef struct SessionHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Session *session;
} SessionHolder;

extern SessionHolder DAT_00588fd0;

s32 FUN_002857b8(void)
{
    Session *session = DAT_00588fd0.session;

    s32 value = 0;

    if (session != NULL) {
        value = session->value;
    }
    return value;
}

}
