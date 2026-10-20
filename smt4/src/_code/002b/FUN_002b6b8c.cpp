/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b6b8c` (_code @ 0x2b6b8c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae584(void);
int FUN_002ae9ec(int, int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_002ae584. */
/* Supplied declaration required: FUN_002ae9ec. */


void FUN_002b6b8c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = 0;
  FUN_002ae584();
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
  FUN_002ae9ec(2,0x13,temp_v0,param_2,param_3,param_4);
  return;
}

} /* extern "C" */
