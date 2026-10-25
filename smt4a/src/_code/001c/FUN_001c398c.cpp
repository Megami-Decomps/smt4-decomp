/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c398c` (_code @ 0x1c398c, 0x204 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c6b34(unsigned int *, int, int, unsigned int, unsigned int);
int FUN_001ccf7c(...);
int __aeabi_memcpy4(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_001c6b34. */
/* Supplied declaration required: FUN_001ccf7c. */
/* Supplied declaration required: __aeabi_memcpy4. */


unsigned int * FUN_001c398c(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  
  FUN_001c6b34(param_2,(param_1[1] >> 0x1f) + 1,(char)param_1[0x28],param_4,param_4);
  if (-1 < param_1[1]) {
    *param_2 = 0;
    param_2[1] = 0xf029b;
    puVar1 = (unsigned int *)FUN_001ccf7c(param_1,param_2 + 2,0x29c,param_1[0x24],param_1[0x25]);
    *puVar1 = 1;
    puVar1[1] = 0xf028f;
    puVar1[2] = 0;
    puVar1[3] = 0xf02a5;
    temp_v0 = FUN_001ccf7c(param_1,puVar1 + 4,0x2a6,param_1[0x26],param_1[0x27]);
    __aeabi_memcpy4(temp_v0,param_1[0x2d] + *(int *)(param_1[0x30] + param_1[1] * 4) * 4,
                *(int *)(param_1[0x2e] + param_1[1] * 4) << 2);
    puVar3 = (unsigned int *)(temp_v0 + *(int *)(param_1[0x2e] + param_1[1] * 4) * 4);
    *puVar3 = param_1[0x2a] | 0x7fff0000;
    param_2 = puVar3 + 2;
    puVar3[1] = 0xf0280;
  }
  *param_2 = 0;
  param_2[1] = 0xf02cb;
  temp_v1 = param_1[0x25];
  if (temp_v1 >= 0x200) {
    temp_v1 = 0x200;
  }
  puVar1 = (unsigned int *)FUN_001ccf7c(param_1,param_2 + 2,0x2cc,param_1[0x24],temp_v1);
  *puVar1 = 1;
  puVar1[1] = 0xf02bf;
  puVar1[2] = 0;
  puVar1[3] = 0xf02d5;
  temp_v0 = FUN_001ccf7c(param_1,puVar1 + 4,0x2d6,param_1[0x26],param_1[0x27]);
  __aeabi_memcpy4(temp_v0,param_1[0x2d] + *(int *)(param_1[0x30] + *param_1 * 4) * 4,
              *(int *)(param_1[0x2e] + *param_1 * 4) << 2);
  puVar3 = (unsigned int *)(temp_v0 + *(int *)(param_1[0x2e] + *param_1 * 4) * 4);
  *puVar3 = param_1[0x29] | 0x7fff0000;
  puVar3[1] = 0xf02b0;
  temp_v1 = 0x100;
  if ((char)param_1[0x28] != '\x03') {
    temp_v1 = 0;
  }
  puVar3[2] = temp_v1;
  temp_v1 = 0x100;
  puVar3[3] = 0x20229;
  if ((char)param_1[0x28] != '\x03') {
    temp_v1 = 0;
  }
  puVar3[4] = temp_v1;
  puVar3[5] = 0x20253;
  __aeabi_memcpy4(puVar3 + 6,param_1[0x2b] + *(int *)(param_1[0x32] + param_1[2] * 4) * 4,
              *(int *)(param_1[0x2c] + param_1[2] * 4) << 2);
  return puVar3 + 6 + *(int *)(param_1[0x2c] + param_1[2] * 4);
}

} /* extern "C" */
