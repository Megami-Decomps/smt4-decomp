/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377edc` (_code @ 0x377edc, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fe86c(unsigned int, unsigned int, int);

extern int g_mapGimic; /* 0x580ca0 */

/* Supplied declaration required: FUN_003fe86c. */


void FUN_00377edc(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = g_mapGimic + temp_v1 * 0x18;
    if ((*(char *)(temp_v0 + 0x8c4) != '\0') && (*(short *)(temp_v0 + 0x8c8) == param_1)) {
      FUN_003fe86c(*(unsigned int *)(*(int *)(temp_v0 + 0x8cc) + 4),param_2,2);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 10);
  return;
}

} /* extern "C" */
