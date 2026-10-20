/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043c2d4` (_code @ 0x43c2d4, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0051ec68(unsigned int, int, unsigned int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

/* Supplied declaration required: FUN_0051ec68. */


void FUN_0043c2d4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_8;
  unsigned int uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0051ec68(param_1,0x7fffffff,param_2,&uStack_8);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
