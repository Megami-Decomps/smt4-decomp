/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047e150` (_code @ 0x47e150, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0047e2ec; /* 0x47e2ec */
extern unsigned char LAB_0047e304; /* 0x47e304 */
extern unsigned char LAB_0047e320; /* 0x47e320 */
extern unsigned int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
extern unsigned int FUN_00357bc8(unsigned int, unsigned char *);
extern int FUN_004186e0(void);
extern int FUN_0046e08c(unsigned int, unsigned short, unsigned int);
/* Supplied declaration required: FUN_0046eca4. */
/* Supplied declaration required: FUN_0046ed18. */


unsigned int FUN_0047e150(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int unaff_r6;
  unsigned char temp_v3 [128];
  unsigned char temp_v4 [132];
  
  switch(*param_1) {
  case 0:
    temp_v2 = FUN_004186e0();
    FUN_001ad9b4();
    if (temp_v2 != 0) {
      unaff_r6 = (unsigned int)*(unsigned short *)(temp_v2 + 0xd4);
    }
    if (temp_v2 == 0 || unaff_r6 == 0) {
      *param_1 = 3;
      return 0;
    }
    FUN_00100388(temp_v3,&LAB_0047e2ec,unaff_r6,unaff_r6);
    FUN_00100388(temp_v4,&LAB_0047e304,unaff_r6);
    temp_v2 = FUN_0046e08c(DAT_00570280,*(unsigned short *)(temp_v2 + 0xd4),1);
    if (temp_v2 != 0) {
      FUN_0046ed18(DAT_00570280,unaff_r6,param_1 + 3,0);
      FUN_0046eca4(DAT_00570280,unaff_r6,param_1 + 4,0);
      *param_1 = 1;
      return 0;
    }
    temp_v1 = 4;
    break;
  case 1:
    temp_v2 = 0;
    if (param_1[3] != 0) {
      temp_v2 = param_1[4];
    }
    if (param_1[3] == 0 || temp_v2 == 0) {
      return 0;
    }
    temp_v2 = FUN_004186e0();
    FUN_001ad9b4();
    if (temp_v2 == 0) {
      *param_1 = 3;
    }
    FUN_001681cc(0x92);
    temp_v0 = param_1[3];
    FUN_00275bc8(temp_v0,param_1[4]);
    param_1[5] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
    FUN_00100388(temp_v3,&LAB_0047e320,*(unsigned short *)(temp_v2 + 0xd4),
                 *(unsigned short *)(temp_v2 + 0xd6));
    temp_v1 = FUN_00357bc8(param_1[3],temp_v3);
    FUN_00275f44(param_1[5],temp_v1);
    temp_v1 = 2;
    break;
  case 2:
    temp_v2 = FUN_00224880(param_1[5]);
    if (temp_v2 != 2) {
      return 0;
    }
    *param_1 = 3;
    return 0;
  case 3:
    return 1;
  case 4:
    return 2;
  default:
    return 0;
  }
  *param_1 = temp_v1;
  return 0;
}
