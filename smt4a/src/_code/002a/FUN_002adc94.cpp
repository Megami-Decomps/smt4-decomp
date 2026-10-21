#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {

void asdTexTgaLoadNw4c(void *object, u32 a, u32 b, s32 c);

typedef struct Holder {
    /* 0x00 */ AsdTexture *object;
    /* 0x04 */ u8 unk04[0x40];
    /* 0x44 */ u32 arg;
    /* 0x48 */ u8 ready;
} Holder;

/* Sets the held object up with asdTexTgaLoadNw4c(object, arg, `value`, 0x10000), fixes its fields and marks the holder ready. */
void FUN_002adc94(u32 unused, Holder *holder, u32 value)
{
    asdTexTgaLoadNw4c(holder->object, holder->arg, value, 0x10000);
    holder->object->image.flags = 0x2000000;
    holder->object->unk3c = 1;
    holder->object->unk40 = 1;
    holder->object->unk38 = 0;
    asdTextureSetImage(holder->object);
    holder->ready = 1;
}

} /* extern "C" */
