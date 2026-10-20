/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b744` (_code @ 0x10b744, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f3dde(...);
int FUN_002f4e90(unsigned char [64], unsigned int);
int FUN_002f4ecc(unsigned char [64], unsigned char [4], unsigned char [4]);
int FUN_002f4f00(unsigned char [64]);

typedef int romwright_code(...);
/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_3_stack;

extern unsigned int FUN_002e7908(unsigned int *, int *);
extern unsigned int FUN_002ee9ce(unsigned int);
/* Supplied declaration required: FUN_002f3dde. */
extern int FUN_002f4e86(unsigned int *);
/* Supplied declaration required: FUN_002f4e90. */
/* Supplied declaration required: FUN_002f4ecc. */
/* Supplied declaration required: FUN_002f4f00. */


unsigned int FUN_0010b744(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2 [2];
  unsigned char temp_v3 [64];
  int temp_v4;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned char temp_v5 [4];
  unsigned char temp_v6 [4];
  int temp_v7;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned char temp_v8 [4];
  
  temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x28) + 0x2c))
                    (*(int **)(param_1 + 0x28),*(unsigned short *)(param_1 + 0x20));
  if (temp_v0 != 0) {
    temp_v1 = FUN_002ee9ce(param_3);
    FUN_002f4e90(temp_v3,temp_v1);
    FUN_002f4ecc(temp_v3,temp_v5,temp_v6);
    temp_v2[1] = 0;
    temp_v2[0] = temp_v0;
    (**(romwright_code **)(**(int **)(temp_v0 + 0x28) + 0x30))
              (&temp_v4,*(int **)(temp_v0 + 0x28),temp_v3,param_1);
    temp_v0 = FUN_002f4e86((unsigned int *)&temp_v4);
    if (temp_v0 != 0) {
      FUN_002f4f00(temp_v3);
      return 1;
    }
    if (*(char *)(param_2 + 0x10) == '\x01') {
      temp_v7 = temp_v4;
      uStack_20 = uStack_34;
      uStack_1c = uStack_30;
      FUN_002f3dde(param_2,&temp_v7,uStack_30,temp_v8);
    }
    FUN_002f4f00(temp_v3);
  }
  else {
    temp_v2[0] = -0x7ffefffe;
    temp_v1 = FUN_002e7908((unsigned int *)&temp_v7,temp_v2);
    FUN_002f3dde(param_2,temp_v1);
  }
  return 0;
}

} /* extern "C" */
