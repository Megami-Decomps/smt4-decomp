/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efcc4` (_code @ 0x2efcc4, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00107608(int, unsigned int);
int FUN_0012092a(int, int);
int FUN_002efcf2(int *, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00107608. */
/* Supplied declaration required: FUN_0012092a. */
extern unsigned int FUN_001242e2(int);
/* Supplied declaration required: FUN_002efcf2. */


void FUN_002efcc4(int param_1,int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int uStack_14;
  
  temp_v1 = param_3;
  uStack_14 = param_4;
  FUN_002efcf2(&temp_v1,param_3);
  FUN_0012092a(param_1 + 0xc4,*param_2 - temp_v1);
  temp_v0 = FUN_001242e2(param_1 + 0xc4);
  FUN_00107608(param_1,temp_v0);
  return;
}

} /* extern "C" */
