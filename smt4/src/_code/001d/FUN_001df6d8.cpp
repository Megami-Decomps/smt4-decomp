/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001df6d8` (_code @ 0x1df6d8, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00210194(unsigned int);

typedef int romwright_code(...);
extern int DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_00210194. */


void FUN_001df6d8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0043dd68;
  if (DAT_0043dd68 != 0) {
    FUN_00210194(*(unsigned int *)(DAT_0043dd68 + 0x95c8));
    FUN_00210194(*(unsigned int *)(temp_v0 + 0x95cc));
    temp_v1 = *(int *)(*(int *)(temp_v0 + 0x95d0) + 4);
    temp_v2 = *(unsigned int *)(temp_v1 + 0x44);
    (**(romwright_code **)(temp_v1 + 0x4c))(*(unsigned int *)(temp_v1 + 0x50));
    *(unsigned int *)(temp_v1 + 0x3c) = *(unsigned int *)(temp_v1 + 0x38);
    *(unsigned int *)(temp_v1 + 0x38) = temp_v2;
    *(unsigned char *)(temp_v1 + 0x58) = 1;
    *(unsigned int *)(temp_v0 + 0x95dc) = 0x1e0;
    *(int *)(temp_v0 + 0x95d8) = *(int *)(temp_v0 + 0x95d8) + 1;
  }
  return;
}

} /* extern "C" */
