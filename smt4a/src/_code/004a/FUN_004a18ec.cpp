/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a18ec` (_code @ 0x4a18ec, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003343f0(int);
int dispatchIfFound(int, int);

/* Supplied declaration required: FUN_003343f0. */
extern int FUN_0035dbb0(void);
/* Supplied declaration required: dispatchIfFound. */
extern int flaggedValueHolderGetTotal(int);
extern int FUN_004d0cd4(void);


void FUN_004a18ec(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_0035dbb0();
  if (temp_v1 != 0) {
    temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
    temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x868);
    temp_v1 = FUN_004d0cd4();
    if (temp_v1 != -1) {
      dispatchIfFound(temp_v1,temp_v0);
    }
    FUN_003343f0(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
