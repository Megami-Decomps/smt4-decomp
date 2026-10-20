/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d5374` (_code @ 0x2d5374, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025ca80(unsigned int, int);
int FUN_002f46a4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_002d54ac; /* 0x2d54ac */
extern unsigned char LAB_002d54cc; /* 0x2d54cc */
extern short DAT_0049fb40; /* 0x49fb40 */
extern short DAT_0049fb42; /* 0x49fb42 */

extern unsigned int FUN_0025bb34(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0025ca80. */
/* Supplied declaration required: FUN_002f46a4. */


void FUN_002d5374(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_0049fb40 != DAT_0049fb42) {
    DAT_0049fb42 = DAT_0049fb40;
  }
  FUN_002f46a4();
  temp_v0 = FUN_0025bb34(1,&LAB_002d54ac,0);
  FUN_0025ca80(temp_v0,0);
  temp_v0 = FUN_0025bb34(1,&LAB_002d54cc,0);
  FUN_0025ca80(temp_v0,0);
  return;
}

} /* extern "C" */
