/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c8c0` (_code @ 0x26c8c0, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00259018. */
extern short FUN_0029abc0(unsigned short);
extern short FUN_0029ac70(unsigned short, unsigned int);
extern int FUN_002a89e4(void);
/* Supplied declaration required: FUN_002ae3f0. */
extern int FUN_002b66ec(void);


void FUN_0026c8c0(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  FUN_002ae3f0();
  if ((param_3 != 0) &&
     (temp_v1 = param_1, FUN_00259018(param_1,param_2,param_3,param_4,0), temp_v1 == 0 && param_4 == 0))
  {
    if (param_1 < 0) {
      temp_v1 = FUN_002b66ec();
      temp_v0 = FUN_0029ac70(*(unsigned short *)(param_3 + 0x20),1);
      temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
      *(short *)(temp_v1 + 0x2c) = temp_v0;
    }
    else {
      temp_v1 = FUN_002a89e4();
      temp_v0 = FUN_0029abc0(*(unsigned short *)(param_3 + 0x20));
      temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
      *(short *)(temp_v1 + 0x2c) = temp_v0;
    }
    if (temp_v0 < 0) {
      *(unsigned short *)(temp_v1 + 0x2c) = 0;
    }
  }
  return;
}
