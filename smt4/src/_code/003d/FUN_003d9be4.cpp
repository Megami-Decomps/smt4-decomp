/* NON_MATCHING: effect-resource cleanup needs recovered C++ destructor interfaces for both resource fields; manager constructor FUN_0034a1ec installs vtable address point 0x4208dc. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int FUN_0022708c(void);
int FUN_002276f8(int);
int FUN_00241d58(int);
int FUN_0024dc64(void);
int textureCacheReleaseAll(void);
int FUN_0027de24(int);
int asdMdlManagerDestroy(int);
int asdMemFree(void);
int memClear(int, int);
int FUN_003da890(int);

typedef int romwright_code(...);
extern int g_btlMain; /* 0x4342c8 */

/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: FUN_0022708c. */
/* Supplied declaration required: FUN_002276f8. */
/* Supplied declaration required: FUN_00241d58. */
/* Supplied declaration required: FUN_0024dc64. */
/* Supplied declaration required: textureCacheReleaseAll. */
/* Supplied declaration required: FUN_0027de24. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: FUN_003da890. */


void FUN_003d9be4(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  
  *(unsigned int *)(param_1 + 0x3048) = 0;
  FUN_0022708c();
  FUN_003da890(param_1);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x8c;
    *(unsigned char *)(temp_v0 + 0x25c0) = 0xff;
    memClear(temp_v0 + 0x25c8,0x80);
    if (*(int *)(temp_v0 + 0x25c4) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0x25c4) = 0;
    }
    temp_v1 = temp_v1 + 1;
    *(unsigned char *)(temp_v0 + 0x2648) = 0;
  } while (temp_v1 < 0xb);
  piVar1 = *(int **)(param_1 + 0x1cf8);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))();
    *(int *)(param_1 + 0x1cf8) = 0;
  }
  FUN_002276f8(param_1);
  *(unsigned int *)(param_1 + 0x2f98) = 0;
  FUN_0024dc64();
  textureCacheReleaseAll();
  if (g_btlMain != 0) {
    *(unsigned int *)(g_btlMain + 0x634) = *(unsigned int *)(g_btlMain + 0x634) & 0xf7ffffff;
  }
  FUN_0027de24(param_1);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x28;
    piVar1 = (int *)(temp_v0 + 400);
    *(unsigned int *)(temp_v0 + 0x194) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x1b4) = 0;
    *(unsigned int *)(temp_v0 + 0x198) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x1ac) = 0;
    if (*(int **)(temp_v0 + 0x1b0) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v0 + 0x1b0) + 4))();
      *(unsigned int *)(temp_v0 + 0x1b0) = 0;
    }
    if (*piVar1 != 0) {
      if (-1 < *(int *)(*(int *)(*piVar1 + 8) + 0xc)) {
        asdMdlManagerMarkDestroy();
      }
      asdMdlManagerDestroy(*piVar1);
      *piVar1 = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x32);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x30;
    *(unsigned int *)(temp_v0 + 0x139c) = 0;
    *(unsigned int *)(temp_v0 + 0x1398) = 0xffffffff;
    FUN_00241d58(temp_v0 + 0x13a0);
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v0 + 0x13c4) = 0;
  } while (temp_v1 < 0x32);
  return;
}

} /* extern "C" */
