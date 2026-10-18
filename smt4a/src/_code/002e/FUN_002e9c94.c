/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9c94` (_code @ 0x2e9c94, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_6: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp4C; /* 0x4c: local_4c */
} param_6_stack;

/* Supplied declaration required: FUN_002e6e26. */
/* Supplied declaration required: FUN_002e9d28. */
/* Supplied declaration required: FUN_002e9d6c. */
/* Supplied declaration required: FUN_002e9d98. */
/* Supplied declaration required: FUN_002e9de4. */
/* Supplied declaration required: FUN_002e9e60. */
extern int FUN_0030f84e(void);
extern int FUN_0030f868(void);


unsigned int
FUN_002e9c94(int param_1,unsigned int param_2,int param_3,romwright_code *param_4,unsigned int param_5,
            unsigned char *param_6)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned char temp_v2 [4];
  unsigned short temp_v3;
  
  if ((param_1 == 0) || (temp_v0 = FUN_0030f868(), temp_v0 != 0)) {
    temp_v1 = 0;
  }
  else {
    FUN_002e6e26();
    temp_v0 = FUN_0030f84e();
    if (temp_v0 != 0) {
      FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                   ,0x7a,0xe000001a,0);
      *param_6 = (char)param_3;
    }
    else {
      FUN_002e9d28(temp_v2,10,param_2);
      temp_v3 = 2;
      do {
        temp_v0 = (*param_4)(param_5,0);
        if (temp_v0 != param_3) break;
        FUN_002e9d6c(temp_v2);
        FUN_002e9d98();
        puVar3 = temp_v2;
        FUN_002e9de4(temp_v2,
                     "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                     ,0x83,"(vResult = cbCallback(object, 0)) == bErrorValue");
      } while (puVar3 != (unsigned char *)0x0);
      if (temp_v0 == param_3) {
        FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                     ,0x8a,0xe000000c,0);
      }
      *param_6 = (char)temp_v0;
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
