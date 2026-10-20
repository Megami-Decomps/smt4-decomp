/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b150` (_code @ 0x37b150, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int MapNaviTable_GetCategoryCount(void);

/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern short *MapNaviTable_GetCategoryRecord(unsigned int *, int);


void FUN_0037b150(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  char temp_v2;
  short temp_v3;
  unsigned int *puVar5;
  short *psVar6;
  unsigned short *puVar7;
  unsigned short *puVar8;
  unsigned int in_r3;
  unsigned short *puVar9;
  int temp_v4;
  short temp_v5;
  unsigned short *puVar12;
  int uStack_18;
  
  temp_v5 = 0;
  temp_v4 = 300;
  puVar7 = (unsigned short *)0x6172e4;
  puVar8 = (unsigned short *)0x6172e6;
  puVar9 = (unsigned short *)0x6172e8;
  puVar12 = (unsigned short *)0x6172ea;
  do {
    *puVar7 = 0;
    *puVar8 = 0;
    *puVar9 = 0;
    temp_v4 = temp_v4 - 1;
    *puVar12 = 0;
    puVar7 = puVar7 + 4;
    puVar8 = puVar8 + 4;
    puVar9 = puVar9 + 4;
    puVar12 = puVar12 + 4;
  } while (temp_v4 != 0);
  puVar5 = (unsigned int *)&uStack_18;
  uStack_18 = in_r3;
  MapNaviTable_GetCategoryCount();
  temp_v4 = 0;
  if (temp_v4 < (int)puVar5) {
    do {
      psVar6 = (short *)MapNaviTable_GetCategoryRecord((unsigned int *)&uStack_18,temp_v4);
      if (*psVar6 == -1) {
        return;
      }
      temp_v4 = temp_v4 + 1;
      *(short *)((unsigned int)*(unsigned char *)(psVar6 + 2) * 8 + 0x6172e4) = temp_v5;
      temp_v1 = *(char *)((int)psVar6 + 9);
      temp_v2 = *(char *)((int)psVar6 + 7);
      temp_v3 = (short)((((int)(char)psVar6[4] - (int)(char)psVar6[3]) + 1) / 2);
      *(short *)((unsigned int)*(unsigned char *)(psVar6 + 2) * 8 + 0x6172e6) = temp_v3;
      *(short *)((unsigned int)*(unsigned char *)(psVar6 + 2) * 8 + 0x6172e8) = temp_v3;
      temp_v0 = (short)((((int)temp_v1 - (int)temp_v2) + 1) / 2);
      temp_v5 = temp_v3 * temp_v0 + temp_v5;
      *(short *)((unsigned int)*(unsigned char *)(psVar6 + 2) * 8 + 0x6172ea) = temp_v0;
      puVar5 = (unsigned int *)&uStack_18;
      MapNaviTable_GetCategoryCount();
    } while (temp_v4 < (int)puVar5);
  }
  return;
}

} /* extern "C" */
