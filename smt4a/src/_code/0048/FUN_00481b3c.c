/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00481b3c` (_code @ 0x481b3c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_0055c7b8; /* 0x55c7b8 */

extern unsigned int *FUN_00482758(unsigned int, unsigned int);


void FUN_00481b3c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00482758(param_1,0);
  puVar1[0x1b] = 0;
  *puVar1 = (unsigned int)&DAT_0055c7b8;
  puVar1[0x17] = 0xffffffff;
                    /* WARNING: Treating indirect jump as return */
  return;
}
