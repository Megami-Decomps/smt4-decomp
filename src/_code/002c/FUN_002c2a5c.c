/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2a5c` (_code @ 0x2c2a5c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x003bd322) */
/* WARNING: Removing unreachable block (ram,0x003bd326) */

void FUN_002c2a5c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int unaff_r4;
  
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 8) = param_2;
  *(unsigned int *)(param_1 + 0xc) = param_3;
  *(unsigned int *)(param_1 + 0x10) = param_4;
  *(unsigned short *)(param_1 + 8) = 0;
  if (unaff_r4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
