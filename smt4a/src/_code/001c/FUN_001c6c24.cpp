/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c6c24` (_code @ 0x1c6c24, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;


void FUN_001c6c24(int param_1)

{
  short temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  short *psVar6;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar10;
  int temp_v6;
  int temp_v7;
  
  temp_v6 = 0;
  temp_v4 = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    do {
      temp_v7 = *(int *)(param_1 + temp_v4 * 4 + 0x10);
      temp_v1 = 0x2c0;
      puVar2 = (unsigned int *)(*(int *)(param_1 + 0xb4) + temp_v6 * 4);
      temp_v5 = 0x2b1;
      puVar10 = (unsigned int *)(param_1 + 0xa4);
      if (*(char *)(temp_v7 + 6) != '\0') {
        temp_v1 = 0x290;
        temp_v5 = 0x281;
        puVar10 = (unsigned int *)(param_1 + 0xa8);
      }
      temp_v2 = *(int *)(temp_v7 + 0x18);
      temp_v3 = 0;
      if (*(int *)(temp_v7 + 0x1c) != 0) {
        do {
          psVar6 = (short *)(temp_v2 + temp_v7 + temp_v3 * 0x14);
          temp_v0 = *psVar6;
          if (temp_v0 != 0) {
            if (temp_v0 != 1) {
              if (temp_v0 == 2) {
                *puVar2 = (unsigned int)(unsigned short)psVar6[1];
                puVar2[1] = temp_v1 | 0x803f0000;
                puVar2[2] = ((*(unsigned int *)(psVar6 + 6) & 0xffffff) >> 0x10) |
                            (*(int *)(psVar6 + 8) << 8);
                puVar2[3] = ((*(unsigned int *)(psVar6 + 4) >> 8) & 0xffff) + *(int *)(psVar6 + 6) * 0x10000
                ;
                puVar2[4] = (*(unsigned int *)(psVar6 + 2) & 0xffffff) | (*(int *)(psVar6 + 4) << 0x18);
                puVar2[5] = 0xead0fead;
                puVar3 = puVar2 + 5;
                puVar2 = puVar3 + 1;
              }
            }
            else {
              puVar3 = puVar2 + 1;
              *puVar2 = (*(int *)(psVar6 + 6) << 0x10) | (*(int *)(psVar6 + 8) << 0x18) |
                        *(unsigned int *)(psVar6 + 2) | (*(int *)(psVar6 + 4) << 8);
              *puVar3 = ((unsigned int)(unsigned short)psVar6[1] + temp_v5) | 0xf0000;
              puVar2 = puVar3 + 1;
            }
          }
          else {
            *puVar10 = *puVar10 | ((*(unsigned int *)(psVar6 + 2) & 1) << ((unsigned short)psVar6[1] & 0xff));
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < *(unsigned int *)(temp_v7 + 0x1c));
      }
      temp_v5 = temp_v4 * 4;
      temp_v4 = temp_v4 + 1;
      temp_v6 = temp_v6 + *(int *)(*(int *)(param_1 + 0xb8) + temp_v5);
    } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(param_1 + 0xc));
  }
  return;
}

} /* extern "C" */
