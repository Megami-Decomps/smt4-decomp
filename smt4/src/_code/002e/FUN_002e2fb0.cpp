/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2fb0` (_code @ 0x2e2fb0, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029f848(int, unsigned int, int, int, int, int);
int rt_memcpy(int, unsigned int, unsigned int);

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0029f848. */
/* Supplied declaration required: rt_memcpy. */


void FUN_002e2fb0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 unstructured edge(s); 1 goto(s); 2 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar8;
  short *psVar9;
  int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  temp_v2 = DAT_0044e190;
  if (param_2 >= 0x11) {
    return;
  }
  uStack_28 = *(unsigned int *)(DAT_0044e190 + 0x482);
  uStack_24 = *(unsigned int *)(DAT_0044e190 + 0x486);
  uStack_20 = *(unsigned int *)(DAT_0044e190 + 0x48a);
  uStack_1c = *(unsigned int *)(DAT_0044e190 + 0x48e);
  *(unsigned int *)(DAT_0044e190 + 0x4c2) = 0;
  *(unsigned int *)(temp_v2 + 0x4c6) = 0;
  *(unsigned int *)(temp_v2 + 0x4ca) = 0;
  *(unsigned int *)(temp_v2 + 0x4ce) = 0;
  *(unsigned int *)(temp_v2 + 0x482) = 0;
  *(unsigned int *)(temp_v2 + 0x486) = 0;
  *(unsigned int *)(temp_v2 + 0x48a) = 0;
  *(unsigned int *)(temp_v2 + 0x48e) = 0;
  rt_memcpy(temp_v2 + 0x482,param_1,param_2 << 1);
  temp_v3 = 0;
  if (param_2 != 0) {
    temp_v3 = param_2 & 1;
  }
  temp_v6 = 0;
  if ((param_2 != 0 && temp_v3 != 0) && -1 < (int)temp_v3) {
    do {
      if (*(short *)(temp_v2 + temp_v6 * 2 + 0x482) == 0) goto LAB_002e3094;
      temp_v6 = temp_v6 + 1;
    } while ((int)temp_v6 < (int)temp_v3);
  }
  while ((temp_v6 = temp_v3, (int)param_2 > (int)temp_v6 &&
         (temp_v4 = temp_v2 + temp_v6 * 2, *(short *)(temp_v4 + 0x482) != 0))) {
    if (*(short *)(temp_v4 + 0x484) == 0) {
      temp_v6 = temp_v6 + 1;
      break;
    }
    temp_v3 = temp_v6 + 2;
  }
LAB_002e3094:
  puVar8 = (unsigned int *)0x8;
  FUN_0029f848(temp_v2 + 0x4d4,temp_v6,8,1,0,1);
  *(unsigned char *)(temp_v2 + 0x410) = 1;
  temp_v4 = 0;
  if (0 < (int)param_2) {
    puVar8 = (unsigned int *)&uStack_28;
  }
  *(unsigned char *)(temp_v2 + 0x548) = 0;
  if (0 < (int)param_2) {
    do {
      temp_v0 = *(short *)(temp_v2 + temp_v4 * 2 + 0x482);
      if (temp_v0 != 0) {
        temp_v5 = 0;
        do {
          psVar9 = (short *)((int)puVar8 + temp_v5 * 2);
          temp_v1 = *psVar9;
          if ((temp_v1 != 0) && (temp_v1 == temp_v0)) break;
          temp_v1 = psVar9[1];
          if ((temp_v1 != 0) && (temp_v1 == temp_v0)) {
            temp_v5 = temp_v5 + 1;
            break;
          }
          temp_v5 = temp_v5 + 2;
        } while (temp_v5 < 8);
        if (temp_v5 >= 8) {
          *(unsigned char *)(temp_v2 + temp_v4 + 0x4c2) = 1;
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)param_2);
  }
  return;
}

} /* extern "C" */
