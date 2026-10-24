/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122ddc` (_code @ 0x122ddc, 0xba bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00122070(...);
int onlineContextGetInstance(...);
int _ZN12OnlineResultC1ERKj(...);
int _ZN18OnlineResultRecordaSERKS_(...);
int FUN_002e9d28(...);
int FUN_002e9d6c(...);
int FUN_002e9d98(...);
int FUN_002e9de4(...);
int FUN_002e9e60(...);

typedef int romwright_code(...);
/* stack frame of param_5: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_5_stack;

extern unsigned char LAB_00122ea4; /* 0x122ea4 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00122070. */
/* Supplied declaration required: onlineContextGetInstance. */
/* Supplied declaration required: _ZN12OnlineResultC1ERKj. */
/* Supplied declaration required: _ZN18OnlineResultRecordaSERKS_. */
/* Supplied declaration required: FUN_002e9d28. */
/* Supplied declaration required: FUN_002e9d6c. */
/* Supplied declaration required: FUN_002e9d98. */
/* Supplied declaration required: FUN_002e9de4. */
/* Supplied declaration required: FUN_002e9e60. */
extern int FUN_0030f84e(void);
extern int FUN_0030f868(void);


unsigned int
FUN_00122ddc(int param_1,unsigned int param_2,romwright_code *param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 9 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  int *piVar5;
  unsigned int *puVar7;
  int temp_v3;
  int temp_v4 [2];
  int temp_v5;
  unsigned char temp_v6 [4];
  unsigned short temp_v7;
  int temp_v8;
  unsigned char temp_v9 [16];
  unsigned int *puVar6;
  
  puVar6 = (unsigned int *)&temp_v3;
  puVar7 = (unsigned int *)&temp_v3;
  if ((param_1 == 0) || (temp_v1 = FUN_0030f868(), temp_v1 != 0)) {
    temp_v2 = 0;
  }
  else {
    onlineContextGetInstance();
    temp_v1 = FUN_0030f84e();
    if (temp_v1 != 0) {
      FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                   ,0xa8,0xe000001a,0);
      puVar7 = (unsigned int *)&temp_v5;
      temp_v5 = 0x8001000b;
      piVar5 = (int *)_ZN12OnlineResultC1ERKj(puVar6,puVar7);
    }
    else {
      temp_v8 = 0x8001000b;
      _ZN12OnlineResultC1ERKj(temp_v4,&temp_v8);
      FUN_002e9d28(temp_v6,10,param_2);
      temp_v7 = 2;
      while (temp_v4[0] < 0) {
        temp_v0 = (*param_3)(param_4,0);
        temp_v3 = romwright_piece_3_1((((unsigned int)(temp_v3) >> 8) & 0xffffffU),temp_v0);
        FUN_00122070(temp_v4);
        puVar4 = temp_v6;
        FUN_002e9de4(puVar4,
                     "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                     ,0xb5,&LAB_00122ea4);
        if (puVar4 == (unsigned char *)0x0) {
          if (temp_v4[0] < 0) {
            FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp"
                         ,0xbe,0xe000000c,0);
            puVar6 = (unsigned int *)temp_v9;
            temp_v3 = 0x8001000b;
            piVar5 = (int *)_ZN12OnlineResultC1ERKj(puVar6,puVar7);
            _ZN18OnlineResultRecordaSERKS_(param_5,piVar5);
            temp_v2 = 1;
            return temp_v2;
          }
          break;
        }
        FUN_002e9d6c(temp_v6);
        FUN_002e9d98();
      }
      piVar5 = temp_v4;
    }
    _ZN18OnlineResultRecordaSERKS_(param_5,piVar5);
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
