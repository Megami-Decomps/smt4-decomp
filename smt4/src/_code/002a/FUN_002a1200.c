/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1200` (_code @ 0x2a1200, 0x48 bytes) from smt4_v1.2.0.cxi.
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
extern unsigned int FUN_002a12d8(void);


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

unsigned int FUN_002a1200(unsigned int param_1,unsigned int param_2,unsigned short *param_3)

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
  
  temp_v1 = 0x2a1208;
  temp_v0 = FUN_002a12d8();
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
                    /* WARNING: Could not recover jumptable at 0x002a11f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  temp_v1 = (*UNRECOVERED_JUMPTABLE)
                    (0,uRam00000000,param_3,UNRECOVERED_JUMPTABLE,in_r12,temp_v1,0x2a1136);
  return temp_v1;
}
