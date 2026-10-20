/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cf438` (_code @ 0x3cf438, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae164(void);
int dataTable08Sub1GetRecord(void);

/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */


void FUN_003cf438(int *param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  if (param_3 != 0) {
    *(unsigned int *)(param_2 + 0x594) = 1;
  }
  else {
    *(unsigned int *)(param_2 + 0x594) = 0;
    temp_v1 = *(unsigned int *)(*param_1 + 0x44a0);
    if ((((temp_v1 & 4) == 0 && (temp_v1 & 0x40) == 0) && ((temp_v1 & 0x100) == 0)) &&
       (temp_v1 = *(unsigned int *)(*param_1 + 0xe0), (temp_v1 & 0x8000000) == 0)) {
      if ((temp_v1 & 0x4000000) != 0) {
        *(unsigned int *)(param_2 + 0x594) = 0x16;
      }
      else {
        temp_v2 = *(int *)(param_2 + 0x28);
        temp_v0 = *(short *)(temp_v2 + 0x14c);
        if (temp_v0 == 2 || temp_v0 == 3) {
          temp_v1 = (unsigned int)*(short *)(temp_v2 + 0x14e);
        }
        else {
          if (temp_v0 != 8) {
            return;
          }
          temp_v2 = (int)*(short *)(temp_v2 + 0x14e);
          dataTable08Sub1GetRecord();
          temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
          if (temp_v1 == 0) {
            return;
          }
        }
        if (0 < (int)temp_v1) {
          FUN_002ae164();
          temp_v3 = 0;
          if (temp_v1 != 0) {
            temp_v3 = (unsigned int)*(unsigned char *)(temp_v1 + 0x57);
          }
          if ((temp_v1 != 0 && temp_v3 != 1) && (temp_v3 != 0)) {
            *(unsigned int *)(param_2 + 0x594) = temp_v3;
          }
        }
      }
    }
  }
  return;
}

} /* extern "C" */
