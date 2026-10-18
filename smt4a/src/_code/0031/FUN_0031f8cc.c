/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f8cc` (_code @ 0x31f8cc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f28c; /* 0x57f28c */

extern int FUN_002a4860(void);
extern int FUN_002a4894(int);


unsigned short FUN_0031f8cc(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0057f28c;
  temp_v1 = DAT_0057f28c + 0x9ac;
  temp_v2 = FUN_002a4860();
  temp_v1 = FUN_002a4894(temp_v1);
  return *(unsigned short *)(temp_v0 + (temp_v1 + temp_v2) * 2 + 0xad6);
}
