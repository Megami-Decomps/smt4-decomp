/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00496a0c` (_code @ 0x496a0c, 0x618 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int screenShowMessage(...);
int FUN_00493e14(...);
int FUN_004964e0(...);
int FUN_004cfeb0(...);
int FUN_004cff88(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char LAB_0049cf3c; /* 0x49cf3c */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: screenShowMessage. */
extern int FUN_00481100(unsigned int);
/* Supplied declaration required: FUN_00493e14. */
/* Supplied declaration required: FUN_004964e0. */
extern int FUN_004cfe4c(int);
/* Supplied declaration required: FUN_004cfeb0. */
/* Supplied declaration required: FUN_004cff88. */


void FUN_00496a0c(int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  *(unsigned short *)(param_1 + 0x9f84) = 0;
  temp_v4 = 0x30d;
  temp_v0 = *(int *)(param_1 + 0xb44);
  temp_v3 = 0x12d;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          temp_v4 = 1;
          do {
            temp_v0 = FUN_00481100(temp_v4);
            if (temp_v0 != 0) {
              FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
            }
            temp_v4 = temp_v4 + 1;
          } while ((int)temp_v4 < 0x3d);
          temp_v4 = 0x79f;
          do {
            temp_v0 = FUN_00481100(temp_v4);
            if (temp_v0 != 0) {
              FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
            }
            temp_v4 = temp_v4 + 1;
          } while ((int)temp_v4 < 0x7df);
        }
      }
      else {
        do {
          temp_v0 = FUN_00481100(temp_v3);
          if (temp_v0 != 0) {
            FUN_00493e14(param_1 + 0x8f84,temp_v3 & 0xffff,0,0,0);
          }
          temp_v3 = temp_v3 + 1;
        } while ((int)temp_v3 < 0x1a5);
        temp_v4 = 0x1a5;
        do {
          temp_v0 = FUN_00481100(temp_v4);
          if (temp_v0 != 0) {
            FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
          }
          temp_v4 = temp_v4 + 1;
        } while ((int)temp_v4 < 0x21d);
        temp_v4 = 0x21d;
        do {
          temp_v0 = FUN_00481100(temp_v4);
          if (temp_v0 != 0) {
            FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
          }
          temp_v4 = temp_v4 + 1;
        } while ((int)temp_v4 < 0x295);
        temp_v4 = 0x295;
        do {
          temp_v0 = FUN_00481100(temp_v4);
          if (temp_v0 != 0) {
            FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
          }
          temp_v4 = temp_v4 + 1;
        } while ((int)temp_v4 < 0x30d);
      }
    }
    else {
      temp_v3 = 0x3d;
      do {
        temp_v0 = FUN_00481100(temp_v3);
        if (temp_v0 != 0) {
          FUN_00493e14(param_1 + 0x8f84,temp_v3 & 0xffff,0,0,0);
        }
        temp_v3 = temp_v3 + 1;
      } while ((int)temp_v3 < 0xb5);
      temp_v3 = 0xb5;
      do {
        temp_v0 = FUN_00481100(temp_v3);
        if (temp_v0 != 0) {
          FUN_00493e14(param_1 + 0x8f84,temp_v3 & 0xffff,0,0,0);
        }
        temp_v3 = temp_v3 + 1;
      } while ((int)temp_v3 < 0x12d);
      do {
        temp_v0 = FUN_00481100(temp_v4);
        if (temp_v0 != 0) {
          FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < 0x33f);
    }
  }
  else {
    temp_v0 = param_1 + 0x8f84;
    temp_v2 = 1;
    do {
      temp_v1 = FUN_00481100(temp_v2);
      if (temp_v1 != 0) {
        FUN_00493e14(temp_v0,temp_v2 & 0xffff,0,0,0);
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0x3d);
    temp_v0 = param_1 + 0x8f84;
    temp_v2 = 0x3d;
    do {
      temp_v1 = FUN_00481100(temp_v2);
      if (temp_v1 != 0) {
        FUN_00493e14(temp_v0,temp_v2 & 0xffff,0,0,0);
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0xb5);
    temp_v0 = param_1 + 0x8f84;
    temp_v2 = 0xb5;
    do {
      temp_v1 = FUN_00481100(temp_v2);
      if (temp_v1 != 0) {
        FUN_00493e14(temp_v0,temp_v2 & 0xffff,0,0,0);
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0x12d);
    do {
      temp_v0 = FUN_00481100(temp_v4);
      if (temp_v0 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0x33f);
    do {
      temp_v0 = FUN_00481100(temp_v3);
      if (temp_v0 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v3 & 0xffff,0,0,0);
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < 0x1a5);
    temp_v4 = 0x1a5;
    do {
      temp_v0 = FUN_00481100(temp_v4);
      if (temp_v0 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0x21d);
    temp_v4 = 0x21d;
    do {
      temp_v0 = FUN_00481100(temp_v4);
      if (temp_v0 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0x295);
    temp_v4 = 0x295;
    do {
      temp_v0 = FUN_00481100(temp_v4);
      if (temp_v0 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0x30d);
    temp_v4 = 0x79f;
    do {
      temp_v0 = FUN_00481100(temp_v4);
      if (temp_v0 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0x7df);
  }
  qsort(param_1 + 0x8f84,*(unsigned short *)(param_1 + 0x9f84),4,&LAB_0049cf3c);
  FUN_004cfeb0(param_1 + 0xf00,10,*(unsigned short *)(param_1 + 0x9f84),0,1,1);
  *(unsigned char *)(param_1 + 0xf0d) = 1;
  FUN_004cff88(param_1 + 0xf00,0);
  FUN_004964e0(param_1,param_2);
  temp_v0 = *(int *)(param_1 + 0xb40);
  temp_v1 = FUN_004cfe4c(param_1 + temp_v0 * 0x74 + 0xb60);
  screenShowMessage(*(unsigned short *)(param_1 + temp_v0 * 0x1002 + 0xf74 + temp_v1 * 4));
  return;
}

} /* extern "C" */
