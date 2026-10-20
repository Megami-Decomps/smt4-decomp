/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0238` (_code @ 0x3c0238, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a5d8(unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_0022a5d8. */
extern int btlGetMainState(void);


unsigned int FUN_003c0238(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = btlGetMainState();
  if ((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40) == 0 && (*(unsigned int *)(temp_v0 + 0x44a0) & 0x100) == 0) {
    temp_v1 = 0;
    if (param_2 == 1) {
      temp_v1 = 0x1a;
    }
    else if (param_2 == 2) {
      temp_v1 = 0x1b;
    }
    FUN_0022a5d8(temp_v1,param_1,param_3);
    return temp_v1;
  }
  return 0;
}

} /* extern "C" */
