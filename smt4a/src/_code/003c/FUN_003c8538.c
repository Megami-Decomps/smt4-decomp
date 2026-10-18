/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8538` (_code @ 0x3c8538, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */
extern int DAT_005b3fe4; /* 0x5b3fe4 */
extern int DAT_005b3fe8; /* 0x5b3fe8 */

/* Supplied declaration required: FUN_001664bc. */
/* Supplied declaration required: FUN_00167ba0. */


void FUN_003c8538(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  FUN_00167ba0();
  temp_v0 = DAT_005b3fe4;
  if (param_1 != 0) {
    *(unsigned int *)(DAT_005b3fe4 + DAT_005b3fe8 * 4) = 1;
    *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0111;
    DAT_005b3fe8 = DAT_005b3fe8 + 2;
    *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) = 1;
    *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0110;
    DAT_005b3fe8 = DAT_005b3fe8 + 2;
  }
  temp_v0 = DAT_005b3fe4;
  temp_v3 = 0;
  temp_v5 = *(unsigned int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1298) * 4 + 0x12a0) & 0xf00;
  if (temp_v5 != 0) {
    temp_v3 = 0xf;
  }
  *(unsigned int *)(DAT_005b3fe4 + DAT_005b3fe8 * 4) = temp_v3;
  temp_v1 = 0;
  if (temp_v5 != 0) {
    temp_v1 = temp_v3;
  }
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0112;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) = temp_v1;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0113;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  temp_v4 = *(unsigned int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1258) * 4 + 0x1260);
  temp_v2 = *(unsigned int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1218) * 4 + 0x1220);
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) =
       (unsigned int)((-(temp_v2 & 1) & temp_v2 & 0x30) != 0 && (temp_v2 & 0xf0000000) != 0) |
       ((unsigned int)(temp_v5 != 0 || (temp_v4 & 0x1000) != 0) << 1);
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0114;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4) =
       (unsigned int)((temp_v2 & -(temp_v2 & 1) & 0xff00) != 0 &&
             *(int *)(DAT_0059dbb4 + *(int *)(DAT_0059dbb4 + 0x1238) * 4 + 0x1240) != 0) |
       ((unsigned int)((temp_v4 & 0x1000) != 0) << 1);
  *(unsigned int *)(temp_v0 + DAT_005b3fe8 * 4 + 4) = 0xf0115;
  DAT_005b3fe8 = DAT_005b3fe8 + 2;
  FUN_001664bc();
  return;
}
