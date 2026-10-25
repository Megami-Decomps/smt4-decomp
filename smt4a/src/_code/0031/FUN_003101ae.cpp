/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003101ae` (_code @ 0x3101ae, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pooledListErase(unsigned int **, unsigned int, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: pooledListErase. */
extern int wordRefsDiffer_00307d28(unsigned int *, unsigned int);


void FUN_003101ae(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *temp_v2;
  unsigned int uStack_18;
  
  temp_v1 = param_2;
  temp_v2 = param_3;
  uStack_18 = param_4;
  while( 1 ) {
    temp_v0 = wordRefsDiffer_00307d28(param_3,param_4);
    temp_v1 = *param_3;
    if (temp_v0 == 0) break;
    pooledListErase(&temp_v2,param_2,&temp_v1);
    *param_3 = (unsigned int)temp_v2;
  }
  *param_1 = temp_v1;
  return;
}

} /* extern "C" */
