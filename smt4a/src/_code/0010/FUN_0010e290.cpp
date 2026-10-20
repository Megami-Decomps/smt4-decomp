/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e290` (_code @ 0x10e290, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned int *, unsigned int);
int _ZN9Obj55b28cD1Ev(unsigned int *);

typedef int romwright_code(...);
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int onlineGetActiveLock(void);
extern int rangeIsEmpty3(int *);


long long FUN_0010e290(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(&uStack_18,temp_v0);
  do {
    temp_v1 = rangeIsEmpty3(param_1 + 0x58);
    if (temp_v1 != 0) {
      _ZN9Obj55b28cD1Ev(&uStack_18);
      return romwright_piece_4_4(uStack_18,1);
    }
    temp_v1 = (**(romwright_code **)(*param_1 + 0x14))(param_1,*(unsigned short *)param_1[0x59]);
  } while (temp_v1 != 0);
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return (unsigned long long)uStack_18 << 0x20;
}

} /* extern "C" */
