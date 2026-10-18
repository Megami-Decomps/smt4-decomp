/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00165088` (_code @ 0x165088, 0x318 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001517b4. */
extern int FUN_00163fd4(unsigned int);
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_00165088(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  switch(param_2) {
  default:
    return;
  case 1:
    temp_v0 = 9;
    FUN_001517b4(9,2);
    if (temp_v0 == 0) {
      temp_v0 = FUN_00163fd4(6);
      if (temp_v0 == 0) {
        FUN_00184c00(param_1 + 0x1b4,2,0);
        return;
      }
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 0x11:
  case 0x12:
  case 0x13:
    temp_v0 = 9;
    FUN_001517b4(9,2);
    if ((temp_v0 != 0) || (temp_v0 = FUN_00163fd4(6), temp_v0 != 0)) {
      *(unsigned char *)(param_1 + 0x239) = 0;
      *(unsigned char *)(param_1 + 0x351) = 0;
      param_1 = param_1 + 0x240;
    }
    else {
      FUN_00184c00(param_1 + 0x1b4,2,0);
      FUN_00184c00(param_1 + 0x2cc,2,0);
      param_1 = param_1 + 0x240;
    }
    *(unsigned char *)(param_1 + 0x85) = 0;
    return;
  case 6:
    temp_v0 = 9;
    FUN_001517b4(9,2);
    if ((temp_v0 == 0) && (temp_v0 = FUN_00163fd4(6), temp_v0 == 0)) {
      if (*(int *)(param_1 + 0x1d4) != 0x3f800000) {
        return;
      }
      FUN_00184c00(param_1 + 0x1b4,2,0);
      return;
    }
    break;
  case 7:
  case 8:
    temp_v0 = 9;
    FUN_001517b4(9,2);
    if (temp_v0 == 0) {
      temp_v0 = FUN_00163fd4(6);
      if (temp_v0 == 0) {
        FUN_00184c00(param_1 + 0x1b4,2,0);
        FUN_00184c00(param_1 + 0x4fc,2,0);
        return;
      }
    }
    *(unsigned char *)(param_1 + 0x239) = 0;
    param_1 = param_1 + 0x4fc;
    *(unsigned char *)(param_1 + 0x85) = 0;
    return;
  case 9:
    temp_v0 = 9;
    FUN_001517b4(9,2);
    if (temp_v0 == 0) {
      temp_v0 = FUN_00163fd4(6);
      if (temp_v0 == 0) {
        FUN_00184c00(param_1 + 0x1b4,2,0);
        FUN_00184c00(param_1 + 0x4fc,2,0);
        return;
      }
    }
    *(unsigned char *)(param_1 + 0x239) = 0;
    param_1 = param_1 + 0x4fc;
    *(unsigned char *)(param_1 + 0x85) = 0;
    return;
  case 10:
    temp_v0 = 9;
    FUN_001517b4(9,2);
    if (temp_v0 == 0) {
      temp_v0 = FUN_00163fd4(6);
      if (temp_v0 == 0) {
        FUN_00184c00(param_1 + 0x1b4,2,0);
        return;
      }
    }
    break;
  case 0xb:
    FUN_001846d0(param_1 + 0x1b4,7);
    FUN_001846d0(param_1 + 0x358,7);
    *(unsigned char *)(param_1 + 0x4f5) = 0;
    FUN_001846d0(param_1 + 0x18ac,7);
    return;
  case 0xc:
    temp_v0 = 0;
    do {
      if (*(char *)(param_1 + temp_v0 + 0x37) != '\0') {
        FUN_00184c00(param_1 + temp_v0 * 0x8c + 0x588,5,0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 5);
    *(unsigned int *)(param_1 + 0x28) = 0;
    return;
  case 0xd:
    if (*(char *)(param_1 + 0x5c) != '\0') {
      FUN_00184c00(param_1 + *(short *)(param_1 + 0x56) * 0x8c + 0x844,5,0);
    }
    *(unsigned int *)(param_1 + 0x28) = 0;
    return;
  }
  param_1 = param_1 + 0x1b4;
  *(unsigned char *)(param_1 + 0x85) = 0;
  return;
}
