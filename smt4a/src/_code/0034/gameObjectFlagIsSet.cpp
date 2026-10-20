#include "common.h"

extern "C" {

typedef struct Object00347664 {
    /* 0x00 */ u8 unk00[0x6c];
    /* 0x6c */ u8 flag;
} Object00347664;

extern Object00347664 *DAT_00570ab4;

/* True when the global object exists and its flag is set. */
u8 gameObjectFlagIsSet(void)
{
    u8 result = DAT_00570ab4 != NULL ? DAT_00570ab4->flag : 0;

    if (result != 0) {
        result = 1;
    }
    return result;
}

} /* extern "C" */
