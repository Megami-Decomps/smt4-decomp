/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5e2c` (_code @ 0x2c5e2c, 0x10 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int iRam00000000; /* 0x0 */
extern int iRam00000008; /* 0x8 */
extern int iRam0000000c; /* 0xc */
extern unsigned int uRam00000010; /* 0x10 */
extern int iRam00000014; /* 0x14 */
extern signed char DAT_00465040; /* 0x465040 */

extern int FUN_002b0614(int);
/* Supplied declaration required: FUN_002c3b44. */
extern unsigned int FUN_002c4b84(unsigned int, unsigned int, unsigned int, int);
/* Supplied declaration required: FUN_002c5ff4. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002c6336) */

void FUN_002c5e2c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [64];
  
  FUN_002c3b44(temp_v1,0x100,0,4);
  if ((DAT_00465040 != '\0') || (temp_v0 = FUN_002b0614(param_1), temp_v0 != 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam0000000c = param_1 >> 2;
  if (iRam0000000c != 0) {
    temp_v1[0] = 1;
    uRam00000010 = FUN_002c4b84(0x100,0x100,0,param_1);
    iRam00000014 = param_1;
    FUN_002c5ff4(uRam00000010,0,param_1);
  }
  else {
    uRam00000010 = 0;
    iRam00000014 = 0;
  }
  if (iRam00000008 < 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002c5a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(iRam00000000 + iRam00000008 * 0xc + 4))();
  return;
}
