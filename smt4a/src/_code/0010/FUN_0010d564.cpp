/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d564` (_code @ 0x10d564, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00107008(unsigned char *, unsigned int *, unsigned int, unsigned int);
int _ZN9Obj55b28cC1EPv(int *, unsigned char *);
int _ZN9Obj55b28cD1Ev(int *);

extern unsigned char DAT_00559124; /* 0x559124 */
extern unsigned char DAT_0062e640; /* 0x62e640 */
extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00107008. */
/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


unsigned long long
FUN_0010d564(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  *param_1 = (unsigned int)&DAT_00559124;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  _ZN9Obj55b28cC1EPv(&uStack_18,&DAT_0062e6a0);
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_00107008(&DAT_0062e640,param_1,param_1[2],param_1[1]);
  }
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return romwright_piece_4_4(uStack_18,param_1);
}

} /* extern "C" */
