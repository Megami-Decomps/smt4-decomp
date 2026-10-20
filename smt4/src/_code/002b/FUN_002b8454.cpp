/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8454` (_code @ 0x2b8454, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_4_stack;

extern int DAT_0043da2c; /* 0x43da2c */


void FUN_002b8454(unsigned int param_1,int param_2,int param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043da2c;
  if (param_1 >= 6) {
    return;
  }
  if (DAT_0043da2c == 0) {
    return;
  }
  if (param_4 != 0) {
    temp_v1 = *(int *)(param_1 * 4 + 0x43da50);
    if (temp_v1 < 0) {
      param_4 = 0;
      do {
        if (*(char *)(DAT_0043da2c + param_4 + 0x4b8) != '\0') {
          *(int *)(param_1 * 4 + 0x43da50) = param_2;
          *(int *)(param_1 * 4 + 0x43da68) = param_3;
          return;
        }
        param_4 = param_4 + 1;
      } while (param_4 < 6);
    }
    if (temp_v1 == param_2) {
      param_4 = *(int *)(param_1 * 4 + 0x43da68);
    }
    if (temp_v1 == param_2 && param_4 == param_3) {
      *(unsigned int *)(param_1 * 4 + 0x43da50) = 0xffffffff;
      *(unsigned int *)(param_1 * 4 + 0x43da68) = 0xffffffff;
    }
  }
  temp_v1 = temp_v0 + param_1 * 4;
  *(char *)(temp_v1 + 0x494) = (char)param_2;
  *(short *)(temp_v1 + 0x496) = (short)param_3;
  if ((((param_2 != 7 && param_2 != 9) && (param_2 != 10 && param_2 != 0xb)) &&
      (param_2 != 0xc && param_2 != 0xd)) &&
     ((param_2 != 0xe && param_2 != 0xf && (param_2 != 0x10 && param_2 != 0x11)))) {
    temp_v0 = temp_v0 + param_1 * 0x8c;
    if (param_2 == 8) {
      *(unsigned int *)(temp_v0 + 0x3c) = 4;
      *(unsigned int *)(temp_v0 + 0x34) = 0x12;
      *(unsigned int *)(temp_v0 + 0x38) = 0xffffffff;
    }
    else {
      *(unsigned int *)(temp_v0 + 0x34) = 0x12;
      *(unsigned int *)(temp_v0 + 0x38) = 3;
      *(unsigned int *)(temp_v0 + 0x3c) = 0xffffffff;
    }
    return;
  }
  temp_v0 = temp_v0 + param_1 * 0x8c;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(temp_v0 + 0x34) = 0x12;
  *(unsigned int *)(temp_v0 + 0x38) = 0xffffffff;
  return;
}

} /* extern "C" */
