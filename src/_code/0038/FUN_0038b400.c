/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b400` (_code @ 0x38b400, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_0044e3b0; /* 0x44e3b0 */

/* Supplied declaration required: FUN_0014ff04. */
/* Supplied declaration required: FUN_002b5838. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002c12e0. */
/* Supplied declaration required: FUN_002c130c. */
/* Supplied declaration required: FUN_0036115c. */
extern int FUN_003611c4(void);


void FUN_0038b400(void)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  char acStack_28 [4];
  char acStack_24 [16];
  
  FUN_0036115c();
  temp_v2 = FUN_003611c4();
  temp_v0 = DAT_0044e3b0;
  if (temp_v2 != 0) {
    return;
  }
  if (DAT_0044e3b0 != '\0') {
    DAT_0044e3b0 = '\0';
    FUN_002c130c(3);
    FUN_002c12e0(0);
  }
  while (temp_v1 = 0x407, FUN_0014ff04(0x407,0,0,acStack_24,acStack_28,0),
        (temp_v1 & (int)acStack_24[0] & (int)acStack_28[0]) == 0) {
    FUN_002bb150(10000000,0);
  }
  if (temp_v0 == '\0') {
    return;
  }
  DAT_0044e3b0 = 1;
  FUN_002b5838(4,0,0,0);
                    /* WARNING: Treating indirect jump as return */
  return;
}
