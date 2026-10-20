/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f774` (_code @ 0x35f774, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023793c(void);
int FUN_0035f95c(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Supplied declaration required: FUN_0023793c. */
extern int FUN_002c30c4(unsigned int);
/* Supplied declaration required: FUN_0035f95c. */


void FUN_0035f774(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v1 = param_6;
  temp_v0 = param_5;
  FUN_0023793c();
  if ((unsigned char *)((unsigned int)__current_sp()) != (unsigned char *)0x0) {
    temp_v2 = FUN_002c30c4(param_1);
    FUN_0035f95c(param_1,temp_v2 + 1,param_2,param_3,param_4,temp_v0,temp_v0,temp_v1);
  }
  return;
}

} /* extern "C" */
