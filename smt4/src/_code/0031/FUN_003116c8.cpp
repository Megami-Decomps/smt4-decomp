/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003116c8` (_code @ 0x3116c8, 0x510 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00248620(...);
int scrWorkGetValue(...);
int scrWorkSetValue(...);
int messageForwardDefaultMode(...);
int gameFlagSetValue(...);
int textEncodeFontSlot(...);
int FUN_0029f7d4(void);
int FUN_0029fa0c(int, int *);
int FUN_002bd06c(...);
int libc_strcpy(...);
int __aeabi_memset4(...);
int FUN_002d91b8(int);
int dataTable05Sub9GetCount(void);
int devilIsUnlocked(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern int *g_unite; /* 0x43dd68 */

/* Supplied declaration required: FUN_00248620. */
/* Supplied declaration required: scrWorkGetValue. */
/* Supplied declaration required: scrWorkSetValue. */
/* Supplied declaration required: messageForwardDefaultMode. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: textEncodeFontSlot. */
extern int FUN_0029b7b8(int, unsigned short, unsigned int *);
/* Supplied declaration required: FUN_0029f7d4. */
/* Supplied declaration required: FUN_0029fa0c. */
extern int FUN_002a0d0c(void);
extern unsigned int demonGetRaceLabel(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: __aeabi_memset4. */
extern int gameDataBlocksGetFlagBit2(unsigned short);
/* Supplied declaration required: FUN_002d91b8. */
/* Supplied declaration required: dataTable05Sub9GetCount. */
/* Supplied declaration required: devilIsUnlocked. */


unsigned int FUN_003116c8(void)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int *piVar3;
  char temp_v2;
  unsigned short *puVar5;
  unsigned char *pbVar6;
  unsigned short *puVar7;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar12;
  unsigned int temp_v7;
  int temp_v8;
  int *piVar15;
  unsigned int unaff_r11;
  int temp_v9;
  unsigned int temp_v10 [33];
  
  piVar3 = g_unite;
  piVar15 = g_unite + 0x255c;
  temp_v9 = *piVar15;
  piVar12 = g_unite + 0x24f7;
  if (temp_v9 == 10) {
    g_unite[0x250b] = 0;
    __aeabi_memset4(piVar12,0x50,0xffffffff);
    temp_v5 = *piVar3;
    FUN_0029fa0c(temp_v5,piVar3 + 0x24cf);
    temp_v8 = 0;
    *(short *)(piVar3 + 0x24ce) = (short)temp_v5;
    temp_v9 = 0;
    if (0 < temp_v5) {
      do {
        temp_v3 = (unsigned int)*(unsigned short *)((int)piVar3 + temp_v8 * 2 + 0x933c);
        FUN_0029f7d4();
        temp_v5 = temp_v9;
        if (((temp_v3 != 0) &&
            (temp_v6 = gameDataBlocksGetFlagBit2(*(unsigned short *)((int)piVar3 + temp_v8 * 2 + 0x933c)), temp_v6 == 0)
            ) && (temp_v6 = FUN_0029b7b8(*piVar3,*(unsigned short *)((int)piVar3 + temp_v8 * 2 + 0x933c),
                                        temp_v10), temp_v6 != 0)) {
          temp_v5 = temp_v9 + 1;
          *(char *)((int)piVar3 + temp_v9 + 0x93dc) =
               (char)*(unsigned short *)((int)piVar3 + temp_v8 * 2 + 0x933c);
          FUN_002d91b8(*(unsigned short *)((int)piVar3 + temp_v8 * 2 + 0x933c));
        }
        temp_v8 = temp_v8 + 1;
        temp_v9 = temp_v5;
      } while (temp_v8 < (int)(unsigned int)*(unsigned short *)(piVar3 + 0x24ce));
      if (0 < temp_v5) {
        temp_v9 = *piVar15 + 1;
        *piVar15 = temp_v9;
        return 0;
      }
    }
    *piVar15 = 100;
    return 0;
  }
  if (temp_v9 >= 10) {
    if (temp_v9 != 0xb) {
      if (temp_v9 == 0xc) {
        temp_v3 = (int)*(char *)(g_unite[0x250b] + (int)piVar12) & 0xffff;
        FUN_0029f7d4();
        temp_v7 = (unsigned int)*(unsigned short *)(temp_v3 + 0x1a);
        FUN_002bd06c(temp_v7);
        libc_strcpy(temp_v10,temp_v7);
        textEncodeFontSlot(8,temp_v10);
        temp_v4 = demonGetRaceLabel(*(unsigned short *)(temp_v3 + 0x1a),1);
        libc_strcpy(temp_v10,temp_v4);
        textEncodeFontSlot(0x10,temp_v10);
        *piVar15 = *piVar15 + 1;
        return 0;
      }
      if (temp_v9 != 0xd) {
        if (temp_v9 == 100) {
          *(unsigned char *)(g_unite + 0x255b) = 0;
          return 1;
        }
        return 0;
      }
      temp_v4 = scrWorkGetValue(1);
      temp_v10[0] = 0;
      temp_v9 = piVar3[0x109];
      messageForwardDefaultMode(temp_v9,4,temp_v4,7);
      temp_v5 = scrWorkGetValue(1);
      scrWorkSetValue(1,temp_v5 + 1);
      if (temp_v9 != 1) {
        return 0;
      }
      scrWorkSetValue(1,0);
      temp_v9 = piVar3[0x250b];
      temp_v5 = temp_v9 + 1;
      piVar3[0x250b] = temp_v5;
      if ((temp_v5 >= 0x50) || (*(char *)((int)piVar3 + temp_v9 + 0x93dd) < '\0')) {
        *piVar15 = 100;
        return 0;
      }
      temp_v9 = 0xc;
    }
    else {
      temp_v4 = scrWorkGetValue(1);
      temp_v10[0] = 0;
      temp_v9 = piVar3[0x109];
      messageForwardDefaultMode(temp_v9,3,temp_v4,5);
      temp_v5 = scrWorkGetValue(1);
      scrWorkSetValue(1,temp_v5 + 1);
      if (temp_v9 != 1) {
        return 0;
      }
      scrWorkSetValue(1,0);
      temp_v9 = *piVar15 + 1;
    }
    *piVar15 = temp_v9;
    return 0;
  }
  piVar12 = g_unite + 0x255d;
  if (temp_v9 != 0) {
    if (temp_v9 != 1) {
      if (temp_v9 != 2) {
        if (temp_v9 != 3) {
          return 0;
        }
        temp_v4 = scrWorkGetValue(1);
        temp_v10[0] = 0;
        temp_v9 = piVar3[0x109];
        messageForwardDefaultMode(temp_v9,2,temp_v4,7);
        temp_v5 = scrWorkGetValue(1);
        scrWorkSetValue(1,temp_v5 + 1);
        if (temp_v9 != 1) {
          return 0;
        }
        scrWorkSetValue(1,0);
        temp_v2 = (char)piVar3[0x2571] + '\x01';
        *(char *)(piVar3 + 0x2571) = temp_v2;
        if ((temp_v2 < 0x50) && (-1 < *(char *)((int)piVar3 + temp_v2 + 0x9574))) {
          temp_v9 = 2;
          *piVar15 = temp_v9;
          return 0;
        }
        *piVar15 = 10;
        return 0;
      }
      puVar7 = (unsigned short *)
               FUN_00248620((short)*(char *)((int)(char)g_unite[0x2571] + (int)piVar12));
      temp_v3 = (unsigned int)*puVar7;
      FUN_002bd06c(temp_v3);
      libc_strcpy(temp_v10,temp_v3);
      textEncodeFontSlot(8,temp_v10);
      temp_v4 = demonGetRaceLabel(*puVar7,1);
      libc_strcpy(temp_v10,temp_v4);
      textEncodeFontSlot(0x10,temp_v10);
    }
    else {
      temp_v4 = scrWorkGetValue(1);
      temp_v10[0] = 0;
      temp_v9 = piVar3[0x109];
      messageForwardDefaultMode(temp_v9,1,temp_v4,5);
      temp_v5 = scrWorkGetValue(1);
      scrWorkSetValue(1,temp_v5 + 1);
      if (temp_v9 != 1) {
        return 0;
      }
      scrWorkSetValue(1,0);
    }
    *piVar15 = *piVar15 + 1;
    return 0;
  }
  *(unsigned char *)(g_unite + 0x255b) = 1;
  *(unsigned char *)(piVar3 + 0x2571) = 0;
  temp_v3 = __aeabi_memset4(piVar12,0x50,0xffffffff);
  temp_v9 = 0;
  dataTable05Sub9GetCount();
  if (temp_v3 != 0) {
    unaff_r11 = 0x45a;
  }
  temp_v7 = 0;
  if (temp_v3 != 0) {
    do {
      puVar5 = (unsigned short *)FUN_00248620(temp_v7 & 0xffff);
      if (puVar5 != (unsigned short *)0x0) {
        temp_v5 = *piVar3;
        devilIsUnlocked(temp_v5,*puVar5);
        if (temp_v5 != 0) {
          temp_v5 = FUN_002a0d0c();
          pbVar6 = (unsigned char *)(temp_v5 + ((int)(temp_v7 + ((unsigned int)((int)temp_v7 >> 0x1f) >> 0x1d)) >> 3) +
                           0x35);
          temp_v1 = *pbVar6;
          temp_v0 = 1 << (((int)temp_v7 % 8) & 0xffU);
          if ((temp_v1 & temp_v0) == 0) {
            *pbVar6 = temp_v1 | (unsigned char)temp_v0;
            *(char *)((int)piVar3 + temp_v9 + 0x9574) = (char)temp_v7;
            temp_v9 = temp_v9 + 1;
            gameFlagSetValue(unaff_r11,1);
          }
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v3);
    if (0 < temp_v9) {
      *piVar15 = *piVar15 + 1;
      return 0;
    }
  }
  *piVar15 = 10;
  return 0;
}

} /* extern "C" */
