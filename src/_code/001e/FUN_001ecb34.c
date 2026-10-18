/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ecb34` (_code @ 0x1ecb34, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043e18c; /* 0x43e18c */

extern unsigned int FUN_0028686c(void);
/* Supplied declaration required: FUN_00286928. */
extern unsigned int FUN_00289640(void);
/* Supplied declaration required: FUN_0028df3c. */
extern unsigned int FUN_00296f60(unsigned int);


void FUN_001ecb34(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_0028df3c(0);
  if (DAT_0043e18c != 0) {
    *(unsigned char *)(DAT_0043e18c + 0xa11) = 0x14;
  }
  temp_v0 = FUN_0028686c();
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00289640();
  FUN_00286928(temp_v0,temp_v1,temp_v2,6,1,0);
  return;
}
