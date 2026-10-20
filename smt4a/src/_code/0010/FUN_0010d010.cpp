/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010d010` (_code @ 0x10d010, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002f7038(int, unsigned int, unsigned int);

extern unsigned int initVtable0055a4a0(int, int);
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int operatorNew(unsigned int);
/* Supplied declaration required: FUN_002f7038. */


void FUN_0010d010(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  if (*(int *)(param_1 + 0xa4) == 0) {
    temp_v0 = FUN_002e6e26();
    FUN_002e6e34(&uStack_20,temp_v0 + 0x58);
    if (*(int *)(param_1 + 0xa4) == 0) {
      temp_v0 = operatorNew(0x14);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = initVtable0055a4a0(temp_v0,param_1);
      }
      *(unsigned int *)(param_1 + 0xa4) = temp_v1;
    }
    _ZN9Obj55b28cD1Ev(&uStack_20);
  }
  FUN_002f7038(param_1,param_2,*(unsigned int *)(param_1 + 0xa4));
  return;
}

} /* extern "C" */
