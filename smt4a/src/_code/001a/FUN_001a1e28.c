/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1e28` (_code @ 0x1a1e28, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

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


unsigned int * FUN_001a1e28(void)

{
  int temp_v0;
  
  if (((DAT_005c4c2c & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c2c), temp_v0 != 0)) {
    DAT_0064c054 = 0x3f800000;
    DAT_0064c058 = 0;
    DAT_0064c05c = 0;
    DAT_0064c060 = 0;
    DAT_0064c064 = 0;
    DAT_0064c068 = 0x3f800000;
    DAT_0064c06c = 0;
    DAT_0064c070 = 0;
    DAT_0064c074 = 0;
    DAT_0064c078 = 0;
    DAT_0064c07c = 0x3f800000;
    DAT_0064c080 = 0;
  }
  return &DAT_0064c054;
}
