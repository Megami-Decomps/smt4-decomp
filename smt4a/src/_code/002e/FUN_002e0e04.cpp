/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0e04` (_code @ 0x2e0e04, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int wstrlen(...);
int rt_aeabi_memclr(...);
int SBORROW4(...);

/* stack frame of param_3: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp128; /* 0x128: local_128 */
} param_3_stack;

extern unsigned int DAT_005b40b4; /* 0x5b40b4 */
extern unsigned int DAT_005b40b8; /* 0x5b40b8 */
extern unsigned int DAT_005b40bc; /* 0x5b40bc */
extern unsigned int DAT_005b40c0; /* 0x5b40c0 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: wstrlen. */
/* Supplied declaration required: rt_aeabi_memclr. */


unsigned int FUN_002e0e04(int param_1,short *param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  char *pcVar7;
  int temp_v6;
  short *psVar9;
  unsigned char temp_v7;
  unsigned char temp_v8;
  char acStack_129 [281];
  
  if (param_3 != 3) {
    temp_v3 = wstrlen();
    if (temp_v3 >= 0xf8) {
      return 0;
    }
    temp_v6 = 0;
    temp_v4 = 0;
    if (temp_v4 < temp_v3) {
      do {
        temp_v7 = *(char *)(param_1 + temp_v4) != '/';
        if (temp_v7) {
          temp_v8 = SBORROW4(temp_v6 + 1,0x10);
          temp_v0 = temp_v6 - 0xf;
          temp_v6 = temp_v6 + 1;
        }
        else {
          temp_v8 = 0;
          temp_v0 = 0;
          temp_v6 = 0;
        }
        if ((temp_v7 && temp_v6 != 0x10) && temp_v0 < 0 == temp_v8) {
          return 0;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v3);
    }
  }
  rt_aeabi_memclr(param_2,0x1f0);
  rt_aeabi_memclr(acStack_129 + 1,0x118);
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        if (param_3 == 3) {
          FUN_00100388(acStack_129 + 1,"%s/%s",DAT_005b40c0,param_1);
        }
      }
      else {
        FUN_00100388(acStack_129 + 1,"%s/%s",DAT_005b40bc,param_1);
      }
    }
    else {
      FUN_00100388(acStack_129 + 1,"%s/%s",DAT_005b40b8,param_1);
    }
  }
  else {
    FUN_00100388(acStack_129 + 1,"%s/%s",DAT_005b40b4,param_1);
  }
  temp_v5 = wstrlen(acStack_129 + 1);
  if ((int)temp_v5 >= 0xf9) {
    return 0;
  }
  if (0 < (int)(temp_v5 - 1)) {
    pcVar7 = acStack_129;
    psVar9 = param_2 + -1;
    if ((temp_v5 & 1) == 0) {
      *param_2 = (short)acStack_129[1];
      pcVar7 = acStack_129 + 1;
      psVar9 = param_2;
    }
    temp_v1 = pcVar7[1];
    for (temp_v3 = (int)(temp_v5 - 1) >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
      temp_v2 = pcVar7[2];
      psVar9[1] = (short)temp_v1;
      temp_v1 = pcVar7[3];
      psVar9 = psVar9 + 2;
      *psVar9 = (short)temp_v2;
      pcVar7 = pcVar7 + 2;
    }
  }
  if (-1 < (int)(temp_v5 - 1)) {
    param_2[temp_v5 - 1] = (short)acStack_129[temp_v5];
  }
  return 1;
}

} /* extern "C" */
