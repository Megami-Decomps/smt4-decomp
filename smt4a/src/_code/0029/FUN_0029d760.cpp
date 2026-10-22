/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029d760` (_code @ 0x29d760, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002342d0(int, int);
int FUN_002b6cb0(void);
int FUN_002b968c(int *);
int FUN_002cf8e4(void);
int transitionDrawExpandingImages(int);

extern int g_mapIf; /* 0x58103c */
extern int g_gameState; /* 0x5f15fc */
extern signed char DAT_005f161f; /* 0x5f161f */

/* Supplied declaration required: FUN_002342d0. */
/* Supplied declaration required: FUN_002b6cb0. */
/* Supplied declaration required: FUN_002b968c. */
/* Supplied declaration required: FUN_002cf8e4. */
/* Supplied declaration required: transitionDrawExpandingImages. */


unsigned int FUN_0029d760(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = g_mapIf;
  if (DAT_005f161f == '\0') {
    FUN_002b968c(&g_mapIf);
    if (g_gameState < 100) {
      FUN_002b6cb0();
      FUN_002cf8e4();
    }
    if (*(char *)(temp_v0 + 0xcd08) != '\0') {
      piVar2 = (int *)(temp_v0 + 0xcd0c);
      transitionDrawExpandingImages(*piVar2);
      *piVar2 = *piVar2 + 1;
    }
    FUN_002342d0((int)*(float *)(temp_v0 + 0xcd20),(int)*(float *)(temp_v0 + 0xcd24));
  }
  return 0;
}

} /* extern "C" */
