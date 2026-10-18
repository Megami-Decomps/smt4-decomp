/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da520` (_code @ 0x4da520, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014bef4(unsigned int);
extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00184310. */


unsigned char FUN_004da520(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = (unsigned int)*(unsigned short *)(param_2 + 0x62);
  FUN_00184310();
  temp_v2 = (unsigned int)*(unsigned short *)(param_3 + 0x62);
  FUN_00184310();
  temp_v4 = 1;
  temp_v3 = FUN_001801a4();
  if ((*(unsigned short *)(temp_v3 + 0x5e) & 0x200) != 0) {
    temp_v4 = 7;
  }
  if ((*(unsigned short *)(param_2 + 0x60) & 2) != 0) {
    temp_v4 = temp_v4 + 1;
  }
  if ((*(unsigned short *)(param_3 + 0x60) & 2) != 0) {
    temp_v4 = temp_v4 + 1;
  }
  if ((*(unsigned short *)(param_2 + 0x60) & 0x200) != 0) {
    temp_v4 = temp_v4 + 3;
  }
  if ((*(unsigned short *)(param_3 + 0x60) & 0x200) != 0) {
    temp_v4 = temp_v4 + 3;
  }
  temp_v0 = *(char *)(temp_v1 + 2);
  temp_v5 = temp_v0 != '#';
  if (temp_v5) {
    temp_v0 = *(char *)(temp_v2 + 2);
  }
  if (!temp_v5 || temp_v0 == '#') {
    temp_v4 = temp_v4 << 1;
  }
  temp_v1 = FUN_0014bef4(0x3f);
  return temp_v1 < temp_v4;
}
