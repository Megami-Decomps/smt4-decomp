/* NON_MATCHING: boolean conversion and VFP argument moves are scheduled differently. */
#include "common.h"
struct ModelHolder { u8 unk00[4];void *model; };
extern "C" {
void FUN_003fd924(void *model,u32 index,u8 enabled,f32 first,f32 second);
/* Starts the referenced model operation at frame zero. */
void FUN_004d888c(ModelHolder **holder,u32 index,u32 enabled,f32 value){if(*holder!=NULL)FUN_003fd924((*holder)->model,index,enabled!=0,0.0f,value);}
}
