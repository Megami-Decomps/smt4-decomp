/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b1ad4` (_code @ 0x2b1ad4, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00145370. */
/* Supplied declaration required: FUN_001454f0. */
/* Supplied declaration required: func_0x006b3880. */


/* WARNING: Control flow encountered bad instruction data */

unsigned long long FUN_002b1ad4(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int *unaff_r4;
  int temp_v0;
  int unaff_r6;
  romwright_code *unaff_r8;
  int iStack00000060;
  
  if (*(char *)(param_1 + 0x89) == '\0') {
    *(int *)(param_1 * 2) = param_1;
    temp_v0 = unaff_r4[3];
    iStack00000060 = param_1;
    if (temp_v0 < unaff_r4[4] + temp_v0) {
      do {
        FUN_00145370(*(unsigned short *)(*unaff_r4 + temp_v0 * 0x20),param_1);
        param_1 = unaff_r4[3];
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < unaff_r4[4] + param_1);
    }
    if ((unaff_r4[0xd] & 0x200U) != 0) {
      FUN_001454f0(1);
    }
    func_0x006b3880();
    (*unaff_r8)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return romwright_piece_4_4(unaff_r4,unaff_r6 << 3);
}
