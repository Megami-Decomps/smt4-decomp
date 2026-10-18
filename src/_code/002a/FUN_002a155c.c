/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a155c` (_code @ 0x2a155c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char uRam00000000; /* 0x0 */
extern signed char cRam00000003; /* 0x3 */

/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */


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

void FUN_002a155c(unsigned int param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: irregular input(s): in_cr0, in_cr4, in_pc; 23 native warning(s); review required */
  int *unaff_r6;
  unsigned int in_pc;
  unsigned int in_cr0;
  unsigned int in_cr4;
  
  coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
  coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
  coprocessor_load(0,in_cr0,in_pc);
  if (cRam00000003 == '\0') {
    *param_3 = 0xa8;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002a11f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)((int)param_3 - (*unaff_r6 - (param_1 >> 0xb))))(0,uRam00000000);
  return;
}
