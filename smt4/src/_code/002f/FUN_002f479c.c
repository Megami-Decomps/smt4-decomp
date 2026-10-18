/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f479c` (_code @ 0x2f479c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0025bed8. */
extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003892a0. */


int FUN_002f479c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0cec(0x2a,1);
  temp_v1 = FUN_002c0cc4();
  temp_v2 = FUN_002c0c74(temp_v0);
  if (param_1 < temp_v2) {
    temp_v1 = temp_v1 + param_1 * 0xc;
  }
  else {
    temp_v1 = DAT_00433158;
    FUN_0025bed8(DAT_00433158,0x24,0);
    if (param_1 < temp_v1 + temp_v2) {
      temp_v1 = DAT_00433158;
      FUN_003892a0(DAT_00433158,param_1 - temp_v2);
      return temp_v1;
    }
    temp_v1 = 0;
  }
  return temp_v1;
}
