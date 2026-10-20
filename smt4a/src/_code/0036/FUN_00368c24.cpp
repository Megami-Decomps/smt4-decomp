/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00368c24` (_code @ 0x368c24, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(unsigned char [32], unsigned char *, unsigned int);
int scrGetArg(int);

extern unsigned char LAB_00368c74; /* 0x368c74 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_00368c24(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [32];
  
  temp_v0 = scrGetArg(0);
  scrGetArg(1);
  scrGetArg(2);
  scrGetArg(3);
  scrGetArg(4);
  FUN_00100388(temp_v1,&LAB_00368c74,temp_v0);
  return 1;
}

} /* extern "C" */
