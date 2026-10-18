/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334c6c` (_code @ 0x334c6c, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001835b4. */


void FUN_00334c6c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  FUN_001677c0();
  temp_v1 = 0;
  do {
    FUN_001835b4(2,0x12,temp_v1 + 0x57e,param_1,param_2,0xbf);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  FUN_001677c0();
  FUN_001835b4(2,0x12,0x581,param_1,param_2,0xc0);
  if (param_3 != 0) {
    temp_v0 = 0x5b5;
    temp_v2 = 0x5b6;
    temp_v3 = 0x5b7;
    temp_v5 = 0x5b8;
    temp_v4 = 0x5b9;
    temp_v6 = 0x5ba;
  }
  else {
    temp_v0 = 0x582;
    temp_v4 = 0x5a0;
    temp_v3 = 0x584;
    temp_v2 = 0x583;
    temp_v5 = 0x5a3;
    temp_v6 = 0x5a4;
  }
  FUN_001835b4(2,0x12,temp_v0,param_1,param_2,0xc1);
  FUN_001835b4(2,0x12,temp_v2,param_1,param_2,0xc1);
  FUN_001835b4(2,0x12,temp_v3,param_1,param_2,0xc2);
  FUN_001835b4(2,0x12,temp_v5,param_1,param_2,0xc2);
  FUN_001677c0();
  FUN_001835b4(2,0x12,temp_v4,param_1,param_2,0xc4);
  FUN_001835b4(2,0x12,temp_v6,param_1,param_2,0xc4);
  FUN_001677c0();
  return;
}
