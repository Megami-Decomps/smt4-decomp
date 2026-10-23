/* NON_MATCHING: blocked on five polymorphic constructors and complete derived fields; existing Obj4224b0/Obj4224d4/Obj4224f8/Obj42251c headers expose only the base prefix. Raw vtable writes in this draft are not an honest implementation. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_004224b8; /* 0x4224b8 */
extern unsigned char DAT_004224dc; /* 0x4224dc */
extern unsigned char DAT_00422500; /* 0x422500 */
extern unsigned char DAT_00422524; /* 0x422524 */
extern unsigned char DAT_0042256c; /* 0x42256c */


unsigned int * FUN_003aff9c(unsigned int *param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  if (param_2 != 3) {
    if (param_2 < 3) {
      if (param_2 != 1) {
        if ((param_2 == 2) &&
           (puVar1 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x24)
           , puVar1 != (unsigned int *)0x0)) {
          puVar1[3] = *param_1;
          puVar1[4] = param_3;
          puVar1[5] = 0xffffffff;
          puVar1[2] = 6;
          *puVar1 = (unsigned int)&DAT_004224b8;
          puVar1[1] = 2;
          return puVar1;
        }
      }
      else {
        puVar1 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x34);
        if (puVar1 != (unsigned int *)0x0) {
          puVar1[3] = *param_1;
          puVar1[4] = param_3;
          puVar1[5] = 0xffffffff;
          puVar1[2] = 0xc;
          *puVar1 = (unsigned int)&DAT_004224dc;
          puVar1[1] = 1;
          return puVar1;
        }
      }
    }
    else if (param_2 != 4) {
      if ((param_2 == 0x100000) &&
         (puVar1 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x20),
         puVar1 != (unsigned int *)0x0)) {
        puVar1[2] = 0x14;
        *puVar1 = (unsigned int)&DAT_0042256c;
        puVar1[1] = 0x100000;
        return puVar1;
      }
    }
    else {
      puVar1 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x1c);
      if (puVar1 != (unsigned int *)0x0) {
        puVar1[3] = *param_1;
        puVar1[4] = param_3;
        puVar1[5] = 0xffffffff;
        *puVar1 = (unsigned int)&DAT_00422500;
        puVar1[1] = 4;
        puVar1[2] = 2;
        return puVar1;
      }
    }
  }
  else {
    puVar1 = (unsigned int *)(*(romwright_code *)**(unsigned int **)*param_1)((unsigned int *)*param_1,0x3c);
    if (puVar1 != (unsigned int *)0x0) {
      puVar1[3] = *param_1;
      puVar1[4] = param_3;
      puVar1[5] = 0xffffffff;
      puVar1[2] = 0xd;
      puVar1[1] = 3;
      *puVar1 = (unsigned int)&DAT_00422524;
      puVar1[0xd] = 6;
      puVar1[0xe] = 0;
      return puVar1;
    }
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
