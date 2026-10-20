/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a3f0` (_code @ 0x43a3f0, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00188ca4(void);
int sysFatalBreak(void);
int FUN_001af3b8(void);
int FUN_0043a8f8(unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern int FUN_00188c94(void);
/* Supplied declaration required: FUN_00188ca4. */
/* Supplied declaration required: sysFatalBreak. */
extern int FUN_001a0ca4(void);
extern int FUN_001af3a8(void);
/* Supplied declaration required: FUN_001af3b8. */
/* Supplied declaration required: FUN_0043a8f8. */


void FUN_0043a3f0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00188ca4();
  if (temp_v0 <= param_1) {
    temp_v1 = FUN_00188ca4();
    temp_v2 = FUN_00188c94();
    if (param_1 < (unsigned int)(temp_v1 + temp_v2)) goto LAB_0043a470;
  }
  temp_v1 = FUN_001a0ca4();
  if ((temp_v1 != 0) && (temp_v0 = FUN_001af3b8(), temp_v0 <= param_1)) {
    temp_v1 = FUN_001af3b8();
    temp_v2 = FUN_001af3a8();
    if (param_1 >= (unsigned int)(temp_v1 + temp_v2)) {
      sysFatalBreak();
    }
  }
  else {
    sysFatalBreak();
  }
LAB_0043a470:
  temp_v1 = -0x7fff;
  FUN_0043a8f8(0xffff8001,param_1,param_2,param_3);
  if (temp_v1 < 0) {
    sysFatalBreak();
    return;
  }
  return;
}

} /* extern "C" */
