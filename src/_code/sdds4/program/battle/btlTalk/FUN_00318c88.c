/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318c88` (_code @ 0x318c88, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439b58; /* 0x439b58 */

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_002c0ba8(void);
extern int FUN_002c0bcc(unsigned int);
extern int FUN_002c0e4c(void);
extern int FUN_002c0e9c(unsigned int);
/* Supplied declaration required: FUN_002c4450. */
extern unsigned int FUN_003c0a90(int);


unsigned int FUN_00318c88(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  int aiStack_130 [32];
  int aiStack_b0 [37];
  
  temp_v0 = FUN_003c0a90(DAT_00439b58);
  temp_v1 = FUN_002c0e4c();
  temp_v2 = FUN_002c0e9c(temp_v0);
  temp_v5 = 0;
  FUN_002c4450(aiStack_b0,0x80,0xffffffff);
  temp_v4 = 0;
  if (temp_v4 < temp_v1) {
    do {
      temp_v3 = temp_v2 + temp_v4 * 0x7c;
      if (*(int *)(temp_v3 + 0x74) != 0) {
        if ((*(int *)(temp_v3 + 0x78) == 0) || (temp_v3 = FUN_002c0ba8(), temp_v3 != 0)) {
          aiStack_b0[temp_v5] = temp_v4;
        }
        temp_v5 = temp_v5 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v1);
  }
  temp_v2 = 0;
  FUN_002c4450(aiStack_130,0x80,0xffffffff);
  piVar5 = aiStack_b0;
  temp_v1 = 0x20;
  do {
    temp_v4 = *piVar5;
    if ((temp_v4 != -1) && (*(int *)(DAT_00439b58 + temp_v4 * 4 + 0x34) == -1)) {
      aiStack_130[temp_v2] = temp_v4;
      temp_v2 = temp_v2 + 1;
    }
    temp_v1 = temp_v1 - 1;
    piVar5 = piVar5 + 1;
  } while (temp_v1 != 0);
  if (temp_v2 == 0) {
    temp_v2 = 1;
  }
  temp_v1 = FUN_002c0bcc((temp_v2 - 1U) & 0xffff);
  *(unsigned int *)(DAT_00439b58 + aiStack_130[temp_v1] * 4 + 0x34) = 0xffffffff;
  FUN_0028df54();
  return 1;
}
