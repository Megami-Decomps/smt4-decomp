/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0d70` (_code @ 0x4d0d70, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab854(unsigned int);
extern int FUN_001ab888(void);


unsigned int FUN_004d0d70(unsigned int param_1)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  
  if (param_1 >= 0x18) {
    return 0;
  }
  temp_v1 = FUN_001ab854(param_1);
  *(unsigned short *)(temp_v1 + 0x62) = 0;
  temp_v1 = FUN_001ab888();
  if ((int)*(char *)(temp_v1 + 0x1ca0) == param_1) {
    *(unsigned char *)(temp_v1 + 0x1ca0) = 0xff;
  }
  else if ((int)*(char *)(temp_v1 + 0x1ca1) == param_1) {
    puVar3 = (unsigned char *)(temp_v1 + 0x1ca1);
    *puVar3 = 0xff;
  }
  else if ((int)*(char *)(temp_v1 + 0x1ca2) == param_1) {
    puVar3 = (unsigned char *)(temp_v1 + 0x1ca2);
    *puVar3 = 0xff;
  }
  temp_v2 = 0;
  while (temp_v3 = (unsigned int)*(char *)(temp_v1 + temp_v2 + 0x1c88), temp_v3 != param_1) {
    if (((int)temp_v3 < 0) || (temp_v2 = temp_v2 + 1, temp_v2 >= 0x18)) goto LAB_004d0e24;
  }
  *(unsigned char *)(temp_v2 + temp_v1 + 0x1c88) = 0xff;
LAB_004d0e24:
  temp_v1 = FUN_001ab888();
  temp_v2 = 0;
  do {
    temp_v0 = temp_v2;
    if (*(char *)(temp_v1 + temp_v2 + 0x1c88) < '\0') {
      do {
        temp_v0 = temp_v0 + 1;
        if (temp_v0 >= 0x18) {
          return 1;
        }
      } while (*(char *)(temp_v1 + temp_v0 + 0x1c88) < '\0');
      *(unsigned char *)(temp_v1 + temp_v2 + 0x1c88) = *(unsigned char *)(temp_v0 + temp_v1 + 0x1c88);
      *(unsigned char *)(temp_v0 + temp_v1 + 0x1c88) = 0xff;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x18);
  return 1;
}
