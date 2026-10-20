/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303cd8` (_code @ 0x303cd8, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001219cc(int);
int FUN_0030fea4(int);
int FUN_0030fecc(int);

extern unsigned char DAT_0055b0dc; /* 0x55b0dc */

/* Supplied declaration required: FUN_001219cc. */
extern int FUN_002e9ff4(unsigned int *);
extern unsigned int *FUN_002f2afc(void);
/* Supplied declaration required: FUN_0030fea4. */
/* Supplied declaration required: FUN_0030fecc. */


int FUN_00303cd8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_002f2afc();
  *puVar1 = (unsigned int)&DAT_0055b0dc;
  temp_v0 = FUN_002e9ff4(puVar1 + 4);
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  temp_v1 = temp_v0 - 0x10;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  FUN_0030fecc(temp_v1);
  FUN_001219cc(temp_v1);
  FUN_0030fea4(temp_v1);
  return temp_v1;
}

} /* extern "C" */
