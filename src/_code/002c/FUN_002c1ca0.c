/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1ca0` (_code @ 0x2c1ca0, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int DAT_00464c40; /* 0x464c40 */

/* Supplied declaration required: FUN_002ade34. */
/* Supplied declaration required: FUN_002b1590. */
/* Supplied declaration required: FUN_002b8524. */


void FUN_002c1ca0(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned long long uStack_20;
  
  if (param_1 == 0) {
    param_1 = DAT_00464c40;
  }
  if (param_2 == 0) {
    param_2 = DAT_00464c40;
  }
  if (param_3 == 0) {
    param_3 = DAT_00464c40;
  }
  if (param_4 == 0) {
    param_4 = DAT_00464c40;
  }
  FUN_002b8524();
  FUN_002b1590(param_1,param_2,param_3,param_4);
  uStack_20 = 0x1024500000001;
  FUN_002ade34(&uStack_20,0x18,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}
