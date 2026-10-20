/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6e74` (_code @ 0x2e6e74, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9c94(...);
int FUN_002e9d28(...);
int FUN_002e9de4(...);

/* stack frame of param_2: 4 slot(s), 11 byte(s) */
typedef struct {
    unsigned short sp44; /* 0x44: local_44 */
    unsigned char sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char LAB_001035a1; /* 0x1035a1 */
extern unsigned char LAB_002e6eec; /* 0x2e6eec */

/* Supplied declaration required: FUN_002e9c94. */
/* Supplied declaration required: FUN_002e9d28. */
/* Supplied declaration required: FUN_002e9de4. */


int FUN_002e6e74(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  char temp_v2 [8];
  unsigned char temp_v3 [4];
  unsigned short temp_v4;
  
  temp_v2[0] = '\0';
  temp_v0 = (unsigned int)(param_2 != 0);
  FUN_002e9c94(temp_v0,param_2,0,&LAB_001035a1,param_1,temp_v2);
  if (temp_v0 != 0) {
    temp_v1 = (int)temp_v2[0];
  }
  else {
    FUN_002e9d28(temp_v3,10,param_2);
    temp_v4 = 2;
    do {
      if (*(char *)(param_1 + 0x22) == '\x05') {
        temp_v1 = 1;
        return temp_v1;
      }
      puVar3 = temp_v3;
      FUN_002e9de4(puVar3,
                   "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Job.cpp",0xdf
                   ,&LAB_002e6eec);
    } while (puVar3 != (unsigned char *)0x0);
    if (*(char *)(param_1 + 0x22) == '\x05') {
      temp_v1 = 1;
    }
    else {
      temp_v1 = 0;
    }
  }
  return temp_v1;
}

} /* extern "C" */
