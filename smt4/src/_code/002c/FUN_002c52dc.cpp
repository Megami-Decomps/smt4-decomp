/* NON_MATCHING: retail invokes svc 0x15 directly; inline assembly and SVC intrinsics are prohibited. */
/* romwright 0.5.0 decompilation of FUN_002c52dc for reference (not compiled; its own view of the boundaries):

/* WARNING: Control flow encountered bad instruction data * /

void FUN_002c52dc(void)

{
  software_interrupt(0x15);
                    /* WARNING: Bad instruction - Truncating control flow here * /
  halt_baddata();
}
*/
#include "common.h"
