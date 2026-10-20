/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_Message_SetExHeader` (_code @ 0x430954, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a9110(unsigned char [8], unsigned int);
int FUN_00430ec8(...);
int FUN_00430f18(unsigned char [8]);
int nn_cec_CTR_Message_SetExHeaderWithoutCalc(unsigned int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_001a9110. */
/* Supplied declaration required: FUN_00430ec8. */
/* Supplied declaration required: FUN_00430f18. */
extern unsigned char nn_cec_CTR_MessageId_IsEmpty(unsigned int);
/* Supplied declaration required: nn_cec_CTR_Message_SetExHeaderWithoutCalc. */


unsigned int nn_cec_CTR_Message_SetExHeader(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [8];
  unsigned char temp_v9 [12];
  
  FUN_00430f18(temp_v7);
  temp_v2 = FUN_00430ec8(temp_v9,param_1 + 0x20);
  FUN_001a9110(temp_v7,temp_v2);
  FUN_00430ec8(temp_v8,param_1 + 0x20);
  if ((*(char *)(param_1 + 0x131) == '\0') &&
     (temp_v1 = nn_cec_CTR_MessageId_IsEmpty((unsigned int)temp_v7), temp_v1)) {
    temp_v4 = param_1;
    nn_cec_CTR_Message_SetExHeaderWithoutCalc(param_1,param_2,param_3,param_4);
    if (-1 < (int)temp_v4) {
      temp_v5 = 0x70;
      temp_v3 = (int)*(char *)(param_1 + 0x130);
      if (temp_v3 != 0) {
        temp_v6 = 0;
        do {
          temp_v0 = temp_v6 * 0xc;
          temp_v3 = temp_v3 - 1;
          temp_v6 = temp_v6 + 1;
          temp_v5 = temp_v5 + 8 + ((*(int *)(param_1 + temp_v0 + 0x74) + 3U) & 0xfffffffc);
        } while (temp_v3 != 0);
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0x134) + temp_v5 + 0x20;
      *(int *)(param_1 + 8) = temp_v5;
      temp_v4 = 0;
    }
    return temp_v4;
  }
  return 0xc8810bea;
}

} /* extern "C" */
