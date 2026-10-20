/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d04ac` (_code @ 0x2d04ac, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable1bOr1cGetRecord(void);

extern unsigned int FUN_00298e00(unsigned short);
/* Supplied declaration required: dataTable1bOr1cGetRecord. */


unsigned int FUN_002d04ac(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_00298e00(*param_1);
  temp_v1 = FUN_00298e00(*param_2);
  temp_v2 = (unsigned int)((temp_v0 & ~temp_v1) != 0);
  temp_v3 = (temp_v1 & ~temp_v0) != 0;
  if (temp_v3) {
    temp_v2 = 0xffffffff;
  }
  if (!temp_v3 && temp_v2 == 0) {
    temp_v0 = (unsigned int)*param_1;
    dataTable1bOr1cGetRecord();
    temp_v1 = (unsigned int)*param_2;
    dataTable1bOr1cGetRecord();
    temp_v2 = 0;
    if (temp_v0 != 0 && temp_v1 != 0) {
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 4) - (unsigned int)*(unsigned short *)(temp_v0 + 4);
    }
  }
  return temp_v2;
}

} /* extern "C" */
