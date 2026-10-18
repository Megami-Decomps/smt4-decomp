/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001acf18` (_code @ 0x1acf18, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_001b4120. */


void FUN_001acf18(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_34;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int uStack_24;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_14;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  uStack_34 = 0x802f0233;
  uStack_24 = 0x802f0233;
  temp_v6 = 0x3f000000;
  uStack_14 = 0x802f0233;
  temp_v0 = param_1[2];
  temp_v1 = param_1[1];
  temp_v2 = *param_1;
  temp_v3 = param_2[2];
  temp_v4 = param_2[1];
  temp_v5 = *param_2;
  temp_v7 = param_3[1];
  temp_v8 = *param_3;
  FUN_001b4120(&temp_v0,0x30);
                    /* WARNING: Treating indirect jump as return */
  return;
}
