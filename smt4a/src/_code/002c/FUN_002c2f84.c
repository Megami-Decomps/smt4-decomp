/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2f84` (_code @ 0x2c2f84, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005f1859; /* 0x5f1859 */
extern unsigned char DAT_005f185a; /* 0x5f185a */
extern unsigned char DAT_005f185d; /* 0x5f185d */
extern unsigned char DAT_005f187c; /* 0x5f187c */

extern int FUN_00236038(void);


unsigned int FUN_002c2f84(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00236038();
  DAT_005f185d = temp_v0 == 0;
  DAT_005f187c = 0;
  DAT_005f185a = DAT_005f185d;
  DAT_005f1859 = DAT_005f185d;
  return 1;
}
