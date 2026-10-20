/* Forwards its arguments to nn_gxlow_CTR_Gpu_WriteHWRegsWithMask for the current GPU. */
#include "common.h"

extern "C" {

extern u32 FUN_002ad264(void);
extern u32 nn_gxlow_CTR_Gpu_WriteHWRegsWithMask(u32 gpu, u32 reg, u8 *values, u8 *masks, u32 count);

void FUN_00129d04(u32 reg, u8 *values, u8 *masks, u32 count)
{
    nn_gxlow_CTR_Gpu_WriteHWRegsWithMask(FUN_002ad264(), reg, values, masks, count);
}

}
