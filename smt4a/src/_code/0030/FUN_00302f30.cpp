/* NON_MATCHING: missing real class hierarchy for virtual callbacks at 0x3c/0x40/0x44; retail takes an object and a three-word callback result, not four arguments. */
#include "romwright_types.h"

extern "C" {

int onlineInstanceTableFind(int, int);
int FUN_002e9f00(int, int);
int onlineJobSetStateDone(int *);
int FUN_002f3dc4(void);
int FUN_002f3dde(int, int **, int, unsigned char *);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int onlineInstanceTableGetCurrent(void);
/* Supplied declaration required: onlineInstanceTableFind. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: onlineJobSetStateDone. */
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
  temp_v0 = onlineInstanceTableGetCurrent();
  onlineInstanceTableFind(temp_v0,param_1[0x1a]);
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
  onlineJobSetStateDone(param_1);
  return;
}

} /* extern "C" */
