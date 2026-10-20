/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2da0` (_code @ 0x2f2da0, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(unsigned int);
int FUN_002f9d6a(unsigned int **, unsigned int, int *);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: sharedRefRelease. */
/* Supplied declaration required: FUN_002f9d6a. */


void FUN_002f2da0(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *temp_v1;
  int temp_v2;
  
  temp_v0 = *param_3;
  temp_v1 = param_3;
  temp_v2 = temp_v0;
  FUN_002f9d6a(&temp_v1,param_2,&temp_v2);
  *param_3 = (unsigned int)temp_v1;
  sharedRefRelease(temp_v0);
  *param_1 = *param_3;
  return;
}

} /* extern "C" */
