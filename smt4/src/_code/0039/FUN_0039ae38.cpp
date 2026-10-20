/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039ae38` (_code @ 0x39ae38, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable2bSub1GetCount(void);
int MapNaviTable_GetCategoryCount(void);

extern int dataTable2bSub1GetRecord(int *, unsigned int);
/* Supplied declaration required: dataTable2bSub1GetCount. */
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern int MapNaviTable_GetCategoryRecord(int *, unsigned int);


void FUN_0039ae38(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned short param_6,
                 unsigned int param_7,unsigned short param_8,int param_9)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar7;
  char *pcVar8;
  int iStack_28;
  
  param_1 = param_1 + param_2 * 0x10;
  if (param_3 == 0) {
    *(unsigned short *)(param_1 + 0x62) = 0;
    *(unsigned char *)(param_1 + 100) = 0;
    *(unsigned short *)(param_1 + 0x66) = 0;
    *(unsigned char *)(param_1 + 0x68) = 0;
    *(unsigned char *)(param_1 + 0x69) = 0;
    *(unsigned short *)(param_1 + 0x6a) = 0;
    *(unsigned short *)(param_1 + 0x6c) = 0;
    *(unsigned char *)(param_1 + 0x65) = 0;
    return;
  }
  piVar2 = &iStack_28;
  iStack_28 = param_4;
  MapNaviTable_GetCategoryCount();
  temp_v1 = MapNaviTable_GetCategoryRecord(&iStack_28,0);
  temp_v2 = 0;
  if (temp_v2 < (int)piVar2) {
    do {
      psVar7 = (short *)(temp_v1 + temp_v2 * 0x14);
      temp_v3 = (int)*psVar7;
      if (temp_v3 == -1) break;
      if ((temp_v3 == param_4) && (psVar7[1] == param_5)) {
        temp_v1 = temp_v1 + temp_v2 * 0x14;
        goto LAB_0039aec4;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)piVar2);
  }
  temp_v1 = 0;
LAB_0039aec4:
  temp_v0 = *(char *)(temp_v1 + 4);
  piVar2 = &iStack_28;
  dataTable2bSub1GetCount();
  temp_v3 = dataTable2bSub1GetRecord(&iStack_28,0);
  temp_v2 = 0;
  if (temp_v2 < (int)piVar2) {
    do {
      pcVar8 = (char *)(temp_v3 + temp_v2 * 0x14);
      temp_v4 = (int)*pcVar8;
      if (temp_v4 == -1) break;
      if ((temp_v4 == param_4) && (pcVar8[1] == temp_v0)) {
        temp_v3 = temp_v3 + temp_v2 * 0x14;
        goto LAB_0039af34;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < (int)piVar2);
  }
  temp_v3 = 0;
LAB_0039af34:
  *(short *)(param_1 + 0x62) = (short)param_4;
  *(char *)(param_1 + 100) = (char)param_5;
  *(unsigned short *)(param_1 + 0x66) = (unsigned short)*(unsigned char *)(temp_v1 + 4);
  *(unsigned char *)(param_1 + 0x68) = *(unsigned char *)(temp_v3 + 3);
  if (param_9 != 0) {
    *(unsigned char *)(param_1 + 0x69) = 1;
  }
  else {
    *(unsigned char *)(param_1 + 0x69) = 0;
  }
  *(unsigned short *)(param_1 + 0x6a) = param_6;
  *(unsigned short *)(param_1 + 0x6c) = param_8;
  return;
}

} /* extern "C" */
