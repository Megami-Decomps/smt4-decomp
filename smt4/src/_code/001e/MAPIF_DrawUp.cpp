/* NON_MATCHING: romwright 0.5.0 decompilation of `MAPIF_DrawUp` (_code @ 0x1e8484, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f9ce0(void);
int FUN_001fb5c4(void);
int FUN_002fb114(int);

extern int g_mapIf; /* 0x447a78 */
extern int g_gameState; /* 0x49f91c */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Supplied declaration required: FUN_001f9ce0. */
/* Supplied declaration required: FUN_001fb5c4. */
/* Supplied declaration required: FUN_002fb114. */


unsigned int MAPIF_DrawUp(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = g_mapIf;
  if (DAT_0049f93e == '\0') {
    FUN_001fb5c4();
    if (g_gameState < 100) {
      FUN_001f9ce0();
    }
    if (*(char *)(temp_v0 + 0xccd8) != '\0') {
      piVar2 = (int *)(temp_v0 + 0xccdc);
      FUN_002fb114(*piVar2);
      *piVar2 = *piVar2 + 1;
    }
  }
  return 0;
}

} /* extern "C" */
