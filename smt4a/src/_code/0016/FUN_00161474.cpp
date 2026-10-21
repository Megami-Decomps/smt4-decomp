/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00161474` (_code @ 0x161474, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned int *, int);

typedef int romwright_code(...);
extern romwright_code *g_gfxAllocateCallback; /* 0x58918c */

/* Supplied declaration required: sysMemClear. */


void FUN_00161474(int param_1,int param_2)

{
/* irregular: 3 goto(s); 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  
  temp_v1 = 0;
  if (temp_v1 < param_1) {
    do {
      if (g_gfxAllocateCallback == (romwright_code *)0x0) {
        puVar4 = (unsigned int *)0x0;
      }
      else {
        puVar4 = (unsigned int *)(*g_gfxAllocateCallback)(0x10000,0x100,0,0x44);
      }
      sysMemClear(puVar4,0x44);
      puVar4[0xb] = 0x300;
      while( 1 ) {
        temp_v0 = ((*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8)) & 0x1f) * 4;
        puVar3 = *(unsigned int **)(temp_v0 + 0x61a48c);
        if (puVar3 == (unsigned int *)0x0) break;
        if (*puVar3 != (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8))) {
          if ((*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8)) < *puVar3) {
            *(unsigned int *)(param_2 + temp_v1 * 4) = (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8));
            *puVar4 = (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8));
            puVar4[0x10] = *(unsigned int *)(((*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8)) & 0x1f) * 4 + 0x61a48c);
            goto LAB_00161510;
          }
          puVar2 = (unsigned int *)puVar3[0x10];
          while( 1 ) {
            if (puVar2 == (unsigned int *)0x0) {
              puVar3[0x10] = (unsigned int)puVar4;
              *puVar4 = (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8));
              puVar4[0x10] = 0;
              *(unsigned int *)(param_2 + temp_v1 * 4) = (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8));
              goto LAB_00161580;
            }
            if (*puVar2 == (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8))) break;
            if ((*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8)) < *puVar2) {
              *(unsigned int *)(param_2 + temp_v1 * 4) = (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8));
              *puVar4 = (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8));
              puVar3[0x10] = (unsigned int)puVar4;
              puVar4[0x10] = (unsigned int)puVar2;
              goto LAB_00161580;
            }
            puVar3 = puVar2;
            puVar2 = (unsigned int *)puVar2[0x10];
          }
        }
        (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8)) = (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8)) + 1;
      }
      *(unsigned int *)(param_2 + temp_v1 * 4) = (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8));
      *puVar4 = (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8));
      temp_v0 = ((*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8)) & 0x1f) * 4;
      puVar4[0x10] = 0;
LAB_00161510:
      *(unsigned int **)(temp_v0 + 0x61a48c) = puVar4;
LAB_00161580:
      (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8)) = (*(unsigned int *)((unsigned char *)&g_gfxAllocateCallback + 0x8)) + 1;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_1);
  }
  return;
}

} /* extern "C" */
