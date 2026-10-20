/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6fb8` (_code @ 0x2a6fb8, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a6dcc(int *, int *, int *);

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_002a6dcc. */


void FUN_002a6fb8(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_14;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  if (param_1 == 0) {
    temp_v0 = 0;
    temp_v1 = 0x40c9999a;
    temp_v2 = 0x40900000;
    temp_v3 = 0;
    temp_v4 = 0;
    uStack_14 = 0xbf800000;
    temp_v5 = 0;
    temp_v6 = 0;
    temp_v7 = 0;
    FUN_002a6dcc(&temp_v0,&temp_v3,&temp_v5);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (param_1 != 1) {
    if (param_1 == 2) {
      temp_v0 = 0;
      temp_v1 = 0;
      temp_v2 = 0;
      temp_v3 = 0;
      temp_v4 = 0;
      uStack_14 = 0xbf800000;
      temp_v5 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      FUN_002a6dcc(&temp_v0,&temp_v3,&temp_v5);
    }
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  temp_v0 = 0;
  temp_v1 = 0x41500000;
  temp_v2 = 0x42f00000;
  temp_v3 = 0;
  temp_v4 = 0;
  uStack_14 = 0xbf800000;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  FUN_002a6dcc(&temp_v0,&temp_v3,&temp_v5);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
