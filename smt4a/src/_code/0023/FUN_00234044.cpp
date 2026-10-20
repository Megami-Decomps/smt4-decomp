/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234044` (_code @ 0x234044, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d4ed8(int);

extern int g_mapIf; /* 0x58103c */

/* Supplied declaration required: FUN_003d4ed8. */


void FUN_00234044(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = g_mapIf;
  temp_v1 = (int)*(char *)(g_mapIf + 0x16);
  temp_v2 = temp_v1 == param_1;
  if (temp_v2) {
    temp_v1 = *(int *)(g_mapIf + 0x1d8);
  }
  if (!temp_v2 || temp_v1 != param_2) {
    *(char *)(g_mapIf + 0x16) = (char)param_1;
    if (param_1 == 0) {
      *(unsigned int *)(temp_v0 + 0x18) = 0;
    }
    else {
      *(int *)(temp_v0 + 0x1d8) = param_2;
      FUN_003d4ed8(0x10002ab);
      *(unsigned int *)(temp_v0 + 0xa4) = 0;
      *(unsigned int *)(temp_v0 + 0xa8) = 0x41a00000;
      *(unsigned int *)(temp_v0 + 0xac) = 0;
      *(unsigned int *)(temp_v0 + 0x78) = 0;
      *(unsigned int *)(temp_v0 + 0xbc) = 0;
      *(unsigned int *)(temp_v0 + 0xb0) = *(unsigned int *)(temp_v0 + 0xa4);
      *(unsigned int *)(temp_v0 + 0xb4) = 0x41a00000;
      *(unsigned int *)(temp_v0 + 0xb8) = *(unsigned int *)(temp_v0 + 0xac);
    }
  }
  return;
}

} /* extern "C" */
