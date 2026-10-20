/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bcc70` (_code @ 0x3bcc70, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027da30(int, int);
int FUN_002ae164(void);
int dataTable08Sub1GetRecord(void);

/* Supplied declaration required: FUN_0027da30. */
extern int btlGetMainState(void);
extern int gameGetUnitRecord(int);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */


unsigned int FUN_003bcc70(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  FUN_002ae164();
  dataTable08Sub1GetRecord();
  if (((param_1 != 0 || param_2 != 0) &&
      ((param_1 == 0 || ((*(unsigned int *)(param_1 + 0x38) & 0x7f) != 0)))) &&
     ((param_2 == 0 || ((*(unsigned char *)(param_2 + 0x6a) & 0x7f) != 0)))) {
    temp_v2 = 0;
    if (param_1 != 0) {
      if ((*(unsigned int *)(param_1 + 0x38) & 0x7f) != 0) {
        temp_v2 = *(unsigned int *)(param_1 + 0x38) & 0x7f;
      }
    }
    else if (param_2 != 0) {
      temp_v2 = *(unsigned char *)(param_2 + 0x6a) & 0x7f;
    }
    switch(temp_v2) {
    case 0xc:
      temp_v2 = 0x3e0;
      break;
    default:
      temp_v2 = 1 << temp_v2;
      break;
    case 0xe:
      temp_v2 = 0x7e2;
      break;
    case 0x11:
      temp_v2 = 0x3e2;
      break;
    case 0x12:
      temp_v2 = 0x1c0;
      break;
    case 0x15:
      temp_v2 = 0x220;
    }
    if (param_4 < 0x6d) {
      temp_v1 = btlGetMainState();
      FUN_0027da30(temp_v1,param_4);
      temp_v0 = *(unsigned short *)(temp_v1 + 0xfa);
    }
    else {
      temp_v1 = gameGetUnitRecord(param_4 - 0x6d);
      temp_v0 = *(unsigned short *)(temp_v1 + 0x44);
    }
    if ((temp_v0 & temp_v2) != 0) {
      return temp_v2;
    }
  }
  return 0;
}

} /* extern "C" */
