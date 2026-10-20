/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b46e0` (_code @ 0x1b46e0, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerDestroy(void);

extern int g_mapObj; /* 0x447e70 */

/* Supplied declaration required: asdMdlManagerDestroy. */


void FUN_001b46e0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  do {
    if (*(int *)(g_mapObj + temp_v3 * 0x48 + 0x3c) != 0) {
      asdMdlManagerDestroy();
      *(unsigned int *)(g_mapObj + temp_v3 * 0x48 + 0x3c) = 0;
    }
    temp_v0 = g_mapObj;
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
