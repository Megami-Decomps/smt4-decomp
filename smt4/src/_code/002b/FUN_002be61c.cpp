/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be61c` (_code @ 0x2be61c, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c682a(int, int *);
int FUN_002c683e(unsigned int, int *, int *, int);

/* Supplied declaration required: FUN_002c682a. */
/* Supplied declaration required: FUN_002c683e. */


unsigned int FUN_002be61c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_20;
  unsigned int uStack_1c;
  int uStack_8;
  unsigned int uStack_4;
  
  uStack_20 = param_1;
  uStack_1c = param_4;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_002c683e(param_2,&uStack_20,&uStack_8,0x2c682b);
  FUN_002c682a(0,&uStack_20);
                    /* WARNING: Treating indirect jump as return */
  return param_2;
}

} /* extern "C" */
