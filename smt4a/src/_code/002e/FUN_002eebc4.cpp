/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eebc4` (_code @ 0x2eebc4, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char g_mapRndMaze; /* 0x60fc08 */
extern int *DAT_006105d4; /* 0x6105d4 */
extern int *DAT_006105d8; /* 0x6105d8 */
extern int *DAT_006105dc; /* 0x6105dc */
extern int *DAT_006105e0; /* 0x6105e0 */


void FUN_002eebc4(void)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v1 = 1;
    do {
      temp_v0 = temp_v1 * 4 + temp_v2 * 0x100;
      piVar2 = *(int **)(&g_mapRndMaze + temp_v0 + 0x3cc);
      if (piVar2 != (int *)0x0) {
        (**(romwright_code **)(*piVar2 + 4))();
        *(unsigned int *)(&g_mapRndMaze + temp_v0 + 0x3cc) = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x40);
    piVar2 = *(int **)(temp_v2 * 4 + 0x60ffbc);
    if (piVar2 != (int *)0x0) {
      (**(romwright_code **)(*piVar2 + 4))();
      *(unsigned int *)(temp_v2 * 4 + 0x60ffbc) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 6);
  if (DAT_006105dc != (int *)0x0) {
    (**(romwright_code **)(*DAT_006105dc + 4))();
    DAT_006105dc = (int *)0x0;
  }
  if (DAT_006105d8 != (int *)0x0) {
    (**(romwright_code **)(*DAT_006105d8 + 4))();
    DAT_006105d8 = (int *)0x0;
  }
  if (DAT_006105d4 != (int *)0x0) {
    (**(romwright_code **)(*DAT_006105d4 + 4))();
    DAT_006105d4 = (int *)0x0;
  }
  if (DAT_006105e0 != (int *)0x0) {
    (**(romwright_code **)(*DAT_006105e0 + 4))();
    DAT_006105e0 = (int *)0x0;
  }
  return;
}

} /* extern "C" */
