/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a63d0` (_code @ 0x3a63d0, 0x154 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00256a50. */
extern int FUN_002ae650(void);
extern int FUN_002c0bcc(unsigned int);
/* Supplied declaration required: FUN_0034236c. */


unsigned int FUN_003a63d0(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_002ae650();
  if (temp_v0 != 9) {
    if (param_2 != 0xffff) {
      FUN_0034236c(param_2,param_3,1);
    }
    return param_1;
  }
  FUN_00256a50();
  if (param_1 != 0) {
    temp_v1 = 0;
    if (*(short *)(param_1 + 0x28) != 0) {
      temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0x2a);
    }
    if (*(short *)(param_1 + 0x2c) != 0) {
      temp_v1 = temp_v1 + *(unsigned short *)(param_1 + 0x2e);
    }
    if (*(short *)(param_1 + 0x30) != 0) {
      temp_v1 = temp_v1 + *(unsigned short *)(param_1 + 0x32);
    }
    if (*(short *)(param_1 + 0x34) != 0) {
      temp_v1 = temp_v1 + *(unsigned short *)(param_1 + 0x36);
    }
    if (*(short *)(param_1 + 0x38) != 0) {
      temp_v1 = temp_v1 + *(unsigned short *)(param_1 + 0x3a);
    }
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v0 = FUN_002c0bcc((temp_v1 - 1) & 0xffff);
    temp_v2 = 0;
    temp_v4 = 0;
    do {
      temp_v3 = param_1 + temp_v4 * 4;
      if ((*(short *)(temp_v3 + 0x28) != 0) &&
         (temp_v2 = temp_v2 + (unsigned int)*(unsigned short *)(temp_v3 + 0x2a), temp_v0 <= temp_v2)) {
        temp_v1 = (unsigned int)*(unsigned short *)(param_1 + temp_v4 * 4 + 0x28);
        if (param_2 == 0xffff) {
          return temp_v1;
        }
        FUN_0034236c(param_2,param_3,1);
        return temp_v1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 5);
  }
  return 0;
}
