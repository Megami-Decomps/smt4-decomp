#include "common.h"

extern "C" {

int gpuWriteVertexUniformMatrix(u32 a, int b);
int cameraComposeMatrices(void);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x52C];
    /* 0x52C */ u32 unk52C;
    /* 0x530 */ u8 unk530[0xC4];
    /* 0x5F4 */ u8 unk5F4;
} Obj;

void FUN_00343324(Obj *obj)
{
    cameraComposeMatrices();
    gpuWriteVertexUniformMatrix(obj->unk52C, (int)obj + 0x118c);
    obj->unk5F4 = 0;
}

} /* extern "C" */
