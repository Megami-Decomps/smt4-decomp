/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004baa7c` (_code @ 0x4baa7c, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00284dc4(unsigned short);


void FUN_004baa7c(int param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_1 + *(int *)(param_1 + 0x7e8) * 4 + 0x7ec) = param_2;
  temp_v2 = *(int *)(param_1 + 0x7e8);
  if (temp_v2 >= 0x40) {
    *(int *)(param_1 + 0x7e8) = *(int *)(param_1 + 0x7e8) + 1;
    return;
  }
  temp_v1 = 0xffffffff;
  switch(*(unsigned char *)(param_2 + 0x21)) {
  case 1:
    if (param_3 != 1) {
      if (param_3 != 3) {
        temp_v1 = 0x1b5a;
        break;
      }
      if (*(unsigned char *)(param_2 + 0x20) == 0xff) {
        temp_v1 = 0x1b59;
        *(unsigned int *)(param_1 + temp_v2 * 4 + 0x8ec) = temp_v1;
        *(int *)(param_1 + 0x7e8) = *(int *)(param_1 + 0x7e8) + 1;
        return;
      }
      temp_v1 = 0x1b5a;
      goto LAB_004bab8c;
    }
    if (*(unsigned char *)(param_2 + 0x20) != 0xff) {
      temp_v1 = 0x1b5a;
      break;
    }
    temp_v1 = 0x1b59;
    *(unsigned int *)(param_1 + temp_v2 * 4 + 0x8ec) = temp_v1;
    *(int *)(param_1 + 0x7e8) = *(int *)(param_1 + 0x7e8) + 1;
    return;
  case 2:
    temp_v1 = 0x1b5a;
    break;
  case 3:
    temp_v1 = 0x1b5e;
    break;
  case 4:
    temp_v1 = 0x1b5f;
    break;
  case 5:
    temp_v0 = FUN_00284dc4(*(unsigned short *)(param_2 + 0x56));
    if (temp_v0 != 0) {
      temp_v1 = 0x1bc6;
    }
    break;
  case 6:
    temp_v1 = 0x1b5c;
    break;
  case 9:
    temp_v0 = FUN_00284dc4(*(unsigned short *)(param_2 + 0x54));
    if (temp_v0 != 0) {
      temp_v1 = 0x1bc6;
    }
    break;
  case 10:
    temp_v1 = 0x1bc8;
  }
  if (param_3 == 3) {
LAB_004bab8c:
    if (*(char *)(param_2 + 0x20) == '\x05') {
      temp_v1 = 0x1b5c;
    }
    else if (*(char *)(param_2 + 0x20) == '\x01') {
      temp_v1 = 0x1bc8;
    }
  }
  *(unsigned int *)(param_1 + temp_v2 * 4 + 0x8ec) = temp_v1;
  *(int *)(param_1 + 0x7e8) = *(int *)(param_1 + 0x7e8) + 1;
  return;
}

} /* extern "C" */
