/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c23f8` (_code @ 0x3c23f8, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_003ee0c0(void);
int FUN_004fc094(int, unsigned int, int, int, int, int, unsigned int, unsigned int, unsigned int, unsigned int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);

/* stack frame of void: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned int g_battleMaskPresets; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */
extern unsigned int g_btlScriptUnit; /* 0x57113c */

/* Supplied declaration required: btlGetMainState. */
extern int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_003ee0c0. */
extern unsigned int btlUnitGet(unsigned int);
/* Supplied declaration required: FUN_004fc094. */


unsigned int FUN_003c23f8(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  temp_v3 = btlUnitGet(g_btlScriptUnit);
  temp_v6 = 0;
  do {
    temp_v4 = btlGetMainState();
    puVar8 = (unsigned int *)(*(int *)(temp_v4 + 0x1ffc) + temp_v6 * 0x408);
    if ((((g_battleMaskPresets & *puVar8) != 0 || (DAT_00570d7c & puVar8[1]) != 0) &&
        ((puVar8[1] & DAT_00570d94) == 0 && (DAT_00570d90 & *puVar8) == 0)) &&
       (-1 < (short)puVar8[2])) {
      if (temp_v2 != 0) {
        if (temp_v2 != 1) {
          temp_v4 = 0;
          if (temp_v2 == 2) {
            temp_v4 = temp_v1;
          }
        }
        else {
          temp_v4 = (int)(puVar8[0x96] * temp_v1) / 100;
        }
      }
      else {
        temp_v4 = (int)(puVar8[0x97] * temp_v1) / 100;
      }
      if ((int)puVar8[0x96] <= temp_v4) {
        temp_v4 = puVar8[0x96] - 1;
      }
      btlGetMainState();
      FUN_003ee0c0();
      temp_v5 = btlGetMainState();
      temp_v0 = temp_v6 << 3;
      FUN_004fc094(0,temp_v3,0,*(int *)(temp_v5 + 0x1ed4) + (short)puVar8[2] * 0x1d0,0,temp_v4,0xffffffff,
                   0xffffffff,puVar8[0x96],puVar8[0x97],0,0,0,0,1,0,temp_v0,temp_v0,temp_v0,temp_v0,1,0,1,1,
                   0,1);
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 4);
  return 1;
}

} /* extern "C" */
