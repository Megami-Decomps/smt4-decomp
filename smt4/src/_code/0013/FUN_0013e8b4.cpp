#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_004214bc; /* 0x4214bc */


struct Obj {
  void *vt;
  int *owner;
  unsigned char flag;
  unsigned int val;
};

Obj *FUN_0013e8b4(int *param_1,unsigned int param_2)

{
  Obj *puVar1;
  
  puVar1 = (Obj *)(**(romwright_code **)(*param_1 + 8))(param_1,0x10,4);
  if (puVar1 != (Obj *)0x0) {
    puVar1->owner = param_1;
    puVar1->flag = 0;
    puVar1->vt = &DAT_004214bc;
    puVar1->val = param_2;
  }
  return puVar1;
}

} /* extern "C" */
