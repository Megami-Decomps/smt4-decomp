/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333a38` (_code @ 0x333a38, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b63c0(void);

extern unsigned char *FUN_00240cd4(unsigned int);
/* Supplied declaration required: FUN_002b63c0. */


int FUN_00333a38(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned char *pbVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    temp_v0 = temp_v2;
    FUN_002b63c0();
    if (temp_v0 != 0) {
      temp_v1 = temp_v0 + 0x100;
      temp_v4 = *(unsigned short *)(temp_v0 + 0x1aa) != param_1;
      if (temp_v4) {
        temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0x1ac);
      }
      if ((!temp_v4 || temp_v1 == param_1) &&
         ((param_2 == 0 || (pbVar3 = (unsigned char *)FUN_00240cd4(temp_v2 & 0xffff), (*pbVar3 & 1) != 0)))) {
        temp_v3 = temp_v3 + 1;
      }
    }
    temp_v2 = temp_v2 + 1;
  } while ((int)temp_v2 < 400);
  return temp_v3;
}

} /* extern "C" */
