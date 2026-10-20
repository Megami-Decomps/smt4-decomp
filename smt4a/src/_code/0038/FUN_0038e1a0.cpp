/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038e1a0` (_code @ 0x38e1a0, 0x1cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003ee0c0(int);
int FUN_004fb43c(...);
int FUN_004fc094(int, unsigned int, int, int, int, unsigned int, int, unsigned int, unsigned int, unsigned int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);

/* stack frame of void: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned int DAT_005710e8; /* 0x5710e8 */
extern unsigned int DAT_005710ec; /* 0x5710ec */
extern unsigned int DAT_00571108; /* 0x571108 */
extern unsigned int DAT_0057110c; /* 0x57110c */
extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003ee0c0. */
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fc094. */


unsigned int FUN_0038e1a0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_00236038(1);
  temp_v3 = FUN_0014aa78();
  temp_v4 = FUN_004ee568(DAT_0057113c);
  temp_v5 = 0;
  do {
    puVar7 = (unsigned int *)(*(int *)(temp_v3 + 0x1ffc) + temp_v5 * 0x408);
    if ((((DAT_005710e8 & *puVar7) != 0 || (DAT_005710ec & puVar7[1]) != 0) &&
        ((puVar7[1] & DAT_0057110c) == 0 && (DAT_00571108 & *puVar7) == 0)) &&
       (-1 < (short)puVar7[2])) {
      if (temp_v2 != 0) {
        if (temp_v2 != 1) {
          temp_v6 = 0;
          if (temp_v2 == 2) {
            temp_v6 = temp_v1;
          }
        }
        else {
          temp_v6 = (int)(puVar7[0x98] * temp_v1) / 100;
        }
      }
      else {
        temp_v6 = (int)(puVar7[0x99] * temp_v1) / 100;
      }
      FUN_003ee0c0(temp_v3);
      temp_v0 = temp_v5 << 3;
      FUN_004fc094(0,temp_v4,0,*(int *)(temp_v3 + 0x1ed4) + (short)puVar7[2] * 0x1d0,0,0xffffffff,temp_v6,
                   0xffffffff,puVar7[0x96],puVar7[0x97],0,0,0,0,1,0,temp_v0,temp_v0,temp_v0,temp_v0,1,0,1,1,
                   0,1);
      FUN_004fb43c(0,temp_v4,0x1000257,0,0,0,0);
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 4);
  return 1;
}

} /* extern "C" */
