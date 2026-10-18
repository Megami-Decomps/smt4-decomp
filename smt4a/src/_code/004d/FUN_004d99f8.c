/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d99f8` (_code @ 0x4d99f8, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002e3140. */
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002ea5b8. */
/* Supplied declaration required: FUN_00442218. */


unsigned int FUN_004d99f8(int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [12];
  int temp_v4;
  
  temp_v0 = *(unsigned int *)(param_1 + 0x6c);
  software_interrupt(0x24);
  if (-((int)temp_v0 >> 0x1f) != 0) {
    FUN_002e3140(temp_v0,-((int)temp_v0 >> 0x1f),30000000,0);
  }
  temp_v1 = -0x800000;
  if ((temp_v0 & 0x3ff) == 0x3fe) {
    temp_v2 = 0;
  }
  else {
    FUN_002ea5b8();
    *(int *)(param_1 + 0x70) = temp_v1;
    if (temp_v1 >= 0) {
      temp_v4 = 0x10001;
      temp_v2 = FUN_002e7908(temp_v3,(unsigned int *)&temp_v4);
      FUN_002e9afe(param_2,temp_v2);
    }
    else {
      temp_v1 = param_1 + 0x70;
      FUN_00442218();
      *(int *)(param_1 + 0x74) = temp_v1;
      temp_v4 = 0x80010001;
      temp_v2 = FUN_002e7908(temp_v3,(unsigned int *)&temp_v4);
      FUN_002e9afe(param_2,temp_v2);
    }
    temp_v2 = 1;
  }
  return temp_v2;
}
