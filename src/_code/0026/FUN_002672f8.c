/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002672f8` (_code @ 0x2672f8, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0025c110. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00389d04. */


int FUN_002672f8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c0ec4(0x32,1);
  temp_v1 = FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v0);
  if (param_1 < temp_v2) {
    temp_v1 = temp_v1 + param_1 * 0x3c;
  }
  else {
    temp_v1 = DAT_00433158;
    FUN_0025c110(DAT_00433158,0x28,1);
    if (param_1 < temp_v1 + temp_v2) {
      temp_v1 = DAT_00433158;
      FUN_00389d04(DAT_00433158,param_1 - temp_v2);
      return temp_v1;
    }
    temp_v1 = 0;
  }
  return temp_v1;
}
