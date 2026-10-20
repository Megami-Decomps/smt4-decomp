#include "common.h"

extern "C" {

int nw_snd_SoundHandle_DetachSound(u32 handle);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 handle;
} Obj;

void FUN_003799bc(Obj *obj)
{
    nw_snd_SoundHandle_DetachSound(obj->handle);
}

} /* extern "C" */
