/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7270` (_code @ 0x2f7270, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0062db70; /* 0x62db70 */
extern int DAT_0062db78; /* 0x62db78 */
extern unsigned short DAT_0062db7c; /* 0x62db7c */

extern int FUN_002f3290(unsigned char *);


unsigned short FUN_002f7270(void)

{
  int temp_v0;
  unsigned short *puVar2;
  
  temp_v0 = FUN_002f3290(&DAT_0062db70);
  if (temp_v0 != 0) {
    puVar2 = (unsigned short *)(DAT_0062db78 + temp_v0 * 2);
  }
  else {
    puVar2 = &DAT_0062db7c;
  }
  return *puVar2;
}

} /* extern "C" */
