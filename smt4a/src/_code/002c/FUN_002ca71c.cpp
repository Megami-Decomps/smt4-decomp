/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ca71c` (_code @ 0x2ca71c, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(...);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001835b4. */


void FUN_002ca71c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  efctSetSpeed();
  temp_v0 = 0;
  do {
    FUN_001835b4(2,0x12,temp_v0 + 0x56f,param_1,param_2,0xbf);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  efctSetSpeed();
  FUN_001835b4(2,0x12,0x572,param_1,param_2,0xc0);
  if (param_3 != 0) {
    temp_v1 = 0x5b2;
    temp_v2 = 0x5b3;
    temp_v3 = 0x5b4;
  }
  else {
    temp_v1 = 0x574;
    temp_v2 = 0x575;
    temp_v3 = 0x59f;
  }
  FUN_001835b4(2,0x12);
  FUN_001835b4(2,0x12,temp_v1,param_1,param_2,0xc1);
  FUN_001835b4(2,0x12,temp_v2,param_1,param_2,0xc2);
  efctSetSpeed();
  FUN_001835b4(2,0x12,temp_v3,param_1,param_2,0xc4);
  efctSetSpeed();
  return;
}

} /* extern "C" */
