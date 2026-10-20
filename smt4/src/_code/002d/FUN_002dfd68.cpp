/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dfd68` (_code @ 0x2dfd68, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002878fc(int);
int gameFlagIsSet(...);

extern unsigned int *g_mapGimic; /* 0x447a48 */

/* Supplied declaration required: FUN_002878fc. */
/* Supplied declaration required: gameFlagIsSet. */


void FUN_002dfd68(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  puVar1 = g_mapGimic;
  temp_v1 = 0;
  *(unsigned char *)(g_mapGimic + 1) = 1;
  *puVar1 = 0;
  *(unsigned short *)((int)puVar1 + 10) = 0;
  *(unsigned short *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  do {
    puVar1 = g_mapGimic;
    if (*(char *)(g_mapGimic + temp_v1 * 10 + 7) != '\0') {
      temp_v2 = (int)*(short *)((int)g_mapGimic + temp_v1 * 0x28 + 0x3e);
      if (((*(short *)(g_mapGimic + temp_v1 * 10 + 0xf) != 0) &&
          (temp_v0 = gameFlagIsSet(), temp_v0 == 0)) ||
         ((temp_v2 != 0 && (temp_v2 = gameFlagIsSet(temp_v2), temp_v2 != 0)))) {
        FUN_002878fc((int)(short)puVar1[temp_v1 * 10 + 0xe]);
      }
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return;
}

} /* extern "C" */
