/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121bf8` (_code @ 0x121bf8, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int FUN_002e6e5c(int *);

typedef int romwright_code(...);
extern unsigned char DAT_005949d8; /* 0x5949d8 */

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */


void FUN_00121bf8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  FUN_002e6e34(&uStack_18,param_1 + 0x58);
  (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_005949d8 + 0x2c)) + 0x14))((*(int * *)((unsigned char *)&DAT_005949d8 + 0x2c)),param_1 + 0x54,param_2);
  FUN_002e6e5c(&uStack_18);
  return;
}

} /* extern "C" */
