/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_gr_CTR_Combiner_MakeCommand` (_code @ 0x2b5f2c, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;


unsigned int * nn_gr_CTR_Combiner_MakeCommand(int param_1,unsigned int *param_2)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned int *puVar9;
  unsigned char *pbVar10;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v8 = 0;
  do {
    puVar9 = param_2;
    temp_v9 = temp_v8 + 1;
    pbVar10 = (unsigned char *)(param_1 + temp_v8 * 0x18);
    *puVar9 = ((unsigned int)pbVar10[6] << 8) | ((unsigned int)pbVar10[0xd] << 0x10) |
              (unsigned int)pbVar10[4] | ((unsigned int)pbVar10[5] << 4) | ((unsigned int)pbVar10[0xe] << 0x14) |
              ((unsigned int)pbVar10[0xf] << 0x18);
    puVar9[1] = *(unsigned short *)(pbVar10 + 0x16) | 0x804f0000;
    puVar9[2] = ((unsigned int)pbVar10[3] << 8) | ((unsigned int)pbVar10[10] << 0xc) |
                (unsigned int)pbVar10[1] | ((unsigned int)pbVar10[2] << 4) | ((unsigned int)pbVar10[0xb] << 0x10) |
                ((unsigned int)pbVar10[0xc] << 0x14);
    puVar9[3] = (unsigned int)*pbVar10 | ((unsigned int)pbVar10[9] << 0x10);
    puVar9[4] = (*(unsigned int *)(pbVar10 + 0x12) & 0xffffff) | ((unsigned int)pbVar10[0x15] << 0x18);
    puVar9[5] = (unsigned int)pbVar10[7] | ((unsigned int)pbVar10[0x10] << 0x10);
    param_2 = puVar9 + 6;
    temp_v8 = temp_v9;
  } while (temp_v9 < 6);
  temp_v0 = *(unsigned char *)(param_1 + 0x20);
  temp_v1 = *(unsigned char *)(param_1 + 0x38);
  temp_v2 = *(unsigned char *)(param_1 + 0x29);
  temp_v3 = *(unsigned char *)(param_1 + 0x41);
  temp_v4 = *(unsigned char *)(param_1 + 0x50);
  temp_v5 = *(unsigned char *)(param_1 + 0x59);
  temp_v6 = *(unsigned char *)(param_1 + 0x68);
  temp_v7 = *(unsigned char *)(param_1 + 0x71);
  puVar9[7] = 0x200e0;
  puVar9[6] = ((unsigned int)temp_v4 << 10) | ((unsigned int)temp_v5 << 0xe) |
              ((unsigned int)temp_v0 << 8) | ((unsigned int)temp_v2 << 0xc) | ((unsigned int)temp_v1 << 9) | ((unsigned int)temp_v3 << 0xd)
              | ((unsigned int)temp_v6 << 0xb) | ((unsigned int)temp_v7 << 0xf);
  puVar9[8] = (*(unsigned int *)(param_1 + 0x90) & 0xffffff) | ((unsigned int)*(unsigned char *)(param_1 + 0x93) << 0x18);
  puVar9[9] = 0xf00fd;
  return puVar9 + 10;
}

} /* extern "C" */
