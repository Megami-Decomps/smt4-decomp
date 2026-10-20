/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ecd4` (_code @ 0x20ecd4, 0x26c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int, unsigned char [72], unsigned char *);
int FUN_00152f44(void);
int FUN_0018719c(...);
int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);
int rt_memcpy(unsigned char [72], int, int);

extern unsigned char LAB_0020ef4c; /* 0x20ef4c */
extern unsigned char LAB_0020ef5c; /* 0x20ef5c */
extern int *g_popupState; /* 0x58104c */
extern unsigned char g_gameState; /* 0x5f15fc */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_00152f44. */
extern int saveSlotFindSelected(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
extern int FUN_002d8b58(unsigned int, unsigned short);
extern int playerHasFlagBit(unsigned int);
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_0020ecd4(void)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar8;
  unsigned char temp_v6 [72];
  
  FUN_00152f44();
  temp_v0 = playerHasFlagBit(5);
  if ((((temp_v0 != 0) || (temp_v0 = playerHasFlagBit(9), temp_v0 != 0)) && ((*(int *)((unsigned char *)&g_gameState + 0x390)) != 0)) &&
     ((*(int *)((unsigned char *)&g_gameState + 0x390)) = (*(int *)((unsigned char *)&g_gameState + 0x390)) + 1, (*(int *)((unsigned char *)&g_gameState + 0x390)) >= 11)) {
    (*(int *)((unsigned char *)&g_gameState + 0x390)) = 0;
  }
  if (*g_popupState == 0) {
    temp_v0 = saveSlotFindSelected();
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v1 = FUN_0018719c(0x1a2);
    if ((((temp_v1 == 0) || (temp_v1 = FUN_0014bef4(99), temp_v1 + 1 >= 0x33)) &&
        ((temp_v1 = playerHasFlagBit(5), temp_v1 != 0 || (temp_v1 = playerHasFlagBit(9), temp_v1 != 0)))) &&
       ((*(int *)((unsigned char *)&g_gameState + 0x390)) == 0)) {
      (*(int *)((unsigned char *)&g_gameState + 0x390)) = 1;
      temp_v2 = dataTableGet(0x43,0);
      dataTableGetEntries();
      temp_v1 = dataTableGetCount(temp_v2);
      temp_v5 = 0;
      if ((int)temp_v5 < temp_v1) {
        do {
          temp_v2 = dataTableGet(0x43,0);
          temp_v3 = dataTableGetEntries();
          temp_v4 = dataTableGetCount(temp_v2);
          if (temp_v5 >= temp_v4) {
            puVar8 = (unsigned int *)0x0;
          }
          else {
            puVar8 = (unsigned int *)(temp_v3 + temp_v5 * 0x20);
          }
          if ((((puVar8[1] == 4) && (*puVar8 == (unsigned int)*(unsigned short *)(temp_v0 + 300))) &&
              (((short)puVar8[2] == 0 || (temp_v3 = FUN_0018719c(), temp_v3 != 0)))) &&
             (((*(short *)((int)puVar8 + 10) == 0 || (temp_v3 = FUN_0018719c(), temp_v3 == 0)) &&
              (temp_v3 = FUN_0014bef4(99), piVar1 = g_popupState, temp_v3 + 1 <= (int)(short)puVar8[3]))
             )) {
            *g_popupState = 6;
            piVar1[1] = 0;
            piVar1[6] = (unsigned int)*(unsigned short *)(temp_v0 + 300);
            temp_v0 = FUN_002d8b58(4,*(unsigned short *)(temp_v0 + 300));
            g_popupState[5] = temp_v0;
            rt_memcpy(temp_v6,temp_v0,0x40);
            temp_v0 = playerHasFlagBit(5);
            if (temp_v0 != 0) {
              FUN_00100388((int)g_popupState + 0x25,temp_v6,&LAB_0020ef4c);
            }
            else {
              temp_v0 = playerHasFlagBit(9);
              if (temp_v0 != 0) {
                FUN_00100388((int)g_popupState + 0x25,temp_v6,&LAB_0020ef5c);
              }
            }
            g_popupState[5] = (int)g_popupState + 0x25;
            return 1;
          }
          temp_v5 = temp_v5 + 1;
        } while ((int)temp_v5 < temp_v1);
      }
    }
  }
  return 0;
}

} /* extern "C" */
