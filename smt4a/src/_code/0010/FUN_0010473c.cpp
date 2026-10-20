/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010473c` (_code @ 0x10473c, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001113fc(unsigned int, int *, unsigned int, unsigned int);
int initVtable00558630(int *);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_001113fc. */
/* Supplied declaration required: initVtable00558630. */


unsigned long long FUN_0010473c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  initVtable00558630(&uStack_20);
  FUN_001113fc(param_1,&uStack_20,param_2,param_3);
  return romwright_piece_4_4(uStack_20,&uStack_20);
}

} /* extern "C" */
