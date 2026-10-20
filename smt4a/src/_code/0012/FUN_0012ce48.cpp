/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012ce48` (_code @ 0x12ce48, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030c63a(int **, int *, int **);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int wordRefsDiffer_002f2968(int **, int *);
/* Supplied declaration required: FUN_0030c63a. */


unsigned long long FUN_0012ce48(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *temp_v1;
  int *temp_v2;
  int *temp_v3;
  unsigned int uStack_14;
  
  temp_v3 = (int *)param_1[1];
  piVar2 = param_1 + 3;
  temp_v1 = param_1;
  temp_v2 = param_2;
  uStack_14 = param_4;
  while (temp_v0 = wordRefsDiffer_002f2968(&temp_v3,piVar2), temp_v0 != 0) {
    for (; (temp_v3 != (int *)*piVar2 && (temp_v3 != (int *)*param_2));
        temp_v3 = (int *)temp_v3[1]) {
    }
    temp_v0 = wordRefsDiffer_002f2968(&temp_v3,piVar2);
    if (temp_v0 != 0) {
      temp_v1 = temp_v3;
      FUN_0030c63a(&temp_v2,param_1,&temp_v1);
      temp_v3 = temp_v2;
    }
  }
  return romwright_piece_4_4(temp_v2,temp_v1);
}

} /* extern "C" */
