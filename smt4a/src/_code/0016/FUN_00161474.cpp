/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00161474` (_code @ 0x161474, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned int *, int);

typedef int romwright_code(...);
extern romwright_code *DAT_0058918c; /* 0x58918c */
extern unsigned int DAT_00589194; /* 0x589194 */

/* Supplied declaration required: FUN_002e6354. */


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
      if (DAT_0058918c == (romwright_code *)0x0) {
        puVar4 = (unsigned int *)0x0;
      }
      else {
        puVar4 = (unsigned int *)(*DAT_0058918c)(0x10000,0x100,0,0x44);
      }
      FUN_002e6354(puVar4,0x44);
      puVar4[0xb] = 0x300;
      while( 1 ) {
        temp_v0 = (DAT_00589194 & 0x1f) * 4;
        puVar3 = *(unsigned int **)(temp_v0 + 0x61a48c);
        if (puVar3 == (unsigned int *)0x0) break;
        if (*puVar3 != DAT_00589194) {
          if (DAT_00589194 < *puVar3) {
            *(unsigned int *)(param_2 + temp_v1 * 4) = DAT_00589194;
            *puVar4 = DAT_00589194;
            puVar4[0x10] = *(unsigned int *)((DAT_00589194 & 0x1f) * 4 + 0x61a48c);
            goto LAB_00161510;
          }
          puVar2 = (unsigned int *)puVar3[0x10];
          while( 1 ) {
            if (puVar2 == (unsigned int *)0x0) {
              puVar3[0x10] = (unsigned int)puVar4;
              *puVar4 = DAT_00589194;
              puVar4[0x10] = 0;
              *(unsigned int *)(param_2 + temp_v1 * 4) = DAT_00589194;
              goto LAB_00161580;
            }
            if (*puVar2 == DAT_00589194) break;
            if (DAT_00589194 < *puVar2) {
              *(unsigned int *)(param_2 + temp_v1 * 4) = DAT_00589194;
              *puVar4 = DAT_00589194;
              puVar3[0x10] = (unsigned int)puVar4;
              puVar4[0x10] = (unsigned int)puVar2;
              goto LAB_00161580;
            }
            puVar3 = puVar2;
            puVar2 = (unsigned int *)puVar2[0x10];
          }
        }
        DAT_00589194 = DAT_00589194 + 1;
      }
      *(unsigned int *)(param_2 + temp_v1 * 4) = DAT_00589194;
      *puVar4 = DAT_00589194;
      temp_v0 = (DAT_00589194 & 0x1f) * 4;
      puVar4[0x10] = 0;
LAB_00161510:
      *(unsigned int **)(temp_v0 + 0x61a48c) = puVar4;
LAB_00161580:
      DAT_00589194 = DAT_00589194 + 1;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_1);
  }
  return;
}

} /* extern "C" */
