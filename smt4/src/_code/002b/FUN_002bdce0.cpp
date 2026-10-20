/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bdce0` (_code @ 0x2bdce0, 0x29c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be304(...);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf4f8(...);

/* stack frame of param_4: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

/* Supplied declaration required: FUN_002be304. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf4f8. */
extern int aeabi_idivmod(int, unsigned int);


void FUN_002bdce0(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v3 = 0;
  temp_v2 = 0;
  temp_v5 = -1;
  temp_v4 = param_1;
  if (param_4 != 0) {
    if (-1 >= param_1) {
      FUN_002be304(0xdc0f14ff);
      FUN_002be304();
      temp_v4 = -param_1;
    }
    else {
      FUN_002be304();
    }
  }
  else {
    FUN_002be304();
    if (-1 >= param_1) {
      FUN_002be304();
      temp_v4 = -param_1;
    }
  }
  if (temp_v4 != 0) {
    temp_v1 = 100000000;
    do {
      temp_v0 = -param_1;
      if (-1 < param_1) {
        temp_v0 = param_1;
      }
      if ((int)temp_v1 <= temp_v0) {
        if (temp_v5 < 0) {
          temp_v5 = temp_v2;
        }
        temp_v0 = aeabi_idivmod(temp_v4,temp_v1);
        temp_v3 = FUN_002bf4f8(0xe,100 - temp_v2);
        FUN_002bf288(2,0xd,temp_v0,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                     0x10);
        temp_v4 = temp_v4 - temp_v1 * temp_v0;
        if (temp_v2 != 2) {
          if (temp_v2 == 5) {
            temp_v3 = FUN_002bf4f8(0xe,0x66);
            FUN_002bf288(2,0xd,0xc,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                         0x10);
          }
        }
        else {
          temp_v3 = FUN_002bf4f8(0xe,0x67);
          FUN_002bf288(2,0xd,0xc,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                       0x10);
        }
      }
      temp_v2 = temp_v2 + 1;
      temp_v1 = temp_v1 / 10;
    } while (temp_v1 != 0);
  }
  else {
    temp_v3 = FUN_002bf4f8(0xe,0x5c);
    FUN_002bf288(2,0xd,0,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x10);
  }
  if (param_4 != 0) {
    if (-1 < temp_v5) {
      temp_v3 = FUN_002bf4f8(0xe,0x65 - temp_v5);
    }
    if (param_1 < 0) {
      FUN_002bf288(2,0xd,0xb,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x10);
    }
    else if (0 < param_1) {
      FUN_002bf288(2,0xd,10,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,0x10);
    }
  }
  FUN_002bed3c();
  return;
}

} /* extern "C" */
