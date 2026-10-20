/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041e7c0` (_code @ 0x41e7c0, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00228b04(int, int);
int FUN_002a4860(int);
int FUN_002a48e0(int, int);
int FUN_002f0384(int);
int flaggedEntrySetValueA(int, int);
int SBORROW4(int, int);

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_002a4860. */
/* Supplied declaration required: FUN_002a48e0. */
extern int FUN_002bedac(unsigned int);
extern int FUN_002c2c68(int);
/* Supplied declaration required: FUN_002f0384. */
extern int flaggedEntryGetValueA(int);
/* Supplied declaration required: flaggedEntrySetValueA. */


void FUN_0041e7c0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_002bedac(5);
  if ((((temp_v0 != 0) || (temp_v0 = FUN_002bedac(6), temp_v0 != 0)) ||
      (temp_v0 = FUN_002bedac(4), temp_v0 != 0)) ||
     (((temp_v0 = FUN_002bedac(3), temp_v0 != 0 || (temp_v0 = FUN_002bedac(0xc), temp_v0 != 0)) ||
      ((temp_v0 = FUN_002bedac(0xd), temp_v0 != 0 ||
       ((temp_v0 = FUN_002bedac(0xe), temp_v0 != 0 || (temp_v0 = FUN_002bedac(0xf), temp_v0 != 0)))))))) {
    *(unsigned char *)(param_1 + 0x30c) = 0;
  }
  temp_v0 = param_1 + 0x3d8;
  FUN_00228b04(temp_v0,1);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002a4860(param_1 + 0x3d8);
    temp_v1 = flaggedEntryGetValueA(param_1 + 0x3d8);
    temp_v2 = FUN_002c2c68(param_1 + 0x3d8);
    temp_v5 = *(int *)(param_1 + 0x300);
    temp_v3 = temp_v0 + temp_v1 + temp_v5;
    *(int *)(param_1 + 0x2f8) = temp_v3;
    if (((temp_v1 < 1) && (temp_v5 + 1 <= temp_v3)) && (*(int *)(param_1 + 0x2fc) < temp_v3)) {
      FUN_002a48e0(param_1 + 0x3d8,temp_v0 - 1);
      flaggedEntrySetValueA(param_1 + 0x3d8,1);
    }
    else if (0 < temp_v1) {
      temp_v5 = temp_v5 + (temp_v2 - 1);
      temp_v1 = temp_v5 - temp_v3;
      if (temp_v3 < temp_v5) {
        temp_v5 = *(int *)(param_1 + 0x2fc);
        temp_v1 = temp_v5 - temp_v3;
      }
      if (temp_v5 != temp_v3 && temp_v1 < 0 == SBORROW4(temp_v5,temp_v3)) {
        FUN_002a48e0(param_1 + 0x3d8,temp_v0 + 1);
        flaggedEntrySetValueA(param_1 + 0x3d8,0);
      }
    }
    temp_v4 = FUN_002a4860(param_1 + 0x3d8);
    *(unsigned int *)(param_1 + 0x304) = temp_v4;
    temp_v0 = flaggedEntryGetValueA(param_1 + 0x3d8);
    *(int *)(param_1 + 0x308) = temp_v0;
    *(unsigned int *)(param_1 + 0x2fc) = *(unsigned int *)(param_1 + 0x2f8);
    *(int *)(param_1 + 0x2f8) = temp_v0 + *(int *)(param_1 + 0x304) + *(int *)(param_1 + 0x300);
    *(unsigned char *)(param_1 + 0x30c) = 1;
    FUN_002f0384(0);
    *(unsigned char *)(param_1 + 0x68) = 0;
    temp_v0 = 0;
    if (temp_v0 < *(int *)(param_1 + 0x18)) {
      do {
        temp_v2 = *(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x304) + temp_v0;
        temp_v1 = param_1 + temp_v0 * 0x44;
        temp_v0 = temp_v0 + 1;
        if (temp_v2 >= 1) {
          *(unsigned int *)(temp_v1 + 0x6a0) = 0x86;
          *(unsigned int *)(temp_v1 + 0x6a4) = 0x98;
        }
        else {
          *(unsigned int *)(temp_v1 + 0x6a0) = 0x85;
          *(unsigned int *)(temp_v1 + 0x6a4) = 0x97;
        }
      } while (temp_v0 < *(int *)(param_1 + 0x18));
    }
  }
  return;
}

} /* extern "C" */
