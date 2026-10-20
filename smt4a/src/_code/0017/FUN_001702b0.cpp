/* Forwards its arguments to nn_gxlow_CTR_Gpu_WriteHWRegsWithMask for the current GPU. */
#include "common.h"

extern "C" {

extern u32 FUN_001a2a5c(void);
extern u32 nn_gxlow_CTR_Gpu_WriteHWRegsWithMask(u32 gpu, u32 reg, u8 *values, u8 *masks, u32 count);

void FUN_001702b0(u32 reg, u8 *values, u8 *masks, u32 count)
{
    nn_gxlow_CTR_Gpu_WriteHWRegsWithMask(FUN_001a2a5c(), reg, values, masks, count);
}

}
