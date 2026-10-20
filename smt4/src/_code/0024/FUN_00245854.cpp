/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245854` (_code @ 0x245854, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae164(void);
int dataTable08Sub2GetRecord(void);
int dataTable08Sub1GetRecord(void);

/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: dataTable08Sub2GetRecord. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */


unsigned int FUN_00245854(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  if ((*param_1 & 0x10) == 0) {
    temp_v3 = 0;
    do {
      if ((short)param_1[temp_v3 * 2 + 0x8a] == 2 || (short)param_1[temp_v3 * 2 + 0x8a] == 3) {
        temp_v2 = (int)*(short *)((int)param_1 + temp_v3 * 8 + 0x22a);
        FUN_002ae164();
        if ((temp_v2 != 0) && (param_2 == (*(unsigned int *)(temp_v2 + 0x28) & 0x1ffff) >> 0xc)) {
          return 1;
        }
      }
      if ((short)param_1[temp_v3 * 2 + 0x8a] == 8) {
        temp_v2 = (int)*(short *)((int)param_1 + temp_v3 * 8 + 0x22a);
        dataTable08Sub1GetRecord();
        if ((((temp_v2 != 0) && (temp_v1 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62), temp_v1 != 0)) &&
            (FUN_002ae164(), temp_v1 != 0)) && (param_2 == (*(unsigned int *)(temp_v1 + 0x28) & 0x1ffff) >> 0xc)
           ) {
          return 1;
        }
      }
      temp_v0 = (short)param_1[temp_v3 * 2 + 0x8a];
      temp_v4 = temp_v0 == 1;
      if (temp_v4) {
        temp_v0 = *(short *)((int)param_1 + temp_v3 * 8 + 0x22a);
      }
      if ((temp_v4 && temp_v0 == 2) && (param_1[0x9e] != 0)) {
        temp_v1 = (unsigned int)*(unsigned short *)(param_1[0x9e] + 4);
        dataTable08Sub2GetRecord();
        if ((temp_v1 != 0) && (param_2 == *(unsigned int *)(temp_v1 + 0x54) >> 0x14)) {
          return 1;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 5);
  }
  else {
    if ((short)param_1[0x88] == 2 || (short)param_1[0x88] == 3) {
      temp_v3 = (int)*(short *)((int)param_1 + 0x222);
      FUN_002ae164();
      if ((temp_v3 != 0) && (param_2 == (*(unsigned int *)(temp_v3 + 0x28) & 0x1ffff) >> 0xc)) {
        return 1;
      }
    }
    if ((short)param_1[0x88] == 8) {
      temp_v3 = (int)*(short *)((int)param_1 + 0x222);
      dataTable08Sub1GetRecord();
      if ((((temp_v3 != 0) && (temp_v1 = (unsigned int)*(unsigned short *)(temp_v3 + 0x62), temp_v1 != 0)) &&
          (FUN_002ae164(), temp_v1 != 0)) && (param_2 == (*(unsigned int *)(temp_v1 + 0x28) & 0x1ffff) >> 0xc))
      {
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
