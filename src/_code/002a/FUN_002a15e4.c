/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a15e4` (_code @ 0x2a15e4, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

/* WARNING: Removing unreachable block (ram,0x002a1180) */
/* WARNING: Removing unreachable block (ram,0x002a1190) */
/* WARNING: Removing unreachable block (ram,0x002a11d4) */
/* WARNING: Removing unreachable block (ram,0x002a11dc) */
/* WARNING: Removing unreachable block (ram,0x002a11e0) */
/* WARNING: Removing unreachable block (ram,0x002a11e4) */
/* WARNING: Removing unreachable block (ram,0x002a11e8) */
/* WARNING: Removing unreachable block (ram,0x002a1194) */
/* WARNING: Removing unreachable block (ram,0x002a11a0) */
/* WARNING: Removing unreachable block (ram,0x002a11a8) */
/* WARNING: Removing unreachable block (ram,0x002a11ac) */
/* WARNING: Removing unreachable block (ram,0x002a11b0) */
/* WARNING: Removing unreachable block (ram,0x002a11cc) */
/* WARNING: Removing unreachable block (ram,0x002a11b4) */
/* WARNING: Removing unreachable block (ram,0x002a11c4) */

void FUN_002a15e4(unsigned char *param_1,unsigned int param_2,unsigned short *param_3,unsigned int param_4,
                 romwright_code *UNRECOVERED_JUMPTABLE)

{
/* irregular: 17 native warning(s); review required */
  if (param_1[3] == '\0') {
    *param_3 = 0xa8;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002a11f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,*param_1);
  return;
}
