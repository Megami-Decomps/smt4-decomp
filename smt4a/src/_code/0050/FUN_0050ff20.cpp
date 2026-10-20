/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050ff20` (_code @ 0x50ff20, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_004125c0; /* 0x4125c0 */

/* Supplied declaration required: FUN_002f5020. */


int FUN_0050ff20(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  FUN_002f5020();
  param_1 = param_1 + 0x1100;
  FUN_002f5020(param_1,&LAB_004125c0,0x2c,9);
  temp_v0 = 3;
  temp_v1 = param_1 + 0x18c;
  while (temp_v2 = temp_v0 != 0, temp_v0 = temp_v0 - 1, temp_v2) {
    (*(romwright_code *)&LAB_004125c0)(temp_v1);
    temp_v1 = temp_v1 + 0x2c;
  }
  return param_1 + 0x18c;
}

} /* extern "C" */
