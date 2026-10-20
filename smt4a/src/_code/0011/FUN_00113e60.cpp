/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113e60` (_code @ 0x113e60, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00559600; /* 0x559600 */
extern unsigned char DAT_0055b04c; /* 0x55b04c */
extern unsigned char g_flagBlock; /* 0x594958 */

extern int FUN_002f5928(unsigned int *, unsigned int);


int FUN_00113e60(unsigned int *param_1)

{
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00559600;
  param_1[1] = (unsigned int)&DAT_0055b04c;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  temp_v0 = FUN_002f5928(param_1 + 6,1);
  (*(unsigned char *)((unsigned char *)&g_flagBlock + 0x5)) = 1;
  return temp_v0 - 0x18;
}

} /* extern "C" */
