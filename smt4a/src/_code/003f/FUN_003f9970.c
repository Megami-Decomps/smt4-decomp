/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f9970` (_code @ 0x3f9970, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;


void FUN_003f9970(int param_1,int param_2,unsigned int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  *(unsigned int *)(param_1 + 0x360) = param_3;
  if (param_3 >= 10) {
    param_3 = 9;
    *(unsigned int *)(param_1 + 0x360) = 9;
  }
  temp_v3 = 0;
  if (0 < (int)param_3) {
    do {
      temp_v2 = temp_v3 + 1;
      puVar5 = (unsigned int *)(param_2 + temp_v3 * 0x18);
      temp_v3 = param_1 + temp_v3 * 0x60;
      temp_v4 = puVar5[1];
      temp_v5 = puVar5[2];
      temp_v6 = puVar5[3];
      temp_v7 = puVar5[4];
      temp_v8 = puVar5[5];
      *(unsigned int *)(temp_v3 + 0x48) = *puVar5;
      *(unsigned int *)(temp_v3 + 0x4c) = temp_v4;
      *(unsigned int *)(temp_v3 + 0x50) = temp_v5;
      *(unsigned int *)(temp_v3 + 0x54) = temp_v6;
      *(unsigned int *)(temp_v3 + 0x58) = temp_v7;
      *(unsigned int *)(temp_v3 + 0x5c) = temp_v8;
      temp_v3 = temp_v2;
    } while (temp_v2 < *(int *)(param_1 + 0x360));
  }
  *(unsigned int *)(param_1 + 0x364) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x368) = 0xffffffff;
  temp_v3 = 0;
  if (temp_v3 < *(int *)(param_1 + 0x360)) {
    do {
      temp_v2 = param_1 + temp_v3 * 0x60;
      temp_v0 = 0;
      *(unsigned int *)(temp_v2 + 0x40) = 0;
      *(unsigned char *)(temp_v2 + 0x44) = 1;
      *(unsigned int *)(temp_v2 + 0x38) = 0;
      *(unsigned int *)(temp_v2 + 0x3c) = 0;
      while( 1 ) {
        if (((unsigned int)*(unsigned short *)(temp_v2 + 0x58) & (1 << (temp_v0 & 0xff))) != 0) {
          *(unsigned int *)(temp_v2 + *(int *)(temp_v2 + 0x38) * 4) = temp_v0;
          *(int *)(temp_v2 + 0x38) = *(int *)(temp_v2 + 0x38) + 1;
        }
        temp_v0 = temp_v0 + 1;
        if ((int)temp_v0 >= 0xe) break;
        while (temp_v0 == 2) {
          temp_v0 = 3;
        }
      }
      if (*(char *)(temp_v2 + 0x4c) != '\0') {
        if (*(int *)(temp_v2 + 0x50) != 1) {
          temp_v1 = *(int *)(param_1 + 0x368);
          if (*(int *)(param_1 + 0x368) <= *(int *)(temp_v2 + 0x54)) {
            temp_v1 = *(int *)(temp_v2 + 0x54);
          }
          *(int *)(param_1 + 0x368) = temp_v1;
        }
        else {
          temp_v1 = *(int *)(param_1 + 0x364);
          if (*(int *)(param_1 + 0x364) <= *(int *)(temp_v2 + 0x54)) {
            temp_v1 = *(int *)(temp_v2 + 0x54);
          }
          *(int *)(param_1 + 0x364) = temp_v1;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *(int *)(param_1 + 0x360));
  }
  *(int *)(param_1 + 0x364) = *(int *)(param_1 + 0x364) + 1;
  *(int *)(param_1 + 0x368) = *(int *)(param_1 + 0x368) + 1;
  return;
}
