/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eef40` (_code @ 0x2eef40, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0049fb64; /* 0x49fb64 */
extern unsigned char DAT_0049fb68; /* 0x49fb68 */

extern int scrGetArg(unsigned int);


unsigned char FUN_002eef40(void)

{
  int temp_v0;
  unsigned char temp_v1;
  
  if (DAT_0049fb64 == 0) {
    temp_v0 = scrGetArg(0);
    DAT_0049fb68 = temp_v0 == 1;
    DAT_0049fb64 = 1;
    return 0;
  }
  temp_v1 = DAT_0049fb64 == 2;
  if (temp_v1) {
    DAT_0049fb64 = 0;
    DAT_0049fb68 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
