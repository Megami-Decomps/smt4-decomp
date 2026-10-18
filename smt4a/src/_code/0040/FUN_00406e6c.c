/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00406e6c` (_code @ 0x406e6c, 0x228 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001f3e14; /* 0x1f3e14 */
extern unsigned char DAT_00557b70; /* 0x557b70 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: FUN_002f5020. */
extern int FUN_00442c5c(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


int FUN_00406e6c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  *param_1 = (unsigned int)&DAT_00557b70;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  temp_v3 = 0x3f800000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  temp_v2 = 0;
  if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
    DAT_0064c054 = temp_v3;
    DAT_0064c058 = temp_v2;
    DAT_0064c05c = temp_v2;
    DAT_0064c060 = temp_v2;
    DAT_0064c064 = temp_v2;
    DAT_0064c068 = temp_v3;
    DAT_0064c06c = temp_v2;
    DAT_0064c070 = temp_v2;
    DAT_0064c074 = temp_v2;
    DAT_0064c078 = temp_v2;
    DAT_0064c07c = temp_v3;
    DAT_0064c080 = temp_v2;
  }
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 8,&DAT_0064c054);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(unsigned char *)(param_1 + 0x16) = 0;
  *(unsigned char *)((int)param_1 + 0x59) = 0;
  if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
    DAT_0064c054 = temp_v3;
    DAT_0064c058 = temp_v2;
    DAT_0064c05c = temp_v2;
    DAT_0064c060 = temp_v2;
    DAT_0064c064 = temp_v2;
    DAT_0064c068 = temp_v3;
    DAT_0064c06c = temp_v2;
    DAT_0064c070 = temp_v2;
    DAT_0064c074 = temp_v2;
    DAT_0064c078 = temp_v2;
    DAT_0064c07c = temp_v3;
    DAT_0064c080 = temp_v2;
  }
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x17,&DAT_0064c054);
  if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
    DAT_0064c054 = temp_v3;
    DAT_0064c058 = temp_v2;
    DAT_0064c05c = temp_v2;
    DAT_0064c060 = temp_v2;
    DAT_0064c064 = temp_v2;
    DAT_0064c068 = temp_v3;
    DAT_0064c06c = temp_v2;
    DAT_0064c070 = temp_v2;
    DAT_0064c074 = temp_v2;
    DAT_0064c078 = temp_v2;
    DAT_0064c07c = temp_v3;
    DAT_0064c080 = temp_v2;
  }
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x23,&DAT_0064c054);
  param_1[0x2f] = temp_v2;
  param_1[0x30] = temp_v2;
  param_1[0x31] = 0x43700000;
  param_1[0x32] = 0x43c80000;
  param_1[0x33] = 0x18000000;
  param_1[0x35] = temp_v2;
  param_1[0x36] = temp_v3;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  temp_v0 = FUN_00442c5c(param_1 + 0x39);
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(temp_v0 + 8) = 0;
  *(unsigned short *)(temp_v0 + 0xc) = 4;
  *(unsigned short *)(temp_v0 + 0xe) = 4;
  *(unsigned short *)(temp_v0 + 0x10) = 4;
  *(unsigned char *)(temp_v0 + 0x12) = 0;
  *(unsigned char *)(temp_v0 + 0x13) = 0;
  *(unsigned char *)(temp_v0 + 0x14) = 0;
  *(unsigned char *)(temp_v0 + 0x15) = 0;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 4;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  temp_v1 = temp_v0 + 0x30;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  FUN_002f5020(temp_v1,&LAB_001f3e14,0xc,8);
  return temp_v1 - 0x114;
}
