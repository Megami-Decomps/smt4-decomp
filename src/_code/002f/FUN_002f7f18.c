/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7f18` (_code @ 0x2f7f18, 0x1a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_0027e1a0. */
extern unsigned int FUN_0027eb98(unsigned int);
extern int FUN_00293c98(void);
extern int FUN_00296f60(unsigned int);


unsigned int FUN_002f7f18(void)

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
  
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00296f60(1);
  temp_v3 = FUN_00296f60(2);
  temp_v4 = FUN_0027eb98(DAT_0043427c);
  temp_v7 = 0;
  temp_v9 = 0;
  if (0 < temp_v3) {
    temp_v9 = 0x3e0;
  }
  temp_v3 = 0;
  do {
    temp_v5 = FUN_00293c98();
    puVar8 = (unsigned int *)(*(int *)(temp_v5 + 0x1fc0) + temp_v3 * 0x288);
    if ((((*puVar8 & 1) != 0) && ((*puVar8 & 0x40) == 0)) && (-1 < (short)puVar8[2])) {
      temp_v5 = (*(short *)((int)puVar8 + 0x1b6) * temp_v1) / 100;
      if (!((*(unsigned short *)((int)puVar8 + 0x1c6) & 8) == 0 || temp_v5 < 2)) {
        temp_v5 = 1;
      }
      else if (temp_v5 == 0) {
        temp_v5 = -1;
      }
      temp_v8 = (*(short *)((int)puVar8 + 0x1ba) * temp_v2) / 100;
      if (!((*(unsigned short *)((int)puVar8 + 0x1c6) & 8) == 0 || temp_v8 < 2)) {
        temp_v8 = 1;
      }
      else if (temp_v8 == 0) {
        temp_v8 = -1;
      }
      temp_v6 = FUN_00293c98();
      temp_v0 = temp_v7 * 5;
      FUN_0027e1a0(0,temp_v4,*(int *)(temp_v6 + 0x1e98) + (short)puVar8[2] * 0x114,0,temp_v5,temp_v8,
                   0xffffffff,temp_v9,temp_v0,temp_v0,9,0,0);
      FUN_00250800(temp_v0,temp_v4,0x10001c1,0,0,0,0);
      temp_v7 = temp_v7 + 1;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 4);
  return 1;
}
