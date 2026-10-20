/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6f1c` (_code @ 0x2e6f1c, 0x86 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9c94(...);
int FUN_002e9d28(...);
int FUN_002e9d6c(...);
int FUN_002e9d98(...);
int FUN_002e9de4(...);

/* stack frame of param_2: 5 slot(s), 15 byte(s) */
typedef struct {
    unsigned short sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned char sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char LAB_001035a9; /* 0x1035a9 */
extern unsigned char DAT_0055b2a4; /* 0x55b2a4 */

extern unsigned int FUN_002e9a92(unsigned char);
/* Supplied declaration required: FUN_002e9c94. */
/* Supplied declaration required: FUN_002e9d28. */
/* Supplied declaration required: FUN_002e9d6c. */
/* Supplied declaration required: FUN_002e9d98. */
/* Supplied declaration required: FUN_002e9de4. */


unsigned int FUN_002e6f1c(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char **ppuVar2;
  unsigned int temp_v1;
  unsigned char *temp_v2;
  unsigned short temp_v3;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    temp_v0 = (unsigned int)(param_2 != 0);
    FUN_002e9c94(temp_v0,param_2,0,&LAB_001035a9);
    if (temp_v0 != 0) {
      return 0;
    }
    FUN_002e9d28(&temp_v2,10,param_2);
    temp_v3 = 2;
    do {
      if (*(char *)(param_1 + 0x10) != '\x01') break;
      FUN_002e9d6c(&temp_v2);
      FUN_002e9d98();
      ppuVar2 = &temp_v2;
      FUN_002e9de4(ppuVar2,
                   "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/CallContext.cpp"
                   ,0x1a4);
    } while (ppuVar2 != (unsigned char **)0x0);
    temp_v2 = &DAT_0055b2a4;
  }
  temp_v1 = FUN_002e9a92(*(unsigned char *)(param_1 + 0x10));
  return temp_v1;
}

} /* extern "C" */
