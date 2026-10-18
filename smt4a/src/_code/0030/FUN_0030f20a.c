/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f20a` (_code @ 0x30f20a, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

/* Supplied declaration required: FUN_00102ca4. */


void FUN_0030f20a(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_8;
  unsigned int uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_00102ca4(param_2,param_1,&uStack_8);
                    /* WARNING: Treating indirect jump as return */
  return;
}
