/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012391c` (_code @ 0x12391c, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

/* Supplied declaration required: FUN_00120f34. */
extern unsigned long long FUN_001238bc(int);
/* Supplied declaration required: FUN_002e9e60. */
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002f8b88. */


unsigned int FUN_0012391c(int param_1,unsigned int param_2,unsigned int *param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned long long temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int iStack_24;
  unsigned int uStack_20;
  unsigned int *temp_v6;
  int iStack_18;
  
  iStack_24 = param_1;
  uStack_20 = param_2;
  temp_v6 = param_3;
  iStack_18 = param_4;
  FUN_002eb588(&temp_v2);
  do {
    temp_v1 = FUN_001238bc(param_1);
    temp_v0 = (int)((unsigned long long)temp_v1 >> 0x20);
    if ((int)temp_v1 != 0xffff) {
      temp_v0 = (int)temp_v1 * 4;
      FUN_00120f34(*(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v0));
      *temp_v6 = *(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v0);
      return 1;
    }
    if (param_2 != 0xffffffff) {
      FUN_002eb588(&temp_v4);
      temp_v0 = (temp_v4 - temp_v2) - param_2;
      if ((int)(unsigned int)(temp_v4 - temp_v2 < param_2) <=
          (int)((temp_v5 - temp_v3) - (unsigned int)(temp_v4 < temp_v2))) {
        if (param_4 == 0) {
          FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/EventHandler.cpp"
                       ,0x137,0xe000000c,0);
        }
        return 0;
      }
    }
    FUN_002f8b88(1,temp_v0);
  } while( 1 );
}
