/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330c68` (_code @ 0x330c68, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00581288; /* 0x581288 */
extern unsigned int DAT_005f15fc; /* 0x5f15fc */
extern unsigned int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned char DAT_005f1623; /* 0x5f1623 */
extern float DAT_005f16bc; /* 0x5f16bc */
extern float DAT_005f16cc; /* 0x5f16cc */
extern unsigned char DAT_005f1b70; /* 0x5f1b70 */

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_002b945c. */
/* Supplied declaration required: FUN_00324bc8. */
/* Supplied declaration required: FUN_00376fb8. */


unsigned int FUN_00330c68(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_00162e8c();
  FUN_00376fb8(*(int *)(temp_v1 + 0x15cc) + 100);
  FUN_00324bc8(0x18,1,0);
  FUN_002b945c(*(int *)(temp_v1 + 0x15cc));
  DAT_005f1623 = 1;
  DAT_005f1b70 = 0;
  *(short *)(temp_v1 + 0x2c) = (short)(int)DAT_005f16bc;
  *(short *)(temp_v1 + 0x2e) = (short)DAT_005f15fc;
  *(short *)(temp_v1 + 0x30) = (short)DAT_005f1600;
  *(unsigned int *)(temp_v1 + 0xe10) = DAT_005f1604;
  temp_v0 = DAT_00581288;
  *(short *)(temp_v1 + 0x32) = (short)(int)*(float *)(DAT_00581288 + 0x1c);
  *(short *)(temp_v1 + 0x34) = (short)(int)*(float *)(temp_v0 + 0x20);
  *(short *)(temp_v1 + 0x36) = (short)(int)*(float *)(temp_v0 + 0x24);
  *(short *)(temp_v1 + 0x38) = (short)(int)DAT_005f16cc;
  return 1;
}
