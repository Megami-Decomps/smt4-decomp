/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00418070` (_code @ 0x418070, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab940(void);
/* Supplied declaration required: FUN_004bb6d8. */


unsigned int FUN_00418070(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *pbVar4;
  unsigned int temp_v3;
  
  temp_v1 = FUN_001ab940();
  pbVar4 = (unsigned char *)(temp_v1 + param_1 * 4 + 0x2a0);
  if ((*pbVar4 & 2) != 0) {
    temp_v1 = FUN_001ab940();
    if (*(unsigned short *)(temp_v1 + 0x8e0) == param_1) {
      *pbVar4 = *pbVar4 & 0xb9;
      temp_v1 = FUN_001ab940();
      temp_v3 = 0x500;
      *(unsigned short *)(temp_v1 + 0x8e0) = 0;
      do {
        temp_v1 = FUN_001ab940();
        FUN_004bb6d8(temp_v3,0);
        temp_v2 = temp_v3 & 7;
        temp_v0 = temp_v3 >> 3;
        temp_v3 = temp_v3 + 1;
        *(unsigned char *)(temp_v1 + temp_v0) = ~(unsigned char)(1 << temp_v2) & *(unsigned char *)(temp_v1 + temp_v0);
      } while (temp_v3 < 0x520);
      return 1;
    }
    if (param_2 != 0) {
      *pbVar4 = *pbVar4 & 0xf9;
      return 1;
    }
  }
  return 0;
}
