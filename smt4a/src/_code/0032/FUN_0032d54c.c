/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032d54c` (_code @ 0x32d54c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001834a4. */
extern int FUN_0032ecac(void);
/* Supplied declaration required: FUN_00344bc8. */


void FUN_0032d54c(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v2 = 0;
  temp_v3 = *(int *)(param_1 + 4);
  temp_v4 = *(int *)(param_1 + 8);
  do {
    temp_v0 = FUN_001834a4(0x2e,temp_v2 + 0xd1);
    if (((temp_v2 < param_2) && (temp_v2 != param_5)) && (param_6 == 1)) {
      FUN_00344bc8(param_4 + temp_v2 + param_3);
      temp_v1 = FUN_0032ecac();
      if (temp_v1 != 0) {
        temp_v1 = FUN_001834a4(0x14,0x58e);
        FUN_00164b5c(2,0x14,7,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v0 + 8) + temp_v3,
                     (int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v1 + 10) + temp_v4,0xc);
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0xb);
  return;
}
