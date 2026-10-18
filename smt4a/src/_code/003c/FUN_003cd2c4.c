/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cd2c4` (_code @ 0x3cd2c4, 0x1c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0019d880. */


void FUN_003cd2c4(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  FUN_0019d880();
  FUN_001677c0();
  FUN_001835b4(2,0x12,0x46d,param_1,param_2,0xbf);
  FUN_001835b4(2,0x12,0x46e,param_1,param_2,0xbf);
  FUN_001835b4(2,0x12,0x46f,param_1,param_2,0xbf);
  FUN_001677c0();
  FUN_001835b4(2,0x12,0x470,param_1,param_2,0xc4);
  if (param_3 != 0) {
    FUN_001835b4(2,0x12,0x5a9,param_1,param_2,0xc4);
    FUN_001835b4(2,0x12,0x5aa,param_1,param_2,0xc4);
    FUN_001835b4(2,0x12,0x5ab,param_1,param_2,0xc5);
    FUN_001677c0();
    FUN_001835b4(2,0x12,0x5ac,param_1,param_2,0xc6);
    FUN_001677c0();
    return;
  }
  FUN_001835b4(2,0x12,0x471,param_1,param_2,0xc4);
  FUN_001835b4(2,0x12,0x472,param_1,param_2,0xc4);
  FUN_001835b4(2,0x12,0x473,param_1,param_2,0xc5);
  FUN_001677c0();
  FUN_001835b4(2,0x12,0x59d,param_1,param_2,0xc6);
  FUN_001677c0();
  return;
}
