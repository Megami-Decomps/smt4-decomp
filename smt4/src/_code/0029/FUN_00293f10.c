/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293f10` (_code @ 0x293f10, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002a60b4. */
/* Supplied declaration required: FUN_002b06c4. */
/* Supplied declaration required: FUN_002b9024. */


void FUN_00293f10(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0x17;
  if ((param_2 != 0) && (-1 < (int)param_1)) {
    temp_v0 = param_1;
    FUN_002b9024(temp_v0,param_1);
    if (temp_v0 == 0) {
      return;
    }
    param_1 = param_1 & 0xffff;
    FUN_002b06c4();
    if ((*(unsigned char *)(param_1 + 3) & 1) != 0) {
      temp_v1 = 0x23;
      if (*(short *)(param_1 + 0x88) >= 0x81) {
        return;
      }
    }
    else if (*(unsigned short *)(temp_v0 + 0x90) + 1 >= 0x266) {
      return;
    }
  }
  FUN_002a60b4(temp_v1);
  return;
}
