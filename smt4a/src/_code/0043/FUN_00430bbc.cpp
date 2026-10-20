/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00430bbc` (_code @ 0x430bbc, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a9110(unsigned char [8], unsigned int);
int FUN_00430ec8(unsigned char [8], int);
int asdCecMessageIdInit(unsigned char [8]);

/* Supplied declaration required: FUN_001a9110. */
/* Supplied declaration required: FUN_00430ec8. */
/* Supplied declaration required: asdCecMessageIdInit. */
extern unsigned char nn_cec_CTR_MessageId_IsEmpty(unsigned int);


unsigned int FUN_00430bbc(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [8];
  
  if ((param_3 & 3) != 0) {
    temp_v2 = 0xc8a10bf2;
  }
  else {
    temp_v2 = 0xc8e10be9;
    if (((param_3 + 0x70 < 0x19001) && (param_3 != 0)) && (param_3 < 0x18001)) {
      asdCecMessageIdInit(temp_v6);
      temp_v2 = FUN_00430ec8(temp_v8,param_1 + 0x20);
      FUN_001a9110(temp_v6,temp_v2);
      FUN_00430ec8(temp_v7,param_1 + 0x20);
      if ((*(char *)(param_1 + 0x131) != '\0') ||
         (temp_v1 = nn_cec_CTR_MessageId_IsEmpty((unsigned int)temp_v6), !temp_v1)) {
        return 0xc8810bea;
      }
      temp_v5 = 0x70;
      *(unsigned int *)(param_1 + 0x134) = param_3;
      *(unsigned int *)(param_1 + 0x138) = param_2;
      *(unsigned int *)(param_1 + 0xc) = param_3;
      temp_v3 = (int)*(char *)(param_1 + 0x130);
      if (temp_v3 != 0) {
        temp_v4 = 0;
        do {
          temp_v0 = temp_v4 * 0xc;
          temp_v3 = temp_v3 - 1;
          temp_v4 = temp_v4 + 1;
          temp_v5 = temp_v5 + 8 + ((*(int *)(param_1 + temp_v0 + 0x74) + 3U) & 0xfffffffc);
        } while (temp_v3 != 0);
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0x134) + temp_v5 + 0x20;
      *(int *)(param_1 + 8) = temp_v5;
      temp_v2 = 0;
    }
  }
  return temp_v2;
}

} /* extern "C" */
