/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b6a4` (_code @ 0x10b6a4, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_002e9b30. */
/* Supplied declaration required: FUN_002e9ff4. */
/* Supplied declaration required: FUN_002f3dde. */
/* Supplied declaration required: FUN_002f4dc2. */
extern int FUN_002f4dea(unsigned int);
/* Supplied declaration required: FUN_002f4e14. */
extern int FUN_002f4e70(int);
extern int FUN_002f4e86(unsigned int *);


void FUN_0010b6a4(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int temp_v5;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int temp_v6 [2];
  
  FUN_002f4dc2(param_1,param_3);
  temp_v0 = FUN_002f4dea(param_3);
  if (temp_v0 != 0) {
    *(unsigned char *)(param_2 + 0x3b) = 1;
  }
  FUN_002e9ff4(&temp_v4);
  FUN_002f4e14(param_2,&temp_v4);
  temp_v0 = FUN_002f4e70(param_2);
  if (temp_v0 == 0) {
    return;
  }
  if (*(char *)(param_2 + 4) == '\0') {
    temp_v1 = FUN_002f4e86((unsigned int *)&temp_v4);
    if (temp_v1 == 0) {
      temp_v5 = temp_v4;
      uStack_24 = uStack_30;
      uStack_20 = uStack_2c;
      puVar3 = (unsigned int *)&temp_v5;
      FUN_002f3dde(temp_v0,puVar3);
      return;
    }
    (**(romwright_code **)(*param_1 + 0x50))(param_1,param_2,temp_v0);
    if (*(char *)(param_2 + 4) == '\0') {
      temp_v3 = 0x10001;
      temp_v2 = FUN_002e7908(&temp_v5,&temp_v3);
      FUN_002e9b30(temp_v0,2,temp_v2,1);
      return;
    }
  }
  temp_v6[0] = 0x8001000f;
  puVar3 = (unsigned int *)FUN_002e7908(&temp_v5,temp_v6);
  FUN_002f3dde(temp_v0,puVar3);
  return;
}
