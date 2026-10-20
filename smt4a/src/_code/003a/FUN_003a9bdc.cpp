/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9bdc` (_code @ 0x3a9bdc, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(unsigned int);
int scrGetArg(int);
int scrSetResult(unsigned int);

extern unsigned int btlGetMainState(void);
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int btlGetTable(unsigned int, unsigned int);


unsigned int FUN_003a9bdc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  temp_v2 = btlGetTable(temp_v2,0xe);
  temp_v3 = dataTableGetEntries();
  dataTableGetCount(temp_v2);
  temp_v4 = 0xffffffff;
  switch(temp_v1) {
  case 0:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc);
    break;
  case 1:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 2);
    break;
  case 2:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 4);
    break;
  case 3:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 6);
    break;
  case 4:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 8);
    break;
  case 5:
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v0 * 0xc + 10);
  }
  scrSetResult(temp_v4);
  return 1;
}

} /* extern "C" */
