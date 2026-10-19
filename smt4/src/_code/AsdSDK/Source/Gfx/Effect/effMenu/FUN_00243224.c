/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00243224` (_code @ 0x243224, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_002571b8. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00243224(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = 0x10000;
  FUN_002c32a0(0x10000,0x100,0,0x68,0x10,1);
  temp_v1 = param_1[1];
  temp_v2 = param_1[2];
  temp_v3 = param_1[3];
  *(unsigned int *)(temp_v0 + 8) = *param_1;
  *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x10) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x14) = temp_v3;
  temp_v1 = *param_2;
  temp_v2 = param_2[1];
  temp_v3 = param_2[2];
  temp_v4 = param_2[3];
  *(unsigned int *)(temp_v0 + 4) = 8;
  *(unsigned int *)(temp_v0 + 0x18) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x1c) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x20) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x24) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  *(unsigned int *)(temp_v0 + 0x2c) = param_4;
  FUN_002571b8(temp_v0,1);
  temp_v1 = 0x10000;
  FUN_002c32a0(0x10000,0x100,0,0x68,0x10,1);
  rt_memcpy_w();
  FUN_002571b8(temp_v1,2);
  return;
}
