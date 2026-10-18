/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6458` (_code @ 0x1a6458, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int aeabi_uidivmod(int, unsigned int);


unsigned int FUN_001a6458(int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)((param_2 + 3U) & 0xfffffffc);
  temp_v0 = aeabi_uidivmod(param_3 - ((int)puVar3 - param_2),0x138);
  temp_v1 = 0;
  if (temp_v1 < temp_v0) {
    do {
      temp_v1 = temp_v1 + 1;
      *puVar3 = *(unsigned int *)(param_1 + 8);
      *(unsigned int **)(param_1 + 8) = puVar3;
      puVar3 = puVar3 + 0x4e;
    } while (temp_v1 < temp_v0);
  }
  return temp_v0;
}
