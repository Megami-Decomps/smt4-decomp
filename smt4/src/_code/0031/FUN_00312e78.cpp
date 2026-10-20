/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312e78` (_code @ 0x312e78, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int btlMainGetDataTable(unsigned int, unsigned int);
/* Supplied declaration required: scrSetResult. */
extern unsigned int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);
extern int randNextInRange(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned short *dataTableGetEntries(void);


unsigned int FUN_00312e78(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short *puVar6;
  unsigned short *puVar7;
  unsigned short temp_v4 [12];
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlGetMainState();
  temp_v1 = btlMainGetDataTable(temp_v1,8);
  puVar3 = (unsigned short *)dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v1);
  temp_v2 = temp_v2 >> 1;
  temp_v3 = 0;
  if (temp_v2 != 0) {
    puVar6 = puVar3 + 1;
    do {
      if (*puVar6 == temp_v0) {
        puVar7 = temp_v4 + temp_v3;
        temp_v3 = temp_v3 + 1;
        *puVar7 = *puVar3;
      }
      temp_v2 = temp_v2 - 1;
      puVar6 = puVar6 + 2;
      puVar3 = puVar3 + 2;
    } while (temp_v2 != 0);
  }
  temp_v3 = randNextInRange((temp_v3 - 1U) & 0xffff);
  scrSetResult(temp_v4[temp_v3]);
  return 1;
}

} /* extern "C" */
