/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0aa8` (_code @ 0x3c0aa8, 0x228 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00434290; /* 0x434290 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_0019dfbc(int);
/* Supplied declaration required: FUN_00242a80. */
/* Supplied declaration required: FUN_002465c0. */
extern int FUN_0027e92c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00293074. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_003c08d4. */
/* Supplied declaration required: FUN_003dc094. */
/* Supplied declaration required: FUN_003dc368. */
extern unsigned long long FUN_003dce60(int);


unsigned int FUN_003c0aa8(int *param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2;
  unsigned long long temp_v3;
  
  switch(param_1[6]) {
  case 0:
    FUN_003c08d4(param_1);
    return 0;
  case 1:
    if ((char)param_1[0x31] != '\0') {
      if ((char)param_1[0x31] == '\x01') {
        temp_v3 = FUN_003dce60(DAT_00435d18);
        param_2 = (int)((unsigned long long)temp_v3 >> 0x20);
        if ((int)temp_v3 == 0) {
          return 0;
        }
        *(unsigned char *)(param_1 + 0x31) = 2;
      }
    }
    else {
      temp_v1 = DAT_00435d18;
      FUN_003dc368();
      if (temp_v1 == 0) {
        return 0;
      }
      FUN_003dc094(DAT_00435d18);
      *(unsigned char *)(param_1 + 0x31) = 1;
      temp_v3 = FUN_003dce60(DAT_00435d18);
      param_2 = (int)((unsigned long long)temp_v3 >> 0x20);
      if ((int)temp_v3 == 0) {
        return 0;
      }
      *(unsigned char *)(param_1 + 0x31) = 2;
    }
    temp_v2 = param_1[2] == 0;
    temp_v1 = 0;
    if (!temp_v2) {
      temp_v1 = param_1[3];
    }
    if (!temp_v2 && temp_v1 != 0) {
      param_2 = param_1[5];
    }
    if ((temp_v2 || temp_v1 == 0) || param_2 == 0) {
      return 0;
    }
    FUN_002972f8();
    param_1[4] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 1;
    FUN_002971e4(param_1[4],0);
    FUN_002b8b78(0x3c);
    temp_v1 = 2;
    break;
  case 2:
    temp_v1 = FUN_0019dfbc(param_1[4]);
    if (temp_v1 != 2) {
      return 0;
    }
    FUN_00293074(0);
    *(int *)(*param_1 + 0x225c) = param_1[0x2e];
    *(int *)(*param_1 + 0x2260) = param_1[0x2f];
    *(int *)(*param_1 + 0x2264) = param_1[0x30];
    if (param_1[0x2e] == 2) {
      temp_v1 = 4;
      do {
        puVar3 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v1 * 0x288);
        temp_v0 = *puVar3;
        if ((((temp_v0 & 1) != 0) && ((temp_v0 & 0x40) == 0)) && (puVar3 != (unsigned int *)0x0)) {
          FUN_002465c0(0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x36);
    }
    temp_v1 = 4;
    break;
  case 3:
    if (param_1[5] == 0) {
      return 0;
    }
    *(int *)(param_1[4] + 0xc0) = param_1[5];
    temp_v1 = 2;
    break;
  case 4:
    temp_v1 = FUN_0027e92c(DAT_00434290,0);
    if (0 < temp_v1) {
      return 0;
    }
    if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x20000000) != 0) {
      FUN_00242a80(DAT_00439ca8,0);
      *(unsigned int *)(*param_1 + 0x44a0) = *(unsigned int *)(*param_1 + 0x44a0) & 0xdfffffff;
    }
    temp_v1 = 5;
    break;
  case 5:
    return 0xffffffff;
  default:
    return 0;
  }
  param_1[6] = temp_v1;
  return 0;
}
