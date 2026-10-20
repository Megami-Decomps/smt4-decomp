/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246b48` (_code @ 0x246b48, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int DAT_00581284; /* 0x581284 */


void FUN_00246b48(void)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  do {
    piVar2 = *(int **)(DAT_00581284 + temp_v3 * 0x48 + 0x3c);
    if (piVar2 != (int *)0x0) {
      (**(romwright_code **)(*piVar2 + 4))();
      *(unsigned int *)(DAT_00581284 + temp_v3 * 0x48 + 0x3c) = 0;
    }
    temp_v0 = DAT_00581284;
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
  temp_v1 = 0;
  temp_v3 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v3 = temp_v3 + 2;
    *(unsigned char *)(temp_v0 + temp_v1 * 0x48 + 0x14) = 0;
    temp_v1 = temp_v1 + 2;
    *(unsigned char *)(temp_v0 + temp_v2 * 0x48 + 0x14) = 0;
  } while (temp_v3 < 0x18);
  return;
}

} /* extern "C" */
