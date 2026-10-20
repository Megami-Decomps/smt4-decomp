/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bef68` (_code @ 0x2bef68, 0x8 bytes) from smt4_v1.2.0.cxi.
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


void FUN_002bef68(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  temp_v1 = *(unsigned int *)(param_1 + param_2 * 4);
  temp_v0 = (temp_v1 & 0x1f) * 4;
  for (puVar5 = *(unsigned int **)(temp_v0 + 0x4c62ac); puVar5 != (unsigned int *)0x0; puVar5 = (unsigned int *)puVar5[0x10])
  {
    if (*puVar5 == temp_v1) {
      if (puVar5 != (unsigned int *)0x0) goto LAB_002bf064;
      break;
    }
  }
  if (temp_v1 != 0) {
    if (DAT_0044e330 == (romwright_code *)0x0) {
      puVar5 = (unsigned int *)0x0;
    }
    else {
      param_3 = 0;
      puVar5 = (unsigned int *)(*DAT_0044e330)(0x10000,0x100,0,0x44);
    }
    memClear(puVar5,0x44);
    puVar5[0xb] = 0x300;
    *puVar5 = temp_v1;
    puVar4 = *(unsigned int **)(temp_v0 + 0x4c62ac);
    if (puVar4 == (unsigned int *)0x0) {
      *(unsigned int **)(temp_v0 + 0x4c62ac) = puVar5;
    }
    else if (temp_v1 < *puVar4) {
      puVar5[0x10] = (unsigned int)puVar4;
      *(unsigned int **)(temp_v0 + 0x4c62ac) = puVar5;
    }
    else {
      for (puVar2 = (unsigned int *)puVar4[0x10]; puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[0x10]) {
        param_3 = *puVar2;
        if (temp_v1 < param_3) {
          puVar4[0x10] = (unsigned int)puVar5;
          puVar5[0x10] = (unsigned int)puVar2;
          if (puVar2 != (unsigned int *)0x0) goto LAB_002bf064;
          break;
        }
        puVar4 = puVar2;
      }
      puVar4[0x10] = (unsigned int)puVar5;
    }
  }
LAB_002bf064:
  if (DAT_004c632c != (unsigned int *)0x0) {
    param_3 = g_commandBufferCursor - *(int *)((int)DAT_004c632c + 4);
    *(unsigned int *)((int)DAT_004c632c + 0xc) = param_3;
  }
  DAT_004c632c = puVar5;
  if (puVar5 != (unsigned int *)0x0) {
    param_3 = puVar5[1];
  }
  if (puVar5 != (unsigned int *)0x0 && param_3 != 0) {
    g_commandBufferCursor = puVar5[3] + param_3;
    g_commandBufferEnd = puVar5[2] + param_3;
    return;
  }
  g_commandBufferEnd = 0;
  g_commandBufferCursor = 0;
  return;
}

} /* extern "C" */
