/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034a9c4` (_code @ 0x34a9c4, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_0026fd50(int, unsigned char [300], int, unsigned int);
int FUN_0035ad50(unsigned int, unsigned char [300]);

extern unsigned char DAT_00588fd0; /* 0x588fd0 */

/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_0026fd50. */
/* Supplied declaration required: FUN_0035ad50. */


void FUN_0034a9c4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2 [300];
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  temp_v1 = 1;
  *(unsigned char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2010) = 1;
  FUN_0035ad50(param_1,temp_v2);
  *(unsigned char *)(temp_v0 + 0x2017) = 5;
  FUN_0026fd50(temp_v0 + 0x1390,temp_v2,0,param_2);
  *(unsigned char *)(temp_v0 + 0x20b0) = 1;
  if (-1 < (short)param_1) {
    param_1 = param_1 & 0xffff;
    FUN_0019cac4();
    if (param_1 == 0) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = (*(unsigned short *)(param_1 + 0x16) & 0x400) == 0;
      if (((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) != 0) && (*(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2017) == '\x11')) {
        temp_v1 = 0;
      }
    }
  }
  *(unsigned char *)(temp_v0 + 0x2032) = temp_v1;
  if ((!temp_v1) && (*(char *)(temp_v0 + 0x137d) != '\0')) {
    *(unsigned char *)(temp_v0 + 0x137d) = 0;
  }
  return;
}

} /* extern "C" */
