/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a3710` (_code @ 0x1a3710, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6668(unsigned char *, int);

extern unsigned char DAT_0064be60; /* 0x64be60 */

/* Supplied declaration required: FUN_001b6668. */
extern int nw_ut_HeapBase_FindContainHeap(unsigned char *, int);


void FUN_001a3710(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  puVar2 = &DAT_0064be60;
  temp_v0 = nw_ut_HeapBase_FindContainHeap(&DAT_0064be60,param_1);
  if (temp_v0 != 0) {
    puVar2 = (unsigned char *)(temp_v0 + 0x18);
  }
  FUN_001b6668(puVar2,param_1 + 4);
  *(unsigned int *)(param_1 + 0x14) = 0;
  return;
}

} /* extern "C" */
