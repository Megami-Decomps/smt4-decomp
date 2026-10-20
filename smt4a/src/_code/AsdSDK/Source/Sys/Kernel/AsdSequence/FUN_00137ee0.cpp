/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137ee0` (_code @ 0x137ee0, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(int, int, int, unsigned int, int);
int rt_memcpy(void);

typedef int romwright_code(...);
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int DAT_00640370; /* 0x640370 */
extern int DAT_00640378; /* 0x640378 */
extern int DAT_0064037c; /* 0x64037c */
extern unsigned int DAT_00640380; /* 0x640380 */
extern unsigned int DAT_00640384; /* 0x640384 */

/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00137ee0(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(int *)(DAT_00640370 + param_1 * 0xc) != 0) {
    DAT_0064037c = param_1;
    if (param_2 != 0) {
      temp_v0 = 0x100;
      FUN_00163060(0x100,0x100,0,param_3,1);
      DAT_00640380 = temp_v0;
      DAT_00640384 = param_3;
      rt_memcpy();
    }
    else {
      DAT_00640380 = 0;
      DAT_00640384 = 0;
    }
    if (-1 < DAT_00640378) {
                    /* WARNING: Could not recover jumptable at 0x00137f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(romwright_code **)(DAT_00640370 + DAT_00640378 * 0xc + 4))();
      return;
    }
  }
  return;
}

} /* extern "C" */
