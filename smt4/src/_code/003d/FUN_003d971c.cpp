/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d971c` (_code @ 0x3d971c, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int FUN_0022708c(void);
int FUN_002276f8(int);
int FUN_00241d58(int);
int FUN_0027de24(int);
int asdMdlManagerDestroy(int);
int asdMemFree(void);
int memClear(int, int);

typedef int romwright_code(...);
/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: FUN_0022708c. */
/* Supplied declaration required: FUN_002276f8. */
/* Supplied declaration required: FUN_00241d58. */
/* Supplied declaration required: FUN_0027de24. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */


void FUN_003d971c(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  
  *(unsigned int *)(param_1 + 0x3048) = 0;
  FUN_0022708c();
  FUN_002276f8(param_1);
  FUN_0027de24(param_1);
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + temp_v1 * 0x28;
    piVar2 = (int *)(temp_v0 + 400);
    *(unsigned int *)(temp_v0 + 0x194) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x1b4) = 0;
    *(unsigned int *)(temp_v0 + 0x198) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x1ac) = 0;
    if (*(int **)(temp_v0 + 0x1b0) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v0 + 0x1b0) + 4))();
      *(unsigned int *)(temp_v0 + 0x1b0) = 0;
    }
    if (*piVar2 != 0) {
      if (-1 < *(int *)(*(int *)(*piVar2 + 8) + 0xc)) {
        asdMdlManagerMarkDestroy();
      }
      asdMdlManagerDestroy(*piVar2);
      *piVar2 = 0;
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
  *(unsigned int *)(param_1 + 0x3028) = 0;
  *(unsigned char *)(param_1 + 0x3038) = 0xc;
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x1cfc) = 0;
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
  *(unsigned int *)(param_1 + 0x3028) = *(unsigned int *)(param_1 + 0x3028) | 0x100;
  *(unsigned int *)(param_1 + 0x3214) = 0;
  return;
}

} /* extern "C" */
