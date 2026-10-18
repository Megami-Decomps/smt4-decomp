/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1df4` (_code @ 0x2c1df4, 0x73 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_002c54f0. */


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002c1df4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((param_1 < 4) && (*(int *)(param_1 * 0x50 + 0x4e2434) == 0)) {
    temp_v0 = 0x10000;
    FUN_002c54f0(0x10000,0x100,0,param_2,1);
    *(unsigned int *)(param_1 * 0x50 + 0x4e2464) = temp_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}
