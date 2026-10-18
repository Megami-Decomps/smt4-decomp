/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fe9cc` (_code @ 0x3fe9cc, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003fe99c; /* 0x3fe99c */
extern unsigned char DAT_00557b20; /* 0x557b20 */
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

/* Supplied declaration required: FUN_002e6dd0. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_003fe544. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned int *
FUN_003fe9cc(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  *param_1 = (unsigned int)&DAT_00557b20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1 = param_1 + 9;
  FUN_002f5020(param_1,&LAB_003fe99c,0x30,2);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(unsigned char *)(param_1 + 0x30) = 0;
  *(unsigned char *)((int)param_1 + 0xc1) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  temp_v1 = 0;
  *(unsigned char *)(param_1 + 0x3e) = 1;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  temp_v2 = 0x3f800000;
  if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
    DAT_0064c054 = temp_v2;
    DAT_0064c058 = temp_v1;
    DAT_0064c05c = temp_v1;
    DAT_0064c060 = temp_v1;
    DAT_0064c064 = temp_v1;
    DAT_0064c068 = temp_v2;
    DAT_0064c06c = temp_v1;
    DAT_0064c070 = temp_v1;
    DAT_0064c074 = temp_v1;
    DAT_0064c078 = temp_v1;
    DAT_0064c07c = temp_v2;
    DAT_0064c080 = temp_v1;
  }
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x67,&DAT_0064c054);
  param_1[0x73] = temp_v2;
  param_1[0x74] = temp_v2;
  param_1[0x75] = temp_v2;
  param_1[0x76] = temp_v2;
  *(unsigned char *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  *(unsigned short *)(param_1 + 0x79) = 0xffff;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  FUN_002e6dd0(param_1 + 0x7c,0x40);
  param_1[99] = param_4;
  FUN_003fe544(param_1 + -9,param_2,param_3);
  return param_1 + -9;
}
