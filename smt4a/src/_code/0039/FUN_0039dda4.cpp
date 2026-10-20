/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039dda4` (_code @ 0x39dda4, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_004fb43c(int, unsigned int, int, int, int, int, int);
int FUN_004fcffc(int, unsigned int, int, int);
int FUN_004fdb18(int, unsigned int, int, int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00236038. */
extern unsigned int FUN_004ee568(unsigned int);
/* Supplied declaration required: FUN_004fb43c. */
/* Supplied declaration required: FUN_004fcffc. */
/* Supplied declaration required: FUN_004fdb18. */


unsigned int FUN_0039dda4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  temp_v2 = FUN_00236038(2);
  temp_v3 = FUN_004ee568(DAT_0057113c);
  if (temp_v2 != 0) {
    temp_v2 = FUN_0014aa78();
    FUN_004fdb18(0,temp_v3,*(int *)(temp_v2 + 0x1ed4) + temp_v0 * 0x1d0,1 << (temp_v1 & 0xff),1);
    if (temp_v1 != 4) {
      FUN_004fb43c(0,temp_v3,0x100025f,0,0,0,0);
    }
    else {
      FUN_004fb43c(0,temp_v3,0x1000275,0,0,0,0);
    }
  }
  else {
    temp_v2 = FUN_0014aa78();
    FUN_004fcffc(0,temp_v3,*(int *)(temp_v2 + 0x1ed4) + temp_v0 * 0x1d0,1 << (temp_v1 & 0xff));
  }
  return 1;
}

} /* extern "C" */
