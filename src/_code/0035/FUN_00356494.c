/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356494` (_code @ 0x356494, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_7_stack;

extern unsigned int FUN_00239c50(void);
/* Supplied declaration required: FUN_00356d34. */


void FUN_00356494(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = FUN_00239c50();
  FUN_00356d34(temp_v0,param_2,param_3,param_4,param_5,param_6,
               (param_7 & 0xff) | ((param_7 & 0xff) << 0x10));
  return;
}
