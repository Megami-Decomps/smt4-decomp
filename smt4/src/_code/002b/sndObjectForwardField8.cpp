/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void FUN_002b2b64(void *arg);

struct ObjFUN_002b2b5c {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *field8;
};

void sndObjectForwardField8(ObjFUN_002b2b5c *o)
{
    FUN_002b2b64(o->field8);
}

}
