/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d604` (_code @ 0x37d604, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00235c5c; /* 0x235c5c */

extern int FUN_00235c60(int);
/* Supplied declaration required: FUN_002c66cc. */
/* Supplied declaration required: FUN_0037c7d4. */
/* Supplied declaration required: nw_snd_internal_PoolImpl_DestroyImpl. */


int FUN_0037d604(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_0037c7d4();
  nw_snd_internal_PoolImpl_DestroyImpl(param_1 + 0x8c,param_1 + 0x90,0xa00);
  FUN_002c66cc(param_1 + 0x90,&LAB_00235c5c,0x50,0x20);
  temp_v0 = FUN_00235c60(param_1 + 0x60);
  return temp_v0 - 0x60;
}
