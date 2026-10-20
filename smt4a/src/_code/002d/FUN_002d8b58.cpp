/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8b58` (_code @ 0x2d8b58, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);

extern int g_popupState; /* 0x58104c */

extern int randRange(unsigned int);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(void);
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
extern int FUN_00365bc4(int);


int FUN_002d8b58(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned char temp_v7;
  
  if ((param_1 < 0x1a) && (param_1 != 7)) {
    temp_v0 = dataTableGet(0x43,0);
    dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v0);
    temp_v6 = 0;
    if ((int)temp_v6 < temp_v1) {
      do {
        temp_v0 = dataTableGet(0x43,0);
        temp_v2 = dataTableGetEntries();
        temp_v3 = dataTableGetCount(temp_v0);
        piVar7 = (int *)0x0;
        if (temp_v6 < temp_v3) {
          piVar7 = (int *)(temp_v2 + temp_v6 * 0x20);
        }
        temp_v2 = piVar7[1];
        temp_v7 = temp_v2 == param_1;
        if (temp_v7) {
          temp_v2 = *piVar7;
        }
        if (((temp_v7 && temp_v2 == param_2) &&
            (((short)piVar7[2] == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) &&
           ((*(short *)((int)piVar7 + 10) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) {
          temp_v5 = 0;
          temp_v2 = randRange(99);
          temp_v4 = 0;
          do {
            temp_v5 = temp_v5 + *(short *)((int)piVar7 + temp_v4 * 4 + 0x12);
            if (temp_v2 + 1 <= temp_v5) {
              temp_v2 = FUN_00365bc4((int)(short)piVar7[temp_v4 + 4]);
              temp_v1 = g_popupState;
              *(int *)(g_popupState + 0x18) = *piVar7;
              *(int *)(temp_v1 + 0x1c) = temp_v2 + 4;
              return temp_v2 + 0x24;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 4);
        }
        temp_v6 = temp_v6 + 1;
      } while ((int)temp_v6 < temp_v1);
    }
  }
  return 0;
}

} /* extern "C" */
