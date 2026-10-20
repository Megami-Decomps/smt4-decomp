/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b3f8` (_code @ 0x38b3f8, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_0019a7f4(int, unsigned int);
int FUN_0019cac4(void);
int FUN_001b2d54(unsigned int, int, unsigned int);

extern unsigned int DAT_00570280; /* 0x570280 */
extern int DAT_00588fdc; /* 0x588fdc */
extern int DAT_00588fe0; /* 0x588fe0 */

extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_001b2d54. */


void FUN_0038b3f8(unsigned int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  
  if (param_2 != 0) {
    if ((int)param_1 < 0) {
      temp_v1 = FUN_0018719c(0x11);
      if (temp_v1 == 0) {
        param_1 = 0x25e;
      }
      else {
        param_1 = 0;
      }
    }
    else {
      temp_v2 = param_1;
      FUN_00184310();
      if (temp_v2 == 0) {
        return;
      }
      param_1 = param_1 & 0xffff;
      FUN_0019cac4();
      if ((*(unsigned short *)(param_1 + 2) & 0x8000) != 0) {
        param_1 = (unsigned int)*(short *)(param_1 + 0x8c);
        if ((int)param_1 >= 0x9a) {
          return;
        }
        temp_v0 = *(char *)(DAT_00588fe0 + param_1) - '\x01';
        *(char *)(DAT_00588fe0 + param_1) = temp_v0;
        if ('\0' < temp_v0) {
          return;
        }
        temp_v3 = FUN_0018206c(0x19,param_1);
        temp_v1 = DAT_00588fe0;
        if (temp_v3 != 0) {
          FUN_0019a7f4(0x19,param_1);
          FUN_001b2d54(DAT_00570280,0x19,param_1);
          temp_v1 = DAT_00588fe0;
        }
        *(unsigned char *)(temp_v1 + param_1) = 0;
        return;
      }
      param_1 = *(unsigned short *)(temp_v2 + 0x9c) + 1;
      if (param_1 >= 0x277) {
        return;
      }
    }
  }
  temp_v0 = *(char *)(DAT_00588fdc + param_1) - '\x01';
  *(char *)(DAT_00588fdc + param_1) = temp_v0;
  if ('\0' < temp_v0) {
    return;
  }
  temp_v3 = FUN_0018206c(0xf,param_1);
  temp_v1 = DAT_00588fdc;
  if (temp_v3 != 0) {
    FUN_0019a7f4(0xf,param_1);
    FUN_001b2d54(DAT_00570280,0xf,param_1);
    temp_v1 = DAT_00588fdc;
  }
  *(unsigned char *)(temp_v1 + param_1) = 0;
  return;
}

} /* extern "C" */
