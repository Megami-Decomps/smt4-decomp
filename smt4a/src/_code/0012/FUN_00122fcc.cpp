/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122fcc` (_code @ 0x122fcc, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030f558(int, int *, int, unsigned int, int);
int FUN_0030f58c(void);

/* Supplied declaration required: FUN_0030f558. */
/* Supplied declaration required: FUN_0030f58c. */


void FUN_00122fcc(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_c;
  int iStack_8;
  
  uStack_c = param_2;
  iStack_8 = param_3;
  if (param_3 != 0) {
    FUN_0030f58c();
    return;
  }
  FUN_0030f558(param_1 + 300,&uStack_c,0,param_4,param_1);
  return;
}

} /* extern "C" */
