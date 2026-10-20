/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00183f58` (_code @ 0x183f58, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_4_stack;

extern int DAT_0057f0c8; /* 0x57f0c8 */


void FUN_00183f58(unsigned int param_1,int param_2,int param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f0c8;
  if (param_1 >= 6) {
    return;
  }
  if (DAT_0057f0c8 == 0) {
    return;
  }
  if (param_4 != 0) {
    temp_v1 = *(int *)(param_1 * 4 + 0x57f0d8);
    if (temp_v1 < 0) {
      param_4 = 0;
      do {
        if (*(char *)(DAT_0057f0c8 + param_4 + 0x5d4) != '\0') {
          *(int *)(param_1 * 4 + 0x57f0d8) = param_2;
          *(int *)(param_1 * 4 + 0x57f0f0) = param_3;
          return;
        }
        param_4 = param_4 + 1;
      } while (param_4 < 6);
    }
    if (temp_v1 == param_2) {
      param_4 = *(int *)(param_1 * 4 + 0x57f0f0);
    }
    if (temp_v1 == param_2 && param_4 == param_3) {
      *(unsigned int *)(param_1 * 4 + 0x57f0d8) = 0xffffffff;
      *(unsigned int *)(param_1 * 4 + 0x57f0f0) = 0xffffffff;
    }
  }
  temp_v1 = temp_v0 + param_1 * 4;
  *(char *)(temp_v1 + 0x5ac) = (char)param_2;
  *(short *)(temp_v1 + 0x5ae) = (short)param_3;
  if ((((param_2 != 7 && param_2 != 9) && (param_2 != 10 && param_2 != 0xb)) &&
      (param_2 != 0xc && param_2 != 0xd)) &&
     ((param_2 != 0xe && param_2 != 0xf && ((param_2 != 0x10 && param_2 != 0x11) && param_2 != 0x13)
      ))) {
    temp_v0 = temp_v0 + param_1 * 0x8c;
    if (param_2 == 8) {
      *(unsigned int *)(temp_v0 + 0x3c) = 4;
      *(unsigned int *)(temp_v0 + 0x34) = 10;
      *(unsigned int *)(temp_v0 + 0x38) = 0xffffffff;
    }
    else {
      *(unsigned int *)(temp_v0 + 0x34) = 10;
      *(unsigned int *)(temp_v0 + 0x38) = 3;
      *(unsigned int *)(temp_v0 + 0x3c) = 0xffffffff;
    }
    return;
  }
  temp_v0 = temp_v0 + param_1 * 0x8c;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(temp_v0 + 0x34) = 10;
  *(unsigned int *)(temp_v0 + 0x38) = 0xffffffff;
  return;
}

} /* extern "C" */
