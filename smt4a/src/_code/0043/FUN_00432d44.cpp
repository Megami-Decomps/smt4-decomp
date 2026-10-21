#include "common.h"
extern "C" {
u32 FUN_002f651c(void *random,u32 limit);
/* Produces a random value below the positive scale, or zero otherwise. */
f32 FUN_00432d44(void *random,f32 scale){f32 value=0.0f;if(scale>0.0f)value=(f32)FUN_002f651c(random,65536)*(1.0f/65536.0f)*scale;return value;}
}
