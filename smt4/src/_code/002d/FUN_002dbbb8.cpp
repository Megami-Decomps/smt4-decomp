/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dbbb8` (_code @ 0x2dbbb8, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern unsigned int g_btlScriptUnit; /* 0x43427c */

extern int btlUnitGet(unsigned int);
/* Supplied declaration required: scrSetResult. */
extern int scrGetArg(void);
extern int __aeabi_idivmod(int, int);


unsigned int FUN_002dbbb8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  temp_v1 = __aeabi_idivmod(*(short *)(*(int *)(temp_v1 + 0x28) + 0xe8) * 100,
                        (int)*(short *)(*(int *)(temp_v1 + 0x28) + 0xea));
  scrSetResult(temp_v1 <= temp_v0);
  return 1;
}

} /* extern "C" */
