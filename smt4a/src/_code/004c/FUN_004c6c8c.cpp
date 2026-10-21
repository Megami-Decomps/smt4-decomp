#include "common.h"
/* Scales the floating value plus its integer adjustment, then adds both offsets. */
extern "C" s32 FUN_004c6c8c(u32 unused,s32 first,s32 second,s32 adjustment,f32 value,f32 unused1,f32 unused2,f32 scale) { return (s32)(((f32)adjustment+value)*scale)+first+second; }
