/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da998` (_code @ 0x3da998, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003da998_arg1 fn_003da998_arg1;
struct fn_003da998_arg1 {
    unsigned char pad_0x0[0x6];
    ushort field_0x6; /* +0x6 */
    unsigned char pad_0x8[0x2];
    byte field_0xa; /* +0xa */
    unsigned char pad_0xb[0x5];
    byte field_0x10; /* +0x10 */
};

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_0023e51c. */
/* Supplied declaration required: FUN_002e3d04. */
/* Supplied declaration required: FUN_002e6490. */
/* Supplied declaration required: FUN_002e6dd4. */


unsigned int FUN_003da998(int param_1,fn_003da998_arg1 *param_2,unsigned int param_3,int param_4)

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
  unsigned short temp_v5;
  unsigned short temp_v6;
  int temp_v7;
  int iStack_28;
  
  temp_v0 = param_2->field_0x10;
  iStack_28 = param_4;
  temp_v2 = FUN_00187180(9,4);
  temp_v3 = FUN_00192798();
  temp_v4 = FUN_00192748(temp_v2);
  temp_v7 = 0;
  if (temp_v4 != 0) {
    pbVar8 = (unsigned char *)(temp_v3 + 4);
    do {
      temp_v1 = *pbVar8;
      pbVar8 = pbVar8 + 8;
      if (temp_v1 == temp_v0) {
        temp_v7 = temp_v7 + 1;
      }
      temp_v4 = temp_v4 - 1;
    } while (temp_v4 != 0);
  }
  puVar6 = (unsigned short *)((temp_v7 + 1) * 8);
  iStack_28 = 0;
  FUN_002e3d04();
  FUN_002e6dd4();
  FUN_0023e51c(puVar6,&iStack_28,temp_v0,param_1);
  temp_v5 = 0;
  if (iStack_28 != 0) {
    puVar9 = puVar6 + 1;
    puVar7 = puVar6;
    temp_v3 = iStack_28;
    pbVar8 = (unsigned char *)((int)puVar6 + 5);
    do {
      temp_v6 = 0;
      if ((int)(unsigned int)*puVar9 < param_1) {
        temp_v6 = ((unsigned int)*puVar9 - (unsigned int)*puVar7) + 1;
      }
      else if ((int)(unsigned int)*puVar7 <= param_1) {
        temp_v6 = (param_1 - (unsigned int)*puVar7) + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar9 = puVar9 + 4;
      puVar7 = puVar7 + 4;
      temp_v5 = temp_v6 * (((unsigned int)param_2->field_0xa * (unsigned int)*pbVar8 * 0xa3d7 + 0xa3d7) >> 0x16) +
               temp_v5;
      pbVar8 = pbVar8 + 8;
    } while (temp_v3 != 0);
  }
  temp_v5 = param_2->field_0x6 + temp_v5;
  if (temp_v5 < 10000) {
    FUN_002e6490(puVar6);
    return temp_v5;
  }
  FUN_002e6490(puVar6);
  return 9999;
}
