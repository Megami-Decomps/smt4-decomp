/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104e44` (_code @ 0x104e44, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00594a30; /* 0x594a30 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0010ce7c. */
extern unsigned int FUN_002ea4bc(void);
/* Supplied declaration required: FUN_002eb330. */
/* Supplied declaration required: FUN_002eb338. */


unsigned long long FUN_00104e44(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int iStack_20;
  unsigned int uStack_1c;
  int uStack_18;
  unsigned int uStack_14;
  
  temp_v0 = DAT_00594a30;
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  temp_v1 = FUN_002ea4bc();
  FUN_002eb330(&uStack_18,temp_v1);
  FUN_002eb338(&iStack_20,&uStack_18,temp_v0);
  FUN_0010ce7c(param_1 + 0x14,&iStack_20);
  return romwright_piece_4_4(uStack_1c,iStack_20);
}
