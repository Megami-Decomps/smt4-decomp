/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f71b0` (_code @ 0x2f71b0, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(void);
int sharedRefAddRef(void);
int FUN_002e78d0(unsigned int, unsigned int, int);
int FUN_002ec738(int);

extern unsigned int FUN_0011a268(int, unsigned int, int, unsigned int, unsigned int);
extern unsigned int onlineContextGetInstance(void);
/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: sharedRefAddRef. */
extern int _Znwj(unsigned int);
extern int FUN_002e789a(int);
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_002ec738. */


unsigned int FUN_002f71b0(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x22) != '\x05') {
      return 0;
    }
    sharedRefRelease();
    *(unsigned int *)(param_1 + 0x98) = 0;
  }
  temp_v0 = FUN_002e789a(param_2);
  if (temp_v0 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    temp_v0 = _Znwj(0xd8);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_0011a268(temp_v0,*(unsigned int *)(param_2 + 0x44),param_1,param_3,param_4);
    }
    *(unsigned int *)(param_1 + 0x98) = temp_v1;
    sharedRefAddRef();
    temp_v1 = onlineContextGetInstance();
    FUN_002e78d0(temp_v1,*(unsigned int *)(param_1 + 0x98),0);
  }
  else {
    FUN_002ec738(param_2);
  }
  return 1;
}

} /* extern "C" */
