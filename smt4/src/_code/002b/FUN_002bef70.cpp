/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bef70` (_code @ 0x2bef70, 0x158 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memClear(unsigned int *, int);

typedef int romwright_code(...);
extern romwright_code *DAT_0044e330; /* 0x44e330 */
extern int g_commandBufferCursor; /* 0x4652a0 */
extern int g_commandBufferEnd; /* 0x4652a4 */
extern unsigned int *DAT_004c632c; /* 0x4c632c */

/* Supplied declaration required: memClear. */


void FUN_002bef70(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  temp_v0 = (param_1 & 0x1f) * 4;
  for (puVar4 = *(unsigned int **)(temp_v0 + 0x4c62ac); puVar4 != (unsigned int *)0x0; puVar4 = (unsigned int *)puVar4[0x10])
  {
    if (*puVar4 == param_1) {
      if (puVar4 != (unsigned int *)0x0) goto LAB_002bf064;
      break;
    }
  }
  if (param_1 != 0) {
    if (DAT_0044e330 == (romwright_code *)0x0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      param_3 = 0;
      puVar4 = (unsigned int *)(*DAT_0044e330)(0x10000,0x100,0,0x44);
    }
    memClear(puVar4,0x44);
    puVar4[0xb] = 0x300;
    *puVar4 = param_1;
    puVar3 = *(unsigned int **)(temp_v0 + 0x4c62ac);
    if (puVar3 == (unsigned int *)0x0) {
      *(unsigned int **)(temp_v0 + 0x4c62ac) = puVar4;
    }
    else if (param_1 < *puVar3) {
      puVar4[0x10] = (unsigned int)puVar3;
      *(unsigned int **)(temp_v0 + 0x4c62ac) = puVar4;
    }
    else {
      for (puVar2 = (unsigned int *)puVar3[0x10]; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[0x10]) {
        param_3 = *puVar2;
        if (param_1 < param_3) {
          puVar3[0x10] = (unsigned int)puVar4;
          puVar4[0x10] = (unsigned int)puVar2;
          if (puVar2 != (unsigned int *)0x0) goto LAB_002bf064;
          break;
        }
        puVar3 = puVar2;
      }
      puVar3[0x10] = (unsigned int)puVar4;
    }
  }
LAB_002bf064:
  if (DAT_004c632c != (unsigned int *)0x0) {
    param_3 = g_commandBufferCursor - *(int *)((int)DAT_004c632c + 4);
    *(unsigned int *)((int)DAT_004c632c + 0xc) = param_3;
  }
  DAT_004c632c = puVar4;
  if (puVar4 != (unsigned int *)0x0) {
    param_3 = puVar4[1];
  }
  if (puVar4 != (unsigned int *)0x0 && param_3 != 0) {
    g_commandBufferCursor = puVar4[3] + param_3;
    g_commandBufferEnd = puVar4[2] + param_3;
    return;
  }
  g_commandBufferEnd = 0;
  g_commandBufferCursor = 0;
  return;
}

} /* extern "C" */
