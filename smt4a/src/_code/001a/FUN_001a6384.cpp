/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6384` (_code @ 0x1a6384, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(...);
int nw_snd_internal_PoolImpl_CreateImpl(...);

extern int FUN_001b23a0(...); /* 0x1b23a0 */
extern unsigned char DAT_0055c298; /* 0x55c298 */

extern unsigned int *FUN_001b95dc(unsigned int *);
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: nw_snd_internal_PoolImpl_CreateImpl. */


unsigned int * FUN_001a6384(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  
  *param_1 = 0;
  param_1[5] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar1 = (unsigned int *)FUN_001b95dc(param_1 + 0x19);
  *puVar1 = (unsigned int)&DAT_0055c298;
  puVar1[9] = (unsigned int)(puVar1 + 9);
  puVar1[8] = 0;
  puVar1[10] = (unsigned int)(puVar1 + 9);
  puVar1[0xb] = 0;
  puVar1 = puVar1 + 0xc;
  __aeabi_vec_ctor_nocookie_nodtor(puVar1,FUN_001b23a0,0x58,0x20);
  nw_snd_internal_PoolImpl_CreateImpl(puVar1 + -1,puVar1,0xb00,0x58);
  return puVar1 + -0x25;
}

} /* extern "C" */
