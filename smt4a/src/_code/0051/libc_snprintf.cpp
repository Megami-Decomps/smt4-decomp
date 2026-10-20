/* NON_MATCHING: romwright 0.5.0 decompilation of `libc_snprintf` (_code @ 0x51440c, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0051ec68(unsigned int, unsigned int, unsigned int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_0051ec68. */


void libc_snprintf(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_4;
  
  uStack_4 = param_4;
  FUN_0051ec68(param_1,param_2,param_3,&uStack_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
