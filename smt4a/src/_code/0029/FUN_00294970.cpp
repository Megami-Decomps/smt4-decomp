/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294970` (_code @ 0x294970, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern int g_mapHakai; /* 0x581038 */


void FUN_00294970(void)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = 0;
  do {
    temp_v1 = g_mapHakai + temp_v0 * 0x54;
    temp_v2 = *(char *)(temp_v1 + 0x5c) != '\0';
    piVar1 = (int *)0x0;
    if (temp_v2) {
      piVar1 = (int *)(unsigned int)*(unsigned char *)(temp_v1 + 0x84);
    }
    temp_v3 = piVar1 != (int *)0x0;
    if (temp_v2 && temp_v3) {
      piVar1 = *(int **)(temp_v1 + 0x88);
    }
    if ((temp_v2 && temp_v3) && piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))();
      *(unsigned int *)(temp_v1 + 0x88) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  temp_v0 = 0;
  do {
    temp_v1 = 0;
    do {
      piVar1 = *(int **)(g_mapHakai + temp_v0 * 0x20 + temp_v1 * 4 + 0x20);
      if (piVar1 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 4))();
        *(unsigned int *)(g_mapHakai + temp_v0 * 0x20 + temp_v1 * 4 + 0x20) = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 7);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  return;
}

} /* extern "C" */
