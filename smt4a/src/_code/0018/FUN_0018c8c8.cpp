/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018c8c8` (_code @ 0x18c8c8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100348(unsigned int, unsigned int, unsigned int, unsigned char *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;

/* Supplied declaration required: FUN_00100348. */


void FUN_0018c8c8(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char uStack00000000;
  
  if (param_3 + 1U < param_2) {
    param_2 = param_3 + 1U;
  }
  FUN_00100348(param_1,param_2,param_4,&uStack00000000);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
