/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c664` (_code @ 0x11c664, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3d0(int, unsigned int);
int FUN_002ea446(int, int);

extern unsigned char LAB_0011c694; /* 0x11c694 */
extern unsigned char LAB_0011c6ed; /* 0x11c6ed */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_002ea3c0(int *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea446. */
extern int childOwnerHasActiveChild(unsigned int);


unsigned long long FUN_0011c664(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int iStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  uStack_c = param_4;
  temp_v0 = childOwnerHasActiveChild(*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_002ea446(param_1,100);
    return romwright_piece_4_4(uStack_14,iStack_18);
  }
  temp_v1 = FUN_002ea3c0(&iStack_18,&LAB_0011c6ed,0,&LAB_0011c694);
  FUN_002ea3d0(param_1,temp_v1);
  return romwright_piece_4_4(uStack_14,iStack_18);
}

} /* extern "C" */
