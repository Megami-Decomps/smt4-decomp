#include "common.h"

extern "C" {

extern int FUN_00170390(int arg);
extern int FUN_001703b0(int arg);

extern s8 DAT_005b408c; /* 0x5b408c */

/* Sets the flag and runs the matching routine (FUN_00170390 when set, FUN_001703b0 otherwise); returns the old flag. */
s32 FUN_00140e00(s32 enable)
{
    s32 previous = DAT_005b408c;

    DAT_005b408c = enable;
    if (enable != 0) {
        FUN_00170390(1);
    } else {
        FUN_001703b0(1);
    }
    return previous;
}

}
