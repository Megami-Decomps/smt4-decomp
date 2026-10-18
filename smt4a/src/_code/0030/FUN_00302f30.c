/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00302f30` (_code @ 0x302f30, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002f3dc4. */
/* Supplied declaration required: FUN_002f3dde. */


void FUN_00302f30(int *param_1,int *param_2,int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  int *temp_v1;
  int iStack_1c;
  int iStack_18;
  unsigned char uStack_14;
  
  temp_v1 = param_2;
  iStack_1c = param_3;
  iStack_18 = param_4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,param_1[0x1a]);
  if (temp_v0 != 0) {
    temp_v1 = (int *)*param_2;
    iStack_18 = param_2[2];
    iStack_1c = param_2[1];
    if ((int)temp_v1 >= 0) {
      FUN_002f3dc4();
      pcVar2 = *(romwright_code **)(*param_1 + 0x3c);
    }
    else {
      FUN_002f3dde(temp_v0,&temp_v1,iStack_18,&uStack_14);
      pcVar2 = *(romwright_code **)(*param_1 + 0x40);
    }
    (*pcVar2)(param_1,temp_v0);
  }
  else {
    FUN_002e9f00(param_1[0x1c],4);
    (**(romwright_code **)(*param_1 + 0x44))(param_1);
  }
  FUN_002ea43c(param_1);
  return;
}
