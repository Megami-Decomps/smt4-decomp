/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107058` (_code @ 0x107058, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002e9e60. */
extern int FUN_002eeb24(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002eeb88(unsigned int);
extern unsigned int *FUN_002eeb90(int *, unsigned int);


unsigned int FUN_00107058(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = param_4;
  temp_v0 = FUN_002eeb88(*(unsigned int *)(param_1 + 0x44));
  if (param_4 < temp_v0) {
    if (*(int *)(**(int **)(param_1 + 0x44) + param_4 * 4) == 0) {
      temp_v3 = 0xe0000008;
      temp_v2 = 0x9e;
      FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstanceTable.cpp"
                   ,temp_v2,temp_v3,0,temp_v4);
      return 0;
    }
    puVar2 = (unsigned int *)FUN_002eeb90(*(int **)(param_1 + 0x44),param_4);
    temp_v1 = FUN_002eeb24(*puVar2,param_2,param_3);
    if (temp_v1 != 0) {
      return 1;
    }
  }
  temp_v3 = 0xe0000003;
  temp_v2 = 0xa5;
  FUN_002e9e60("D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstanceTable.cpp"
               ,temp_v2,temp_v3,0,temp_v4);
  return 0;
}
