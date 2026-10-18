/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00211708` (_code @ 0x211708, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_00446fe8; /* 0x446fe8 */
extern unsigned int DAT_0049eb7c; /* 0x49eb7c */
extern unsigned int DAT_0049eb80; /* 0x49eb80 */
extern unsigned int DAT_0049eb84; /* 0x49eb84 */
extern unsigned int DAT_0049eb88; /* 0x49eb88 */
extern unsigned int DAT_0049eb8c; /* 0x49eb8c */
extern unsigned int DAT_0049eb90; /* 0x49eb90 */
extern unsigned int DAT_0049eb94; /* 0x49eb94 */
extern unsigned int DAT_0049eb98; /* 0x49eb98 */
extern unsigned int DAT_0049eb9c; /* 0x49eb9c */
extern unsigned int DAT_0049eba0; /* 0x49eba0 */
extern unsigned int DAT_0049eba4; /* 0x49eba4 */
extern unsigned int DAT_0049eba8; /* 0x49eba8 */


unsigned char FUN_00211708(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  temp_v1 = DAT_0049eb84;
  temp_v0 = DAT_0049eb80;
  temp_v2 = DAT_00446fe8 != '\0';
  if (temp_v2) {
    *param_1 = DAT_0049eb7c;
    param_1[1] = temp_v0;
    param_1[2] = temp_v1;
    temp_v1 = DAT_0049eb90;
    temp_v0 = DAT_0049eb8c;
    *param_2 = DAT_0049eb88;
    param_2[1] = temp_v0;
    param_2[2] = temp_v1;
    temp_v1 = DAT_0049eb9c;
    temp_v0 = DAT_0049eb98;
    *param_3 = DAT_0049eb94;
    param_3[1] = temp_v0;
    param_3[2] = temp_v1;
    temp_v1 = DAT_0049eba8;
    temp_v0 = DAT_0049eba4;
    *param_4 = DAT_0049eba0;
    param_4[1] = temp_v0;
    param_4[2] = temp_v1;
  }
  return temp_v2;
}
