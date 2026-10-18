/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00428730` (_code @ 0x428730, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_006426e4; /* 0x6426e4 */
extern unsigned char *DAT_006428e4; /* 0x6428e4 */
extern unsigned int DAT_006428e8; /* 0x6428e8 */
extern unsigned int DAT_006428ec; /* 0x6428ec */
extern unsigned int DAT_006428f0; /* 0x6428f0 */
extern unsigned int DAT_006428f4; /* 0x6428f4 */
extern unsigned char DAT_006428f8; /* 0x6428f8 */
extern unsigned char DAT_00642937; /* 0x642937 */
extern unsigned char DAT_00642938; /* 0x642938 */
extern unsigned char DAT_0064297c; /* 0x64297c */

/* Supplied declaration required: rt_memcpy. */


unsigned int
FUN_00428730(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
            unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = *param_1 + 1;
  DAT_006428e8 = 0x40;
  DAT_006428ec = 0;
  DAT_006428e4 = &DAT_006426e4;
  DAT_0064297c = 0;
  DAT_006428f0 = param_3;
  DAT_006428f4 = param_4;
  strncpy(&DAT_006428f8,param_5,0x40);
  DAT_00642937 = 0;
  rt_memcpy(&DAT_00642938,param_6,0x44);
  *param_2 = *param_1;
  return 0;
}
