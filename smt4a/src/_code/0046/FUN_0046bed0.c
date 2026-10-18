/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046bed0` (_code @ 0x46bed0, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
} param_3_stack;

extern unsigned int DAT_0057027c; /* 0x57027c */

extern int FUN_001b2bd8(unsigned int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_001b2ebc. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_0046bed0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  
  FUN_002e6354(temp_v1,0x80);
  temp_v0 = FUN_001b2bd8(param_1,7,param_2,temp_v1);
  if (temp_v0 != 0) {
    FUN_001b2ebc(DAT_0057027c,temp_v1,param_3,temp_v0 + 8,1,0x80,0);
  }
  return;
}
