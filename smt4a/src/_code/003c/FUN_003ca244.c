/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ca244` (_code @ 0x3ca244, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern int DAT_005806c4; /* 0x5806c4 */
extern unsigned char DAT_005f1d74; /* 0x5f1d74 */
extern unsigned char DAT_005f1db4; /* 0x5f1db4 */
extern int DAT_005f1dc4; /* 0x5f1dc4 */
extern short DAT_005f1e18; /* 0x5f1e18 */

/* Supplied declaration required: FUN_00180008. */
/* Supplied declaration required: FUN_00480a54. */


void FUN_003ca244(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  int temp_v2;
  short *psVar4;
  short *psVar5;
  unsigned char *puVar6;
  unsigned int *puVar7;
  int temp_v3;
  unsigned int *puVar9;
  int temp_v4;
  int temp_v5;
  short temp_v6;
  short temp_v7 [16];
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  temp_v4 = DAT_005806c4;
  temp_v7[0] = 0;
  temp_v7[1] = 0;
  temp_v7[2] = 0;
  temp_v7[3] = 0;
  temp_v7[4] = 0;
  temp_v7[5] = 0;
  temp_v7[6] = 0;
  temp_v7[7] = 0;
  temp_v7[8] = 0;
  temp_v7[9] = 0;
  temp_v7[10] = 0;
  temp_v7[0xb] = 0;
  temp_v7[0xc] = 0;
  temp_v7[0xd] = 0;
  temp_v7[0xe] = 0;
  temp_v7[0xf] = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  if (0 < DAT_005f1dc4) {
    temp_v2 = DAT_005f1dc4;
    psVar5 = temp_v7;
    puVar7 = (unsigned int *)&temp_v8;
    puVar9 = (unsigned int *)&DAT_005f1d74;
    puVar6 = &DAT_005f1db4;
    do {
      temp_v0 = *puVar6;
      temp_v2 = temp_v2 - 1;
      *psVar5 = (short)*puVar9;
      *(unsigned char *)puVar7 = temp_v0;
      psVar5 = psVar5 + 1;
      puVar7 = (unsigned int *)((int)puVar7 + 1);
      puVar9 = puVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (temp_v2 != 0);
  }
  temp_v5 = 0;
  temp_v2 = 0;
  if (temp_v2 < DAT_005f1dc4) {
    do {
      psVar5 = temp_v7 + temp_v2;
      temp_v1 = *psVar5;
      if (temp_v1 != 0) {
        temp_v6 = 1;
        if (0 < (DAT_005f1dc4 - temp_v2) - 1) {
          puVar6 = (unsigned char *)((int)&temp_v8 + temp_v2 + 1);
          temp_v3 = (DAT_005f1dc4 - temp_v2) - 1;
          psVar4 = psVar5;
          temp_v6 = 1;
          do {
            psVar4 = psVar4 + 1;
            if ((*psVar4 != 0) && (*psVar4 == temp_v1)) {
              *psVar4 = 0;
              temp_v6 = temp_v6 + 1;
              *puVar6 = 0;
            }
            temp_v3 = temp_v3 - 1;
            puVar6 = puVar6 + 1;
          } while (temp_v3 != 0);
        }
        temp_v3 = temp_v5 * 2;
        *(short *)(temp_v3 + 0x5f1dc8) = *psVar5;
        *(unsigned char *)(temp_v5 + 0x5f1de8) = *(unsigned char *)((int)&temp_v8 + temp_v2);
        *(short *)(temp_v3 + 0x5f1df8) = temp_v6;
        temp_v3 = (int)*(short *)(temp_v3 + 0x5f1dc8);
        FUN_00480a54();
        if (temp_v3 != 0) {
          *(int *)(temp_v4 + 0xd0) = *(int *)(temp_v4 + 0xd0) + 1;
        }
        temp_v5 = temp_v5 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < DAT_005f1dc4);
  }
  DAT_005f1e18 = (short)temp_v5;
  temp_v4 = 0;
  if (temp_v4 < DAT_005f1e18) {
    do {
      FUN_00180008(0);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < DAT_005f1e18);
  }
  return;
}
