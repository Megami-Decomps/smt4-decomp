/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238dd4` (_code @ 0x238dd4, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned int FUN_00238e18(unsigned char *, int);
/* Supplied declaration required: FUN_002912f4. */
/* Supplied declaration required: FUN_002adb40. */


unsigned int FUN_00238dd4(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [8];
  
  if (param_3 != 0) {
    temp_v0 = FUN_00238e18(temp_v1,param_2 + 0x20);
    FUN_002adb40(param_3,temp_v0);
  }
  if (param_2 != -0x20) {
    FUN_002adb40();
  }
  else {
    FUN_002912f4();
  }
  return param_1;
}
