/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e3d0` (_code @ 0x29e3d0, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd24; /* 0x43dd24 */

extern int FUN_0029f248(int);
extern int FUN_0029f260(void);


unsigned char FUN_0029e3d0(void)

{
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = DAT_0043dd24;
  temp_v1 = 0x4b;
  if (*(char *)(DAT_0043dd24 + 0x74c) != '\0') {
    temp_v2 = DAT_0043dd24 + 0x788;
    temp_v3 = FUN_0029f260();
    temp_v2 = FUN_0029f248(temp_v2);
    temp_v1 = *(unsigned char *)(temp_v2 + temp_v3 + temp_v0 + 0x758);
  }
  return temp_v1;
}
