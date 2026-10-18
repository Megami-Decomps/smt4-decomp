/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dcc5c` (_code @ 0x4dcc5c, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */

/* Supplied declaration required: FUN_004fb798. */
/* Supplied declaration required: FUN_004fbeac. */
/* Supplied declaration required: FUN_004fdcd8. */


void FUN_004dcc5c(int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v5 = 0;
  temp_v2 = 0;
  do {
    puVar4 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v2 * 0x408);
    if ((((puVar4[1] & DAT_0057114c) != 0 || (DAT_00571148 & *puVar4) != 0) &&
        ((*puVar4 & DAT_00571178) == 0 && (puVar4[1] & DAT_0057117c) == 0)) &&
       (temp_v1 = (int)(short)puVar4[2], -1 < temp_v1)) {
      temp_v3 = (int)(puVar4[0x97] * 0x32) / 100;
      if (temp_v3 == 0) {
        temp_v3 = -1;
      }
      temp_v4 = (int)(puVar4[0x99] * 0x32) / 100;
      if (temp_v4 == 0) {
        temp_v4 = -1;
      }
      if ((0 < temp_v3) && ((puVar4[0x9d] & 8) != 0)) {
        temp_v3 = 1;
      }
      if ((0 < temp_v4) && ((puVar4[0x9d] & 8) != 0)) {
        temp_v4 = 1;
      }
      temp_v0 = temp_v5 * 5;
      FUN_004fdcd8(temp_v0,param_2,temp_v1,temp_v1,8,0,5,0);
      FUN_004fb798(5,param_2,0,*(int *)(*param_1 + 0x1ed4) + (short)puVar4[2] * 0x1d0,0,temp_v3,temp_v4,
                   0xffffffff,0,temp_v0,temp_v0,9,1,0,1);
      temp_v5 = temp_v5 + 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  FUN_004fbeac(0,param_2,0,0x1e,0);
  return;
}
