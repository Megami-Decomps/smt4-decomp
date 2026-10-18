/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ec00` (_code @ 0x26ec00, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001835b4. */


void FUN_0026ec00(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  FUN_001677c0();
  FUN_00164b5c(2,0x14,6,param_1,param_2,0x79);
  FUN_001677c0();
  FUN_001835b4(2,0x14,0x429,param_1,param_2,0x7e);
  if (param_3 != 0) {
    FUN_001835b4(2,0x14,0x5cf,param_1,param_2,0x7f);
    FUN_001835b4(2,0x14,0x5d0,param_1,param_2,0x7f);
    FUN_001835b4(2,0x14,0x5d2,param_1,param_2,0x80);
    FUN_001677c0();
    FUN_001835b4(2,0x14,0x5d1,param_1,param_2,0x83);
    FUN_001677c0();
    return;
  }
  FUN_001835b4(2,0x14,0x42a,param_1,param_2,0x7f);
  FUN_001835b4(2,0x14,0x42b,param_1,param_2,0x7f);
  FUN_001835b4(2,0x14,0x5c9,param_1,param_2,0x80);
  FUN_001677c0();
  FUN_001835b4(2,0x14,0x42c,param_1,param_2,0x83);
  FUN_001677c0();
  return;
}
