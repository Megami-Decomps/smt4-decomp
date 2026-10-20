/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8e24` (_code @ 0x3a8e24, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);
int scrSetResult(int);

extern unsigned int g_btlScriptUnit; /* 0x57113c */

/* Supplied declaration required: dataTable04FindById. */
extern int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */
extern int btlUnitGet(unsigned int);


unsigned int FUN_003a8e24(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x28) + temp_v0 * 2 + 0x118);
  dataTable04FindById();
  if (temp_v2 != 0) {
    scrSetResult(*(unsigned char *)(temp_v2 + 0x23));
    return 1;
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
