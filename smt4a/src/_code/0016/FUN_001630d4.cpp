/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001630d4` (_code @ 0x1630d4, 0xe0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018003c(void);
int FUN_001817b8(...);
int FUN_002e3140(void);
int FUN_002e6dd4(int, int);
int software_interrupt(int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char DAT_005b4028; /* 0x5b4028 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0018003c. */
/* Supplied declaration required: FUN_001817b8. */
extern int FUN_001844ac(void);
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e6dd4. */


int FUN_001630d4(int param_1,unsigned int param_2,unsigned int param_3,int param_4,unsigned int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (!(param_1 == 0x20000 || param_1 == 0x30000)) {
    FUN_0018003c();
    FUN_001817b8(param_1,param_2,param_3,(param_4 + 0x13fU) & 0xffffff80,param_5);
    param_1 = FUN_001844ac();
    FUN_002e6dd4(param_1,param_4);
    temp_v0 = *(*(int * *)((unsigned char *)&DAT_005b4028 + 0x4));
    software_interrupt(0x14);
  }
  else {
    FUN_0018003c();
    FUN_001817b8(param_1,param_2,param_3,param_4,param_5);
    temp_v0 = *(*(int * *)((unsigned char *)&DAT_005b4028 + 0x4));
    software_interrupt(0x14);
  }
  if (temp_v0 < 0) {
    FUN_002e3140();
  }
  return param_1;
}

} /* extern "C" */
