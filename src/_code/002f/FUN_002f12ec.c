/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f12ec` (_code @ 0x2f12ec, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_00250800. */
/* Supplied declaration required: FUN_0027e1a0. */
extern unsigned int FUN_0027eb98(unsigned int);
extern int FUN_00293c98(void);
extern int FUN_00296f60(unsigned int);


unsigned int FUN_002f12ec(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00296f60(2);
  temp_v3 = FUN_0027eb98(DAT_0043427c);
  temp_v4 = 0;
  if (0 < temp_v2) {
    temp_v4 = 0x3e0;
  }
  temp_v2 = FUN_00293c98();
  temp_v2 = *(int *)(temp_v2 + 0x1fc0);
  temp_v0 = (*(short *)(temp_v2 + 0x1b6) * temp_v0) / 100;
  if (!((*(unsigned short *)(temp_v2 + 0x1c6) & 8) == 0 || temp_v0 < 2)) {
    temp_v0 = 1;
  }
  else if (temp_v0 == 0) {
    temp_v0 = -1;
  }
  temp_v1 = (*(short *)(temp_v2 + 0x1ba) * temp_v1) / 100;
  if (!((*(unsigned short *)(temp_v2 + 0x1c6) & 8) == 0 || temp_v1 < 2)) {
    temp_v1 = 1;
  }
  else if (temp_v1 == 0) {
    temp_v1 = -1;
  }
  temp_v2 = FUN_00293c98();
  FUN_0027e1a0(0,temp_v3,*(unsigned int *)(temp_v2 + 0x1e98),0,temp_v0,temp_v1,0xffffffff,temp_v4,0,0,9,0,0);
  FUN_00250800(0,temp_v3,0x10001c1,0,0,0,0);
  return 1;
}
