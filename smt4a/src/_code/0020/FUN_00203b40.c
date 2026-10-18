/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00203b40` (_code @ 0x203b40, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00280468. */
/* Supplied declaration required: FUN_0036ba44. */
/* Supplied declaration required: FUN_003ae918. */
extern long long aeabi_idivmod(int, int, int, int, int);


void FUN_00203b40(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  long long temp_v3;
  
  temp_v2 = param_5 != 0;
  temp_v1 = 0;
  if (temp_v2) {
    temp_v1 = param_4 - 1;
  }
  if ((temp_v2 && param_4 != 1) && temp_v1 < 0 == (temp_v2 && SBORROW4(param_4,1))) {
    param_5 = 0;
  }
  if (0 < param_2) {
    temp_v1 = param_3;
    if ((param_4 == 1) && (param_2 < param_3)) {
      temp_v1 = param_2;
    }
    *(int *)(param_1 + 0x50) = param_2;
    *(unsigned char *)(param_1 + 0x62) = 0;
    temp_v3 = aeabi_idivmod(param_2,param_4,param_3,param_4,param_4);
    temp_v0 = (int)temp_v3;
    if (0xffffffff < temp_v3) {
      temp_v0 = temp_v0 + 1;
    }
    if (param_5 != 0) {
      FUN_00280468(param_1,temp_v1,temp_v0);
      FUN_0036ba44(param_1,6,5,3,4);
      if (param_6 != 0) {
        FUN_003ae918(param_1,0xf,0xe,0xc,0xd);
      }
    }
    else {
      FUN_00280468(param_1,temp_v1,temp_v0);
      FUN_0036ba44(param_1,6,5,0x20,0x20);
      if (param_6 != 0) {
        FUN_003ae918(param_1,0xf,0xe,0x20,0x20);
      }
    }
    if ((temp_v1 == 1) && (param_4 >= 2)) {
      if (param_2 < param_4) {
        param_4 = param_2;
      }
      FUN_00280468(param_1 + 0x28,param_4,*(unsigned int *)(param_1 + 0x50));
    }
    else {
      FUN_00280468(param_1 + 0x28,param_4);
    }
    FUN_0036ba44(param_1 + 0x28,3,4,0x20,0x20);
    if (param_6 != 0) {
      FUN_003ae918(param_1 + 0x28,0xc,0xd,0x20,0x20);
    }
    *(unsigned short *)(param_1 + 0x5c) = 0;
    *(unsigned short *)(param_1 + 0x5e) = 0;
    *(unsigned int *)(param_1 + 0x14) = 1;
    *(unsigned int *)(param_1 + 0x3c) = 1;
    return;
  }
  *(unsigned char *)(param_1 + 0x62) = 1;
  return;
}
