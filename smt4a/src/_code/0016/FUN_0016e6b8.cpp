#include "common.h"

extern "C" {

typedef void (*Hook)(void);

typedef struct Global589284 {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s8 pending;
} Global589284;
extern Global589284 DAT_00589284;
extern Hook DAT_0061a684[8];

/* Runs the eight registered hooks that are set, then clears `pending`; does nothing unless it is set. */
void FUN_0016e6b8(void)
{
    s32 i;

    if (DAT_00589284.pending != 0) {
        i = 0;
        do {
            if (DAT_0061a684[i] != NULL) {
                DAT_0061a684[i]();
            }
            i = i + 1;
        } while (i < 8);
        DAT_00589284.pending = 0;
    }
}

} /* extern "C" */
