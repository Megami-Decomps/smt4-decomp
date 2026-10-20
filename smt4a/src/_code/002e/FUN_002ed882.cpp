/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed882` (_code @ 0x2ed882, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e74c4(unsigned int, int *, int, unsigned int);
int FUN_002e7516(unsigned int, int *);

/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_002e7516. */


unsigned int FUN_002ed882(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_10;
  unsigned int uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_4;
  FUN_002e7516(*param_2,&uStack_10);
  FUN_002e74c4(*(unsigned int *)(param_1 + 8),&uStack_10,4,0xffffffff);
  return 1;
}

} /* extern "C" */
