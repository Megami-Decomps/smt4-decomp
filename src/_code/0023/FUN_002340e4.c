/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002340e4` (_code @ 0x2340e4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_002baa40(unsigned char *);
extern unsigned int *FUN_002bad5c(unsigned char *);


unsigned int * FUN_002340e4(unsigned char *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned char temp_v1 [8];
  
  *param_1 = 1;
  puVar1 = (unsigned int *)FUN_002bad5c(param_1 + 4);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar2 = (unsigned int *)FUN_002baa40(temp_v1);
  temp_v0 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v0;
  return puVar1 + -1;
}
