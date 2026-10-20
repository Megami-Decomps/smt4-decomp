/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fe3e8` (_code @ 0x3fe3e8, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001630d4(int, int, int, int, int);
int FUN_0045aee0(int, unsigned int, int);
int FUN_0045af14(int, unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0045aee0. */
/* Supplied declaration required: FUN_0045af14. */


void FUN_003fe3e8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned long long temp_v8;
  
  temp_v0 = *(int *)(param_1 + 0x20c);
  temp_v7 = temp_v0 == 0;
  if (!temp_v7) {
    temp_v0 = temp_v0 + 0xc;
    temp_v7 = temp_v0 == 0;
  }
  if (!temp_v7) {
    temp_v6 = 0;
    temp_v1 = 0;
    temp_v5 = (unsigned int)*(unsigned short *)(*(int *)(temp_v0 + 0x30) + 100);
    if (temp_v5 != 0) {
      do {
        temp_v4 = temp_v1 * 4;
        temp_v1 = temp_v1 + 1;
        temp_v4 = *(int *)(*(int *)(*(int *)(*(int *)(temp_v0 + 0x30) + 0x60) + temp_v4) + 0x10);
        if (temp_v6 < temp_v4) {
          temp_v6 = temp_v4;
        }
      } while (temp_v1 < (int)temp_v5);
    }
    temp_v0 = 0;
    temp_v8 = 0;
    do {
      temp_v1 = param_1 + temp_v0 * 0x30;
      *(unsigned int *)(temp_v1 + 0x24) = 0;
      *(int *)(temp_v1 + 0x28) = (int)temp_v8;
      *(int *)(temp_v1 + 0x2c) = (int)temp_v8;
      *(unsigned int *)(temp_v1 + 0x30) = 0;
      *(unsigned int *)(temp_v1 + 0x34) = 0;
      *(unsigned int *)(temp_v1 + 0x50) = 0;
      *(unsigned char *)(temp_v1 + 0x44) = 1;
      *(int *)(temp_v1 + 0x40) = temp_v6;
      if (0 < temp_v6) {
        temp_v2 = 0x10000;
        FUN_001630d4(0x10000,0x100,0,temp_v6 << 1,1);
        *(unsigned int *)(temp_v1 + 0x34) = temp_v2;
        FUN_0045aee0(temp_v1 + 0x38,temp_v2,temp_v6);
      }
      temp_v2 = (unsigned int)temp_v8;
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
    temp_v6 = *(int *)(*(int *)(param_1 + 0x108) + 8);
    temp_v0 = temp_v6 * 0xc;
    if (temp_v0 == 0) {
      *(unsigned int *)(param_1 + 0x10) = 0;
    }
    else {
      temp_v3 = 0x10000;
      FUN_001630d4(0x10000,0x100,0,temp_v0,1);
      *(unsigned int *)(param_1 + 0x10) = temp_v3;
      FUN_0045af14(param_1 + 8,temp_v3,temp_v6 * 3);
    }
    *(unsigned char *)(param_1 + 0x20) = 0;
    *(unsigned int *)(param_1 + 0x14) = temp_v2;
    *(unsigned int *)(param_1 + 0x18) = temp_v2;
  }
  return;
}

} /* extern "C" */
