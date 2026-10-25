#include "romwright_types.h"
#include "shard/W6_W6Match8_LightUniforms.h"

extern "C" {

int FUN_001bd604(unsigned char *, unsigned int, unsigned int, unsigned int);

extern unsigned char g_nnSndVoiceManager; /* 0x6449d0 */

/* Supplied declaration required: FUN_001bd604. */


u32 FUN_001af874(u32 param_1, u32 param_2, u32 param_3)

{
/* irregular: 1 native warning(s); review required */
  FUN_001bd604(&g_nnSndVoiceManager,param_1,param_2,param_3);
  return;
}

} /* extern "C" */
