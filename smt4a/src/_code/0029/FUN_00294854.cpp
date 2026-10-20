/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294854` (_code @ 0x294854, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ptrListRemoveClearOwner(unsigned int, unsigned int);

typedef int romwright_code(...);
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_mapGimic; /* 0x580ca0 */

/* Supplied declaration required: ptrListRemoveClearOwner. */


void FUN_00294854(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0x22;
  do {
    piVar2 = *(int **)(g_mapGimic + temp_v3 * 0x3c + 0xa8);
    if (piVar2 != (int *)0x0) {
      (**(romwright_code **)(*piVar2 + 4))();
      *(unsigned int *)(g_mapGimic + temp_v3 * 0x3c + 0xa8) = 0;
    }
    temp_v0 = g_mapGimic;
    temp_v3 = temp_v3 - 1;
  } while (-1 < temp_v3);
  temp_v3 = 1;
  temp_v2 = 1;
  *(unsigned char *)(g_mapGimic + 0x90) = 0;
  do {
    temp_v1 = temp_v3 + 1;
    temp_v2 = temp_v2 + 2;
    *(unsigned char *)(temp_v0 + temp_v3 * 0x3c + 0x90) = 0;
    temp_v3 = temp_v3 + 2;
    *(unsigned char *)(temp_v0 + temp_v1 * 0x3c + 0x90) = 0;
  } while (temp_v2 < 0x23);
  if (*(char *)(temp_v0 + 0x9b4) != '\0') {
    ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v0 + 0x9c8) + 4));
    if (*(int **)(temp_v0 + 0x9c8) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v0 + 0x9c8) + 4))();
      *(unsigned int *)(temp_v0 + 0x9c8) = 0;
    }
    *(char *)(temp_v0 + 0x9b4) = '\0';
    *(unsigned short *)(temp_v0 + 0x9b6) = 0;
  }
  return;
}

} /* extern "C" */
