/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bf074` (_code @ 0x1bf074, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005c0efc; /* 0x5c0efc */
extern unsigned int DAT_005c0f00; /* 0x5c0f00 */
extern int DAT_005c0f04; /* 0x5c0f04 */
extern int DAT_005c0f08; /* 0x5c0f08 */

/* Supplied declaration required: FUN_001c95c0. */
/* Supplied declaration required: FUN_001c9760. */
/* Supplied declaration required: FUN_001c9a30. */
/* Supplied declaration required: FUN_001ca138. */
/* Supplied declaration required: FUN_001ca474. */


void FUN_001bf074(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int unaff_r6;
  int temp_v3;
  unsigned char temp_v4;
  
  if ((~*(unsigned int *)(param_1 + 0x14) & 4) != 0) {
    temp_v3 = *(int *)(*(int *)(param_1 + 0x20) + 0x54);
    FUN_001ca474(param_1 + 0x40,*(unsigned int *)(temp_v3 + 0x298));
    if (*(char *)(param_1 + 0xe8) != '\0') {
      DAT_005c0efc = 0;
      DAT_005c0f00 = 0xff;
      DAT_005c0f04 = 0xff;
      DAT_005c0f08 = 0xff;
      unaff_r6 = *(int *)(param_1 + 0xe4);
      temp_v2 = 0;
      if (temp_v2 < unaff_r6) {
        do {
          FUN_001c9a30(param_1,temp_v2,*(unsigned int *)(*(int *)(param_1 + 100) + temp_v2 * 4));
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < unaff_r6);
      }
      temp_v0 = DAT_005c0f00 | (DAT_005c0f04 << 8);
      temp_v1 = DAT_005c0f08 << 0x18;
      DAT_005b40e0[1] = 0xb01c4;
      *DAT_005b40e0 = temp_v0 | temp_v1;
      DAT_005b40e0 = DAT_005b40e0 + 2;
    }
    if (*(char *)(param_1 + 0xeb) != '\0') {
      FUN_001ca138(param_1);
    }
    temp_v4 = *(char *)(param_1 + 0xea) != '\0';
    if (temp_v4) {
      unaff_r6 = *(int *)(param_1 + 0xe0);
    }
    if (temp_v4 && 0 < unaff_r6) {
      if (0 < *(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x68)) {
        temp_v1 = 0;
        if (-1 < (int)(unaff_r6 - 1U)) {
          temp_v1 = unaff_r6 - 1U;
        }
        *(unsigned int *)(*(int *)(param_1 + 8) + 0x1c) = (temp_v1 & 0xff) | 0x10000;
      }
      temp_v2 = 0;
      do {
        FUN_001c9760(param_1,temp_v2,*(unsigned int *)(*(int *)(param_1 + 0x4c) + temp_v2 * 4));
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < unaff_r6);
    }
    temp_v3 = *(int *)(*(int *)(param_1 + 0xc0) + *(int *)(temp_v3 + 0x29c) * 4);
    if (*(int *)(param_1 + 0xa0) != temp_v3) {
      *(int *)(param_1 + 0xa0) = temp_v3;
      *(unsigned char *)(param_1 + 0xec) = 1;
    }
    if (*(char *)(param_1 + 0xec) != '\0') {
      FUN_001c95c0(param_1);
      return;
    }
  }
  return;
}
