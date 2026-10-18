/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00127cd8` (_code @ 0x127cd8, 0x19c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_1_stack;


void FUN_00127cd8(int param_1)

{
  short temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v2;
  int temp_v3;
  short *psVar7;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar10;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  temp_v5 = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    do {
      temp_v7 = param_1 + temp_v5 * 4;
      temp_v2 = 0x2c0;
      temp_v6 = 0x2b1;
      puVar10 = (unsigned int *)(param_1 + 0x29c);
      temp_v1 = param_1 + temp_v5 * 0x928;
      temp_v8 = *(int *)(temp_v7 + 0xc);
      puVar3 = (unsigned int *)(temp_v1 + 0x368);
      if (*(char *)(temp_v8 + 6) != '\0') {
        temp_v2 = 0x290;
        temp_v6 = 0x281;
        puVar10 = (unsigned int *)(param_1 + 0x2a0);
      }
      temp_v3 = *(int *)(temp_v8 + 0x18);
      temp_v4 = 0;
      if (*(int *)(temp_v8 + 0x1c) != 0) {
        do {
          psVar7 = (short *)(temp_v3 + temp_v8 + temp_v4 * 0x14);
          temp_v0 = *psVar7;
          if (temp_v0 != 0) {
            if (temp_v0 != 1) {
              if (temp_v0 == 2) {
                *puVar3 = (unsigned int)(unsigned short)psVar7[1];
                puVar3[1] = temp_v2 | 0x803f0000;
                puVar3[2] = ((*(unsigned int *)(psVar7 + 6) & 0xffffff) >> 0x10) |
                            (*(int *)(psVar7 + 8) << 8);
                puVar3[3] = ((*(unsigned int *)(psVar7 + 4) >> 8) & 0xffff) + *(int *)(psVar7 + 6) * 0x10000
                ;
                puVar3[4] = (*(unsigned int *)(psVar7 + 2) & 0xffffff) | (*(int *)(psVar7 + 4) << 0x18);
                puVar3[5] = 0xead0fead;
                puVar4 = puVar3 + 5;
                puVar3 = puVar4 + 1;
              }
            }
            else {
              puVar4 = puVar3 + 1;
              *puVar3 = (*(int *)(psVar7 + 6) << 0x10) | (*(int *)(psVar7 + 8) << 0x18) |
                        *(unsigned int *)(psVar7 + 2) | (*(int *)(psVar7 + 4) << 8);
              *puVar4 = ((unsigned int)(unsigned short)psVar7[1] + temp_v6) | 0xf0000;
              puVar3 = puVar4 + 1;
            }
          }
          else {
            *puVar10 = *puVar10 | ((*(unsigned int *)(psVar7 + 2) & 1) << ((unsigned short)psVar7[1] & 0xff));
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < *(unsigned int *)(temp_v8 + 0x1c));
      }
      temp_v5 = temp_v5 + 1;
      *(int *)(temp_v7 + 0x12868) = ((int)puVar3 + (-0x368 - temp_v1)) >> 2;
    } while (temp_v5 < (int)(unsigned int)*(unsigned char *)(param_1 + 8));
  }
  return;
}
