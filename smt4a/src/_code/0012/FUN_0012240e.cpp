/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012240e` (_code @ 0x12240e, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001219f8(unsigned int, unsigned int);
int FUN_001223d6(unsigned int, int *, unsigned int, unsigned char *);
int FUN_0030fbc0(unsigned int, unsigned int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_001219f8. */
/* Supplied declaration required: FUN_001223d6. */
extern int refIsNonNegative(unsigned int *);
/* Supplied declaration required: FUN_0030fbc0. */


void FUN_0012240e(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned char uStack_10;
  
  temp_v2 = *(unsigned int *)(param_2 + 0x24);
  temp_v1 = *(unsigned int *)(param_2 + 0x20);
  temp_v3 = *(unsigned int *)(param_2 + 0x28);
  temp_v4 = temp_v1;
  uStack_18 = temp_v2;
  uStack_14 = temp_v3;
  FUN_001223d6(param_1,&temp_v4,temp_v3,&uStack_10);
  FUN_0030fbc0(param_1,param_3);
  temp_v0 = refIsNonNegative((unsigned int *)&temp_v1);
  if (temp_v0 != 0) {
    FUN_001219f8(param_1,param_4);
  }
  return;
}

} /* extern "C" */
