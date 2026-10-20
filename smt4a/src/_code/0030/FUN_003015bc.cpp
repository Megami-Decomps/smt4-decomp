/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003015bc` (_code @ 0x3015bc, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2d74(unsigned int, unsigned int, unsigned int *);
int objectBufferFree(void);
int FUN_0038439c(unsigned int *, int, int);
int FUN_003a1ef4(void);

/* Supplied declaration required: FUN_002b2d74. */
/* Supplied declaration required: objectBufferFree. */
/* Supplied declaration required: FUN_0038439c. */
/* Supplied declaration required: FUN_003a1ef4. */


unsigned int * FUN_003015bc(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  
  puVar3 = *(unsigned int **)(*(int *)(param_1 + 0x30) + 0x24);
  puVar1 = puVar3;
  FUN_003a1ef4();
  FUN_0038439c(puVar1,**(unsigned short **)(param_1 + 0x30),param_1 + 0xc);
  temp_v0 = (unsigned int)**(unsigned short **)(param_1 + 0x30);
  if (puVar1[0xc] != 0) {
    objectBufferFree();
  }
  FUN_002b2d74(temp_v0,*puVar1,puVar3);
  puVar1[0xc] = temp_v0;
  return puVar1;
}

} /* extern "C" */
