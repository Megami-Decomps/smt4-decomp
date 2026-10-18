/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd754` (_code @ 0x2cd754, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0043e18c; /* 0x43e18c */

/* Supplied declaration required: FUN_00286928. */
extern unsigned int FUN_00289640(void);
extern int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);


void FUN_002cd754(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00293c98();
  temp_v1 = *(unsigned int *)(temp_v0 + 0x2234);
  temp_v2 = FUN_00296f60(0);
  temp_v3 = FUN_00289640();
  if (DAT_0043e18c != 0) {
    *(unsigned char *)(DAT_0043e18c + 0xa11) = 0x14;
  }
  FUN_00286928(temp_v1,temp_v2,temp_v3,0xb,0,0);
  return;
}
