/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353840` (_code @ 0x353840, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e62c0; /* 0x4e62c0 */
extern unsigned char *DAT_004e64c0; /* 0x4e64c0 */
extern unsigned int DAT_004e64c4; /* 0x4e64c4 */
extern unsigned int DAT_004e64c8; /* 0x4e64c8 */
extern unsigned int DAT_004e64cc; /* 0x4e64cc */
extern unsigned int DAT_004e64d0; /* 0x4e64d0 */
extern unsigned char DAT_004e64d4; /* 0x4e64d4 */
extern unsigned char DAT_004e6513; /* 0x4e6513 */
extern unsigned char DAT_004e6514; /* 0x4e6514 */
extern unsigned char DAT_004e6558; /* 0x4e6558 */

/* Supplied declaration required: FUN_00262934. */
/* Supplied declaration required: FUN_002c5df8. */


unsigned int
FUN_00353840(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
            unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = *param_1 + 1;
  DAT_004e64c4 = 0x40;
  DAT_004e64c8 = 0;
  DAT_004e64c0 = &DAT_004e62c0;
  DAT_004e6558 = 0;
  DAT_004e64cc = param_3;
  DAT_004e64d0 = param_4;
  FUN_00262934(&DAT_004e64d4,param_5,0x40);
  DAT_004e6513 = 0;
  FUN_002c5df8(&DAT_004e6514,param_6,0x44);
  *param_2 = *param_1;
  return 0;
}
