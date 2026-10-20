/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021ace0` (_code @ 0x21ace0, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024f8a4(unsigned int *, int, int);
int effEmitterCreateSmall(void);
int FUN_002691d8(unsigned int, unsigned int, unsigned int *);
int FUN_00269334(void);

/* Supplied declaration required: FUN_0024f8a4. */
/* Supplied declaration required: effEmitterCreateSmall. */
/* Supplied declaration required: FUN_002691d8. */
/* Supplied declaration required: FUN_00269334. */


unsigned int * FUN_0021ace0(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  
  puVar3 = *(unsigned int **)(*(int *)(param_1 + 0x30) + 0x24);
  puVar1 = puVar3;
  effEmitterCreateSmall();
  FUN_0024f8a4(puVar1,**(unsigned short **)(param_1 + 0x30),param_1 + 0xc);
  temp_v0 = (unsigned int)**(unsigned short **)(param_1 + 0x30);
  if (puVar1[0xc] != 0) {
    FUN_00269334();
  }
  FUN_002691d8(temp_v0,*puVar1,puVar3);
  puVar1[0xc] = temp_v0;
  return puVar1;
}

} /* extern "C" */
