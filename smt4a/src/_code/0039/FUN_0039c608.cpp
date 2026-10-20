/* Returns the signed flag byte at +0x20F0 of the global session object, or 1 when there is no session. */
#include "common.h"

extern "C" {

typedef struct Session {
    /* 0x0000 */ u8 unk0000[0x20F0];
    /* 0x20F0 */ s8 value;
} Session;

typedef struct SessionHolder {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Session *session;
} SessionHolder;

extern SessionHolder DAT_00588fd0;

s32 FUN_0039c608(void)
{
    Session *session = DAT_00588fd0.session;

    if (session == NULL) {
        return 1;
    }
    return session->value;
}

}
