/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003421c0` (_code @ 0x3421c0, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_00420378; /* 0x420378 */

/* Supplied declaration required: FUN_0023d460. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_003421c0(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  
  *param_1 = (unsigned int)&DAT_00420378;
  param_1[4] = 0;
  FUN_002c4b30(param_1 + 5,0x150);
  temp_v3 = 0;
  temp_v0 = 0;
  do {
    *(unsigned char *)((int)param_1 + temp_v0 + 0x164) = 0;
    FUN_0023d460(param_1 + temp_v0 * 0x1c + 0x5c);
    temp_v1 = temp_v0 + 1;
    *(unsigned char *)(param_1 + temp_v0 * 5 + 0x1ac) = 0;
    temp_v2 = (unsigned int)temp_v3;
    param_1[temp_v0 * 5 + 0x1ad] = temp_v2;
    param_1[temp_v0 * 5 + 0x1ae] = temp_v2;
    param_1[temp_v0 * 5 + 0x1af] = temp_v2;
    param_1[temp_v0 * 5 + 0x1b0] = temp_v2;
    temp_v0 = temp_v1;
  } while (temp_v1 < 0xc);
  FUN_002c4360(param_1[2]);
  FUN_002c4360(param_1[3]);
  FUN_002b2520(param_1);
  return;
}
