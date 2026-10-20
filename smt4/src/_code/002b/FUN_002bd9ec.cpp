/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

void nw_snd_SoundHandle_DetachSound(void *arg);

struct ObjFUN_002bd9ec {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *field8;
};

void FUN_002bd9ec(ObjFUN_002bd9ec *o)
{
    nw_snd_SoundHandle_DetachSound(o->field8);
}

}
