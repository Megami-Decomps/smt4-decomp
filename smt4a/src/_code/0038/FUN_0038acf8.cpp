/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038acf8` (_code @ 0x38acf8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f19f1; /* 0x5f19f1 */
extern unsigned int DAT_005f19f4; /* 0x5f19f4 */
extern unsigned int DAT_005f19f8; /* 0x5f19f8 */
extern unsigned int DAT_005f19fc; /* 0x5f19fc */

extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_0038acf8(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  DAT_005f19fc = scrGetArg(2);
  DAT_005f19f1 = 1;
  DAT_005f19f4 = temp_v0;
  DAT_005f19f8 = temp_v1;
  return 1;
}

} /* extern "C" */
