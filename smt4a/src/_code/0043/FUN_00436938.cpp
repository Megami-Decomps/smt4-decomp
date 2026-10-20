/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00436938` (_code @ 0x436938, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004352b0(int *, int *);
int variantSetByteB(int, int *, int);
int FUN_00515618(int [2], int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_004352b0. */
/* Supplied declaration required: variantSetByteB. */
/* Supplied declaration required: FUN_00515618. */


unsigned int FUN_00436938(int *param_1,int *param_2,int *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2 [2];
  
  FUN_004352b0(&temp_v1,param_1);
  if (temp_v1 != 0) {
    FUN_00515618(temp_v2,*param_3 + 8);
    if (temp_v2[0] != 0) {
      temp_v0 = temp_v1;
      variantSetByteB(temp_v2[0] + 8,&temp_v0,*(unsigned char *)(*param_1 + 10));
      *param_2 = temp_v1;
      *param_1 = *(int *)(*param_1 + 4);
      return 0;
    }
  }
  return 2;
}

} /* extern "C" */
