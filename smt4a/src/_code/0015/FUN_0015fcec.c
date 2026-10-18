/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015fcec` (_code @ 0x15fcec, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


unsigned int * FUN_0015fcec(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned char *pbVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  do {
    puVar1 = param_2;
    temp_v1 = temp_v0 + 1;
    pbVar2 = (unsigned char *)(param_1 + temp_v0 * 0x18);
    *puVar1 = (unsigned int)pbVar2[4] | ((unsigned int)pbVar2[5] << 4) | ((unsigned int)pbVar2[6] << 8) |
              ((unsigned int)pbVar2[0xd] << 0x10) | ((unsigned int)pbVar2[0xe] << 0x14) |
              ((unsigned int)pbVar2[0xf] << 0x18);
    puVar1[1] = *(unsigned short *)(pbVar2 + 0x16) | 0x804f0000;
    puVar1[2] = (unsigned int)pbVar2[1] | ((unsigned int)pbVar2[2] << 4) | ((unsigned int)pbVar2[3] << 8) |
                ((unsigned int)pbVar2[10] << 0xc) | ((unsigned int)pbVar2[0xb] << 0x10) |
                ((unsigned int)pbVar2[0xc] << 0x14);
    puVar1[3] = (unsigned int)*pbVar2 | ((unsigned int)pbVar2[9] << 0x10);
    puVar1[4] = (*(unsigned int *)(pbVar2 + 0x12) & 0xffffff) | ((unsigned int)pbVar2[0x15] << 0x18);
    puVar1[5] = (unsigned int)pbVar2[7] | ((unsigned int)pbVar2[0x10] << 0x10);
    param_2 = puVar1 + 6;
    temp_v0 = temp_v1;
  } while (temp_v1 < 6);
  puVar1[6] = ((unsigned int)*(unsigned char *)(param_1 + 0x20) << 8) | ((unsigned int)*(unsigned char *)(param_1 + 0x29) << 0xc) |
              ((unsigned int)*(unsigned char *)(param_1 + 0x38) << 9) | ((unsigned int)*(unsigned char *)(param_1 + 0x41) << 0xd) |
              ((unsigned int)*(unsigned char *)(param_1 + 0x50) << 10) | ((unsigned int)*(unsigned char *)(param_1 + 0x59) << 0xe) |
              ((unsigned int)*(unsigned char *)(param_1 + 0x68) << 0xb) | ((unsigned int)*(unsigned char *)(param_1 + 0x71) << 0xf);
  puVar1[7] = 0x200e0;
  puVar1[8] = (*(unsigned int *)(param_1 + 0x90) & 0xffffff) | ((unsigned int)*(unsigned char *)(param_1 + 0x93) << 0x18);
  puVar1[9] = 0xf00fd;
  return puVar1 + 10;
}
