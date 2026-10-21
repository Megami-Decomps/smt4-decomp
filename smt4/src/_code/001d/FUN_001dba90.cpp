/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dba90` (_code @ 0x1dba90, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);

/* stack frame of param_4: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned char sp40; /* 0x40: local_40 */
} param_4_stack;

/* Supplied declaration required: textFormatBuffer. */


int FUN_001dba90(char *param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  char *pcVar1;
  unsigned int temp_v0;
  int temp_v1;
  char *pcVar4;
  char temp_v2;
  char acStack_3f [9];
  char acStack_36 [10];
  char acStack_2c [4];
  char acStack_28 [4];
  char acStack_24 [4];
  char acStack_20 [4];
  
  acStack_36[2] = -0x7e;
  acStack_36[3] = 'O';
  acStack_36[4] = -0x7e;
  acStack_36[5] = 'P';
  acStack_36[6] = -0x7e;
  acStack_36[7] = 'Q';
  acStack_36[8] = -0x7e;
  acStack_36[9] = 'R';
  acStack_2c[0] = -0x7e;
  acStack_2c[1] = 'S';
  acStack_2c[2] = -0x7e;
  acStack_2c[3] = 'T';
  acStack_28[0] = -0x7e;
  acStack_28[1] = 'U';
  acStack_28[2] = -0x7e;
  acStack_28[3] = 'V';
  acStack_24[0] = -0x7e;
  acStack_24[1] = 'W';
  acStack_24[2] = -0x7e;
  acStack_24[3] = 'X';
  acStack_20[0] = -0x7f;
  acStack_20[1] = '@';
  acStack_20[2] = '\0';
  acStack_20[3] = '\0';
  temp_v1 = 0;
  if ((param_3 < 0) && (param_4 == 0)) {
    textFormatBuffer(&temp_v2,(char *)0x409710,param_2);
    temp_v1 = 0;
    if (temp_v2 == '\0') {
      return 0;
    }
    do {
      param_3 = temp_v1 + 1;
      pcVar1 = acStack_3f + temp_v1;
      temp_v1 = param_3;
    } while (*pcVar1 != '\0');
    if (param_3 == 0) {
      return 0;
    }
  }
  if (param_3 >= 11) {
    param_3 = 10;
  }
  if (param_4 != 0) {
    textFormatBuffer(&temp_v2,"%010u",param_2);
  }
  else {
    textFormatBuffer(&temp_v2,"%10u",param_2);
  }
  if (0 < param_3) {
    pcVar1 = acStack_36 + -param_3;
    do {
      temp_v0 = 10;
      if ((int)*pcVar1 - 0x30U < 10) {
        temp_v0 = (int)*pcVar1 - 0x30U;
      }
      if (param_1 != (char *)0x0) {
        pcVar4 = param_1 + 1;
        *param_1 = acStack_36[temp_v0 * 2 + 2];
        param_1 = param_1 + 2;
        *pcVar4 = acStack_36[temp_v0 * 2 + 3];
      }
      param_3 = param_3 - 1;
      pcVar1 = pcVar1 + 1;
    } while (param_3 != 0);
  }
  return temp_v1;
}

} /* extern "C" */
