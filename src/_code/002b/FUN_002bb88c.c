/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb88c` (_code @ 0x2bb88c, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int iRam00000000; /* 0x0 */
extern int *piRam00000004; /* 0x4 */
extern unsigned int uRam00000008; /* 0x8 */
extern unsigned int uRam0000000c; /* 0xc */

/* Supplied declaration required: FUN_002b5a1c. */
extern unsigned int FUN_002c153c(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002c3290(void);
/* Supplied declaration required: FUN_002c3a24. */


/* WARNING: Removing unreachable block (ram,0x002bb77c) */
/* WARNING: Removing unreachable block (ram,0x002bb75e) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

unsigned int FUN_002bb88c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_r12; 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  romwright_code *UNRECOVERED_JUMPTABLE;
  int unaff_r7;
  unsigned int unaff_r8;
  unsigned int unaff_r9;
  int unaff_r10;
  int *in_r12;
  
  temp_v2 = (unsigned int)piRam00000004;
  uRam00000008 = (unsigned int)piRam00000004;
  iRam00000000 = param_3;
  if (param_3 != 0) {
    temp_v0 = 0xe0a0cff9;
  }
  else {
    temp_v1 = FUN_002c3290();
    temp_v0 = FUN_002c153c(0,temp_v2,temp_v1);
  }
  if ((int)temp_v0 < 0) {
    if (unaff_r10 + 0x2bb74cU <= temp_v0) {
      piRam00000004 = in_r12;
      *(unsigned int *)(*in_r12 + 4) = 0;
      iRam00000000 = *in_r12;
      *in_r12 = 0;
      *(unsigned int *)(unaff_r7 + 8) = 0;
      uRam00000008 = unaff_r8;
      uRam0000000c = unaff_r9;
      FUN_002c3a24();
      return unaff_r8;
    }
    FUN_002c3a24();
    return 0;
  }
  FUN_002b5a1c(temp_v0,0x2bb74c,4);
                    /* WARNING: Could not recover jumptable at 0x002bb79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  temp_v2 = (*UNRECOVERED_JUMPTABLE)();
  return temp_v2;
}
