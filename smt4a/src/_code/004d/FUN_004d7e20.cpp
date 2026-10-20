/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d7e20` (_code @ 0x4d7e20, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);
int FUN_00275bc8(int, unsigned int);

extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_00275bc8. */


unsigned int FUN_004d7e20(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = *(unsigned int *)(g_aocMain + 0x754);
  *(unsigned int *)(g_aocMain + 0x754) = temp_v1 & 0xffffff8f;
  if ((temp_v1 & 0x10) != 0) {
    *param_1 = 1;
    if (param_1[2] != 0) {
      asdMemFree();
      param_1[2] = 0;
    }
    if (param_1[3] != 0) {
      asdMemFree();
      param_1[3] = 0;
    }
    if (param_1[4] != 0) {
      asdMemFree();
      param_1[4] = 0;
    }
    return 0;
  }
  temp_v0 = param_1[4];
  FUN_00275bc8(temp_v0,param_1[3]);
  param_1[5] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  *param_1 = 0;
  return 0;
}

} /* extern "C" */
