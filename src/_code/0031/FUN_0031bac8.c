/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bac8` (_code @ 0x31bac8, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00295b9c. */
/* Supplied declaration required: FUN_002a7b50. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_0031bac8(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    FUN_002a7b50(param_1[temp_v0 + 2]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 7);
  FUN_002a7b50(param_1[1]);
  FUN_002a7b50(*param_1);
  FUN_002a7b50(param_1[0xd]);
  temp_v0 = 0;
  do {
    FUN_002a7b50(param_1[temp_v0 + 0x12]);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  FUN_002a7b50(param_1[0xe]);
  FUN_002a7b50(param_1[0x10]);
  FUN_002a7b50(param_1[0x23]);
  FUN_00295b9c((int)*(short *)(param_1 + 0x22),1);
  FUN_002c4360(param_1);
  return;
}
