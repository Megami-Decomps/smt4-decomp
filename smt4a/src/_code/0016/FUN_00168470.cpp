/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00168470` (_code @ 0x168470, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017ffa8(int, int, unsigned int, unsigned int, unsigned int, unsigned int);
int FUN_00186f58(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: FUN_00186f58. */


void FUN_00168470(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  FUN_00186f58();
  switch(*(unsigned char *)(param_1 + 0x23)) {
  case 0:
    temp_v0 = 0x411;
    break;
  case 1:
    temp_v0 = 0x412;
    break;
  case 2:
    temp_v0 = 0x413;
    break;
  case 3:
    temp_v0 = 0x414;
    break;
  case 4:
    temp_v0 = 0x415;
    break;
  case 5:
    temp_v0 = 0x416;
  }
  FUN_0017ffa8(2,0xb,temp_v0,param_2,param_3,param_4);
  return;
}

} /* extern "C" */
