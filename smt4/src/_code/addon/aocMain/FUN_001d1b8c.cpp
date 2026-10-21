/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1b8c` (_code @ 0x1d1b8c, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027e974(void);
int asdMemFreeNonNull(void);
int asdMemFree(unsigned int *);
int FUN_002c5700(void);

extern unsigned int *g_sceneResourceWork; /* 0x433048 */

/* Supplied declaration required: FUN_0027e974. */
/* Supplied declaration required: asdMemFreeNonNull. */
extern int jobFind(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002c5700. */


unsigned int FUN_001d1b8c(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = g_sceneResourceWork;
  if (g_sceneResourceWork != (unsigned int *)0x0) {
    temp_v0 = jobFind(*g_sceneResourceWork);
    puVar2 = g_sceneResourceWork;
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 6) == '\0')) {
      return 1;
    }
    if (g_sceneResourceWork != (unsigned int *)0x0) {
      *(unsigned char *)(g_sceneResourceWork + 6) = 1;
      if (puVar2[7] != 0) {
        FUN_002c5700();
        if (puVar2[7] != 0) {
          FUN_0027e974();
          asdMemFreeNonNull();
          puVar2[7] = 0;
        }
      }
      asdMemFree(g_sceneResourceWork);
      g_sceneResourceWork = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
