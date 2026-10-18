/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003daaf4` (_code @ 0x3daaf4, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003daaf4_arg1 fn_003daaf4_arg1;
struct fn_003daaf4_arg1 {
    unsigned char pad_0x0[0x8];
    ushort field_0x8; /* +0x8 */
    unsigned char pad_0xa[0x1];
    byte field_0xb; /* +0xb */
    unsigned char pad_0xc[0x4];
    byte field_0x10; /* +0x10 */
};

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_0023e51c. */
/* Supplied declaration required: FUN_002e3d04. */
/* Supplied declaration required: FUN_002e6490. */
/* Supplied declaration required: FUN_002e6dd4. */


unsigned int FUN_003daaf4(int param_1,fn_003daaf4_arg1 *param_2,unsigned int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  unsigned short *puVar7;
  unsigned char *pbVar8;
  unsigned short *puVar9;
  unsigned short *puVar10;
  unsigned short temp_v5;
  int temp_v6;
  unsigned short temp_v7;
  int iStack_28;
  
  temp_v0 = param_2->field_0x10;
  iStack_28 = param_4;
  temp_v2 = FUN_00187180(9,4);
  temp_v3 = FUN_00192798();
  temp_v4 = FUN_00192748(temp_v2);
  temp_v6 = 0;
  if (temp_v4 != 0) {
    pbVar8 = (unsigned char *)(temp_v3 + 4);
    do {
      temp_v1 = *pbVar8;
      pbVar8 = pbVar8 + 8;
      if (temp_v1 == temp_v0) {
        temp_v6 = temp_v6 + 1;
      }
      temp_v4 = temp_v4 - 1;
    } while (temp_v4 != 0);
  }
  iStack_28 = 0;
  puVar6 = (unsigned short *)((temp_v6 + 1) * 8);
  FUN_002e3d04();
  FUN_002e6dd4();
  FUN_0023e51c(puVar6,&iStack_28,temp_v0,param_1);
  temp_v5 = 0;
  if (iStack_28 != 0) {
    puVar9 = puVar6 + 1;
    puVar7 = puVar6;
    temp_v3 = iStack_28;
    puVar10 = puVar6 + 3;
    do {
      temp_v7 = 0;
      if ((int)(unsigned int)*puVar9 < param_1) {
        temp_v7 = ((unsigned int)*puVar9 - (unsigned int)*puVar7) + 1;
      }
      else if ((int)(unsigned int)*puVar7 <= param_1) {
        temp_v7 = (param_1 - (unsigned int)*puVar7) + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar9 = puVar9 + 4;
      puVar7 = puVar7 + 4;
      temp_v5 = temp_v7 * (((((unsigned int)param_2->field_0xb * (unsigned int)(unsigned char)*puVar10 * 0xa3d7 + 0xa3d7) >>
                           0x16) * 0x2d) / 100) + temp_v5;
      puVar10 = puVar10 + 4;
    } while (temp_v3 != 0);
  }
  temp_v3 = (unsigned int)param_2->field_0x8 * 0x66666673;
  temp_v5 = temp_v5 + ((unsigned int)param_2->field_0x8 * 0x2d) / 100;
  if (temp_v5 < 10000) {
    FUN_002e6490(puVar6,temp_v3);
    return temp_v5;
  }
  FUN_002e6490(puVar6,temp_v3);
  return 9999;
}
