/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d8c8` (_code @ 0x14d8c8, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: rt_memcpy. */


void FUN_0014d8c8(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int *param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = 1;
  if (0 < param_5) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x18) + param_4 * 0x1c);
    temp_v1 = param_5;
    do {
      if ((*pcVar2 == '\x01') && (temp_v0)) {
        temp_v0 = 0;
      }
      temp_v1 = temp_v1 - 1;
      pcVar2 = pcVar2 + 0x1c;
    } while (temp_v1 != 0);
  }
  if (param_6 != (unsigned int *)0x0) {
    *param_6 = 0x42454344;
    param_6[3] = param_5;
    param_6[1] = 0x10000;
    param_6[2] = param_3;
    temp_v0 = 1;
    rt_memcpy(param_6 + 4,*(int *)(param_1 + 4) + param_2,param_3);
    rt_memcpy((int)param_6 + param_3 + 0x10,*(int *)(param_1 + 0x18) + param_4 * 0x1c,param_5 * 0x1c
             );
    pcVar2 = (char *)((int)param_6 + param_3 + 0x10);
    temp_v1 = 0;
    if (temp_v1 < param_5) {
      do {
        if (*pcVar2 == '\x01') {
          if (temp_v0) {
            temp_v2 = *(int *)(param_1 + 4);
            temp_v3 = *(int *)(pcVar2 + 4);
            temp_v0 = 0;
            pcVar2[4] = '\0';
            pcVar2[5] = '\0';
            pcVar2[6] = '\0';
            pcVar2[7] = '\0';
            *(int *)(pcVar2 + 8) = *(int *)(pcVar2 + 8) - ((temp_v2 + param_2) - temp_v3);
          }
          else {
            *(int *)(pcVar2 + 4) = *(int *)(pcVar2 + 4) - (*(int *)(param_1 + 4) + param_2);
          }
        }
        pcVar2[1] = '\0';
        temp_v1 = temp_v1 + 1;
        pcVar2[2] = '\0';
        pcVar2 = pcVar2 + 0x1c;
      } while (temp_v1 < param_5);
    }
  }
  return;
}
