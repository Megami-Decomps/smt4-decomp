/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bcd00` (_code @ 0x2bcd00, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern int DAT_004e3154; /* 0x4e3154 */
extern int DAT_004e3158; /* 0x4e3158 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bcd48) */
/* WARNING: Removing unreachable block (ram,0x002bcd38) */
/* WARNING: Removing unreachable block (ram,0x002bcd3c) */
/* WARNING: Removing unreachable block (ram,0x002bcd40) */

unsigned int FUN_002bcd00(void)

{
/* irregular: 6 native warning(s); review required */
  if (DAT_004e3158 < 1) {
    return 0;
  }
  if (((0 < DAT_004e3158) && (DAT_004e3154 != 0)) && ((*(unsigned int *)(DAT_004e3154 + 0x90) & 2) != 0)) {
    return 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
