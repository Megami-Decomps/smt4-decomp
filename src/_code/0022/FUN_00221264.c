/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221264` (_code @ 0x221264, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */

extern unsigned int FUN_002865f8(void);
/* Supplied declaration required: FUN_002866b4. */
/* Supplied declaration required: FUN_002893d8. */
/* Supplied declaration required: FUN_0028dc98. */
extern unsigned int FUN_00296cc8(unsigned int);


void FUN_00221264(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  FUN_0028dc98(0);
  temp_v1 = FUN_002893d8();
  temp_v0 = DAT_0043e190;
  if (temp_v1 == 0) {
    if (DAT_0043e190 != 0) {
      *(unsigned char *)(DAT_0043e190 + 0x30) = 1;
    }
    *(unsigned char *)(temp_v0 + 0x31) = 1;
  }
  if (DAT_0043e18c != 0) {
    *(unsigned char *)(DAT_0043e18c + 0xa11) = 0x14;
  }
  temp_v2 = FUN_002865f8();
  temp_v3 = FUN_00296cc8(0);
  temp_v4 = FUN_002893d8();
  FUN_002866b4(temp_v2,temp_v3,temp_v4,6,1,0);
  return;
}
