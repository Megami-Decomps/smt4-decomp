/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290544` (_code @ 0x290544, 0x118 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_001ee948. */
extern unsigned char FUN_00299224(unsigned int);
/* Supplied declaration required: FUN_0029edfc. */
extern int FUN_0029f0f4(int);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf9e8. */


void FUN_00290544(unsigned int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = DAT_0043dd50;
  *(short *)(DAT_0043dd50 + 0x97e) = (short)param_1;
  temp_v1 = FUN_00299224(param_1);
  *(unsigned char *)(temp_v0 + 0x5c4) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x5ec) = 0x3e55cfab;
  FUN_002bdac0(temp_v0 + 0x408,0);
  if (param_2 == 0) {
    *(unsigned char *)(temp_v0 + 0x5f0) = 0;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x5f0) = 1;
    temp_v4 = 0;
    if (*(char *)(temp_v0 + 0x5c4) != '\0') {
      temp_v6 = temp_v0 + 0x5fc;
      temp_v5 = temp_v0 + 0x6c4;
    }
    else {
      temp_v6 = temp_v0 + 0x660;
      temp_v5 = temp_v0 + 0x78a;
    }
    temp_v2 = FUN_0029f0f4(temp_v6);
    if (0 < temp_v2) {
      do {
        if (*(unsigned short *)(temp_v5 + temp_v4 * 2) == param_1) {
          FUN_0029edfc(temp_v6,temp_v4);
          break;
        }
        temp_v4 = temp_v4 + 1;
        temp_v2 = FUN_0029f0f4(temp_v6);
      } while (temp_v4 < temp_v2);
    }
    FUN_002bdac0(temp_v0 + 0x34,0);
  }
  FUN_001ee948();
  temp_v0 = DAT_0043dd50;
  temp_v3 = *(unsigned int *)(DAT_0043dd50 + 4);
  *(unsigned int *)(DAT_0043dd50 + 4) = 0x14;
  *(unsigned int *)(temp_v0 + 8) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  FUN_002b8b78(0x1a);
  FUN_002bf9e8(0x100025e);
  return;
}
