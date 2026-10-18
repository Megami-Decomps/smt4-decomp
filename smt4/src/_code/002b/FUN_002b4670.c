/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4670` (_code @ 0x2b4670, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned short *DAT_00433158; /* 0x433158 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b4670(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned short *puVar1;
  
  puVar1 = DAT_00433158;
  *(unsigned short **)(param_1 * 2) = DAT_00433158;
  *puVar1 = (short)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
