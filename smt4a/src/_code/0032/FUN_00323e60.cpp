/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323e60` (_code @ 0x323e60, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00271d28(void);
int FUN_002b2d74(unsigned int, int, int *);
int objectBufferFree(void);
int FUN_002b4078(void);
int effParticleParamCopy(int, unsigned int);
int polygonTrackRebuildResources(int *, int, int);
int FUN_003a1ef4(void);

/* Supplied declaration required: FUN_00271d28. */
/* Supplied declaration required: FUN_002b2d74. */
/* Supplied declaration required: objectBufferFree. */
/* Supplied declaration required: FUN_002b4078. */
/* Supplied declaration required: effParticleParamCopy. */
/* Supplied declaration required: polygonTrackRebuildResources. */
/* Supplied declaration required: FUN_003a1ef4. */


int * FUN_00323e60(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned int temp_v1;
  
  piVar3 = *(int **)(*(int *)(param_1 + 0x30) + 0x24);
  piVar1 = piVar3;
  FUN_003a1ef4();
  polygonTrackRebuildResources(piVar1,**(unsigned short **)(param_1 + 0x30),param_1 + 0xc);
  temp_v1 = (unsigned int)**(unsigned short **)(param_1 + 0x30);
  if (piVar1[0xc] != 0) {
    objectBufferFree();
  }
  FUN_002b2d74(temp_v1,*piVar1,piVar3);
  piVar1[0xc] = temp_v1;
  if (piVar1[0xb] == 0) {
    temp_v0 = *piVar1;
    FUN_002b4078();
    piVar1[0xb] = temp_v0;
    *(int *)(temp_v0 + 0x4c) = piVar1[0xc];
  }
  temp_v0 = *(int *)(*(int *)(param_1 + 0x2c) + 0x50);
  if (temp_v0 != 0) {
    FUN_00271d28();
    *(int *)(piVar1[0xb] + 0x50) = temp_v0;
  }
  effParticleParamCopy(piVar1[0xb],*(unsigned int *)(param_1 + 0x2c));
  *(unsigned short *)(piVar1[0xb] + 0xc) = *(unsigned short *)(*(int *)(param_1 + 0x2c) + 0xc);
  return piVar1;
}

} /* extern "C" */
