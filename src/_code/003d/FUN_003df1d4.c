/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df1d4` (_code @ 0x3df1d4, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_00262934. */
/* Supplied declaration required: FUN_002c5df8. */


void FUN_003df1d4(unsigned int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = 0;
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  if (*(int *)(*param_2 + 0x14) != 0) {
    FUN_00262934(&temp_v0,*(int *)(*param_2 + 0x10) + 4,0x20);
    temp_v7 = temp_v7 & 0xffffff;
  }
  FUN_002c5df8(param_1,&temp_v0,0x20);
  return;
}
