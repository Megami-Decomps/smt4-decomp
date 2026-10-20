/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_CaptureDisplayBuffer` (_code @ 0x1bde60, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bdef4(...);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_001bdef4. */


/* WARNING: Removing unreachable block (ram,0x001bdf00) */

void nn_applet_CTR_detail_CaptureDisplayBuffer(int param_1,int *param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  romwright_code *pcVar6;
  unsigned char temp_v5;
  int uStack_6c;
  int iStack_68;
  int iStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_54;
  unsigned int uStack_4c;
  int iStack_44;
  unsigned int uStack_3c;
  int iStack_2c;
  
  if (param_2 == (int *)0x0 || param_3 == 0) {
    return;
  }
  temp_v5 = *(char *)(param_3 + 4) == '\0';
  temp_v0 = *(int *)(param_3 + 0x14) + param_1;
  if (!temp_v5) {
    FUN_001bdef4(temp_v0,param_2,1,0);
    FUN_001bdef4(*(int *)(param_3 + 8) + param_1,param_2,0);
    temp_v0 = *(int *)(param_3 + 0xc);
  }
  else {
    FUN_001bdef4(temp_v0,param_2,1,0);
    temp_v0 = *(int *)(param_3 + 8);
  }
  temp_v0 = temp_v0 + param_1;
  uStack_4c = 400;
  if (!temp_v5) {
    temp_v4 = param_2[1];
  }
  else {
    temp_v4 = *param_2;
  }
  temp_v1 = param_2[2];
  if (temp_v1 == 0) {
    temp_v2 = 0x18;
  }
  else {
    temp_v2 = 0;
    switch(temp_v1) {
    case 1:
      temp_v2 = 3;
      break;
    case 2:
    case 3:
    case 4:
      temp_v2 = 2;
    }
    temp_v2 = temp_v2 << 3;
  }
  uStack_54 = (unsigned int)param_2[3] >> 2;
  iStack_44 = temp_v2 << 2;
  switch(temp_v1) {
  case 0:
  case 1:
    iStack_68 = uStack_54 * 4 + 3;
    pcVar6 = (romwright_code *)0x1c7e34;
    uStack_60 = 3;
    break;
  case 2:
  case 3:
  case 4:
    iStack_68 = uStack_54 * 4 + 2;
    pcVar6 = (romwright_code *)0x1c7dc4;
    uStack_60 = 2;
    break;
  default:
    return;
  }
  iStack_64 = uStack_54 << 2;
  uStack_5c = 0;
  uStack_6c = 0;
  if (temp_v0 != 0) {
    uStack_3c = 0;
    iStack_2c = uStack_54 * 8;
    do {
      temp_v3 = 0;
      temp_v1 = temp_v4;
      do {
        (*pcVar6)(temp_v0,temp_v1,uStack_54,&uStack_6c);
        temp_v3 = temp_v3 + 8;
        temp_v1 = temp_v1 + temp_v2;
        temp_v0 = temp_v0 + temp_v2 * 8;
      } while (temp_v3 < 0xf0);
      temp_v4 = temp_v4 + iStack_2c * 4;
      temp_v0 = temp_v0 + iStack_44 * 4;
      uStack_3c = uStack_3c + 8;
    } while (uStack_3c < uStack_4c);
  }
  return;
}

} /* extern "C" */
