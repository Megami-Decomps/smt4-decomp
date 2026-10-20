/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f4f0` (_code @ 0x11f4f0, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int streamReadWord(unsigned int, unsigned int *);

/* Supplied declaration required: streamReadWord. */
extern unsigned int *FUN_00304d10(unsigned int, unsigned int);


void FUN_0011f4f0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int uStack_10;
  
  puVar2 = (unsigned int *)&uStack_10;
  uStack_10 = param_4;
  puVar1 = (unsigned int *)FUN_00304d10(param_2,0);
  if (puVar1 != (unsigned int *)0x0) {
    puVar2 = puVar1;
  }
  streamReadWord(param_1,puVar2);
  return;
}

} /* extern "C" */
