/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f7104` (_code @ 0x1f7104, 0xd8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002572dc. */
/* Supplied declaration required: FUN_0025733c. */
/* Supplied declaration required: FUN_00257390. */
/* Supplied declaration required: FUN_00269594. */
/* Supplied declaration required: FUN_002c2430. */
/* Supplied declaration required: FUN_002c24e4. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_001f7104(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_1[0xe] != 0) {
    temp_v0 = 0;
    if (param_1[0x13] != 0) {
      temp_v1 = *(unsigned int *)(param_1[0x13] + 8);
    }
    else {
      temp_v1 = *param_1;
    }
    if (temp_v1 != 0) {
      do {
        FUN_002c24e4(*(unsigned int *)(param_1[0xd] + temp_v0 * 4));
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v1);
    }
    FUN_002c4360(param_1[0xe]);
  }
  if (param_1[0x10] != 0) {
    temp_v0 = 0;
    if (param_1[0x13] != 0) {
      temp_v1 = *(unsigned int *)(param_1[0x13] + 8);
    }
    else {
      temp_v1 = *param_1;
    }
    if (temp_v1 != 0) {
      do {
        FUN_002c2430(*(unsigned int *)(param_1[0xf] + temp_v0 * 4));
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v1);
    }
    FUN_002c4360(param_1[0x10]);
  }
  if (param_1[0x11] != 0) {
    FUN_00257390();
  }
  if (param_1[0x12] != 0) {
    FUN_0025733c();
  }
  if ((*(unsigned char *)((int)param_1 + 0xe) & 1) != 0) {
    FUN_00269594(param_1[0x13]);
  }
  if (param_1[0x14] != 0) {
    FUN_002572dc();
  }
  FUN_002c4360(param_1);
  return;
}
