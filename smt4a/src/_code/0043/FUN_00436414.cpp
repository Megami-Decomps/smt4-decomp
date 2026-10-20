/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00436414` (_code @ 0x436414, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int variantSetPlain(int, int *);
int FUN_00515618(int [2], int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: variantSetPlain. */
/* Supplied declaration required: FUN_00515618. */


unsigned int FUN_00436414(int *param_1,int *param_2,unsigned int *param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2 [2];
  
  FUN_00515618(temp_v2,*param_4 + 8);
  if (temp_v2[0] == 0) {
    temp_v0 = 2;
  }
  else {
    temp_v1 = *param_3;
    variantSetPlain(temp_v2[0] + 8,&temp_v1);
    *param_2 = *param_4;
    *param_1 = *(int *)(*param_1 + 4);
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
