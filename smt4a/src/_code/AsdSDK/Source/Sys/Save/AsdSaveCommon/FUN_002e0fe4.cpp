/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0fe4` (_code @ 0x2e0fe4, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001630d4(int, int, int, int, int);
int FUN_0019a5a0(int);
int FUN_002e59f8(unsigned int, int, int);
int FUN_0037adac(unsigned int, unsigned int, int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e59f8. */
/* Supplied declaration required: FUN_0037adac. */


unsigned int
FUN_002e0fe4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5
            )

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x100;
  FUN_001630d4(0x100,0x100,0,param_5 + 0x80,1);
  FUN_002e59f8(param_3,temp_v0,0x80);
  FUN_002e59f8(param_4,temp_v0 + 0x80,param_5);
  FUN_0037adac(param_1,param_2,temp_v0,param_5 + 0x80);
  FUN_0019a5a0(temp_v0);
  return param_1;
}

} /* extern "C" */
