/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027398c` (_code @ 0x27398c, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296f4c(unsigned int, unsigned int);
int FUN_00297060(int, unsigned int);
int FUN_002b63c0(void);
int FUN_002b8838(int);
int FUN_002be624(...);
int FUN_003880c8(unsigned int, int, unsigned int *, int);
int FUN_0038813c(unsigned int, int, unsigned int *, int);

extern unsigned char LAB_00273b38; /* 0x273b38 */
extern unsigned char LAB_00273b50; /* 0x273b50 */
extern unsigned char LAB_00273b6c; /* 0x273b6c */
extern unsigned int g_aocSystem; /* 0x433158 */

extern int FUN_0019e0c0(unsigned int);
extern int FUN_00289e54(unsigned int, unsigned short, unsigned int);
extern int FUN_002903f0(void);
extern unsigned int FUN_00290d74(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002b63c0. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_003880c8. */
/* Supplied declaration required: FUN_0038813c. */


unsigned int FUN_0027398c(unsigned int *param_1)

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
    temp_v3 = FUN_002903f0();
    FUN_002b63c0();
    if ((temp_v3 == 0) || (temp_v0 = *(short *)(temp_v3 + 0x148), temp_v0 == 0)) {
      *param_1 = 3;
      return 0;
    }
    FUN_002be624(temp_v4,&LAB_00273b38,temp_v0,temp_v0);
    FUN_002be624(temp_v5,&LAB_00273b50,temp_v0);
    temp_v3 = FUN_00289e54(g_aocSystem,*(unsigned short *)(temp_v3 + 0x148),1);
    if (temp_v3 != 0) {
      FUN_0038813c(g_aocSystem,temp_v0,param_1 + 3,0);
      FUN_003880c8(g_aocSystem,temp_v0,param_1 + 4,0);
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
    temp_v3 = FUN_002903f0();
    FUN_002b63c0();
    if (temp_v3 == 0) {
      *param_1 = 3;
    }
    FUN_002b8838(0x90);
    temp_v1 = param_1[3];
    FUN_00297060(temp_v1,param_1[4]);
    param_1[5] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    FUN_002be624(temp_v4,&LAB_00273b6c,*(unsigned short *)(temp_v3 + 0x148),
                 *(unsigned short *)(temp_v3 + 0x14a));
    temp_v2 = FUN_00290d74(param_1[3],temp_v4);
    FUN_00296f4c(param_1[5],temp_v2);
    temp_v2 = 2;
    break;
  case 2:
    temp_v3 = FUN_0019e0c0(param_1[5]);
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

} /* extern "C" */
