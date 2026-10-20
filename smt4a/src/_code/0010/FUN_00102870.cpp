/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102870` (_code @ 0x102870, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e5fa6(unsigned int, int *, unsigned int, int);
int cursorPushU16(int, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002e5fa6. */
/* Supplied declaration required: cursorPushU16. */


unsigned int FUN_00102870(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1;
  if (param_2 != 0) {
    temp_v1 = (param_2 * 2 + param_1) - 2;
  }
  temp_v0 = param_1;
  FUN_002e5fa6(param_3,&temp_v0,param_4,0x2e5fcd);
  if (param_2 != 0) {
    temp_v1 = temp_v1 + 2;
    cursorPushU16(0,&temp_v0);
  }
  if (param_2 <= param_3) {
    return 0xffffffff;
  }
  return param_3;
}

} /* extern "C" */
