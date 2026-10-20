/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b85c` (_code @ 0x30b85c, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002866b4(unsigned int, unsigned int, unsigned int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0043e194; /* 0x43e194 */

extern unsigned int FUN_0024b96c(void);
extern unsigned int FUN_002865f8(void);
/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
extern unsigned int scrGetArg(unsigned int);


void FUN_0030b85c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = FUN_0024b96c();
  temp_v0 = FUN_002865f8();
  *(unsigned int *)(DAT_0043e194 + 0x24) = temp_v2;
  temp_v2 = scrGetArg(0);
  temp_v1 = FUN_002893d8();
  FUN_002866b4(temp_v0,temp_v2,temp_v1,0xc,0,0);
  return;
}

} /* extern "C" */
