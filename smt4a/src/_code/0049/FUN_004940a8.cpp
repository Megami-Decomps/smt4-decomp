#include "romwright_types.h"
#include "classes/Obj422594.h"

extern "C" {

int rectRecRead(...);
int FUN_004d091c(...);
int touchRegisterFirstRegion(...);
int touchRegisterSecondRegion(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: rectRecRead. */
/* Supplied declaration required: FUN_004d091c. */
/* Supplied declaration required: touchRegisterFirstRegion. */
/* Supplied declaration required: touchRegisterSecondRegion. */


void FUN_004940a8(unsigned int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int uStack_20;
  unsigned int temp_v3 [1];
  
  temp_v0 = *(int *)(param_2 + 4);
  ((Obj422594 *)param_1)->Obj422594::initialize((const void *)param_2);
  if (temp_v0 != 9) {
    rectRecRead(0x20,0xfa,&temp_v2,&uStack_20,&temp_v1,temp_v3);
    touchRegisterFirstRegion(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
    rectRecRead(0x20,0xfb,&temp_v2,&uStack_20,&temp_v1,temp_v3);
    touchRegisterSecondRegion(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
    rectRecRead(0x20,0xfc,&temp_v2,&uStack_20,&temp_v1,temp_v3);
    FUN_004d091c(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
    return;
  }
  rectRecRead(0x20,0xfd,&temp_v2,&uStack_20,&temp_v1,temp_v3);
  touchRegisterFirstRegion(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
  rectRecRead(0x20,0xfe,&temp_v2,&uStack_20,&temp_v1,temp_v3);
  touchRegisterSecondRegion(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
  rectRecRead(0x20,0xff,&temp_v2,&uStack_20,&temp_v1,temp_v3);
  FUN_004d091c(param_1,temp_v2,uStack_20,temp_v1,temp_v3[0]);
  return;
}

} /* extern "C" */
