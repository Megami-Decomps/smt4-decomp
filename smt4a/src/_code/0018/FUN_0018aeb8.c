/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018aeb8` (_code @ 0x18aeb8, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005c4c30; /* 0x5c4c30 */
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

extern int FUN_002eba64(unsigned int *);


unsigned int * FUN_0018aeb8(void)

{
  int temp_v0;
  
  if (((DAT_005c4c30 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c4c30), temp_v0 != 0)) {
    DAT_0064c084 = 0x3f800000;
    DAT_0064c088 = 0;
    DAT_0064c08c = 0;
    DAT_0064c090 = 0;
    DAT_0064c094 = 0;
    DAT_0064c098 = 0x3f800000;
    DAT_0064c09c = 0;
    DAT_0064c0a0 = 0;
    DAT_0064c0a4 = 0;
    DAT_0064c0a8 = 0;
    DAT_0064c0ac = 0x3f800000;
    DAT_0064c0b0 = 0;
    DAT_0064c0b4 = 0;
    DAT_0064c0b8 = 0;
    DAT_0064c0bc = 0;
    DAT_0064c0c0 = 0x3f800000;
  }
  return &DAT_0064c084;
}
