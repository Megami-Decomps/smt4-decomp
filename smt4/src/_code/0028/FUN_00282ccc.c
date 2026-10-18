/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282ccc` (_code @ 0x282ccc, 0x1a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0029e908. */
extern int FUN_0029efa8(int);
extern int FUN_002a8740(void);
extern int FUN_002a8764(void);


int FUN_00282ccc(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0043dcf0;
  temp_v3 = *(int *)(DAT_0043dcf0 + 0x20);
  if (temp_v3 != 6) {
    param_3 = *(int *)(DAT_0043dcf0 + 0x1c);
  }
  if (!(temp_v3 == 6 || param_3 == 6)) {
    if (!(temp_v3 == 4 || param_3 == 4)) {
      if (temp_v3 != 8 && param_3 != 8) {
        if (temp_v3 != 10 && param_3 != 10) {
          temp_v0 = FUN_002a8740();
          return (int)*(short *)(temp_v0 + 0x46);
        }
        temp_v0 = (int)*(short *)(DAT_0043dcf0 + 0x38);
        if (temp_v0 < 0) {
          return -1;
        }
        temp_v0 = FUN_002a8740();
        return (int)*(short *)(temp_v0 + 0x46);
      }
      temp_v3 = DAT_0043dcf0 + 0xa08;
      if (*(char *)(DAT_0043dcf0 + 0x42) != '\0') {
        temp_v3 = DAT_0043dcf0 + 0xa6c;
      }
      temp_v1 = FUN_0029efa8(temp_v3);
      if (0 < temp_v1) {
        if (*(char *)(temp_v0 + 0x42) != '\0') {
          temp_v1 = FUN_0029e908();
          temp_v3 = FUN_0029efa8(temp_v3);
          temp_v1 = temp_v1 + temp_v3 * 4;
        }
        else {
          temp_v2 = FUN_0029efa8(temp_v3);
          temp_v4 = *(int *)(temp_v0 + 0x2c);
          temp_v1 = FUN_0029e908(temp_v3);
          temp_v1 = temp_v1 + temp_v2 * 4 + temp_v4 * 0xc;
        }
        temp_v1 = temp_v1 - 4;
        goto LAB_00282e44;
      }
      temp_v0 = FUN_0029e908(temp_v3);
    }
    else {
      temp_v0 = FUN_0029e908(DAT_0043dcf0 + 0x8dc);
    }
    if (temp_v0 == 0) {
      return -1;
    }
    temp_v3 = FUN_002a8764();
    temp_v0 = (int)*(char *)(temp_v3 + temp_v0 + 0x9107);
  }
  else {
    if (*(char *)(DAT_0043dcf0 + 0x42) != '\0') {
      temp_v3 = DAT_0043dcf0 + 0x9a4;
      temp_v1 = FUN_0029e908();
      temp_v3 = FUN_0029efa8(temp_v3);
      temp_v1 = temp_v1 + temp_v3 * 4;
    }
    else {
      temp_v3 = FUN_0029efa8(DAT_0043dcf0 + 0x940);
      temp_v2 = *(int *)(temp_v0 + 0x2c);
      temp_v1 = FUN_0029e908(temp_v0 + 0x940);
      temp_v1 = temp_v1 + temp_v3 * 4 + temp_v2 * 0xc;
    }
LAB_00282e44:
    temp_v0 = *(int *)(temp_v0 + temp_v1 * 8 + 0x738);
  }
  if (temp_v0 < 0) {
    return -1;
  }
  temp_v0 = FUN_002a8740();
  return (int)*(short *)(temp_v0 + 0x46);
}
