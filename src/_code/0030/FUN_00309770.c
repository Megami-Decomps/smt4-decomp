/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309770` (_code @ 0x309770, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */
extern int DAT_004729e0; /* 0x4729e0 */
extern int DAT_004729e4; /* 0x4729e4 */

/* Supplied declaration required: FUN_00245bb8. */
extern unsigned int FUN_002ae474(void);
extern unsigned int FUN_002ae49c(void);
/* Supplied declaration required: FUN_002b7354. */
/* Supplied declaration required: FUN_002b737c. */


void FUN_00309770(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  FUN_00245bb8();
  temp_v1 = FUN_002ae49c();
  FUN_00245bb8();
  temp_v2 = FUN_002ae474();
  FUN_002b737c();
  temp_v0 = DAT_004729e0;
  if (*(int *)(DAT_0044ea00 + *(int *)(DAT_0044ea00 + 0x130c) * 4 + 0x1314) == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v3 = *(unsigned int *)(DAT_0044ea00 + *(int *)(DAT_0044ea00 + 0x132c) * 4 + 0x1334);
    temp_v4 = ((temp_v3 >> 0x10) + (param_1 >> 0x10)) - 1;
    if ((int)temp_v4 < 0) {
      temp_v4 = 0;
    }
    else if (temp_v2 <= temp_v4) {
      temp_v4 = temp_v2 - 1;
    }
    temp_v2 = (temp_v3 & 0xffff) + (param_1 & 0xffff);
    temp_v3 = temp_v2 - 1;
    if ((int)temp_v3 < 0) {
      temp_v1 = 0;
    }
    else {
      if (temp_v3 < temp_v1) {
        temp_v1 = temp_v2;
      }
      temp_v1 = (temp_v1 - 1) * 0x10000;
    }
    temp_v1 = temp_v1 | temp_v4;
  }
  *(unsigned int *)(DAT_004729e0 + DAT_004729e4 * 4) = temp_v1;
  *(unsigned int *)(temp_v0 + DAT_004729e4 * 4 + 4) = 0xf0067;
  DAT_004729e4 = DAT_004729e4 + 2;
  FUN_002b7354();
  return;
}
