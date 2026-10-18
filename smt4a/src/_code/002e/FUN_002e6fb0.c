/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6fb0` (_code @ 0x2e6fb0, 0x8a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned short sp44; /* 0x44: local_44 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

extern unsigned char LAB_001035b9; /* 0x1035b9 */
extern unsigned char LAB_002e7040; /* 0x2e7040 */

/* Supplied declaration required: FUN_00122ddc. */
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002e9d28. */
/* Supplied declaration required: FUN_002e9de4. */
/* Supplied declaration required: FUN_002e9ff4. */
/* Supplied declaration required: FUN_002f9f4e. */


void FUN_002e6fb0(unsigned int *param_1,int *param_2,int param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int *temp_v2;
  int temp_v3;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned char temp_v4 [4];
  unsigned short temp_v5;
  
  FUN_002f9f4e(param_2);
  FUN_002e9ff4(&temp_v3);
  temp_v2 = (unsigned int *)&temp_v3;
  temp_v0 = (unsigned int)(param_3 != 0);
  FUN_00122ddc(temp_v0,param_3,&LAB_001035b9,param_2);
  if (temp_v0 != 0) {
    *param_1 = temp_v3;
    param_1[1] = uStack_50;
    param_1[2] = uStack_4c;
  }
  else {
    FUN_002e9d28(temp_v4,10,param_3);
    temp_v5 = 2;
    do {
      temp_v1 = (**(romwright_code **)(*param_2 + 0x38))(param_2);
      if (temp_v1 == 0x40) break;
      puVar3 = temp_v4;
      FUN_002e9de4(puVar3,
                   "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/SystemComponent.cpp"
                   ,0x157,&LAB_002e7040);
    } while (puVar3 != (unsigned char *)0x0);
    temp_v1 = (**(romwright_code **)(*param_2 + 0x38))(param_2);
    if (temp_v1 == 0x40) {
      temp_v2 = (unsigned int *)0x10001;
    }
    else {
      temp_v2 = (unsigned int *)0x8001000b;
    }
    FUN_002e7908(param_1,&temp_v2);
  }
  return;
}
