/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298e40` (_code @ 0x298e40, 0x148 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable1bOr1cGetRecord(void);

extern int unlockFlagTest(unsigned short);
extern int FUN_0028fb40(unsigned short);
extern int partyFindActiveSlotById(unsigned short);
extern int aocEntryGetKind(unsigned short);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
extern int FUN_00348b7c(int);


void FUN_00298e40(int param_1,int param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = param_1;
  dataTable1bOr1cGetRecord();
  if (temp_v2 == 0) {
    return;
  }
  temp_v3 = temp_v2 + param_2 * 8;
  temp_v0 = *(short *)(temp_v3 + 0x16c);
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      if (temp_v0 != 7) {
        return;
      }
      temp_v2 = aocEntryGetKind(*(unsigned short *)(temp_v3 + 0x16e));
      if ((temp_v2 == 0xb) && (temp_v2 = unlockFlagTest(*(unsigned short *)(temp_v3 + 0x16e)), temp_v2 != 0)) {
        param_3[2] = 1;
      }
      *(unsigned char *)((int)param_3 + 6) = 1;
      *(unsigned short *)(param_3 + 1) = *(unsigned short *)(temp_v3 + 0x16e);
      temp_v2 = *(int *)(temp_v3 + 0x170) - param_3[2];
      *param_3 = temp_v2;
    }
    else {
      *(unsigned char *)((int)param_3 + 6) = 0;
      *(unsigned short *)(param_3 + 1) = *(unsigned short *)(temp_v3 + 0x16e);
      if (*(char *)(temp_v2 + 6) != '\x01') {
        temp_v2 = partyFindActiveSlotById(*(unsigned short *)(temp_v3 + 0x16e));
        if (-1 < temp_v2) {
          param_3[2] = 1;
          *param_3 = 0;
          return;
        }
        *param_3 = 1;
        param_3[2] = 0;
        return;
      }
      temp_v2 = FUN_00348b7c(param_1);
      temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + param_2 * 2 + 2);
      param_3[2] = temp_v1;
      temp_v2 = *(int *)(temp_v3 + 0x170) - temp_v1;
      *param_3 = temp_v2;
    }
  }
  else {
    temp_v2 = FUN_0028fb40(*(unsigned short *)(temp_v3 + 0x16e));
    param_3[2] = temp_v2;
    *(unsigned char *)((int)param_3 + 6) = 1;
    *(unsigned short *)(param_3 + 1) = *(unsigned short *)(temp_v3 + 0x16e);
    temp_v2 = *(int *)(temp_v3 + 0x170) - temp_v2;
    *param_3 = temp_v2;
  }
  if (temp_v2 < 1) {
    temp_v2 = 0;
  }
  *param_3 = temp_v2;
  return;
}

} /* extern "C" */
