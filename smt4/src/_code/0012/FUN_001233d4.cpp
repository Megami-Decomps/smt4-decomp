/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001233d4` (_code @ 0x1233d4, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4938(unsigned int *, int);

typedef int romwright_code(...);
extern romwright_code *DAT_0044e330; /* 0x44e330 */
extern unsigned int DAT_0044e338; /* 0x44e338 */

/* Supplied declaration required: FUN_002c4938. */


void FUN_001233d4(int param_1,int param_2)

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
      if (DAT_0044e330 == (romwright_code *)0x0) {
        puVar4 = (unsigned int *)0x0;
      }
      else {
        puVar4 = (unsigned int *)(*DAT_0044e330)(0x10000,0x100,0,0x44);
      }
      FUN_002c4938(puVar4,0x44);
      puVar4[0xb] = 0x300;
      while( 1 ) {
        temp_v0 = (DAT_0044e338 & 0x1f) * 4;
        puVar3 = *(unsigned int **)(temp_v0 + 0x4c62ac);
        if (puVar3 == (unsigned int *)0x0) break;
        if (*puVar3 != DAT_0044e338) {
          if (DAT_0044e338 < *puVar3) {
            *(unsigned int *)(param_2 + temp_v1 * 4) = DAT_0044e338;
            *puVar4 = DAT_0044e338;
            puVar4[0x10] = *(unsigned int *)((DAT_0044e338 & 0x1f) * 4 + 0x4c62ac);
            goto LAB_00123470;
          }
          puVar2 = (unsigned int *)puVar3[0x10];
          while( 1 ) {
            if (puVar2 == (unsigned int *)0x0) {
              puVar3[0x10] = (unsigned int)puVar4;
              *puVar4 = DAT_0044e338;
              puVar4[0x10] = 0;
              *(unsigned int *)(param_2 + temp_v1 * 4) = DAT_0044e338;
              goto LAB_001234e0;
            }
            if (*puVar2 == DAT_0044e338) break;
            if (DAT_0044e338 < *puVar2) {
              *(unsigned int *)(param_2 + temp_v1 * 4) = DAT_0044e338;
              *puVar4 = DAT_0044e338;
              puVar3[0x10] = (unsigned int)puVar4;
              puVar4[0x10] = (unsigned int)puVar2;
              goto LAB_001234e0;
            }
            puVar3 = puVar2;
            puVar2 = (unsigned int *)puVar2[0x10];
          }
        }
        DAT_0044e338 = DAT_0044e338 + 1;
      }
      *(unsigned int *)(param_2 + temp_v1 * 4) = DAT_0044e338;
      *puVar4 = DAT_0044e338;
      temp_v0 = (DAT_0044e338 & 0x1f) * 4;
      puVar4[0x10] = 0;
LAB_00123470:
      *(unsigned int **)(temp_v0 + 0x4c62ac) = puVar4;
LAB_001234e0:
      DAT_0044e338 = DAT_0044e338 + 1;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_1);
  }
  return;
}

} /* extern "C" */
