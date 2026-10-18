/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001285b8` (_code @ 0x1285b8, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_001289e1; /* 0x1289e1 */
extern unsigned char LAB_001289ed; /* 0x1289ed */

extern int FUN_00128648(int, unsigned int);


int FUN_001285b8(int param_1,unsigned int param_2,char *param_3,int param_4)

{
  int temp_v0;
  int temp_v1;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return -6;
  }
  if (param_1 == 0) {
    return -2;
  }
  *(unsigned int *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned char **)(param_1 + 0x20) = &LAB_001289e1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(unsigned char **)(param_1 + 0x24) = &LAB_001289ed;
  }
  temp_v0 = (**(romwright_code **)(param_1 + 0x20))
                    (*(unsigned int *)(param_1 + 0x28),1,0x1bcc,*(romwright_code **)(param_1 + 0x20),0x38);
  if (temp_v0 == 0) {
    return -4;
  }
  *(int *)(param_1 + 0x1c) = temp_v0;
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  temp_v1 = FUN_00128648(param_1,param_2);
  if (temp_v1 != 0) {
    (**(romwright_code **)(param_1 + 0x24))(*(unsigned int *)(param_1 + 0x28),temp_v0);
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  return temp_v1;
}
