/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045f268` (_code @ 0x45f268, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017572c(int, int);
int FUN_0019102c(int, int);
int FUN_001a0990(int);
int FUN_002e6dd4(int);

typedef int romwright_code(...);
extern int DAT_005c0f58; /* 0x5c0f58 */

extern int FUN_00175678(void);
/* Supplied declaration required: FUN_0017572c. */
/* Supplied declaration required: FUN_0019102c. */
/* Supplied declaration required: FUN_001a0990. */
/* Supplied declaration required: FUN_002e6dd4. */


void FUN_0045f268(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  param_1[0x2d] = DAT_005c0f58;
  DAT_005c0f58 = DAT_005c0f58 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x2c] = -1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(unsigned char *)(param_1 + 0x28) = 0;
  *(unsigned char *)((int)param_1 + 0xa1) = 0;
  *(unsigned char *)((int)param_1 + 0xa2) = 0;
  *(unsigned char *)((int)param_1 + 0xa3) = 0;
  *(unsigned char *)(param_1 + 0x26) = 0;
  *(unsigned char *)((int)param_1 + 0x99) = 0;
  *(unsigned char *)((int)param_1 + 0x9a) = 0;
  *(unsigned char *)((int)param_1 + 0x9b) = 0;
  *(unsigned char *)(param_1 + 0x27) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0x3f800000;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x32] = 0x3f800000;
  param_1[0x34] = 0x3f800000;
  param_1[0x33] = 0;
  param_1[0x2e] = 0x3f800000;
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x35] = 0;
  *(unsigned char *)((int)param_1 + 0x9e) = 0xff;
  param_1[0x36] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0xc] = 0x3f800000;
  param_1[0xd] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = -1;
  param_1[0x15] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (param_1[0x3c] != 0) {
    FUN_002e6dd4(param_1[0x3b]);
  }
  temp_v0 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  temp_v1 = FUN_00175678();
  temp_v2 = temp_v1;
  FUN_0019102c(temp_v1,6);
  *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v2 + 4) = 3;
  *(int *)(temp_v2 + 0x10) = temp_v0;
  *(int **)(temp_v2 + 0x14) = param_1 + 0x27;
  FUN_0017572c(temp_v1,temp_v2);
  FUN_001a0990(temp_v0 + 4);
  *(unsigned char *)((int)param_1 + 0x9f) = 1;
  return;
}

} /* extern "C" */
