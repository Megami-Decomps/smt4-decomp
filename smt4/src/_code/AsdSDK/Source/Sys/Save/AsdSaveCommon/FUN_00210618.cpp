/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00210618` (_code @ 0x210618, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd420(unsigned int, int, int);
int FUN_002c415c(int);
int FUN_002c5300(int, int, int, int, int);
int FUN_002f55cc(unsigned int, unsigned int, int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_002bd420. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: FUN_002f55cc. */


unsigned int
FUN_00210618(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5
            )

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0x100;
  FUN_002c5300(0x100,0x100,0,param_5 + 0x80,1);
  FUN_002bd420(param_3,temp_v0,0x80);
  FUN_002bd420(param_4,temp_v0 + 0x80,param_5);
  FUN_002f55cc(param_1,param_2,temp_v0,param_5 + 0x80);
  FUN_002c415c(temp_v0);
  return param_1;
}

} /* extern "C" */
