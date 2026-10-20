/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246570` (_code @ 0x246570, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aocRecordLookup84(void);
int dataTable08Sub2GetRecord(void);
int dataTable08Sub1GetRecord(void);

/* Supplied declaration required: aocRecordLookup84. */
extern unsigned int FUN_002ae3c4(unsigned int);
/* Supplied declaration required: dataTable08Sub2GetRecord. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */


int FUN_00246570(unsigned short *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = (unsigned int)*param_1;
  temp_v1 = 0;
  temp_v0 = FUN_002ae3c4(temp_v2);
  switch(temp_v0) {
  default:
    if ((param_1[1] & 2) != 0) {
      temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
    }
    return temp_v1;
  case 1:
    dataTable08Sub1GetRecord();
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0x7c);
      if ((param_1[1] & 2) != 0) {
        temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
      }
      return temp_v1;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    dataTable08Sub2GetRecord();
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0xa0);
      if ((param_1[1] & 2) != 0) {
        temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
      }
      return temp_v1;
    }
    break;
  case 10:
    aocRecordLookup84();
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(temp_v2 + 0x2c);
      if ((param_1[1] & 2) != 0) {
        temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
      }
      return temp_v1;
    }
  }
  temp_v1 = 99999999;
  if ((param_1[1] & 2) != 0) {
    temp_v1 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v1) / 100;
  }
  return temp_v1;
}

} /* extern "C" */
