/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004969a8` (_code @ 0x4969a8, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(...);
int FUN_0028a888(...);
int FUN_002a1f60(...);
int FUN_00493e14(...);
int FUN_004964e0(...);
int FUN_00499d14(void);
int FUN_004cfeb0(...);
int FUN_004cff88(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_0049cf3c; /* 0x49cf3c */
extern unsigned int DAT_00570280; /* 0x570280 */
extern int DAT_0057f0c8; /* 0x57f0c8 */

/* Supplied declaration required: FUN_0010063a. */
/* Supplied declaration required: FUN_0028a888. */
/* Supplied declaration required: FUN_002a1f60. */
extern int FUN_0046e458(unsigned int, short);
extern int FUN_00480b08(void);
extern int FUN_00481100(unsigned int);
/* Supplied declaration required: FUN_00493e14. */
/* Supplied declaration required: FUN_004964e0. */
/* Supplied declaration required: FUN_00499d14. */
extern int FUN_004cfe4c(int);
/* Supplied declaration required: FUN_004cfeb0. */
/* Supplied declaration required: FUN_004cff88. */


void FUN_004969a8(int param_1)

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 4) = 0x10;
  *(unsigned int *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xb40) != 8) {
    if (*(char *)(param_1 + 0x18) == '\x01') {
      *(unsigned int *)(param_1 + 0xb40) = 7;
    }
    else {
      FUN_00499d14();
    }
    FUN_004964e0(param_1,1);
    return;
  }
  *(unsigned short *)(param_1 + 0x9f84) = 0;
  temp_v6 = 0x30d;
  temp_v1 = *(int *)(param_1 + 0xb44);
  temp_v5 = 0x12d;
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if (temp_v1 == 3) {
          temp_v6 = 1;
          do {
            temp_v1 = FUN_00481100(temp_v6);
            if (temp_v1 != 0) {
              FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
            }
            temp_v6 = temp_v6 + 1;
          } while ((int)temp_v6 < 0x3d);
          temp_v6 = 0x79f;
          do {
            temp_v1 = FUN_00481100(temp_v6);
            if (temp_v1 != 0) {
              FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
            }
            temp_v6 = temp_v6 + 1;
          } while ((int)temp_v6 < 0x7df);
        }
      }
      else {
        do {
          temp_v1 = FUN_00481100(temp_v5);
          if (temp_v1 != 0) {
            FUN_00493e14(param_1 + 0x8f84,temp_v5 & 0xffff,0,0,0);
          }
          temp_v5 = temp_v5 + 1;
        } while ((int)temp_v5 < 0x1a5);
        temp_v6 = 0x1a5;
        do {
          temp_v1 = FUN_00481100(temp_v6);
          if (temp_v1 != 0) {
            FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
          }
          temp_v6 = temp_v6 + 1;
        } while ((int)temp_v6 < 0x21d);
        temp_v6 = 0x21d;
        do {
          temp_v1 = FUN_00481100(temp_v6);
          if (temp_v1 != 0) {
            FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
          }
          temp_v6 = temp_v6 + 1;
        } while ((int)temp_v6 < 0x295);
        temp_v6 = 0x295;
        do {
          temp_v1 = FUN_00481100(temp_v6);
          if (temp_v1 != 0) {
            FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
          }
          temp_v6 = temp_v6 + 1;
        } while ((int)temp_v6 < 0x30d);
      }
    }
    else {
      temp_v5 = 0x3d;
      do {
        temp_v1 = FUN_00481100(temp_v5);
        if (temp_v1 != 0) {
          FUN_00493e14(param_1 + 0x8f84,temp_v5 & 0xffff,0,0,0);
        }
        temp_v5 = temp_v5 + 1;
      } while ((int)temp_v5 < 0xb5);
      temp_v5 = 0xb5;
      do {
        temp_v1 = FUN_00481100(temp_v5);
        if (temp_v1 != 0) {
          FUN_00493e14(param_1 + 0x8f84,temp_v5 & 0xffff,0,0,0);
        }
        temp_v5 = temp_v5 + 1;
      } while ((int)temp_v5 < 0x12d);
      do {
        temp_v1 = FUN_00481100(temp_v6);
        if (temp_v1 != 0) {
          FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
        }
        temp_v6 = temp_v6 + 1;
      } while ((int)temp_v6 < 0x33f);
    }
  }
  else {
    temp_v1 = param_1 + 0x8f84;
    temp_v4 = 1;
    do {
      temp_v2 = FUN_00481100(temp_v4);
      if (temp_v2 != 0) {
        FUN_00493e14(temp_v1,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0x3d);
    temp_v1 = param_1 + 0x8f84;
    temp_v4 = 0x3d;
    do {
      temp_v2 = FUN_00481100(temp_v4);
      if (temp_v2 != 0) {
        FUN_00493e14(temp_v1,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0xb5);
    temp_v1 = param_1 + 0x8f84;
    temp_v4 = 0xb5;
    do {
      temp_v2 = FUN_00481100(temp_v4);
      if (temp_v2 != 0) {
        FUN_00493e14(temp_v1,temp_v4 & 0xffff,0,0,0);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 0x12d);
    do {
      temp_v1 = FUN_00481100(temp_v6);
      if (temp_v1 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
      }
      temp_v6 = temp_v6 + 1;
    } while ((int)temp_v6 < 0x33f);
    do {
      temp_v1 = FUN_00481100(temp_v5);
      if (temp_v1 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v5 & 0xffff,0,0,0);
      }
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < 0x1a5);
    temp_v6 = 0x1a5;
    do {
      temp_v1 = FUN_00481100(temp_v6);
      if (temp_v1 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
      }
      temp_v6 = temp_v6 + 1;
    } while ((int)temp_v6 < 0x21d);
    temp_v6 = 0x21d;
    do {
      temp_v1 = FUN_00481100(temp_v6);
      if (temp_v1 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
      }
      temp_v6 = temp_v6 + 1;
    } while ((int)temp_v6 < 0x295);
    temp_v6 = 0x295;
    do {
      temp_v1 = FUN_00481100(temp_v6);
      if (temp_v1 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
      }
      temp_v6 = temp_v6 + 1;
    } while ((int)temp_v6 < 0x30d);
    temp_v6 = 0x79f;
    do {
      temp_v1 = FUN_00481100(temp_v6);
      if (temp_v1 != 0) {
        FUN_00493e14(param_1 + 0x8f84,temp_v6 & 0xffff,0,0,0);
      }
      temp_v6 = temp_v6 + 1;
    } while ((int)temp_v6 < 0x7df);
  }
  FUN_0010063a(param_1 + 0x8f84,*(unsigned short *)(param_1 + 0x9f84),4,&LAB_0049cf3c);
  FUN_004cfeb0(param_1 + 0xf00,10,*(unsigned short *)(param_1 + 0x9f84),0,1,1);
  *(unsigned char *)(param_1 + 0xf0d) = 1;
  FUN_004cff88(param_1 + 0xf00,0);
  FUN_004964e0(param_1,1);
  temp_v2 = *(int *)(param_1 + 0xb40);
  temp_v3 = FUN_004cfe4c(param_1 + temp_v2 * 0x74 + 0xb60);
  temp_v1 = DAT_0057f0c8;
  temp_v0 = *(short *)(param_1 + temp_v2 * 0x1002 + 0xf74 + temp_v3 * 4);
  if (temp_v0 == 0) {
    *(unsigned char *)(DAT_0057f0c8 + 0x5ea) = 0;
  }
  else {
    *(unsigned char *)(DAT_0057f0c8 + 0x67c) = 1;
    *(unsigned char *)(temp_v1 + 0x5ea) = 1;
    temp_v2 = FUN_0046e458(DAT_00570280,temp_v0);
    if (temp_v2 == 0) {
      temp_v2 = FUN_00480b08();
    }
    FUN_0028a888(temp_v0);
    FUN_002a1f60(*(unsigned int *)(temp_v1 + 0x678),2,0xffffffff,0,3,temp_v2,temp_v0);
  }
  return;
}

} /* extern "C" */
