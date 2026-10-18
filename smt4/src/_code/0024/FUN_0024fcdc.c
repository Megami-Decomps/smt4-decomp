/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024fcdc` (_code @ 0x24fcdc, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

/* Supplied declaration required: FUN_00259938. */
/* Supplied declaration required: FUN_00259b34. */


unsigned int FUN_0024fcdc(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [72];
  
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        param_1 = 0;
      }
      else {
        FUN_00259938(temp_v0,param_1,param_2);
        FUN_00259b34(param_1,temp_v0);
      }
    }
    else {
      FUN_00259938(temp_v0,param_2,param_1);
      FUN_00259b34(param_1,temp_v0);
    }
  }
  else {
    FUN_00259b34();
  }
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}
