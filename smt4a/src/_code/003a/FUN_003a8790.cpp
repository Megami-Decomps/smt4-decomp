/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8790` (_code @ 0x3a8790, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable00FindById(void);
int dataTable04FindById(void);
int scrSetResult(unsigned int);

extern unsigned int g_btlScriptUnit; /* 0x57113c */

/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: dataTable04FindById. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */
extern int btlUnitGet(unsigned int);


unsigned int FUN_003a8790(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  temp_v1 = *(int *)(temp_v1 + 0x20);
  if (*(int *)(temp_v1 + 0x3f8) != 0) {
    temp_v5 = 0;
    do {
      temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x3f8) + temp_v5 * 2 + 0x34);
      dataTable04FindById();
      if ((temp_v2 != 0) && (temp_v0 == (*(unsigned int *)(temp_v2 + 0x28) & 0xffff) >> 0xb)) {
        temp_v4 = 1;
        scrSetResult(temp_v4);
        return 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 8);
  }
  if (*(int *)(temp_v1 + 0x3fc) != 0) {
    temp_v5 = 0;
    do {
      temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x3fc) + temp_v5 * 2 + 0x34);
      dataTable04FindById();
      if ((temp_v2 != 0) && (temp_v0 == (*(unsigned int *)(temp_v2 + 0x28) & 0xffff) >> 0xb)) {
        temp_v4 = 1;
        scrSetResult(temp_v4);
        return 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 8);
  }
  if (*(int *)(temp_v1 + 0x404) != 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x166);
    dataTable00FindById();
    temp_v1 = 0;
    do {
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v1 * 2 + 0x50);
      dataTable04FindById();
      if ((temp_v3 != 0) && (temp_v0 == (*(unsigned int *)(temp_v3 + 0x28) & 0xffff) >> 0xb)) {
        temp_v4 = 1;
        scrSetResult(temp_v4);
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 8);
  }
  temp_v4 = 0;
  scrSetResult(temp_v4);
  return 1;
}

} /* extern "C" */
