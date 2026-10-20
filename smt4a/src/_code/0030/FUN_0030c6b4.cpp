/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030c6b4` (_code @ 0x30c6b4, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e32a4(int, unsigned char *, unsigned char *, unsigned int, unsigned int);
int vectorCount4_0030c774(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char LAB_0030c6e0; /* 0x30c6e0 */

/* Supplied declaration required: FUN_002e32a4. */
/* Supplied declaration required: vectorCount4_0030c774. */


int FUN_0030c6b4(int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = vectorCount4_0030c774();
  if (temp_v0 <= param_2) {
    temp_v1 = vectorCount4_0030c774(param_1);
    FUN_002e32a4(9,&LAB_0030c6e0,&LAB_0030c6e0,param_2,temp_v1);
  }
  return *param_1 + param_2 * 4;
}

} /* extern "C" */
