/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a620` (_code @ 0x10a620, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

extern unsigned short DAT_00464da8; /* 0x464da8 */


void FUN_0010a620(unsigned int param_1,unsigned int param_2,unsigned char param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = temp_v2 * 0x10;
    temp_v1 = (unsigned int)(unsigned short)(&DAT_00464da8)[temp_v2 * 8];
    if (temp_v1 == 0xf890) {
      (&DAT_00464da8)[temp_v2 * 8] = (unsigned short)param_1;
      *(unsigned int *)(temp_v0 + 0x464dac) = param_2;
      *(unsigned char *)(temp_v0 + 0x464db0) = param_3;
      *(unsigned int *)(temp_v0 + 0x464db4) = 0;
      *(unsigned short *)(temp_v0 + 0x464db8) = 0xf890;
      *(unsigned int *)(temp_v0 + 0x464dbc) = 0;
      *(unsigned char *)(temp_v0 + 0x464dc0) = 0;
      *(unsigned int *)(temp_v0 + 0x464dc4) = 0;
      return;
    }
    if (temp_v1 == param_1) break;
    temp_v2 = temp_v2 + 1;
  }
  return;
}
