/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044c060` (_code @ 0x44c060, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_math_ARMv6_MTX34CopyAsm(unsigned char *, unsigned int *);

extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_005c4c38; /* 0x5c4c38 */
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
extern unsigned char DAT_0064c0dc; /* 0x64c0dc */
extern unsigned int DAT_0064c10c; /* 0x64c10c */
extern unsigned int DAT_0064c110; /* 0x64c110 */
extern unsigned int DAT_0064c114; /* 0x64c114 */
extern unsigned int DAT_0064c118; /* 0x64c118 */

extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */


unsigned char * FUN_0044c060(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_005c4c38 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c38), temp_v0 != 0)) {
    temp_v1 = 0x3f800000;
    if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
      DAT_0064c058 = 0;
      DAT_0064c05c = 0;
      DAT_0064c060 = 0;
      DAT_0064c064 = 0;
      DAT_0064c06c = 0;
      DAT_0064c070 = 0;
      DAT_0064c074 = 0;
      DAT_0064c078 = 0;
      DAT_0064c080 = 0;
      DAT_0064c054 = temp_v1;
      DAT_0064c068 = temp_v1;
      DAT_0064c07c = temp_v1;
    }
    nn_math_ARMv6_MTX34CopyAsm(&DAT_0064c0dc,&DAT_0064c054);
    DAT_0064c118 = 0x7e1;
    DAT_0064c10c = temp_v1;
    DAT_0064c110 = temp_v1;
    DAT_0064c114 = temp_v1;
  }
  return &DAT_0064c0dc;
}

} /* extern "C" */
