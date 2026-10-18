/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb194` (_code @ 0x2bb194, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_004d4704; /* 0x4d4704 */

/* Supplied declaration required: FUN_002ae038. */
/* Supplied declaration required: FUN_002b5838. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bb194(unsigned int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char uStack00000000;
  romwright_code *UNRECOVERED_JUMPTABLE;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  if (param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_1 >> 8 != 0) {
    DAT_004d4704 = 0x3f800000;
    uStack_20 = 0x3f800000;
    uStack_1c = 0x3f800000;
    uStack_18 = 0x3f800000;
    uStack_14 = 0x3f800000;
    FUN_002ae038(&uStack_20,param_1);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  FUN_002b5838(7,&uStack00000000,4);
                    /* WARNING: Could not recover jumptable at 0x002bb45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
