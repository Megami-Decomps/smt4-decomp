/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ad608` (_code @ 0x3ad608, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


void FUN_003ad608(short *param_1,unsigned short *param_2)

{
  unsigned short *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r4;
  short *psVar4;
  int temp_v2;
  short *psVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v1 = (unsigned int)*param_1;
  if ((int)temp_v1 < 1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = temp_v1 & 1;
    if (temp_v0 != 0) {
      unaff_r4 = (unsigned int)*param_2;
    }
    temp_v2 = 0;
    if (temp_v0 != 0) {
      do {
        if ((unsigned short)param_1[temp_v2 * 0x10 + 2] == unaff_r4) {
          return;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)temp_v0);
    }
  }
  if ((int)temp_v0 < (int)temp_v1) {
    psVar6 = (short *)(unsigned int)*param_2;
    do {
      psVar4 = param_1 + temp_v0 * 0x10;
      puVar1 = (unsigned short *)(psVar4 + 2);
      if ((short *)(unsigned int)*puVar1 != psVar6) {
        psVar4 = (short *)(unsigned int)(unsigned short)psVar4[0x12];
      }
      if ((short *)(unsigned int)*puVar1 == psVar6 || psVar4 == psVar6) {
        return;
      }
      temp_v0 = temp_v0 + 2;
    } while ((int)temp_v0 < (int)temp_v1);
  }
  temp_v3 = *(unsigned int *)(param_2 + 2);
  temp_v4 = *(unsigned int *)(param_2 + 4);
  temp_v5 = *(unsigned int *)(param_2 + 6);
  temp_v6 = *(unsigned int *)(param_2 + 8);
  temp_v7 = *(unsigned int *)(param_2 + 10);
  temp_v8 = *(unsigned int *)(param_2 + 0xc);
  temp_v9 = *(unsigned int *)(param_2 + 0xe);
  *(unsigned int *)(param_1 + temp_v1 * 0x10 + 2) = *(unsigned int *)param_2;
  *(unsigned int *)(param_1 + temp_v1 * 0x10 + 4) = temp_v3;
  *(unsigned int *)(param_1 + temp_v1 * 0x10 + 6) = temp_v4;
  *(unsigned int *)(param_1 + temp_v1 * 0x10 + 8) = temp_v5;
  *(unsigned int *)(param_1 + temp_v1 * 0x10 + 10) = temp_v6;
  *(unsigned int *)(param_1 + temp_v1 * 0x10 + 0xc) = temp_v7;
  *(unsigned int *)(param_1 + temp_v1 * 0x10 + 0xe) = temp_v8;
  *(unsigned int *)(param_1 + temp_v1 * 0x10 + 0x10) = temp_v9;
  *param_1 = *param_1 + 1;
  return;
}

} /* extern "C" */
