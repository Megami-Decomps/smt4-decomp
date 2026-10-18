/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380b04` (_code @ 0x380b04, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
extern unsigned int FUN_001ab854(int);
/* Supplied declaration required: FUN_00236038. */
extern int FUN_004bd340(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004bd3ec. */
/* Supplied declaration required: FUN_004bd400. */
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fcffc. */
/* Supplied declaration required: FUN_004fdb18. */


unsigned int FUN_00380b04(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v3 = FUN_004ee568(DAT_0057113c);
  if (temp_v0 < 0x6d) {
    temp_v4 = FUN_0014aa78();
    temp_v0 = *(int *)(temp_v4 + 0x1ed4) + temp_v0 * 0x1d0;
    if (temp_v2 == 0) {
      FUN_004fcffc(0,temp_v3,temp_v0,1 << (temp_v1 & 0xff));
      return 1;
    }
    FUN_004fdb18(0,temp_v3,temp_v0,1 << (temp_v1 & 0xff),1);
  }
  else {
    temp_v5 = FUN_001ab854(temp_v0 - 0x6d);
    if (temp_v2 == 0) {
      FUN_004bd400(temp_v5,(1 << (temp_v1 & 0xff)) & 0xffff);
      return 1;
    }
    FUN_004bd3ec(temp_v5,temp_v1 & 0xffff);
    if (((temp_v1 & 0xffff) != 4) && (temp_v0 = FUN_004bd340(temp_v5,4), temp_v0 != 0)) {
      FUN_004bd400(temp_v5,0x10);
    }
  }
  FUN_004fb43c(0,temp_v3,0x100025f,0,0,0,0);
  return 1;
}
