/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_Message_SetExHeader` (_code @ 0x359a8c, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238c80(...);
int asdCecMessageIdInit(unsigned char [8]);
int FUN_002ad8b4(unsigned char [8], unsigned int);
int nn_cec_CTR_Message_SetExHeaderWithoutCalc(unsigned int, unsigned int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_00238c80. */
/* Supplied declaration required: asdCecMessageIdInit. */
/* Supplied declaration required: FUN_002ad8b4. */
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
  
  asdCecMessageIdInit(temp_v7);
  temp_v2 = FUN_00238c80(temp_v9,param_1 + 0x20);
  FUN_002ad8b4(temp_v7,temp_v2);
  FUN_00238c80(temp_v8,param_1 + 0x20);
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
