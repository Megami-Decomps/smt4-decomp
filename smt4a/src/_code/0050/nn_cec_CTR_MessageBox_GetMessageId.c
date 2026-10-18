/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_MessageBox_GetMessageId` (_code @ 0x501800, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001a9110. */
extern unsigned int FUN_00430ec8(unsigned char *, int);
extern int nn_cec_CTR_MessageBox_GetMessHeader(unsigned int, unsigned int, unsigned int);


unsigned int
nn_cec_CTR_MessageBox_GetMessageId
          (unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [8];
  
  temp_v0 = nn_cec_CTR_MessageBox_GetMessHeader(param_1,param_3,param_4);
  if (temp_v0 == 0 || temp_v0 == -0x20) {
    temp_v1 = 0xc8810bef;
  }
  else {
    if (param_2 != 0) {
      temp_v1 = FUN_00430ec8(temp_v2,temp_v0 + 0x20);
      FUN_001a9110(param_2,temp_v1);
    }
    temp_v1 = 0;
  }
  return temp_v1;
}
