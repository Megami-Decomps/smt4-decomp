/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246450` (_code @ 0x246450, 0x234 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_0015f858(unsigned int, int);
int FUN_00180118(unsigned int);
int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);
int FUN_002d2350(unsigned int, unsigned char [12]);
int rt_memcpy(unsigned char [72], int, int);

extern unsigned int *g_popupState; /* 0x58104c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_00180118. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int gameFlagIsSet(void);
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: FUN_002d2350. */
extern int FUN_00365bc4(int);
/* Supplied declaration required: rt_memcpy. */


void FUN_00246450(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [72];
  unsigned char temp_v7 [12];
  
  temp_v0 = dataTableGet(0x43,0);
  dataTableGetEntries();
  temp_v1 = dataTableGetCount(temp_v0);
  if ((param_1 != 0 && param_1 != 2) && (temp_v4 = 0, 0 < temp_v1)) {
    while( 1 ) {
      temp_v0 = dataTableGet(0x43,0);
      temp_v2 = dataTableGetEntries();
      temp_v3 = dataTableGetCount(temp_v0);
      temp_v5 = 0;
      if (temp_v4 < temp_v3) {
        temp_v5 = temp_v2 + temp_v4 * 0x20;
      }
      if ((((*(int *)(temp_v5 + 4) == 1) &&
           ((*(short *)(temp_v5 + 8) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 != 0)))) &&
          ((*(short *)(temp_v5 + 10) == 0 || (temp_v2 = gameFlagIsSet(), temp_v2 == 0)))) &&
         (*(short *)(temp_v5 + 0xc) == param_1)) break;
      temp_v4 = temp_v4 + 1;
      if (temp_v1 <= (int)temp_v4) {
        return;
      }
    }
    temp_v1 = FUN_00365bc4((int)*(short *)(temp_v5 + 0x10));
    puVar1 = g_popupState;
    g_popupState[5] = temp_v1 + 0x24;
    *puVar1 = 0xe;
    puVar1[1] = 0;
    rt_memcpy(temp_v6,temp_v1 + 0x24,0x40);
    if (param_1 != 4) {
      if (param_1 == 1 || param_1 == 5) {
        FUN_002d2350(param_3,temp_v7);
        FUN_00100388((int)g_popupState + 0x25,temp_v6,temp_v7);
        g_popupState[5] = (int)g_popupState + 0x25;
        return;
      }
      if (param_1 == 2) {
        FUN_0015f858(param_2,0);
        FUN_00100388((int)g_popupState + 0x25,temp_v6,param_2);
        g_popupState[5] = (int)g_popupState + 0x25;
        return;
      }
      if (param_1 == 3) {
        FUN_0015f858(param_2,0);
        FUN_002d2350(param_3,temp_v7);
        FUN_00100388((int)g_popupState + 0x25,temp_v6,param_2,temp_v7);
        g_popupState[5] = (int)g_popupState + 0x25;
        return;
      }
      if (param_1 == 6) {
        FUN_002d2350(param_3,temp_v7);
        FUN_00180118(param_2);
        FUN_00100388((int)g_popupState + 0x25,temp_v6,param_2,temp_v7);
        g_popupState[5] = (int)g_popupState + 0x25;
      }
    }
  }
  return;
}

} /* extern "C" */
