/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4b30` (_code @ 0x2c4b30, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


unsigned int * FUN_002c4b30(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char temp_v1;
  
  temp_v1 = param_2 >= 0x20;
  param_2 = param_2 - 0x20;
  do {
    if (temp_v1) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      temp_v1 = param_2 >= 0x20;
      param_2 = param_2 - 0x20;
    }
  } while (temp_v1);
  if ((unsigned char)((unsigned char)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  temp_v0 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((unsigned char)((unsigned char)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (temp_v0 != 0) {
    puVar2 = puVar3;
    if ((int)temp_v0 < 0) {
      puVar2 = (unsigned int *)((int)puVar3 + 2);
      *(unsigned short *)puVar3 = 0;
    }
    puVar3 = puVar2;
    if ((temp_v0 & 0x40000000) != 0) {
      puVar3 = (unsigned int *)((int)puVar2 + 1);
      *(unsigned char *)puVar2 = 0;
    }
    return puVar3;
  }
  return puVar3;
}
