/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4160` (_code @ 0x2c4160, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_004d4600; /* 0x4d4600 */

/* Supplied declaration required: FUN_001376c4. */
/* Supplied declaration required: FUN_002bbb04. */
/* Supplied declaration required: FUN_002c5468. */


unsigned int FUN_002c4160(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  
  temp_v2 = *(int *)(param_1 + 8);
  if (temp_v2 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = *(unsigned int *)(param_1 + 0x14);
    temp_v1 = *(unsigned int *)(param_1 + 0xc);
    FUN_001376c4(&DAT_004d4600,param_1);
    temp_v2 = FUN_002bbb04(temp_v3,temp_v2,temp_v0,temp_v1,5,3);
    if (temp_v2 < 0) {
      FUN_002c5468();
    }
    temp_v2 = FUN_002bbb04(temp_v3,temp_v0,0,temp_v1,6,3);
    if (temp_v2 < 0) {
      FUN_002c5468();
    }
  }
  return temp_v0;
}
