/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d5c0` (_code @ 0x27d5c0, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002d2a38(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0049f91c; /* 0x49f91c */

extern int FUN_002878a8(int);
extern int FUN_002c2950(void);
/* Supplied declaration required: FUN_002d2a38. */


void FUN_0027d5c0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c2950();
  if ((*(signed char *)((unsigned char *)&DAT_0049f91c + 0xac)) == '\0') {
    return;
  }
  temp_v1 = (int)*(short *)(temp_v0 + 0x2a);
  temp_v0 = FUN_002878a8(temp_v1);
  if (*(short *)(temp_v0 + 0x14) != 0) {
    FUN_002d2a38(temp_v1);
    return;
  }
  FUN_002d2a38(temp_v1,0xff);
  return;
}

} /* extern "C" */
