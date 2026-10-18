/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122d5a` (_code @ 0x122d5a, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_2_stack;

/* Supplied declaration required: FUN_00123998. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_0030f7d8. */
/* Supplied declaration required: FUN_0030f846. */


void FUN_00122d5a(unsigned int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [12];
  unsigned char temp_v5 [8];
  
  FUN_002e6e34(temp_v4,param_1 + 0xb8);
  if (*(int *)(param_1 + 0x124) != 0) {
    FUN_0030f846(&temp_v1);
    temp_v2 = *(unsigned int *)(temp_v1 + 0x10);
    temp_v3 = *(unsigned int *)(temp_v1 + 0x14);
    temp_v0 = param_1;
    FUN_0030f7d8(param_1,&temp_v2);
    if (temp_v0 < param_2) {
      param_2 = temp_v0;
    }
  }
  FUN_002e6e5c(temp_v4);
  FUN_00123998(param_1 + 0x10,param_2,temp_v5);
  return;
}
