/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001932e0` (_code @ 0x1932e0, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: rt_memcpy_w. */


unsigned short FUN_001932e0(unsigned int param_1,unsigned int *param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  char *pcVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  char *pcVar7;
  
  temp_v2 = (unsigned int)*(unsigned short *)(param_3 + 0x22);
  pcVar7 = (char *)(*(int *)(param_4 + 8) + temp_v2 * 0x218);
  pcVar3 = (char *)(*(int *)(param_4 + 8) + temp_v2 * 0x218);
  temp_v0 = *pcVar7;
  puVar5 = (unsigned int *)*param_2;
  temp_v1 = pcVar7[1];
  if (temp_v2 == param_5) {
    temp_v2 = 0;
    if (temp_v0 != '\0') {
      temp_v2 = 5;
    }
    *puVar5 = temp_v2 | ((unsigned int)(temp_v1 != '\0') << 0x10);
    puVar5[1] = 0x500e0;
    puVar5[2] = *(unsigned int *)(pcVar3 + 2) & 0xffffff;
    puVar5[3] = 0xf00e1;
    *param_2 = (unsigned int)(puVar5 + 4);
  }
  else {
    temp_v2 = 0;
    if (temp_v0 != '\0') {
      temp_v2 = 5;
    }
    *puVar5 = temp_v2 | ((unsigned int)(temp_v1 != '\0') << 0x10);
    puVar5[1] = 0x500e0;
    puVar5[2] = *(unsigned int *)(pcVar3 + 2) & 0xffffff;
    puVar5[3] = 0xf00e1;
    puVar6 = puVar5 + 4;
    if (*pcVar3 != '\0') {
      rt_memcpy_w(puVar6,pcVar3 + 8,0x210);
      puVar6 = puVar5 + 0x88;
    }
    *param_2 = (unsigned int)puVar6;
  }
  return *(unsigned short *)(param_3 + 0x22);
}
