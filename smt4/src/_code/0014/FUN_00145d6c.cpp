/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145d6c` (_code @ 0x145d6c, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002adba8(...);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

/* Supplied declaration required: FUN_002adba8. */


void FUN_00145d6c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int temp_v5;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  puVar1 = (unsigned int *)&temp_v1;
  temp_v4 = 0x3000;
  uStack_44 = 0xf0080;
  uStack_40 = 0xee00ee0;
  uStack_3c = 0xf00c0;
  uStack_38 = 0;
  uStack_34 = 0xf00c1;
  uStack_30 = 0;
  uStack_2c = 0xf00c2;
  temp_v5 = 0x13001;
  uStack_24 = 0xf0080;
  uStack_20 = 0xe030e03;
  uStack_1c = 0xf00c0;
  uStack_18 = 0;
  uStack_14 = 0xf00c1;
  uStack_10 = 0x80008;
  uStack_c = 0xf00c2;
  temp_v1 = 0x13001;
  uStack_6c = 0xf0080;
  uStack_68 = 0xe030e00;
  uStack_64 = 0xf00c0;
  uStack_60 = 0;
  uStack_5c = 0xf00c1;
  uStack_58 = 0x10000;
  uStack_54 = 0xf00c2;
  temp_v3 = 0xf00c4;
  temp_v2 = 0;
  if (param_1 == 0) {
    FUN_002adba8(&temp_v4,0x20,1);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return;
    }
    temp_v0 = 0x28;
  }
  else {
    temp_v0 = 0x20;
    puVar1 = (unsigned int *)&temp_v5;
  }
  FUN_002adba8(puVar1,temp_v0,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
