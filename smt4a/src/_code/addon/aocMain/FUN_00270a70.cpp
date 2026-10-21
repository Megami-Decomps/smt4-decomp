/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270a70` (_code @ 0x270a70, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int *);
int asdOperatorDelete(void);
int aocMainShutdown(void);
int FUN_0047c950(void);

extern unsigned int *g_sceneResourceWork; /* 0x570278 */

extern int jobFind(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdOperatorDelete. */
/* Supplied declaration required: aocMainShutdown. */
/* Supplied declaration required: FUN_0047c950. */


unsigned int FUN_00270a70(void)

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
        aocMainShutdown();
        if (puVar2[7] != 0) {
          FUN_0047c950();
          asdOperatorDelete();
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
