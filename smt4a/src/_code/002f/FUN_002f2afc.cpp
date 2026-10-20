/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2afc` (_code @ 0x2f2afc, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00558490; /* 0x558490 */

extern int operatorNew(unsigned int);
extern unsigned int strInit(void);


unsigned int * FUN_002f2afc(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00558490;
  temp_v0 = operatorNew(0x20);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = strInit();
  }
  param_1[2] = temp_v1;
  *(unsigned char *)(param_1 + 1) = 0;
  param_1[3] = 0;
  return param_1;
}

} /* extern "C" */
