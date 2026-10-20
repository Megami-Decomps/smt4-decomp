/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7c28` (_code @ 0x2c7c28, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effEmitterCreate(void);
int FUN_0024f8a4(int *, int, int);
int effEmitterCreateSmall(void);
int FUN_00268fc4(void);
int FUN_002691d8(unsigned int, int, int *);
int FUN_00269334(void);
int FUN_002e7ca4(int, unsigned int);

/* Supplied declaration required: effEmitterCreate. */
/* Supplied declaration required: FUN_0024f8a4. */
/* Supplied declaration required: effEmitterCreateSmall. */
/* Supplied declaration required: FUN_00268fc4. */
/* Supplied declaration required: FUN_002691d8. */
/* Supplied declaration required: FUN_00269334. */
/* Supplied declaration required: FUN_002e7ca4. */


int * FUN_002c7c28(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned int temp_v1;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x30) + 0x24);
  piVar1 = piVar3;
  effEmitterCreateSmall();
  FUN_0024f8a4(piVar1,**(unsigned short **)(param_1 + 0x30),param_1 + 0xc);
  temp_v1 = (unsigned int)**(unsigned short **)(param_1 + 0x30);
  if (piVar1[0xc] != 0) {
    FUN_00269334();
  }
  FUN_002691d8(temp_v1,*piVar1,piVar3);
  piVar1[0xc] = temp_v1;
  if (piVar1[0xb] == 0) {
    temp_v0 = *piVar1;
    effEmitterCreate();
    piVar1[0xb] = temp_v0;
    *(int *)(temp_v0 + 0x4c) = piVar1[0xc];
  }
  temp_v0 = *(int *)(*(int *)(param_1 + 0x2c) + 0x50);
  if (temp_v0 != 0) {
    FUN_00268fc4();
    *(int *)(piVar1[0xb] + 0x50) = temp_v0;
  }
  FUN_002e7ca4(piVar1[0xb],*(unsigned int *)(param_1 + 0x2c));
  *(unsigned short *)(piVar1[0xb] + 0xc) = *(unsigned short *)(*(int *)(param_1 + 0x2c) + 0xc);
  return piVar1;
}

} /* extern "C" */
