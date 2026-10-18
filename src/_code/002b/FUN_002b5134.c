/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5134` (_code @ 0x2b5134, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000000; /* 0x0 */
extern int iRam00000008; /* 0x8 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002b51d8) */
/* WARNING: Removing unreachable block (ram,0x002b51e0) */
/* WARNING: Removing unreachable block (ram,0x002b5214) */
/* WARNING: Removing unreachable block (ram,0x002b51ae) */

unsigned int FUN_002b5134(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  if (param_1 == 0) {
    param_4 = param_4 + (param_2 >> 4);
    temp_v0 = 1;
    if (temp_v0 < param_4) {
      do {
        temp_v0 = temp_v0 + 2;
      } while (temp_v0 < param_4);
    }
    iRam00000008 = param_1;
    return 0;
  }
  if (param_1 != 0) {
    uRam00000000 = *(unsigned int *)(param_1 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
