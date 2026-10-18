/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273bfc` (_code @ 0x273bfc, 0x1ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00273da8; /* 0x273da8 */
extern unsigned char LAB_00273dc0; /* 0x273dc0 */
extern unsigned char LAB_00273ddc; /* 0x273ddc */
extern unsigned int DAT_00433158; /* 0x433158 */

extern int FUN_0019dfbc(unsigned int);
extern int FUN_0028a0bc(unsigned int, unsigned short, unsigned int);
extern int FUN_00290694(void);
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_003882d8. */
/* Supplied declaration required: FUN_0038834c. */


unsigned int FUN_00273bfc(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [132];
  
  switch(*param_1) {
  case 0:
    temp_v3 = FUN_00290694();
    FUN_002b6700();
    if ((temp_v3 == 0) || (temp_v0 = *(short *)(temp_v3 + 0x148), temp_v0 == 0)) {
      *param_1 = 3;
      return 0;
    }
    FUN_002be7fc(temp_v4,&LAB_00273da8,temp_v0,temp_v0);
    FUN_002be7fc(temp_v5,&LAB_00273dc0,temp_v0);
    temp_v3 = FUN_0028a0bc(DAT_00433158,*(unsigned short *)(temp_v3 + 0x148),1);
    if (temp_v3 != 0) {
      FUN_0038834c(DAT_00433158,temp_v0,param_1 + 3,0);
      FUN_003882d8(DAT_00433158,temp_v0,param_1 + 4,0);
      *param_1 = 1;
      return 0;
    }
    temp_v2 = 4;
    break;
  case 1:
    temp_v3 = 0;
    if (param_1[3] != 0) {
      temp_v3 = param_1[4];
    }
    if (param_1[3] == 0 || temp_v3 == 0) {
      return 0;
    }
    temp_v3 = FUN_00290694();
    FUN_002b6700();
    if (temp_v3 == 0) {
      *param_1 = 3;
    }
    FUN_002b8b78(0x90);
    temp_v1 = param_1[3];
    FUN_002972f8(temp_v1,param_1[4]);
    param_1[5] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    FUN_002be7fc(temp_v4,&LAB_00273ddc,*(unsigned short *)(temp_v3 + 0x148),
                 *(unsigned short *)(temp_v3 + 0x14a));
    temp_v2 = FUN_00291018(param_1[3],temp_v4);
    FUN_002971e4(param_1[5],temp_v2);
    temp_v2 = 2;
    break;
  case 2:
    temp_v3 = FUN_0019dfbc(param_1[5]);
    if (temp_v3 != 2) {
      return 0;
    }
    *param_1 = 3;
    return 0;
  case 3:
    return 1;
  case 4:
    return 2;
  default:
    return 0;
  }
  *param_1 = temp_v2;
  return 0;
}
