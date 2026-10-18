/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b30fc` (_code @ 0x2b30fc, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_0046513c; /* 0x46513c */
extern int *DAT_00465148; /* 0x465148 */
extern int DAT_0046514c; /* 0x46514c */

/* Supplied declaration required: FUN_00145370. */
/* Supplied declaration required: FUN_001454f0. */
/* Supplied declaration required: func_0x006b3880. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002b33ee) overlaps instruction at (ram,0x002b33ec)
    */

void FUN_002b30fc(unsigned int param_1)

{
/* irregular: 8 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  romwright_code *unaff_r8;
  
  piVar1 = DAT_00465148;
  if ((DAT_0046513c <= param_1) && (param_1 <= DAT_0046513c + DAT_0046514c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  temp_v0 = DAT_00465148[3];
  if (temp_v0 < DAT_00465148[4] + temp_v0) {
    do {
      FUN_00145370(*(unsigned short *)(*piVar1 + temp_v0 * 0x20));
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < piVar1[4] + piVar1[3]);
  }
  if ((piVar1[0xd] & 0x200U) != 0) {
    FUN_001454f0(1);
  }
  func_0x006b3880();
  (*unaff_r8)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
