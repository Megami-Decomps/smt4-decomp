/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bef7c` (_code @ 0x2bef7c, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int iRam00000f00; /* 0xf00 */
extern int DAT_0043dfc0; /* 0x43dfc0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int *FUN_002b5498(int, unsigned int, unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bf976) */

int * FUN_002bef7c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  if (DAT_0043dfc0 == 0) {
    software_interrupt(0xc0);
    temp_v0 = (**(romwright_code **)(iRam00000f00 + 8))(0xf00,0x148,4);
    if (temp_v0 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_002b5498(temp_v0,0xf00,0,0);
    }
    (**(romwright_code **)(*piVar2 + 0x24))(piVar2,0xf00);
    return piVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
