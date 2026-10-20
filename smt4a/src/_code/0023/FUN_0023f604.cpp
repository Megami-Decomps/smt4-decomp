/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f604` (_code @ 0x23f604, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00203b40(int, int, int, int, int, int);
int FUN_003d0bc0(int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_003d0bc0. */
extern int FUN_00481104(unsigned int);


void FUN_0023f604(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  if (param_1 != 0xb) {
    if (param_1 != 0xd) {
      if (param_1 != 0xe) {
        return;
      }
      temp_v2 = 0x33f;
      temp_v3 = DAT_0057f108 + 0x2a78;
      temp_v4 = 0x3b6;
      temp_v5 = DAT_0057f108 + 0x188;
    }
    else {
      temp_v2 = 0x3b7;
      temp_v3 = DAT_0057f108 + 0x22a8;
      temp_v4 = 0x47e;
      temp_v5 = DAT_0057f108 + 0x124;
    }
  }
  else {
    temp_v2 = 1;
    temp_v4 = 0x3c;
    temp_v3 = DAT_0057f108 + 0x21b0;
    temp_v5 = DAT_0057f108 + 0xc0;
  }
  if (temp_v3 == 0 || temp_v5 == 0) {
    return;
  }
  temp_v1 = 0;
  if (temp_v2 <= temp_v4) {
    do {
      temp_v0 = FUN_00481104(temp_v2);
      if (temp_v0 != 0) {
        temp_v0 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(temp_v3 + temp_v0) = (short)temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 <= (int)temp_v4);
  }
  if (param_1 == 0xb) {
    temp_v2 = 0x79f;
    do {
      temp_v0 = FUN_00481104(temp_v2);
      if (temp_v0 != 0) {
        temp_v0 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(temp_v3 + temp_v0) = (short)temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x7df);
  }
  else if (param_1 == 0xd) {
    temp_v2 = 0x47f;
    do {
      temp_v0 = FUN_00481104(temp_v2);
      if (temp_v0 != 0) {
        temp_v0 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(short *)(temp_v3 + temp_v0) = (short)temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x79f);
  }
  FUN_00203b40(temp_v5,temp_v1,0xb,1,1,1);
  FUN_003d0bc0(param_1);
  return;
}

} /* extern "C" */
