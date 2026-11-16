#include "shard/Shard0040.h"

extern "C" {

typedef struct Block530Owner {
    /* 0x0000 */ u8 unk0000[0x530];
    /* 0x0530 */ u32 handle530;
    /* 0x0534 */ u8 unk0534[0xC4];
    /* 0x05F8 */ u8 unk5F8;
    /* 0x05F9 */ u8 unk05F9[0xB9F];
    /* 0x1198 */ u8 block1198[4];
} Block530Owner;

extern void cameraComposeMatrices(Block530Owner *owner);
extern void gpuWriteVertexUniformMatrix(u32 handle, u8 *block);

void block530OwnerReset(Block530Owner *owner)
{
    cameraComposeMatrices(owner);
    gpuWriteVertexUniformMatrix(owner->handle530, owner->block1198);
    owner->unk5F8 = 0;
}

} /* extern "C" */
