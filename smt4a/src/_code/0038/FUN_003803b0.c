/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003803b0` (_code @ 0x3803b0, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003f0e20. */
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fb798. */


unsigned int FUN_003803b0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_004ee568(DAT_0057113c);
  temp_v3 = FUN_0014aa78();
  FUN_003f0e20(temp_v3,temp_v0);
  temp_v1 = (*(int *)(temp_v3 + 0x25c) * temp_v1) / 100;
  if (temp_v1 == 0) {
    temp_v1 = -1;
  }
  temp_v3 = FUN_0014aa78();
  FUN_004fb798(0,temp_v2,0,*(int *)(temp_v3 + 0x1ed4) + temp_v0 * 0x1d0,0,temp_v1,0xffffffff,0xffffffff,
               0x3be0,0,0,9,0,0,1);
  FUN_004fb43c(0,temp_v2,0x1000263,0,0,0,0);
  return 1;
}
