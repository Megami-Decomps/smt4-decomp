/* NON_MATCHING: with the flag narrowed through the helper's s32 parameter the `and r2, r2, #255` and VFP moves match; retail materializes the flag as `mov r2, #1; moveq r2, #0`, the build as `movne/moveq`. */
#include "common.h"
struct ModelHolder { u8 unk00[4];void *model; };
extern "C" {
void FUN_003fd924(void *model,u32 index,u8 enabled,f32 first,f32 second);
/* Starts the model operation at frame zero. */
static __inline void modelStart(void *model, u32 index, s32 enabled, f32 value)
{
    FUN_003fd924(model, index, enabled, 0.0f, value);
}
/* Starts the referenced model operation at frame zero. */
void FUN_004d888c(ModelHolder **holder,u32 index,u32 enabled,f32 value){if(*holder!=NULL)modelStart((*holder)->model,index,enabled!=0,value);}
}
