/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c884` (_code @ 0x13c884, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015a0e0(unsigned char *);
int mtx44Copy(unsigned char *, unsigned int *);
int sysMemClear(unsigned char *, int);
int nn_math_ARMv6_MTX34CopyAsm(unsigned char *, unsigned int *);

extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_005c4c30; /* 0x5c4c30 */
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
extern unsigned int DAT_0064c084; /* 0x64c084 */
extern unsigned int DAT_0064c088; /* 0x64c088 */
extern unsigned int DAT_0064c08c; /* 0x64c08c */
extern unsigned int DAT_0064c090; /* 0x64c090 */
extern unsigned int DAT_0064c094; /* 0x64c094 */
extern unsigned int DAT_0064c098; /* 0x64c098 */
extern unsigned int DAT_0064c09c; /* 0x64c09c */
extern unsigned int DAT_0064c0a0; /* 0x64c0a0 */
extern unsigned int DAT_0064c0a4; /* 0x64c0a4 */
extern unsigned int DAT_0064c0a8; /* 0x64c0a8 */
extern unsigned int DAT_0064c0ac; /* 0x64c0ac */
extern unsigned int DAT_0064c0b0; /* 0x64c0b0 */
extern unsigned int DAT_0064c0b4; /* 0x64c0b4 */
extern unsigned int DAT_0064c0b8; /* 0x64c0b8 */
extern unsigned int DAT_0064c0bc; /* 0x64c0bc */
extern unsigned int DAT_0064c0c0; /* 0x64c0c0 */

/* Supplied declaration required: FUN_0015a0e0. */
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


void FUN_0013c884(unsigned char *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  sysMemClear(param_1,0x50c);
  param_1[1] = 0;
  temp_v1 = 0;
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
  nn_math_ARMv6_MTX34CopyAsm(param_1 + 0x38,&DAT_0064c054);
  if (((DAT_005c4c30 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c30), temp_v0 != 0)) {
    DAT_0064c084 = temp_v2;
    DAT_0064c088 = temp_v1;
    DAT_0064c08c = temp_v1;
    DAT_0064c090 = temp_v1;
    DAT_0064c094 = temp_v1;
    DAT_0064c098 = temp_v2;
    DAT_0064c09c = temp_v1;
    DAT_0064c0a0 = temp_v1;
    DAT_0064c0a4 = temp_v1;
    DAT_0064c0a8 = temp_v1;
    DAT_0064c0ac = temp_v2;
    DAT_0064c0b0 = temp_v1;
    DAT_0064c0b4 = temp_v1;
    DAT_0064c0b8 = temp_v1;
    DAT_0064c0bc = temp_v1;
    DAT_0064c0c0 = temp_v2;
  }
  mtx44Copy(param_1 + 0xa8,&DAT_0064c084);
  if (((DAT_005c4c30 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c30), temp_v0 != 0)) {
    DAT_0064c084 = temp_v2;
    DAT_0064c088 = temp_v1;
    DAT_0064c08c = temp_v1;
    DAT_0064c090 = temp_v1;
    DAT_0064c094 = temp_v1;
    DAT_0064c098 = temp_v2;
    DAT_0064c09c = temp_v1;
    DAT_0064c0a0 = temp_v1;
    DAT_0064c0a4 = temp_v1;
    DAT_0064c0a8 = temp_v1;
    DAT_0064c0ac = temp_v2;
    DAT_0064c0b0 = temp_v1;
    DAT_0064c0b4 = temp_v1;
    DAT_0064c0b8 = temp_v1;
    DAT_0064c0bc = temp_v1;
    DAT_0064c0c0 = temp_v2;
  }
  mtx44Copy(param_1 + 0xe8,&DAT_0064c084);
  temp_v1 = 0x40a00000;
  *(unsigned int *)(param_1 + 0x498) = 0x40a00000;
  *param_1 = (char)param_2;
  if (param_2 != 0) {
    FUN_0015a0e0(param_1 + 0x4a0);
    *(unsigned int *)(param_1 + 0x508) = temp_v1;
    *(unsigned int *)(param_1 + 0x504) = temp_v2;
  }
  return;
}

} /* extern "C" */
