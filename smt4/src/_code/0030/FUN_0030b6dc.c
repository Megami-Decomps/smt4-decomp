/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b6dc` (_code @ 0x30b6dc, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_00246d38. */
/* Supplied declaration required: FUN_00246e24. */
/* Supplied declaration required: FUN_002505c0. */
extern unsigned int FUN_0027e928(unsigned int);
extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_0030b6dc(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  temp_v3 = FUN_0027e928(DAT_0043427c);
  if (temp_v2 != 0) {
    temp_v2 = FUN_002939f4();
    FUN_00246e24(0,temp_v3,*(int *)(temp_v2 + 0x1e98) + temp_v0 * 0x114,1 << (temp_v1 & 0xff),1);
    FUN_002505c0(0,temp_v3,0x10001bd,0,0,0,0);
  }
  else {
    temp_v2 = FUN_002939f4();
    FUN_00246d38(0,temp_v3,*(int *)(temp_v2 + 0x1e98) + temp_v0 * 0x114,1 << (temp_v1 & 0xff));
  }
  return 1;
}
