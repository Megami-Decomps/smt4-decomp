#include "shard/Shard004A.h"

extern "C" {

typedef struct Words4At20 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 w[4];
} Words4At20;

void words4At20Clear(Words4At20 *obj)
{
    obj->w[0] = 0;
    obj->w[1] = 0;
    obj->w[2] = 0;
    obj->w[3] = 0;
}

} /* extern "C" */
