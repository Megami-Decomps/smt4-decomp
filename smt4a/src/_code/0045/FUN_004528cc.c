/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004528cc` (_code @ 0x4528cc, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00450a30(int *);


unsigned int * FUN_004528cc(unsigned int *param_1,int *param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0xc,4);
  if (puVar1 != (unsigned int *)0x0) {
    temp_v2 = param_1[1];
    temp_v3 = param_1[2];
    temp_v4 = 0;
    *puVar1 = *param_1;
    puVar1[1] = temp_v2;
    puVar1[2] = temp_v3;
    temp_v0 = param_1[2];
    if (temp_v0 == 0) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = temp_v0 + (int)(param_1 + 2);
    }
    if (temp_v0 != 0) {
      temp_v0 = FUN_00450a30(param_2);
      if (temp_v0 == 0) {
        temp_v0 = puVar1[2];
        if (temp_v0 != 0) {
          temp_v1 = (int)puVar1 + temp_v0 + 8;
        }
        else {
          temp_v1 = 0;
        }
        if (temp_v1 != 0) {
          if (temp_v0 != 0) {
            temp_v4 = (int)puVar1 + temp_v0 + 8;
          }
          (**(romwright_code **)(*param_2 + 0xc))(param_2,temp_v4);
        }
        (**(romwright_code **)(*param_2 + 0xc))(param_2,puVar1);
        return (unsigned int *)0x0;
      }
      puVar1[2] = temp_v0 - (int)(puVar1 + 2);
    }
  }
  return puVar1;
}
