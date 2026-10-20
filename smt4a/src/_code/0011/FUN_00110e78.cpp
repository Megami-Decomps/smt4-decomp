/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110e78` (_code @ 0x110e78, 0x76 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002e7908(int *, unsigned int *);
int FUN_002fbfe8(int, unsigned int, unsigned int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_4_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002fbfe8. */


void FUN_00110e78(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  int temp_v4;
  
  FUN_002e6e34(temp_v2,param_2 + 0x105c);
  if (*(int *)(param_2 + 0x1050) < 0) {
    temp_v0 = *(int *)(param_2 + 0x1054);
    temp_v1 = *(int *)(param_2 + 0x1058);
    *param_1 = *(int *)(param_2 + 0x1050);
    param_1[1] = temp_v0;
    param_1[2] = temp_v1;
  }
  else {
    if (*(char *)(param_2 + 0x108e) != '\0') {
      temp_v3 = 0x80050001;
      puVar2 = (unsigned int *)&temp_v3;
    }
    else {
      temp_v0 = *(int *)(param_2 + 0x109c);
      if ((unsigned int)(*(int *)(temp_v0 + 0x1c) - *(int *)(temp_v0 + 0x18)) < param_4) {
        temp_v3 = 0x80050001;
        puVar2 = (unsigned int *)&temp_v3;
        FUN_002e7908(param_1,puVar2);
        FUN_002e6e5c(temp_v2);
        return;
      }
      if (param_4 == 0) {
        temp_v3 = 0x10001;
        puVar2 = (unsigned int *)&temp_v3;
        FUN_002e7908(param_1,puVar2);
        FUN_002e6e5c(temp_v2);
        return;
      }
      FUN_002fbfe8(temp_v0,param_3,param_4);
      puVar2 = (unsigned int *)&temp_v4;
      temp_v4 = 0x10001;
    }
    FUN_002e7908(param_1,puVar2);
  }
  FUN_002e6e5c(temp_v2);
  return;
}

} /* extern "C" */
