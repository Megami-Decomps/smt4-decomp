#include "common.h"

extern "C" s32 nn_gxlow_CTR_ReadHWRegsBody(u32 address, void *data, u32 size);

/* Entry stub forwarding the GPU register read to its shared implementation. */
extern "C" s32 nn_gxlow_CTR_ReadHWRegs(u32 address, void *data, u32 size)
{
    return nn_gxlow_CTR_ReadHWRegsBody(address, data, size);
}
