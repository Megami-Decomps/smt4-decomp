/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a144` (_code @ 0x13a144, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int resourceDestroy(void);
int resourceListDestroy(void);

extern unsigned char g_objectRegistry; /* 0x635370 */

/* Supplied declaration required: resourceDestroy. */
/* Supplied declaration required: resourceListDestroy. */


void FUN_0013a144(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 8;
    piVar3 = (int *)(&g_objectRegistry + temp_v0);
    if (*(int *)(temp_v0 + 0x635374) != 0) {
      if (*piVar3 >= 1) {
        *piVar3 = *piVar3 - 1;
      }
      else {
        resourceDestroy();
        *(unsigned int *)(temp_v0 + 0x635374) = 0;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  temp_v1 = 0;
  do {
    temp_v0 = temp_v1 * 8;
    if (*(int *)(temp_v0 + 0x635574) != 0) {
      if (*piVar3 < 1) {
        resourceListDestroy();
        *(unsigned int *)(temp_v0 + 0x635574) = 0;
      }
      else {
        *(int *)(temp_v0 + 0x635570) = *(int *)(temp_v0 + 0x635570) - 1;
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  return;
}

} /* extern "C" */
