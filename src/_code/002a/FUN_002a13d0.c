/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a13d0` (_code @ 0x2a13d0, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char uRam00000000; /* 0x0 */
extern signed char cRam00000003; /* 0x3 */


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

void FUN_002a13d0(unsigned int *param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: irregular input(s): in_ZR, in_s0, in_s1, in_s10, in_s11, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8, in_s9; 31 native warning(s); review required */
  romwright_code *UNRECOVERED_JUMPTABLE;
  char in_ZR;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned int in_s4;
  unsigned int in_s5;
  unsigned int in_s6;
  unsigned int in_s7;
  unsigned int in_s8;
  unsigned int in_s9;
  unsigned int in_s10;
  unsigned int in_s11;
  
  if (in_ZR != '\0') {
    param_1[4] = in_s0;
    param_1[3] = in_s1;
    param_1[2] = in_s2;
    *param_1 = in_s3;
    param_1[8] = in_s4;
    param_1[7] = in_s5;
    param_1[6] = in_s6;
    param_1[5] = in_s7;
    param_1[0xc] = in_s8;
    param_1[0xb] = in_s9;
    param_1[10] = in_s10;
    param_1[9] = in_s11;
    return;
  }
  if (cRam00000003 == '\0') {
    *param_3 = 0xa8;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002a1490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,uRam00000000);
  return;
}
