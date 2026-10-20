/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003113ee` (_code @ 0x3113ee, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9a56(unsigned int, unsigned char [8]);
int FUN_002eea5c(unsigned int, int *);
int FUN_0030fbca(unsigned char [4]);

/* stack frame of param_3: 3 slot(s), 4 byte(s) */
typedef struct {
    unsigned short spC; /* 0xc: local_c */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned char sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_002e9a56. */
/* Supplied declaration required: FUN_002eea5c. */
/* Supplied declaration required: FUN_0030fbca. */


void FUN_003113ee(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned char temp_v1 [8];
  unsigned int uStack_14;
  unsigned int uStack_10;
  int temp_v2;
  
  (*(unsigned short *)((unsigned char *)&temp_v2 + 0)) = (unsigned short)param_3;
  temp_v0[0] = 0;
  uStack_14 = param_1;
  uStack_10 = param_2;
  temp_v2 = param_3;
  if ((unsigned short)temp_v2 < 0x7f) {
    FUN_0030fbca(temp_v0);
    temp_v0[0] = ((unsigned char)temp_v2 & 0x7f) | (temp_v0[0] & 0x80);
    temp_v1[0] = temp_v0[0];
    FUN_002e9a56(param_1,temp_v1);
  }
  else {
    FUN_0030fbca(temp_v0);
    temp_v0[0] = (temp_v0[0] & 0x80) | 0x7f;
    temp_v1[0] = temp_v0[0];
    FUN_002e9a56(param_1,temp_v1);
    FUN_002eea5c(param_1,&temp_v2);
  }
  return;
}

} /* extern "C" */
