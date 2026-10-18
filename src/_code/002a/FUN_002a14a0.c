/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a14a0` (_code @ 0x2a14a0, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;

extern unsigned char uRam00000000; /* 0x0 */
extern signed char cRam00000003; /* 0x3 */

/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
extern unsigned int FUN_002a1578(void);


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

unsigned int FUN_002a14a0(unsigned int param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: irregular input(s): in_cr0, in_cr4, in_pc, in_r12; 21 native warning(s); review required */
  unsigned int temp_v0;
  romwright_code *UNRECOVERED_JUMPTABLE;
  int *unaff_r6;
  unsigned int in_r12;
  unsigned int temp_v1;
  unsigned int in_pc;
  unsigned int in_cr0;
  unsigned int in_cr4;
  
  temp_v1 = 0x2a14a8;
  temp_v0 = FUN_002a1578();
  if ((temp_v0 & 0x3fc00) != 0x13800) {
                    /* WARNING: Treating indirect jump as return */
    return 0;
  }
  coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
  coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
  UNRECOVERED_JUMPTABLE = (romwright_code *)((int)param_3 - (*unaff_r6 - 0x13800));
  coprocessor_load(0,in_cr0,in_pc);
  if (cRam00000003 == '\0') {
    *param_3 = 0xa8;
    return 0xa8;
  }
                    /* WARNING: Could not recover jumptable at 0x002a1490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  temp_v1 = (*UNRECOVERED_JUMPTABLE)
                    (0,uRam00000000,param_3,UNRECOVERED_JUMPTABLE,in_r12,temp_v1,0x2a13d6);
  return temp_v1;
}
