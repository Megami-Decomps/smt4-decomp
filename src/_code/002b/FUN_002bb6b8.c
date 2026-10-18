/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb6b8` (_code @ 0x2bb6b8, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_00465660; /* 0x465660 */
extern int DAT_00465664; /* 0x465664 */
extern int DAT_00465668; /* 0x465668 */
extern int DAT_004656b0; /* 0x4656b0 */
extern int *piRam004656b4; /* 0x4656b4 */
extern unsigned int uRam004656b8; /* 0x4656b8 */
extern unsigned int uRam004656bc; /* 0x4656bc */

/* Supplied declaration required: FUN_002b5a1c. */
extern unsigned int FUN_002c153c(unsigned int *, int, unsigned int);
extern unsigned int FUN_002c3290(void);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */


/* WARNING: Removing unreachable block (ram,0x002bb77c) */
/* WARNING: Removing unreachable block (ram,0x002bb75e) */

unsigned int FUN_002bb6b8(void)

{
/* irregular: irregular input(s): in_r12; 12 native warning(s); review required */
  int temp_v0;
  romwright_code **ppcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int unaff_r7;
  unsigned int unaff_r8;
  unsigned int unaff_r9;
  int unaff_r10;
  int *in_r12;
  int temp_v3;
  romwright_code *UNRECOVERED_JUMPTABLE [2];
  
  if (DAT_00465668 != 0) {
    ppcVar2 = UNRECOVERED_JUMPTABLE;
    temp_v3 = DAT_00465668;
    FUN_002c42fc(ppcVar2,&temp_v3,1,0,0xffffffff,0xffffffff);
    if ((int)ppcVar2 < 0) {
      FUN_002c5468();
    }
  }
  if (DAT_00465664 == 0) {
    DAT_00465664 = DAT_00465660;
  }
  temp_v0 = DAT_00465664;
  if (DAT_004656b0 != 0) {
    temp_v1 = 0xe0a0cff9;
  }
  else {
    temp_v2 = FUN_002c3290();
    temp_v1 = FUN_002c153c((unsigned int *)&DAT_004656b0,temp_v0,temp_v2);
  }
  if ((int)temp_v1 < 0) {
    if (unaff_r10 + 0x2bb74cU <= temp_v1) {
      piRam004656b4 = in_r12;
      *(int **)(*in_r12 + 4) = &DAT_004656b0;
      DAT_004656b0 = *in_r12;
      *in_r12 = (int)&DAT_004656b0;
      *(int **)(unaff_r7 + 8) = &DAT_004656b0;
      uRam004656b8 = unaff_r8;
      uRam004656bc = unaff_r9;
      FUN_002c3a24();
      return unaff_r8;
    }
    FUN_002c3a24();
    return 0;
  }
  FUN_002b5a1c(temp_v1,0x2bb74c,4);
                    /* WARNING: Could not recover jumptable at 0x002bb79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  temp_v2 = (*UNRECOVERED_JUMPTABLE[0])();
  return temp_v2;
}
