/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003882d8` (_code @ 0x3882d8, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} param_4_stack;

extern unsigned int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_00234d4c. */
extern int FUN_002a71c0(unsigned int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002c4b30. */


void FUN_003882d8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [132];
  
  FUN_002c4b30(temp_v1,0x80);
  temp_v0 = FUN_002a71c0(param_1,8,param_2,temp_v1);
  if (temp_v0 != 0) {
    FUN_00234d4c(DAT_00433130,temp_v1,param_4,param_3,1,0x80,0);
  }
  return;
}
