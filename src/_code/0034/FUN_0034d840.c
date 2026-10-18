/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034d840` (_code @ 0x34d840, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_00420618; /* 0x420618 */

/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_0034d840(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  *param_1 = (unsigned int)&DAT_00420618;
  param_1[1] = 0;
  temp_v0 = 0;
  do {
    puVar3 = (unsigned int *)param_1[temp_v0 + 3];
    if (puVar3 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar3)(puVar3);
      (**(romwright_code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
      param_1[temp_v0 + 3] = 0;
    }
    puVar3 = (unsigned int *)param_1[temp_v0 + 6];
    if (puVar3 != (unsigned int *)0x0) {
      (**(romwright_code **)*puVar3)(puVar3);
      (**(romwright_code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
      param_1[temp_v0 + 6] = 0;
    }
    temp_v1 = temp_v0 + 1;
    param_1[temp_v0 + 3] = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 3);
  if (param_1[2] != 0) {
    FUN_002a7aa0();
    param_1[2] = 0;
  }
  if (param_1[9] != 0) {
    FUN_002c4360();
    param_1[9] = 0;
  }
  FUN_002b2520(param_1);
  return;
}
