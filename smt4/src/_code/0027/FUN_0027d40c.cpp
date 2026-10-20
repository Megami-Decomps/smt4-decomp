/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d40c` (_code @ 0x27d40c, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_mapIf; /* 0x447a78 */

extern int dataTable23Type0FindIndexById(void);
extern int gameGetMapBlock(void);


void FUN_0027d40c(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_1 == 0) {
    return;
  }
  temp_v0 = dataTable23Type0FindIndexById();
  if (temp_v0 == -1) {
    return;
  }
  temp_v1 = gameGetMapBlock();
  if (-1 < temp_v0) {
    temp_v1 = temp_v1 + ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1b)) >> 5) * 4;
    *(unsigned int *)(temp_v1 + 0x7d4) = *(unsigned int *)(temp_v1 + 0x7d4) | (1 << ((temp_v0 % 0x20) & 0xffU));
  }
  temp_v0 = g_mapIf;
  if (g_mapIf == 0) {
    return;
  }
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x194;
    if ((*(char *)(temp_v2 + 0x1d0) != '\0') && (*(int *)(temp_v2 + 0x1e8) == param_1)) {
      *(unsigned int *)(temp_v2 + 0x1d4) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  return;
}

} /* extern "C" */
