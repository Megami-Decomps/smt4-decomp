/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310f64` (_code @ 0x310f64, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_001113ec(unsigned int *, int, unsigned int);
/* Supplied declaration required: FUN_002ea658. */


unsigned long long FUN_00310f64(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002ea658(&uStack_18);
  temp_v0 = FUN_001113ec((unsigned int *)&uStack_18,param_1,0x158);
  *(unsigned int *)(param_1 + 0x158) = temp_v0;
  return romwright_piece_4_4(uStack_18,&uStack_18);
}
