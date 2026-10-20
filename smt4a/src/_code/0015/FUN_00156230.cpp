/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156230` (_code @ 0x156230, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(int);
int FUN_001846d0(int, int);

extern int g_menuState; /* 0x57f56c */

/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001846d0. */


unsigned int FUN_00156230(void)

{
/* irregular: 4 unstructured edge(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = g_menuState;
  switch(*(unsigned int *)(g_menuState + 8)) {
  case 1:
    temp_v1 = FUN_00163aa4(g_menuState + 0x3c);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v0 + 0xc) = 0;
      *(unsigned int *)(temp_v0 + 8) = 2;
    }
    break;
  case 4:
    temp_v1 = FUN_00163aa4(g_menuState + 0x3c);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    break;
  case 5:
    temp_v1 = *(int *)(g_menuState + 700);
    if (temp_v1 == 0) {
      FUN_00163aa4(g_menuState + 0x3c);
      FUN_00163aa4(temp_v0 + 0x154);
      if ((*(char *)(temp_v0 + 0xc6) != '\0') && (*(char *)(temp_v0 + 0x1de) != '\0')) {
        *(unsigned int *)(temp_v0 + 0xc) = 0;
        *(unsigned int *)(temp_v0 + 700) = 2;
        FUN_00163aa4(temp_v0 + 200);
      }
      break;
    }
    if (temp_v1 != 2) {
      if (temp_v1 != 3) {
        FUN_00163aa4(temp_v0 + 200);
        break;
      }
    }
    else {
      if (0x13 >= *(int *)(g_menuState + 0xc)) {
        FUN_00163aa4(temp_v0 + 200);
        break;
      }
      temp_v1 = g_menuState + 0x1e0;
      *(unsigned int *)(g_menuState + 0x2c8) = *(unsigned int *)(g_menuState + 0x2c4);
      FUN_001846d0(temp_v1,5);
      *(unsigned int *)(temp_v0 + 700) = 3;
    }
    temp_v1 = FUN_00163aa4(temp_v0 + 0x1e0);
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v0 + 700) = 4;
    }
  case 2:
    FUN_00163aa4(temp_v0 + 200);
    break;
  case 6:
    FUN_00163aa4(g_menuState + 0x3c);
    FUN_00163aa4(temp_v0 + 0x154);
    if ((*(char *)(temp_v0 + 0xc6) != '\0') && (*(char *)(temp_v0 + 0x1de) != '\0')) {
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
  }
  *(int *)(temp_v0 + 0xc) = *(int *)(temp_v0 + 0xc) + 1;
  return 0;
}

} /* extern "C" */
