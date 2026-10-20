/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00480140` (_code @ 0x480140, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_00287790(int, int, int, int, int);
int flagValueSub(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00287790. */
/* Supplied declaration required: flagValueSub. */


void FUN_00480140(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_2;
  FUN_00192550();
  if (((temp_v0 != 0) && (FUN_00287790(param_1,temp_v0,param_3,0,0), param_1 == 0 && param_3 == 0)) &&
     ((*(unsigned char *)(temp_v0 + 0x42) & 1) == 0)) {
    flagValueSub(param_2,1);
  }
  return;
}

} /* extern "C" */
