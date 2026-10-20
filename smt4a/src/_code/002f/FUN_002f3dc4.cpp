/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3dc4` (_code @ 0x2f3dc4, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9b30(unsigned int, int, int *, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002e9b30. */


void FUN_002f3dc4(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = param_2[1];
  temp_v0 = *param_2;
  temp_v2 = param_2[2];
  FUN_002e9b30(param_1,2,&temp_v0,1);
  return;
}

} /* extern "C" */
