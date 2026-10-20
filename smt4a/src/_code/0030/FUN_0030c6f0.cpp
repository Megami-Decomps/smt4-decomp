/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c6f0` (_code @ 0x30c6f0, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e32a4(int, unsigned char *, unsigned char *, unsigned int, unsigned int);
int vectorSize24B(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char LAB_0030c71c; /* 0x30c71c */

/* Supplied declaration required: FUN_002e32a4. */
/* Supplied declaration required: vectorSize24B. */


int FUN_0030c6f0(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = vectorSize24B();
  if (temp_v0 <= param_2) {
    temp_v1 = vectorSize24B(param_1);
    FUN_002e32a4(9,&LAB_0030c71c,&LAB_0030c71c,param_2,temp_v1);
  }
  return *param_1 + param_2 * 0x18;
}

} /* extern "C" */
