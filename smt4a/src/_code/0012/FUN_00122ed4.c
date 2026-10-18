/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122ed4` (_code @ 0x122ed4, 0xb6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp5C; /* 0x5c: local_5c */
} param_3_stack;

extern unsigned char LAB_00122f8c; /* 0x122f8c */

/* Supplied declaration required: FUN_00135a9c. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7228. */
/* Supplied declaration required: FUN_002e78d0. */
/* Supplied declaration required: FUN_002e9d28. */
/* Supplied declaration required: FUN_002e9d6c. */
/* Supplied declaration required: FUN_002e9d98. */
/* Supplied declaration required: FUN_002e9de4. */
/* Supplied declaration required: FUN_0030f640. */
/* Supplied declaration required: FUN_0030f66c. */
extern int FUN_0030f814(int *, unsigned int *);
/* Supplied declaration required: FUN_0030f846. */


unsigned int FUN_00122ed4(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2 [4];
  unsigned short temp_v3;
  int temp_v4;
  unsigned char temp_v5 [12];
  unsigned int temp_v6 [2];
  
  if (param_3 != 0) {
    FUN_002e6e34(temp_v5,param_1 + 0xb8);
    FUN_0030f846(&temp_v4);
    while( 1 ) {
      temp_v6[0] = *(unsigned int *)(param_1 + 0x120);
      temp_v0 = FUN_0030f814(&temp_v4,temp_v6);
      if (temp_v0 == 0) break;
      FUN_002e7228(*(unsigned int *)(temp_v4 + 0x18));
      FUN_002e78d0(param_1,*(unsigned int *)(temp_v4 + 0x18),0);
      FUN_0030f66c(&temp_v4);
    }
    FUN_00135a9c(param_1 + 0x110);
    FUN_002e6e5c(temp_v5);
  }
  FUN_002e9d28(temp_v2,10,param_2);
  temp_v3 = 2;
  do {
    temp_v0 = FUN_0030f640(param_1);
    if (temp_v0 == 0) break;
    FUN_002e9d6c(temp_v2);
    FUN_002e9d98();
    puVar2 = temp_v2;
    FUN_002e9de4(temp_v2,
                 "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Scheduler.cpp",
                 0x2e8,&LAB_00122f8c);
  } while (puVar2 != (unsigned char *)0x0);
  temp_v0 = FUN_0030f640(param_1);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    FUN_0030f640(param_1);
    temp_v1 = 5;
  }
  return temp_v1;
}
