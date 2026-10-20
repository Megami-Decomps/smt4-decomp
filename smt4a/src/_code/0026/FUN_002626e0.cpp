/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002626e0` (_code @ 0x2626e0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0057f69c; /* 0x57f69c */
extern signed char DAT_005f1623; /* 0x5f1623 */

extern int FUN_00376f94(void);


unsigned int FUN_002626e0(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0057f69c;
  temp_v1 = FUN_00376f94();
  if ((DAT_005f1623 == '\0' || temp_v1 < 0x65) && (*(char *)(temp_v0 + 0x4638) != '\x02')) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
