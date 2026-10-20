/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001612f4` (_code @ 0x1612f4, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern romwright_code *DAT_00589190; /* 0x589190 */
extern unsigned int DAT_00589194; /* 0x589194 */
extern unsigned int DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005b40e4; /* 0x5b40e4 */
extern unsigned char DAT_0061a482; /* 0x61a482 */
extern unsigned int *DAT_0061a50c; /* 0x61a50c */
extern unsigned int *DAT_0061a510; /* 0x61a510 */


void FUN_001612f4(int param_1,int param_2)

{
/* irregular: irregular input(s): in_r12 */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  romwright_code *in_r12;
  
  temp_v2 = 0;
  if (temp_v2 < param_1) {
    do {
      temp_v1 = *(unsigned int *)(param_2 + temp_v2 * 4);
      if (temp_v1 != 0) {
        puVar2 = (unsigned int *)0x0;
        for (puVar3 = *(unsigned int **)((temp_v1 & 0x1f) * 4 + 0x61a48c); puVar3 != (unsigned int *)0x0;
            puVar3 = (unsigned int *)puVar3[0x10]) {
          if (temp_v1 <= *puVar3) {
            if ((puVar3 != (unsigned int *)0x0) && (*puVar3 == temp_v1)) {
              if (DAT_0061a510 == puVar3) {
                DAT_0061a510 = (unsigned int *)0x0;
                DAT_0061a482 = 0;
              }
              if (DAT_0061a50c == puVar3) {
                DAT_005b40e4 = 0;
                DAT_005b40e0 = 0;
                DAT_0061a50c = (unsigned int *)0x0;
              }
              if (puVar3[1] != 0) {
                in_r12 = DAT_00589190;
              }
              if (puVar3[1] != 0 && in_r12 != (romwright_code *)0x0) {
                (*in_r12)(0x10000,0x105,*puVar3);
              }
              temp_v1 = *(unsigned int *)(param_2 + temp_v2 * 4);
              if (temp_v1 < DAT_00589194) {
                DAT_00589194 = temp_v1;
              }
              if (puVar2 != (unsigned int *)0x0) {
                puVar2[0x10] = puVar3[0x10];
              }
              else {
                temp_v0 = (temp_v1 & 0x1f) * 4;
                *(unsigned int *)(temp_v0 + 0x61a48c) =
                     *(unsigned int *)(*(int *)(temp_v0 + 0x61a48c) + 0x40);
              }
              in_r12 = DAT_00589190;
              if (DAT_00589190 != (romwright_code *)0x0) {
                (*DAT_00589190)(0x10000,0x100,0,puVar3);
              }
            }
            break;
          }
          puVar2 = puVar3;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < param_1);
  }
  return;
}

} /* extern "C" */
