/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cdca0` (_code @ 0x4cdca0, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(int);
int scrScriptProcessDestroy(int);
int FUN_0019e2dc(void);
int FUN_001ad6d8(void);
int ptrListRemoveClearOwner(unsigned int, unsigned int);
int FUN_001aeafc(unsigned int);
int FUN_00249c9c(void);
int FUN_002c2358(void);
int campCommonBgRelease(void);
int campButtonHelpRelease(void);
int gfxObjectDestroy(int);

typedef int romwright_code(...);
extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_0019e2dc. */
/* Supplied declaration required: FUN_001ad6d8. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_001aeafc. */
/* Supplied declaration required: FUN_00249c9c. */
/* Supplied declaration required: FUN_002c2358. */
/* Supplied declaration required: campCommonBgRelease. */
/* Supplied declaration required: campButtonHelpRelease. */
/* Supplied declaration required: gfxObjectDestroy. */


void FUN_004cdca0(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002c2358();
  FUN_001ad6d8();
  FUN_00249c9c();
  ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(param_1 + 0x20) + 4));
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x20) + 4))(*(int **)(param_1 + 0x20));
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(param_1 + 0x24) + 4));
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x24) + 4))(*(int **)(param_1 + 0x24));
    *(unsigned int *)(param_1 + 0x24) = 0;
  }
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v1 + 0x28) + 4));
    if (*(int **)(temp_v1 + 0x28) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v1 + 0x28) + 4))(*(int **)(temp_v1 + 0x28));
      *(unsigned int *)(temp_v1 + 0x28) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_001aeafc(g_handleRegistry);
  if (*(int *)(param_1 + 0x544) != 0) {
    gfxObjectDestroy(*(int *)(param_1 + 0x544));
    *(unsigned int *)(param_1 + 0x544) = 0;
  }
  campCommonBgRelease();
  campButtonHelpRelease();
  FUN_0019e2dc();
  if (*(int *)(param_1 + 0x18) != 0) {
    scrScriptProcessDestroy(*(int *)(param_1 + 0x18));
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    asdMemFree(*(int *)(param_1 + 0x10));
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    asdMemFree(*(int *)(param_1 + 0x14));
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

} /* extern "C" */
