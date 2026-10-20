/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00305ab0` (_code @ 0x305ab0, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024f8a4(void);
int effEmitterCreateSmall(void);
int FUN_002691d8(unsigned int, unsigned int, int);
int FUN_00269334(void);

extern int FUN_0024c3f8(void);
/* Supplied declaration required: FUN_0024f8a4. */
/* Supplied declaration required: effEmitterCreateSmall. */
/* Supplied declaration required: FUN_002691d8. */
/* Supplied declaration required: FUN_00269334. */


unsigned int * FUN_00305ab0(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0024c3f8();
  puVar2 = (unsigned int *)(temp_v0 + 0x1c);
  effEmitterCreateSmall();
  FUN_0024f8a4();
  temp_v1 = (unsigned int)*(unsigned short *)(param_1 + 0xc);
  if (puVar2[0xc] != 0) {
    FUN_00269334();
  }
  FUN_002691d8(temp_v1,*puVar2,temp_v0 + 0x1c);
  puVar2[0xc] = temp_v1;
  return puVar2;
}

} /* extern "C" */
