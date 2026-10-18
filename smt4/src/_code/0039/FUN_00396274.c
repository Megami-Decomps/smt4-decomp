/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00396274` (_code @ 0x396274, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_00422340; /* 0x422340 */

extern unsigned int *FUN_00395f5c(unsigned int, unsigned int);


void FUN_00396274(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00395f5c(param_1,1);
  *(unsigned char *)(puVar1 + 0x1d) = 0;
  puVar1[0x1e] = 0;
  *puVar1 = (unsigned int)&DAT_00422340;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x16] = 0xffffffff;
                    /* WARNING: Treating indirect jump as return */
  return;
}
