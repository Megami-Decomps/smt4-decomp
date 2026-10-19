/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00422814` (_code @ 0x422814, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_005880d4; /* 0x5880d4 */
extern int DAT_005880d8; /* 0x5880d8 */
extern unsigned int DAT_005880e4; /* 0x5880e4 */
extern unsigned int DAT_00618518; /* 0x618518 */

extern unsigned int FUN_001af874(unsigned int, unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_00422814(int param_1,int param_2,int param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  if (temp_v2 < DAT_005880e4) {
    do {
      if (*(int *)(DAT_005880d8 + temp_v2 * 0x70) == 0) {
        *(int *)(DAT_005880d8 + temp_v2 * 0x70 + 0x38) = param_3;
        temp_v0 = (**(romwright_code **)*DAT_005880d4)(DAT_005880d4,param_3 * 0x18,4);
        *(int *)(DAT_005880d8 + temp_v2 * 0x70 + 4) = temp_v0;
        if (temp_v0 == 0) {
          return 0;
        }
        nn_os_CriticalSection_Enter((unsigned int)&DAT_00618518);
        temp_v1 = FUN_001af874(0x80,0);
        *(unsigned int *)(DAT_005880d8 + temp_v2 * 0x70) = temp_v1;
        nn_os_CriticalSection_Leave((unsigned int)&DAT_00618518);
        piVar3 = (int *)(DAT_005880d8 + temp_v2 * 0x70);
        if (*piVar3 == 0) {
          (**(romwright_code **)(*DAT_005880d4 + 4))(DAT_005880d4,piVar3[1]);
          return 0;
        }
        piVar3[0x11] = 0;
        piVar3[0x12] = 0;
        piVar3[0x13] = 0;
        piVar3[0x14] = 0;
        piVar3[0x16] = 0;
        piVar3[0x17] = 0;
        piVar3[0x18] = 0;
        piVar3[0x19] = 0;
        piVar3[2] = 0x3f800000;
        piVar3[3] = 0x3f800000;
        piVar3[0xf] = param_1;
        piVar3[0x10] = param_2;
        return temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < DAT_005880e4);
  }
  return 0xffffffff;
}
