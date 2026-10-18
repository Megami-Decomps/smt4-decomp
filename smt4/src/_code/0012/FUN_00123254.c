/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123254` (_code @ 0x123254, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e334; /* 0x44e334 */
extern unsigned int DAT_0044e338; /* 0x44e338 */
extern unsigned int DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern unsigned char DAT_004c62a2; /* 0x4c62a2 */
extern unsigned int *DAT_004c632c; /* 0x4c632c */
extern unsigned int *DAT_004c6330; /* 0x4c6330 */


void FUN_00123254(int param_1,int param_2)

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
        for (puVar3 = *(unsigned int **)((temp_v1 & 0x1f) * 4 + 0x4c62ac); puVar3 != (unsigned int *)0x0;
            puVar3 = (unsigned int *)puVar3[0x10]) {
          if (temp_v1 <= *puVar3) {
            if ((puVar3 != (unsigned int *)0x0) && (*puVar3 == temp_v1)) {
              if (DAT_004c6330 == puVar3) {
                DAT_004c6330 = (unsigned int *)0x0;
                DAT_004c62a2 = 0;
              }
              if (DAT_004c632c == puVar3) {
                DAT_004652a4 = 0;
                DAT_004652a0 = 0;
                DAT_004c632c = (unsigned int *)0x0;
              }
              if (puVar3[1] != 0) {
                in_r12 = DAT_0044e334;
              }
              if (puVar3[1] != 0 && in_r12 != (romwright_code *)0x0) {
                (*in_r12)(0x10000,0x105,*puVar3);
              }
              temp_v1 = *(unsigned int *)(param_2 + temp_v2 * 4);
              if (temp_v1 < DAT_0044e338) {
                DAT_0044e338 = temp_v1;
              }
              if (puVar2 != (unsigned int *)0x0) {
                puVar2[0x10] = puVar3[0x10];
              }
              else {
                temp_v0 = (temp_v1 & 0x1f) * 4;
                *(unsigned int *)(temp_v0 + 0x4c62ac) =
                     *(unsigned int *)(*(int *)(temp_v0 + 0x4c62ac) + 0x40);
              }
              in_r12 = DAT_0044e334;
              if (DAT_0044e334 != (romwright_code *)0x0) {
                (*DAT_0044e334)(0x10000,0x100,0,puVar3);
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
