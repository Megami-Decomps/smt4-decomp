/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f66c` (_code @ 0x47f66c, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014af98(void);
/* Supplied declaration required: FUN_001628c0. */


void FUN_0047f66c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  if (param_1 != 0x120) {
    if (param_1 != 0x121) {
      if (param_1 != 0x122) {
        if (param_1 == 0x123) {
          FUN_00100388(&temp_v1,"I009024");
        }
      }
      else {
        FUN_00100388(&temp_v1,"I009023");
      }
    }
    else {
      FUN_00100388(&temp_v1,"I009022");
    }
  }
  else {
    FUN_00100388(&temp_v1,"I009021");
  }
  temp_v0 = FUN_0014af98();
  FUN_001628c0(&temp_v1,temp_v0,2,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}
