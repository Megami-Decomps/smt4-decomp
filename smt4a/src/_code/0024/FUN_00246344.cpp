/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246344` (_code @ 0x246344, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int, unsigned char [72], unsigned int);
int FUN_00152f44(void);
int FUN_00180118(unsigned int);
int dataTable00FindById(void);
int rt_memcpy(unsigned char [72], int, int);

extern int *g_popupState; /* 0x58104c */
extern unsigned char g_gameState; /* 0x5f15fc */

/* Supplied declaration required: FUN_00100388. */
extern int randRange(unsigned int);
/* Supplied declaration required: FUN_00152f44. */
extern int saveSlotFindSelected(void);
/* Supplied declaration required: FUN_00180118. */
extern int gameGetPlayerData(void);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: dataTable00FindById. */
extern int FUN_002d8b58(unsigned int, unsigned short);
/* Supplied declaration required: rt_memcpy. */


void FUN_00246344(void)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4;
  unsigned char temp_v5 [72];
  
  FUN_00152f44();
  if (((*g_popupState == 0) && (temp_v0 = saveSlotFindSelected(), temp_v0 != 0)) &&
     ((temp_v1 = gameFlagIsSet(0x1a2), temp_v1 == 0 || (temp_v1 = randRange(99), temp_v1 + 1 >= 0x33)))) {
    temp_v3 = (*(unsigned int *)((unsigned char *)&g_gameState + 0x308));
    temp_v2 = (*(unsigned int *)((unsigned char *)&g_gameState + 0x308));
    dataTable00FindById();
    temp_v4 = *(unsigned short *)(temp_v2 + 2) & 0x7fff;
    temp_v1 = gameGetPlayerData();
    piVar1 = g_popupState;
    if ((*(unsigned int *)((unsigned char *)&g_gameState + 0x308)) != 0) {
      if (temp_v4 < *(unsigned short *)(temp_v1 + 0x62)) {
        temp_v4 = temp_v4 + 5;
      }
      if (*(unsigned short *)(temp_v1 + 0x62) <= temp_v4) {
        *g_popupState = 0xc;
        piVar1[1] = 0;
        temp_v1 = FUN_002d8b58(0xe,*(unsigned short *)(temp_v0 + 300));
        piVar1 = g_popupState;
        g_popupState[5] = temp_v1;
        piVar1[6] = (unsigned int)*(unsigned short *)(temp_v0 + 300);
        rt_memcpy(temp_v5,temp_v1,0x48);
        temp_v3 = temp_v3 & 0xffff;
        FUN_00180118(temp_v3);
        FUN_00100388((int)g_popupState + 0x25,temp_v5,temp_v3);
        g_popupState[5] = (int)g_popupState + 0x25;
      }
    }
  }
  return;
}

} /* extern "C" */
