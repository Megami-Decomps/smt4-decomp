/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227048` (_code @ 0x227048, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_002adba8. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_00227048(int param_1,float *param_2)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  int aiStack_68 [5];
  int iStack_54;
  int iStack_4c;
  int iStack_44;
  int iStack_3c;
  int iStack_34;
  int iStack_2c;
  int iStack_24;
  
  if (param_1 == 0 || param_2 == (float *)0x0) {
    return;
  }
  if (*param_2 == 0.0f) {
    return;
  }
  FUN_00157558(DAT_0059dbb4);
  FUN_00183bb0();
  temp_v2 = DAT_0059dbb4;
  temp_v0 = FUN_001692ac(1,0);
  piVar6 = (int *)(temp_v2 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v0;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != temp_v0) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  FUN_001677c0();
  FUN_002e6354(aiStack_68,0x48);
  aiStack_68[1] = FUN_002adba8(0);
  aiStack_68[1] = aiStack_68[1] * 1000;
  temp_v7 = FUN_002adba8(1);
  aiStack_68[3] = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(2);
  iStack_54 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(3);
  iStack_4c = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(4);
  iStack_44 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(5);
  iStack_3c = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(6);
  iStack_34 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(7);
  iStack_2c = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v7 = FUN_002adba8(8);
  temp_v6 = 0.35f;
  iStack_24 = (int)temp_v7 * (int)((unsigned long long)temp_v7 >> 0x20);
  temp_v5 = temp_v6;
  FUN_001879d0(DAT_0059dbb4);
  FUN_00164b5c(2,0x2e,aiStack_68[(unsigned int)*(unsigned char *)(param_1 + 0x22) * 2],(int)temp_v6,0,0xb);
  temp_v1 = FUN_002adba8(*(unsigned char *)(param_1 + 0x22));
  temp_v2 = FUN_0018206c(0x2e,temp_v1);
  if (temp_v2 != 0) {
    FUN_001879d0(DAT_0059dbb4);
    FUN_001835b4(2,0x2e,aiStack_68[(unsigned int)*(unsigned char *)(param_1 + 0x22) * 2 + 1],(int)temp_v5,0,0xc);
  }
  temp_v2 = DAT_0059dbb4;
  piVar6 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v0 = *piVar6;
  temp_v3 = piVar6[temp_v0 + 2];
  *piVar6 = temp_v0 - 1;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  FUN_0016c560(DAT_0059dbb4);
  FUN_0016c410(DAT_0059dbb4);
  return;
}
