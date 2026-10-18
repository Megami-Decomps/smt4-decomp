/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aaa1c` (_code @ 0x2aaa1c, 0x18c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int *DAT_004652a4; /* 0x4652a4 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0014e584. */


void FUN_002aaa1c(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  if (DAT_004652a0 + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 >= DAT_004652a4) {
    DAT_004652a0 = DAT_004652a4;
    puVar6 = DAT_004652a0;
  }
  else {
    temp_v5 = 0;
    puVar6 = DAT_004652a0;
    if (param_2 != 0) {
      do {
        puVar7 = (unsigned int *)(param_3 + temp_v5 * 4);
        temp_v0 = param_2 - temp_v5;
        puVar8 = puVar7 + 1;
        if (temp_v0 >= 0x81) {
          temp_v0 = 0x80;
        }
        *puVar6 = *puVar7;
        temp_v4 = temp_v0 & 0xfffffffe;
        puVar6[1] = (temp_v0 * 0x100000 - 0x100000) | param_1 | 0xf0000;
        puVar7 = puVar6;
        while (puVar6 = puVar7 + 2, (temp_v0 & 0xe) != 0) {
          puVar3 = puVar8 + 1;
          *puVar6 = *puVar8;
          puVar8 = puVar8 + 2;
          puVar7[3] = *puVar3;
          temp_v4 = temp_v4 - 2;
          puVar7 = puVar6;
          temp_v0 = temp_v4;
        }
        if (temp_v4 >= 0x80000000) {
          do {
            temp_v4 = temp_v4 - 0x10;
            temp_v1 = ((int)puVar6 - (int)puVar8) >> 2;
            temp_v7 = temp_v1 == 0;
            temp_v3 = temp_v1;
            if (0 < temp_v1) {
              temp_v3 = 0x10 - temp_v1;
              temp_v7 = temp_v1 == 0x10;
            }
            if (!(temp_v7 || temp_v3 < 0 != (0 < temp_v1 && SBORROW4(0x10,temp_v1)))) {
              temp_v1 = 0;
              do {
                puVar3 = puVar8 + 1;
                temp_v1 = temp_v1 + 2;
                puVar7 = puVar6 + 1;
                *puVar6 = *puVar8;
                puVar8 = puVar8 + 2;
                puVar6 = puVar6 + 2;
                *puVar7 = *puVar3;
              } while (temp_v1 < 0x10);
            }
            else {
              FUN_0014e584(puVar6,puVar8,0x40);
              puVar8 = puVar8 + 0x10;
              puVar6 = puVar6 + 0x10;
            }
          } while (temp_v4 != 0);
        }
        else {
          temp_v3 = 0;
          temp_v1 = (int)((-0xf - temp_v4) + ((unsigned int)((int)(-0xf - temp_v4) >> 0x1f) >> 0x1c)) >> 4;
          for (temp_v6 = 0; -temp_v6 != temp_v1 && temp_v6 <= -temp_v1; temp_v6 = temp_v6 + 1) {
            puVar3 = puVar8 + (temp_v3 - 1);
            temp_v2 = 8;
            puVar7 = puVar6 + (temp_v3 - 1);
            do {
              temp_v2 = temp_v2 - 1;
              puVar7[1] = puVar3[1];
              puVar3 = puVar3 + 2;
              puVar7 = puVar7 + 2;
              *puVar7 = *puVar3;
            } while (temp_v2 != 0);
            temp_v3 = temp_v3 + 0x10;
          }
          puVar6 = puVar6 + temp_v1 * -0x10;
        }
        temp_v5 = temp_v5 + 0x80;
      } while (temp_v5 < param_2);
    }
  }
  DAT_004652a0 = puVar6;
  return;
}
