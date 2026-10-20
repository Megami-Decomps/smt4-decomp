/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00428060` (_code @ 0x428060, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b57a8(...);
int FUN_004283f0(unsigned int *, int, unsigned int);
int FUN_004285d4(int, unsigned int, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int FUN_0016ccfc(void);
/* Supplied declaration required: FUN_001b57a8. */
extern int FUN_004283cc(unsigned int *);
/* Supplied declaration required: FUN_004283f0. */
/* Supplied declaration required: FUN_004285d4. */
extern int FUN_004287ac(unsigned int, int *, unsigned int);


void FUN_00428060(unsigned int *param_1,unsigned int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2 [2];
  int temp_v3;
  unsigned int uStack_1c;
  
  temp_v0 = FUN_004283cc(param_2);
  if (temp_v0 < 0) {
    FUN_001b57a8(param_1,temp_v0);
    return;
  }
  temp_v1 = FUN_0016ccfc();
  temp_v0 = FUN_004287ac(temp_v1,temp_v2,*param_2);
  if ((-1 < temp_v0) &&
     (FUN_004285d4(param_3,param_4,temp_v2[0] + 0x54), temp_v0 = param_3, -1 < param_3)) {
    temp_v0 = 0;
  }
  FUN_001b57a8(&temp_v3,temp_v0);
  FUN_004283f0(param_2,temp_v3,uStack_1c);
  *param_1 = temp_v3;
  param_1[1] = uStack_1c;
  return;
}

} /* extern "C" */
