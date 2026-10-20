/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037285c` (_code @ 0x37285c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e8bb0(unsigned char [2], unsigned int, unsigned int);

/* stack frame of void: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp46; /* 0x46: local_46 */
} void_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */

extern unsigned int btlGetMainState(void);
/* Supplied declaration required: FUN_003e8bb0. */
extern int btlUnitGet(unsigned int);


unsigned int FUN_0037285c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [2];
  short temp_v5;
  
  temp_v0 = btlUnitGet(g_btlScriptUnit);
  temp_v0 = *(int *)(temp_v0 + 0x28);
  *(unsigned short *)(temp_v0 + 0x1be) = 1;
  temp_v1 = btlUnitGet(g_btlScriptUnit);
  temp_v3 = *(unsigned int *)(temp_v1 + 0x20);
  temp_v2 = btlGetMainState();
  FUN_003e8bb0(temp_v4,temp_v2,temp_v3);
  if (temp_v5 == 1) {
    *(unsigned short *)(temp_v0 + 0x1c0) = 2;
  }
  else {
    *(unsigned short *)(temp_v0 + 0x1c0) = 1;
  }
  return 1;
}

} /* extern "C" */
