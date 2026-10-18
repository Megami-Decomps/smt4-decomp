/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e520` (_code @ 0x34e520, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *DAT_0044d0fc; /* 0x44d0fc */
extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */

extern unsigned int FUN_002bd48c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int FUN_0034e520(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  
  temp_v2 = 0;
  if (temp_v2 < DAT_0044d10c) {
    do {
      if (*(int *)(DAT_0044d100 + temp_v2 * 0x70) == 0) {
        *(int *)(DAT_0044d100 + temp_v2 * 0x70 + 0x38) = param_3;
        temp_v0 = (**(romwright_code **)*DAT_0044d0fc)(DAT_0044d0fc,param_3 * 0x18,4);
        *(int *)(DAT_0044d100 + temp_v2 * 0x70 + 4) = temp_v0;
        if (temp_v0 == 0) {
          return 0;
        }
        FUN_002c3aa8(&DAT_004c40f8);
        temp_v1 = FUN_002bd48c(0x80,0);
        *(unsigned int *)(DAT_0044d100 + temp_v2 * 0x70) = temp_v1;
        FUN_002c3a24(&DAT_004c40f8);
        piVar3 = (int *)(DAT_0044d100 + temp_v2 * 0x70);
        if (*piVar3 == 0) {
          (**(romwright_code **)(*DAT_0044d0fc + 4))(DAT_0044d0fc,piVar3[1]);
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
        piVar3[2] = 0x3f34fdf4;
        piVar3[3] = 0x3f34fdf4;
        piVar3[0xf] = param_1;
        piVar3[0x10] = param_2;
        return temp_v2;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < DAT_0044d10c);
  }
  return 0xffffffff;
}
