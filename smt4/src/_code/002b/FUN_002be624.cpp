/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be624` (_code @ 0x2be624, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c682a(int, int *);
int FUN_002c683e(unsigned int, int *, int *, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_002c682a. */
/* Supplied declaration required: FUN_002c683e. */


unsigned int FUN_002be624(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_1c;
  int uStack_8;
  unsigned int uStack_4;
  
  temp_v0 = param_1;
  uStack_1c = param_4;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_002c683e(param_2,&temp_v0,&uStack_8,0x2c682b);
  FUN_002c682a(0,&temp_v0);
                    /* WARNING: Treating indirect jump as return */
  return param_2;
}

} /* extern "C" */
