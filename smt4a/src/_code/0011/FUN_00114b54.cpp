/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114b54` (_code @ 0x114b54, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00300304(int *, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00300304. */
extern int wordRefsDiffer_00300366(int *, unsigned int *);


unsigned int FUN_00114b54(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  temp_v2 = param_3;
  temp_v3 = param_4;
  FUN_00300304(&temp_v2,param_1 + 4);
  temp_v3 = *(unsigned int *)(param_1 + 0x14);
  temp_v0 = wordRefsDiffer_00300366(&temp_v2,(unsigned int *)&temp_v3);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v2 + 0x18);
    *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  }
  return temp_v1;
}

} /* extern "C" */
