/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e42c4` (_code @ 0x2e42c4, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002866b4(unsigned int, unsigned int, unsigned int, int, int, int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0043e18c; /* 0x43e18c */

/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);


void FUN_002e42c4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r4;
  
  temp_v2 = btlGetMainState();
  temp_v3 = *(unsigned int *)(temp_v2 + 0x2234);
  temp_v0 = scrGetArg(0);
  temp_v1 = FUN_002893d8();
  if (DAT_0043e18c != 0) {
    *(unsigned char *)(DAT_0043e18c + 0xa11) = 0x14;
  }
  FUN_002866b4(temp_v3,temp_v0,temp_v1,5,0,0,unaff_r4);
  return;
}

} /* extern "C" */
