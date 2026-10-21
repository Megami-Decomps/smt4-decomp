/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318ab0` (_code @ 0x318ab0, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int dataTableGetCount(void);

extern unsigned int g_btlTalk; /* 0x439b58 */

/* Supplied declaration required: scrSetResult. */
extern int scrGetArg(unsigned int);
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(unsigned int);
extern unsigned int dataTableFileTouch(unsigned int);


unsigned int FUN_00318ab0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  temp_v3 = scrGetArg(2);
  temp_v4 = dataTableFileTouch(g_btlTalk);
  dataTableGetCount();
  temp_v5 = dataTableGetEntries(temp_v4);
  if (temp_v2 != 0) {
    temp_v0 = *(unsigned short *)(((temp_v5 + temp_v1 * 0x7c + temp_v2 * 0x24) - 0x1c) + temp_v3 * 2);
  }
  else {
    temp_v0 = *(unsigned short *)(temp_v5 + temp_v1 * 0x7c + temp_v3 * 2);
  }
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
