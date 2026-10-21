/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333af8` (_code @ 0x333af8, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable1bOr1cGetRecord(void);

extern unsigned char *questGetRuntimeStatus(unsigned int);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */


void FUN_00333af8(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned char *pbVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v4 = 0;
  temp_v3 = 0;
  do {
    temp_v1 = temp_v3;
    dataTable1bOr1cGetRecord();
    if (temp_v1 != 0) {
      temp_v2 = temp_v1 + 0x100;
      temp_v5 = *(unsigned short *)(temp_v1 + 0x1aa) != param_1;
      if (temp_v5) {
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x1ac);
      }
      if ((!temp_v5 || temp_v2 == param_1) &&
         ((param_3 == 0 || (pbVar4 = (unsigned char *)questGetRuntimeStatus(temp_v3 & 0xffff), (*pbVar4 & 1) != 0)))) {
        temp_v0 = temp_v4 * 2;
        temp_v4 = temp_v4 + 1;
        *(short *)(param_2 + temp_v0) = (short)temp_v3;
      }
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 400);
  return;
}

} /* extern "C" */
