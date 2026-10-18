/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356454` (_code @ 0x356454, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

extern unsigned int FUN_00239c50(void);
/* Supplied declaration required: FUN_00356cb0. */


void FUN_00356454(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = FUN_00239c50();
  FUN_00356cb0(temp_v0,param_2,param_3,param_4,param_5,param_6);
  return;
}
