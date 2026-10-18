/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380c48` (_code @ 0x380c48, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} void_stack;

extern unsigned int DAT_005710e8; /* 0x5710e8 */
extern unsigned int DAT_005710ec; /* 0x5710ec */
extern unsigned int DAT_00571108; /* 0x571108 */
extern unsigned int DAT_0057110c; /* 0x57110c */
extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fb798. */


unsigned int FUN_00380c48(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_00236038(1);
  temp_v3 = FUN_00236038(2);
  temp_v4 = FUN_004ee568(DAT_0057113c);
  temp_v9 = 0;
  if (0 < temp_v3) {
    temp_v9 = 0x3be0;
  }
  temp_v7 = 0;
  temp_v3 = 0;
  do {
    temp_v5 = FUN_0014aa78();
    puVar8 = (unsigned int *)(*(int *)(temp_v5 + 0x1ffc) + temp_v3 * 0x408);
    if ((((puVar8[1] & DAT_005710ec) != 0 || (DAT_005710e8 & *puVar8) != 0) &&
        ((puVar8[1] & DAT_0057110c) == 0 && (DAT_00571108 & *puVar8) == 0)) &&
       (-1 < (short)puVar8[2])) {
      temp_v5 = (int)(puVar8[0x97] * temp_v1) / 100;
      if (!((puVar8[0x9d] & 8) == 0 || temp_v5 < 2)) {
        temp_v5 = 1;
      }
      else if (temp_v5 == 0) {
        temp_v5 = -1;
      }
      temp_v8 = (int)(puVar8[0x99] * temp_v2) / 100;
      if (!((puVar8[0x9d] & 8) == 0 || temp_v8 < 2)) {
        temp_v8 = 1;
      }
      else if (temp_v8 == 0) {
        temp_v8 = -1;
      }
      temp_v6 = FUN_0014aa78();
      temp_v0 = temp_v7 * 5;
      FUN_004fb798(0,temp_v4,0,*(int *)(temp_v6 + 0x1ed4) + (short)puVar8[2] * 0x1d0,0,temp_v5,temp_v8,
                   0xffffffff,temp_v9,temp_v0,temp_v0,9,0,0,1);
      FUN_004fb43c(temp_v0,temp_v4,0x1000263,0,0,0,0);
      temp_v7 = temp_v7 + 1;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 4);
  return 1;
}
