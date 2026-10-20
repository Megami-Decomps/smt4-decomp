/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d51c` (_code @ 0x10d51c, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, unsigned char *);
int _ZN9Obj55b28cD1Ev(int *);

extern unsigned char DAT_00559124; /* 0x559124 */
extern unsigned char DAT_0062e640; /* 0x62e640 */
extern unsigned char DAT_0062e6a0; /* 0x62e6a0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_00106fee(unsigned char *, unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */


unsigned long long
FUN_0010d51c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  *param_1 = (unsigned int)&DAT_00559124;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_002e6e34(&uStack_20,&DAT_0062e6a0);
  *(unsigned char *)(param_1 + 4) = 0;
  temp_v0 = FUN_00106fee(&DAT_0062e640,param_1,param_2,param_3);
  if (temp_v0 != 0) {
    param_1[3] = 0;
    param_1[1] = param_3;
    param_1[2] = param_2;
    *(unsigned char *)(param_1 + 4) = 1;
  }
  _ZN9Obj55b28cD1Ev(&uStack_20);
  return romwright_piece_4_4(uStack_20,param_1);
}

} /* extern "C" */
