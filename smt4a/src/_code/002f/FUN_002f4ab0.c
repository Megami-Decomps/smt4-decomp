/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4ab0` (_code @ 0x2f4ab0, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_2_stack;

extern unsigned char LAB_002f4b7c; /* 0x2f4b7c */
extern unsigned char DAT_0055b2a4; /* 0x55b2a4 */

/* Supplied declaration required: FUN_002e9d28. */
/* Supplied declaration required: FUN_002e9de4. */
/* Supplied declaration required: FUN_002e9e60. */
/* Supplied declaration required: FUN_002fb1c4. */
/* Supplied declaration required: FUN_002fb244. */


unsigned int FUN_002f4ab0(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char **ppuVar1;
  unsigned char *temp_v0;
  unsigned short temp_v1;
  
  if (**(int **)(param_1 + 0xc) != 0) {
    if (param_2 != -1) {
      FUN_002e9d28(&temp_v0,100,param_2);
      temp_v1 = 2;
      do {
        if (*(char *)(param_1 + 0x1e) != '\0') break;
        ppuVar1 = &temp_v0;
        FUN_002e9de4(&temp_v0,
                     "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/ObjectThreadRoot.cpp"
                     ,0x327,&LAB_002f4b7c);
      } while (ppuVar1 != (unsigned char **)0x0);
      if (*(char *)(param_1 + 0x1e) == '\0') {
        FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/ObjectThreadRoot.cpp"
                     ,0x32a,0xe000000c,0);
        return 0;
      }
      FUN_002fb244(**(unsigned int **)(param_1 + 0xc));
      *(unsigned char *)(*(int *)(param_1 + 0xc) + 0xc) = 1;
      FUN_002fb1c4(**(unsigned int **)(param_1 + 0xc));
      **(unsigned int **)(param_1 + 0xc) = 0;
    }
    else {
      while (*(char *)(param_1 + 0x1e) == '\0') {
        FUN_002e9d28(&temp_v0,100);
        temp_v1 = 2;
        do {
          if (*(char *)(param_1 + 0x1e) != '\0') break;
          ppuVar1 = &temp_v0;
          FUN_002e9de4(&temp_v0,
                       "D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Platform/Core/ObjectThreadRoot.cpp"
                       ,0x353,&LAB_002f4b7c);
        } while (ppuVar1 != (unsigned char **)0x0);
        temp_v0 = &DAT_0055b2a4;
      }
      FUN_002fb244(**(unsigned int **)(param_1 + 0xc));
      *(unsigned char *)(*(int *)(param_1 + 0xc) + 0xc) = 1;
      FUN_002fb1c4(**(unsigned int **)(param_1 + 0xc));
      **(unsigned int **)(param_1 + 0xc) = 0;
    }
  }
  return 1;
}
