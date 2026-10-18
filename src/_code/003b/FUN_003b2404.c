/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b2404` (_code @ 0x3b2404, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_0022c6f8. */
/* Supplied declaration required: FUN_003fb348. */


unsigned int FUN_003b2404(unsigned int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int uStack_30;
  int iStack_2c;
  unsigned char temp_v3 [8];
  
  if (param_2 != (int *)0x0) {
    piVar4 = (int *)(param_1 + 0x51c);
    if (*piVar4 != 0) {
      iStack_2c = param_1[0x50a];
      uStack_30 = *(unsigned int *)(iStack_2c + 8);
      FUN_003fb348(temp_v3,param_1 + 0x505,&uStack_30,&iStack_2c);
      FUN_0022c6f8(param_1 + 0x50d,0,param_1[0x510]);
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
  return 0x40;
}
