/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00323efc` (_code @ 0x323efc, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0049fa38; /* 0x49fa38 */
extern unsigned char DAT_0049fa39; /* 0x49fa39 */

extern int scrGetArg(unsigned int);


unsigned int FUN_00323efc(void)

{
  int temp_v0;
  
  temp_v0 = scrGetArg(0);
  DAT_0049fa38 = temp_v0 != 0;
  temp_v0 = scrGetArg(1);
  DAT_0049fa39 = temp_v0 != 0;
  return 1;
}

} /* extern "C" */
