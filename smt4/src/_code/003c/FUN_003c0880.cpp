/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0880` (_code @ 0x3c0880, 0x228 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00242914(unsigned int, int);
int FUN_00246454(int);
void battleSelectButtonHelpPreset(int);
int scrScriptProcessStartEntry(int, int);
int FUN_00297060(void);
int buttonHelpSetPreset(int);
int FUN_003c06ac(int *);
int FUN_003dbe68(int);
int FUN_003dc13c(void);

extern unsigned int g_btlActionReflect; /* 0x434290 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int g_btlUiBlock; /* 0x439ca8 */

extern int scrRunOpcodesStub(int);
/* Supplied declaration required: FUN_00242914. */
/* Supplied declaration required: FUN_00246454. */
extern int nodeListCountActiveById(unsigned int, unsigned int);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_003c06ac. */
/* Supplied declaration required: FUN_003dbe68. */
/* Supplied declaration required: FUN_003dc13c. */
extern unsigned long long FUN_003dcc34(int);


unsigned int FUN_003c0880(int *param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2;
  unsigned long long temp_v3;
  
  switch(param_1[6]) {
  case 0:
    FUN_003c06ac(param_1);
    return 0;
  case 1:
    if ((char)param_1[0x31] != '\0') {
      if ((char)param_1[0x31] == '\x01') {
        temp_v3 = FUN_003dcc34(DAT_00435d18);
        param_2 = (int)((unsigned long long)temp_v3 >> 0x20);
        if ((int)temp_v3 == 0) {
          return 0;
        }
        *(unsigned char *)(param_1 + 0x31) = 2;
      }
    }
    else {
      temp_v1 = DAT_00435d18;
      FUN_003dc13c();
      if (temp_v1 == 0) {
        return 0;
      }
      FUN_003dbe68(DAT_00435d18);
      *(unsigned char *)(param_1 + 0x31) = 1;
      temp_v3 = FUN_003dcc34(DAT_00435d18);
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
    FUN_00297060();
    param_1[4] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 1;
    scrScriptProcessStartEntry(param_1[4],0);
    buttonHelpSetPreset(0x3c);
    temp_v1 = 2;
    break;
  case 2:
    temp_v1 = scrRunOpcodesStub(param_1[4]);
    if (temp_v1 != 2) {
      return 0;
    }
    battleSelectButtonHelpPreset(0);
    *(int *)(*param_1 + 0x225c) = param_1[0x2e];
    *(int *)(*param_1 + 0x2260) = param_1[0x2f];
    *(int *)(*param_1 + 0x2264) = param_1[0x30];
    if (param_1[0x2e] == 2) {
      temp_v1 = 4;
      do {
        puVar3 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v1 * 0x288);
        temp_v0 = *puVar3;
        if ((((temp_v0 & 1) != 0) && ((temp_v0 & 0x40) == 0)) && (puVar3 != (unsigned int *)0x0)) {
          FUN_00246454(0);
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
    temp_v1 = nodeListCountActiveById(g_btlActionReflect,0);
    if (0 < temp_v1) {
      return 0;
    }
    if ((*(unsigned int *)(*param_1 + 0x44a0) & 0x20000000) != 0) {
      FUN_00242914(g_btlUiBlock,0);
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

} /* extern "C" */
