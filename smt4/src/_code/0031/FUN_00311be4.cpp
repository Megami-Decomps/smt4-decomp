/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311be4` (_code @ 0x311be4, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetEntries(...);

extern unsigned int randNextInRange(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
/* Supplied declaration required: dataTableGetEntries. */
extern unsigned int dataTableGet(unsigned int, unsigned int);


unsigned int FUN_00311be4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  temp_v1 = dataTableGet(5,7);
  puVar4 = (unsigned int *)dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v1);
  temp_v6 = 0;
  if (temp_v2 != 0) {
    temp_v7 = (temp_v2 & 1) != 0;
    if (temp_v7) {
      temp_v6 = *puVar4 >> 8;
    }
    temp_v3 = (unsigned int)temp_v7;
    temp_v5 = 0;
    for (temp_v4 = temp_v2 >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
      puVar1 = puVar4 + temp_v3;
      temp_v0 = temp_v3 + 1;
      temp_v3 = temp_v3 + 2;
      temp_v6 = temp_v6 + (*puVar1 >> 8);
      temp_v5 = temp_v5 + (puVar4[temp_v0] >> 8);
    }
    temp_v6 = temp_v6 + temp_v5;
  }
  puVar4 = (unsigned int *)dataTableGetEntries(temp_v1);
  temp_v6 = randNextInRange((temp_v6 - 1) & 0xffff);
  temp_v4 = 0;
  temp_v3 = 0;
  if (temp_v3 < temp_v2) {
    do {
      temp_v4 = temp_v4 + (*puVar4 >> 8);
      if (temp_v6 < temp_v4) {
        return *puVar4 & 0xff;
      }
      temp_v3 = temp_v3 + 1;
      puVar4 = puVar4 + 1;
    } while (temp_v3 < temp_v2);
  }
  return 0;
}

} /* extern "C" */
