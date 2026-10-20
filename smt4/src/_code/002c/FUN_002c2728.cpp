/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2728` (_code @ 0x2c2728, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_0044e330; /* 0x44e330 */


void FUN_002c2728(int param_1,int param_2)

{
/* irregular: 3 goto(s) */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  
  temp_v1 = 0;
  if (temp_v1 < param_1) {
    do {
      puVar3 = (unsigned int *)0x0;
      if (DAT_0044e330 != (romwright_code *)0x0) {
        puVar3 = (unsigned int *)(*DAT_0044e330)(0x10000,0x100,0,0x1c);
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      while( 1 ) {
        temp_v0 = ((*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc)) & 0x1f) * 4;
        puVar4 = *(unsigned int **)(temp_v0 + 0x4c6334);
        if (puVar4 == (unsigned int *)0x0) break;
        if (*puVar4 != (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc))) {
          if ((*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc)) < *puVar4) {
            *(unsigned int *)(param_2 + temp_v1 * 4) = (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc));
            *puVar3 = (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc));
            puVar3[6] = *(unsigned int *)(((*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc)) & 0x1f) * 4 + 0x4c6334);
            goto LAB_002c27c8;
          }
          puVar2 = (unsigned int *)puVar4[6];
          while( 1 ) {
            if (puVar2 == (unsigned int *)0x0) {
              puVar4[6] = (unsigned int)puVar3;
              *puVar3 = (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc));
              puVar3[6] = 0;
              *(unsigned int *)(param_2 + temp_v1 * 4) = (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc));
              goto LAB_002c2838;
            }
            if (*puVar2 == (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc))) break;
            if ((*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc)) < *puVar2) {
              *(unsigned int *)(param_2 + temp_v1 * 4) = (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc));
              *puVar3 = (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc));
              puVar4[6] = (unsigned int)puVar3;
              puVar3[6] = (unsigned int)puVar2;
              goto LAB_002c2838;
            }
            puVar4 = puVar2;
            puVar2 = (unsigned int *)puVar2[6];
          }
        }
        (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc)) = (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc)) + 1;
      }
      *(unsigned int *)(param_2 + temp_v1 * 4) = (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc));
      *puVar3 = (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc));
      temp_v0 = ((*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc)) & 0x1f) * 4;
      puVar3[6] = 0;
LAB_002c27c8:
      *(unsigned int **)(temp_v0 + 0x4c6334) = puVar3;
LAB_002c2838:
      (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc)) = (*(unsigned int *)((unsigned char *)&DAT_0044e330 + 0xc)) + 1;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_1);
  }
  return;
}

} /* extern "C" */
