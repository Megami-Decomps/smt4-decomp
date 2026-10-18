/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395558` (_code @ 0x395558, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_004222b0; /* 0x4222b0 */

extern unsigned int *FUN_00395f5c(unsigned int, unsigned int);


void FUN_00395558(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00395f5c(param_1,0);
  *puVar1 = (unsigned int)&DAT_004222b0;
  puVar1[0x16] = 0xffffffff;
                    /* WARNING: Treating indirect jump as return */
  return;
}
