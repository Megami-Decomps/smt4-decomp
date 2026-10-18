/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00403d48` (_code @ 0x403d48, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001835b4. */


void FUN_00403d48(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,
                 int param_6)

{
/* irregular: 2 native warning(s); review required */
  FUN_001677c0();
  if (param_5 != 0) {
    FUN_001835b4(2,0x32,0x8e,param_2,param_3,param_4 + 1);
    FUN_001835b4(2,0x32,0x8f,param_2,param_3,param_4);
    FUN_001835b4(2,0x32,0x90,param_2,param_3,param_4 + 2);
  }
  else if (param_6 != 0) {
    FUN_001835b4(2,0x32,0x9e,param_2,param_3,param_4 + 1);
    FUN_001835b4(2,0x32,0x9f,param_2,param_3,param_4);
    FUN_001835b4(2,0x32,0xa0,param_2,param_3,param_4 + 2);
  }
  FUN_001677c0();
  return;
}
