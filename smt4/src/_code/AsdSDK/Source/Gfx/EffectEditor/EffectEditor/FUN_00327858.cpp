/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00327858` (_code @ 0x327858, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effPartCreate(void);
int FUN_002629a8(int, int);
int FUN_002629f0(...);

extern unsigned int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned int DAT_0044ea90; /* 0x44ea90 */
extern int DAT_0044ea94; /* 0x44ea94 */
extern int DAT_0044eaa0; /* 0x44eaa0 */
extern unsigned char *DAT_0044eab8; /* 0x44eab8 */
extern unsigned int DAT_0044f514; /* 0x44f514 */
extern unsigned char DAT_0044f858; /* 0x44f858 */
extern unsigned int DAT_0044f864; /* 0x44f864 */
extern unsigned char DAT_004d8bd0; /* 0x4d8bd0 */

/* Supplied declaration required: effPartCreate. */
/* Supplied declaration required: FUN_002629a8. */
/* Supplied declaration required: FUN_002629f0. */


unsigned int FUN_00327858(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0044eaa0 != 0) {
    FUN_002629f0(DAT_0044ea90,3);
    DAT_0044ea90 = 0;
    if (DAT_0044eaa0 != 0) {
      FUN_002629a8(DAT_0044eaa0,3);
      DAT_0044eaa0 = 0;
    }
  }
  temp_v0 = DAT_0044ea94;
  if (DAT_0044ea94 != 0) {
    FUN_002629f0(DAT_0044ea94,3);
  }
  effPartCreate();
  DAT_0044ea94 = temp_v0;
  DAT_0044f514 = 0;
  DAT_0044ea8c = 0;
  DAT_0044f864 = 0;
  DAT_004d8bd0 = 0;
  DAT_0044eab8 = &DAT_0044f858;
  return 0;
}

} /* extern "C" */
