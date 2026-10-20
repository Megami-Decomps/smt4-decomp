/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec210` (_code @ 0x2ec210, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00210d08(unsigned int, int, int, int);
int drawSetColorFromRGBA8(unsigned int);
int FUN_002bed3c(void);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf538(void);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Supplied declaration required: FUN_00210d08. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */


void FUN_002ec210(int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_002bed3c();
  FUN_002bf538();
  param_2 = *(int *)(param_1 + 4) + param_2;
  param_3 = *(int *)(param_1 + 8) + param_3;
  if (param_5 != 0) {
    FUN_002bf380(2,0x39,8,param_2,param_3,0x6f);
  }
  else {
    FUN_002bf380(2,0x39,7,param_2,param_3,0x6f);
  }
  drawSetColorFromRGBA8(0xb4ff8200);
  temp_v0 = FUN_002bf4f8(0x39,0x53);
  FUN_00210d08(param_4,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,0x71);
  FUN_002bed3c();
  FUN_002bf538();
  return;
}

} /* extern "C" */
