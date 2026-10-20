/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c041c` (_code @ 0x3c041c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a4ac(int, int, int, int, int, int, unsigned int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0022a4ac. */
extern int FUN_002939f4(void);


void FUN_003c041c(short param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002939f4();
  if ((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40) == 0 && (*(unsigned int *)(temp_v0 + 0x44a0) & 0x100) == 0) {
    temp_v1 = 0xffffffff;
    if (param_2 != 0) {
      temp_v1 = 0xd;
    }
    FUN_0022a4ac(2,(int)param_1,0,0,param_2,0,temp_v1);
  }
  return;
}

} /* extern "C" */
