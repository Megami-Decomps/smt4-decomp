/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1884` (_code @ 0x2a1884, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

/* WARNING: Removing unreachable block (ram,0x002a1420) */
/* WARNING: Removing unreachable block (ram,0x002a1430) */
/* WARNING: Removing unreachable block (ram,0x002a1474) */
/* WARNING: Removing unreachable block (ram,0x002a147c) */
/* WARNING: Removing unreachable block (ram,0x002a1480) */
/* WARNING: Removing unreachable block (ram,0x002a1484) */
/* WARNING: Removing unreachable block (ram,0x002a1488) */
/* WARNING: Removing unreachable block (ram,0x002a1434) */
/* WARNING: Removing unreachable block (ram,0x002a1440) */
/* WARNING: Removing unreachable block (ram,0x002a1448) */
/* WARNING: Removing unreachable block (ram,0x002a144c) */
/* WARNING: Removing unreachable block (ram,0x002a1450) */
/* WARNING: Removing unreachable block (ram,0x002a146c) */
/* WARNING: Removing unreachable block (ram,0x002a1454) */
/* WARNING: Removing unreachable block (ram,0x002a1464) */

void FUN_002a1884(unsigned char *param_1,unsigned int param_2,unsigned short *param_3,unsigned int param_4,
                 romwright_code *UNRECOVERED_JUMPTABLE)

{
/* irregular: 17 native warning(s); review required */
  if (param_1[3] == '\0') {
    *param_3 = 0xa8;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002a1490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,*param_1);
  return;
}
