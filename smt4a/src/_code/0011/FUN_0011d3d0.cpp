/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011d3d0` (_code @ 0x11d3d0, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned int *, int);
int _ZN9Obj55b28cD1Ev(unsigned int *);
int strHolderAssignU32Alias(unsigned int, unsigned int);
int FUN_00303d3a(unsigned int, int);
int FUN_00303e66(int, unsigned int);

extern unsigned char LAB_0011d21d; /* 0x11d21d */
extern unsigned char DAT_00630568; /* 0x630568 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int onlineContextGetInstance(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: strHolderAssignU32Alias. */
extern int FUN_00303d1e(unsigned int, int);
/* Supplied declaration required: FUN_00303d3a. */
/* Supplied declaration required: FUN_00303e66. */


long long FUN_0011d3d0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                     unsigned int param_5,unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = onlineContextGetInstance();
  FUN_002e6e34(&uStack_20,temp_v0 + 0x58);
  temp_v0 = FUN_00303d1e(param_2,param_1);
  if (temp_v0 != 0) {
    FUN_00303d3a(param_2,3);
    strHolderAssignU32Alias(param_2,param_4);
    strHolderAssignU32Alias(param_2,param_5);
    if (param_1 != 0) {
      FUN_00303e66(param_1,param_3);
      FUN_00303e66(param_1,param_6);
    }
    (*(unsigned char * *)((unsigned char *)&DAT_00630568 + 0x8)) = &LAB_0011d21d;
    _ZN9Obj55b28cD1Ev(&uStack_20);
    return romwright_piece_4_4(uStack_20,1);
  }
  _ZN9Obj55b28cD1Ev(&uStack_20);
  return (unsigned long long)uStack_20 << 0x20;
}

} /* extern "C" */
