/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00242234` (_code @ 0x242234, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskRunWithObject(unsigned int, unsigned char [252]);
int FUN_002427f8(unsigned int, unsigned int);
int FUN_002430c8(unsigned int, unsigned int, unsigned char [252]);
int FUN_0025c9dc(unsigned int, unsigned char [4], int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

extern unsigned char DAT_00400002; /* 0x400002 */
extern unsigned int DAT_0044ea94; /* 0x44ea94 */
extern unsigned int DAT_0044ea9c; /* 0x44ea9c */
extern unsigned int DAT_0044eaa4; /* 0x44eaa4 */

/* Supplied declaration required: taskRunWithObject. */
/* Supplied declaration required: FUN_002427f8. */
/* Supplied declaration required: FUN_002430c8. */
/* Supplied declaration required: FUN_0025c9dc. */


unsigned char * FUN_00242234(unsigned int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0 [252];
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  
  puVar1 = (unsigned char *)0x600001;
  FUN_002430c8(param_1,param_2,temp_v0);
  if (temp_v2 == 2) {
    puVar1 = (unsigned char *)0x400000;
  }
  else if (temp_v2 == 1) {
    FUN_002427f8(DAT_0044ea94,DAT_0044eaa4);
    if (temp_v1 != 8) {
      taskRunWithObject(DAT_0044ea9c,temp_v0);
    }
    else {
      FUN_0025c9dc(DAT_0044ea9c,temp_v3,4);
    }
    puVar1 = &DAT_00400002;
  }
  return puVar1;
}

} /* extern "C" */
