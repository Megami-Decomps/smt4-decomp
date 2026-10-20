/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471960` (_code @ 0x471960, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00429f38(void);

extern int g_aocMain; /* 0x570260 */

extern int objGetFlagBit16(void);
/* Supplied declaration required: FUN_00429f38. */


unsigned int FUN_00471960(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = param_1;
  FUN_00429f38();
  if (temp_v0 != 0) {
    temp_v0 = objGetFlagBit16();
    if (temp_v0 != 0) {
      temp_v0 = 0;
      if (0 < *(int *)(param_1 + 0x448)) {
        temp_v1 = *(int *)(param_1 + 0x450);
        do {
          if (((*(char *)(temp_v1 + temp_v0 * 0x10 + 0xc) != '\0') &&
              (*(char *)(temp_v1 + temp_v0 * 0x10 + 0xd) == '\0')) &&
             (*(int *)(temp_v1 + temp_v0 * 0x10) == 0)) {
            return 0;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < *(int *)(param_1 + 0x448));
      }
    }
  }
  else {
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
  }
  return 1;
}

} /* extern "C" */
