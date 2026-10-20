/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5144` (_code @ 0x4f5144, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0b80(int);
int FUN_003f0c78(int);
int rt_memcpy_w(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_003f0b80. */
/* Supplied declaration required: FUN_003f0c78. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_004f5144(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  char temp_v2;
  char temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = *(char *)(param_3 + 4);
  temp_v1 = *(char *)(param_3 + 5);
  temp_v2 = *(char *)(param_3 + 6);
  temp_v3 = *(char *)(param_3 + 7);
  temp_v5 = *(int *)(param_3 + 0xc);
  param_3 = (unsigned int)*(unsigned short *)(param_3 + 8) + param_3;
  *(unsigned int *)(param_2 + 0x1ee0) = 0;
  *(unsigned int *)(param_2 + 0x1ee4) = 0;
  *(unsigned int *)(param_2 + 0x1ee8) = 0;
  *(unsigned int *)(param_2 + 0x1eec) = 0;
  *(unsigned int *)(param_2 + 0x1ef0) = 0;
  *(unsigned int *)(param_2 + 0x1ef4) = 0;
  *(unsigned int *)(param_2 + 0x1ef8) = 0;
  if ((int)temp_v3 + (((short)(temp_v0 - 0x30) * 1000 + temp_v1 * 100 + temp_v2 * 10) - 0x14d0) == 0x44c) {
    rt_memcpy_w((unsigned int *)(param_2 + 0x1ee0),param_3,0x118);
    param_3 = param_3 + 0x118;
  }
  temp_v4 = (temp_v5 - 0x118U) / 0x18;
  if (*(unsigned int *)(param_1 + 4) < temp_v4) {
    temp_v4 = *(unsigned int *)(param_1 + 4);
  }
  rt_memcpy_w(*(unsigned int *)(param_2 + 0x1ff8),param_3,temp_v4 * 0x18);
  FUN_003f0c78(param_2);
  FUN_003f0b80(param_2);
  return;
}

} /* extern "C" */
