/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c814` (_code @ 0x28c814, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019fc50(void);
int FUN_002bd540(int);
int asdTextureCreate(void);

/* Supplied declaration required: FUN_0019fc50. */
/* Supplied declaration required: FUN_002bd540. */
/* Supplied declaration required: asdTextureCreate. */


int FUN_0028c814(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  asdTextureCreate();
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(temp_v0 + 0x40) = 1;
  FUN_0019fc50();
  FUN_002bd540(temp_v0);
  return temp_v0;
}

} /* extern "C" */
