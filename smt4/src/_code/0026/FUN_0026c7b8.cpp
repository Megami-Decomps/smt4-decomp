/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c7b8` (_code @ 0x26c7b8, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memClear(int, int);
int rt_memcpy(int, int, int);

extern int DAT_0043e0f8; /* 0x43e0f8 */

/* Supplied declaration required: memClear. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0026c7b8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043e0f8;
  *(unsigned char *)(DAT_0043e0f8 + 0x10) = 0;
  if (param_1 != 0) {
    memClear(temp_v0 + 0x154,0x31);
    temp_v1 = 0;
    do {
      if (*(char *)(param_1 + temp_v1) == '\0') {
        rt_memcpy(temp_v0 + 0x154,param_1,temp_v1 + 1);
        *(unsigned char *)(temp_v0 + 0x10) = 1;
        return;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x31);
  }
  return;
}

} /* extern "C" */
