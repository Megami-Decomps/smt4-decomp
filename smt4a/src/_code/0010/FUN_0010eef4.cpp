/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010eef4` (_code @ 0x10eef4, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00110448(unsigned int, unsigned int);
int FUN_002e6e34(int *, int);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002f8b88(int);

/* Supplied declaration required: FUN_00110448. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int FUN_002eb5c0(unsigned int);
/* Supplied declaration required: FUN_002f8b88. */


void FUN_0010eef4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  while (*(char *)(param_1 + 0x46c) == '\0') {
    FUN_002e6e34(&uStack_20,param_1 + 0x43c);
    if (*(int *)(param_1 + 0x38) != 0) {
      temp_v0 = FUN_002eb5c0(2);
      if (temp_v0 == 0) {
        temp_v1 = 0x10;
      }
      else {
        temp_v1 = 0x18;
      }
      temp_v0 = FUN_002eb5c0(*(unsigned int *)(param_1 + 0x38));
      FUN_00110448(*(unsigned int *)(temp_v0 * 4 + param_1 + 0x3c),temp_v1);
      FUN_002f8b88(1);
    }
    _ZN9Obj55b28cD1Ev(&uStack_20);
  }
  return;
}

} /* extern "C" */
