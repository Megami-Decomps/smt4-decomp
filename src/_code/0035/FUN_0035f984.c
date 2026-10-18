/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f984` (_code @ 0x35f984, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Supplied declaration required: FUN_00237ad4. */
extern int FUN_002c3290(unsigned int);
/* Supplied declaration required: FUN_0035fb6c. */


void FUN_0035f984(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v1 = param_6;
  temp_v0 = param_5;
  FUN_00237ad4();
  if ((unsigned char *)register0x00000054 != (unsigned char *)0x0) {
    temp_v2 = FUN_002c3290(param_1);
    FUN_0035fb6c(param_1,temp_v2 + 1,param_2,param_3,param_4,temp_v0,temp_v0,temp_v1);
  }
  return;
}
