/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a7f4` (_code @ 0x37a7f4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTextureCreate(void);
int asdTextureSetImage(int);
int FUN_00226970(void);

/* Supplied declaration required: asdTextureCreate. */
/* Supplied declaration required: asdTextureSetImage. */
/* Supplied declaration required: FUN_00226970. */


int FUN_0037a7f4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  asdTextureCreate();
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(temp_v0 + 0x40) = 1;
  FUN_00226970();
  asdTextureSetImage(temp_v0);
  return temp_v0;
}

} /* extern "C" */
