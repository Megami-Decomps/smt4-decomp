/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00414a24` (_code @ 0x414a24, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011b6e2(unsigned int *);
int FUN_002e6e14(...);

typedef int romwright_code(...);
extern unsigned char DAT_0055a808; /* 0x55a808 */

/* Supplied declaration required: FUN_0011b6e2. */
extern int FUN_0011b77c(unsigned int *);
/* Supplied declaration required: FUN_002e6e14. */


int FUN_00414a24(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  *param_1 = (unsigned int)"ﳨOﳠO";
  FUN_0011b6e2(param_1 + 1);
  param_1[0x37] = (unsigned int)&DAT_0055a808;
  puVar6 = (unsigned int *)param_1[0x3b];
  for (puVar5 = (unsigned int *)param_1[0x3a]; puVar5 != puVar6; puVar5 = puVar5 + 0x2e) {
    (**(romwright_code **)*puVar5)(puVar5);
  }
  FUN_002e6e14(param_1[0x3a]);
  FUN_002e6e14(param_1[0x34]);
  temp_v0 = param_1[0x31];
  temp_v3 = param_1[0x32];
  if (temp_v0 >= temp_v3) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = ((int)(temp_v3 - temp_v0) / 0xc) & 1;
  }
  temp_v2 = temp_v1 + 1;
  if (temp_v2 < (int)(temp_v3 - temp_v0) / 0xc + 1) {
    do {
      temp_v2 = temp_v2 + 2;
    } while (temp_v2 < (int)(temp_v3 - temp_v0) / 0xc + 1);
  }
  FUN_002e6e14();
  puVar6 = (unsigned int *)param_1[0x2f];
  for (puVar5 = (unsigned int *)param_1[0x2e]; puVar5 != puVar6; puVar5 = puVar5 + 0x2e) {
    (**(romwright_code **)*puVar5)(puVar5);
  }
  FUN_002e6e14(param_1[0x2e]);
  puVar6 = (unsigned int *)param_1[0x2c];
  for (puVar5 = (unsigned int *)param_1[0x2b]; puVar5 != puVar6; puVar5 = puVar5 + 0xc) {
    (**(romwright_code **)*puVar5)(puVar5);
  }
  FUN_002e6e14(param_1[0x2b]);
  if (0 < (int)(param_1[0x29] - param_1[0x28]) >> 3) {
    for (temp_v2 = (int)(param_1[0x29] - param_1[0x28]) >> 4; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
    }
  }
  FUN_002e6e14();
  temp_v2 = FUN_0011b77c(param_1 + 1);
  return temp_v2 - 4;
}

} /* extern "C" */
