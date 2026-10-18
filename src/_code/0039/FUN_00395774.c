/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395774` (_code @ 0x395774, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_00421ef8; /* 0x421ef8 */

extern unsigned int *FUN_00396178(unsigned int, unsigned int);


void FUN_00395774(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00396178(param_1,0);
  *puVar1 = (unsigned int)&DAT_00421ef8;
  puVar1[0x16] = 0xffffffff;
                    /* WARNING: Treating indirect jump as return */
  return;
}
