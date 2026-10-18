/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4924` (_code @ 0x2c4924, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *FUN_0023d2ec(void);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c4924(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int unaff_r4;
  
  puVar1 = (unsigned int *)FUN_0023d2ec();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[0x8dc] = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
