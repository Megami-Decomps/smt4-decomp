/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389bc8` (_code @ 0x389bc8, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_4_stack;

extern unsigned int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_00234bb4. */
extern int FUN_002a6e7c(unsigned int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002c4938. */


void FUN_00389bc8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  
  FUN_002c4938(temp_v1,0x80);
  temp_v0 = FUN_002a6e7c(param_1,0xc,param_2,temp_v1);
  if (temp_v0 != 0) {
    FUN_00234bb4(DAT_00433130,temp_v1,param_4,param_3,0,0x80,temp_v0);
  }
  return;
}
