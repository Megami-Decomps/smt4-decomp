/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105b94` (_code @ 0x105b94, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010f144(void);
int FUN_002c222c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_0010f144. */
extern int FUN_002c2218(int);
/* Supplied declaration required: FUN_002c222c. */


void FUN_00105b94(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0x139c;
  FUN_002c222c();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_002c2218(temp_v0 + 0x4a0);
    temp_v1 = FUN_002c2218(temp_v1 + 0x6fc);
    temp_v0 = FUN_002c2218(temp_v1 + 0x508);
    temp_v1 = temp_v0 - 0x10a4;
    *(unsigned int *)(temp_v0 + 0x128) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 300) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x130) = 0x3f800000;
    *(unsigned int *)(temp_v0 + 0x134) = 0x3f800000;
  }
  DAT_0044ea00 = temp_v1;
  FUN_0010f144();
  return;
}

} /* extern "C" */
