/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012cf84` (_code @ 0x12cf84, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char DAT_0055b08c; /* 0x55b08c */

/* Supplied declaration required: FUN_002f9d6a. */


unsigned int * FUN_0012cf84(unsigned int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  *param_1 = (unsigned int)&DAT_0055b08c;
  temp_v0 = param_1[3];
  temp_v2 = param_1[1];
  temp_v1 = param_3;
  while (temp_v2 != temp_v0) {
    FUN_002f9d6a(&temp_v1,param_1,&temp_v2);
    temp_v2 = temp_v1;
  }
  return param_1;
}
