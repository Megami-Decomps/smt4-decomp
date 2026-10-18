/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b21f0` (_code @ 0x3b21f0, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_0022c564. */
/* Supplied declaration required: FUN_003fb11c. */


unsigned int FUN_003b21f0(unsigned int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [8];
  
  piVar4 = (int *)(param_1 + 0x51c);
  if (*piVar4 != 0) {
    temp_v4 = param_1[0x50a];
    temp_v3 = *(unsigned int *)(temp_v4 + 8);
    FUN_003fb11c(temp_v5,param_1 + 0x505,&temp_v3,&temp_v4);
    FUN_0022c564(param_1 + 0x50d,0,param_1[0x510]);
    param_1[0x510] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[0x51e] = 0x40;
    *(unsigned char *)((int)param_1 + 0x1485) = 1;
    *(unsigned char *)((int)param_1 + 0x1486) = 0;
  }
  *piVar4 = (int)param_2;
  temp_v1 = (**(romwright_code **)(*param_2 + 0xc))(param_2);
  if (temp_v1 == 0) {
    temp_v2 = 0x41;
  }
  else {
    temp_v0 = (**(romwright_code **)(*(int *)*piVar4 + 4))();
    *(unsigned char *)(param_1 + 0x522) = temp_v0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0x51e] = 0x40;
    param_1[0x51f] = 0x10000;
    *(unsigned char *)((int)param_1 + 0x1487) = 0;
    temp_v2 = 0;
    *(unsigned char *)((int)param_1 + 0x1489) = 0;
  }
  return temp_v2;
}
