/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023173c` (_code @ 0x23173c, 0x590 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f858(...);
int FUN_00180118(...);
int asdMemFree(void);
int dialogOpen(...);
int FUN_002392b8(...);
int FUN_002a49e4(...);
int uiNavigatorStart(...);
int infoWinSetTimer(void);
int libc_strcpy(...);
int FUN_002e5c6c(...);
int sysMemClear(unsigned char [104], int);
int FUN_003180c4(...);
int FUN_0047f8ac(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern unsigned int *g_btlHelp; /* 0x5738e8 */
extern unsigned int uRam005738f0; /* 0x5738f0 */
extern unsigned int uRam005738f4; /* 0x5738f4 */

extern unsigned int FUN_0014bd84(int);
extern unsigned int gameGetPlayerName(void);
/* Supplied declaration required: FUN_0015f858. */
extern int infoWinHasValue(void);
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: dialogOpen. */
/* Supplied declaration required: FUN_002392b8. */
extern int dialogIsActive(void);
/* Supplied declaration required: FUN_002a49e4. */
/* Supplied declaration required: uiNavigatorStart. */
/* Supplied declaration required: infoWinSetTimer. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002e5c6c. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_0047f8ac. */


unsigned int FUN_0023173c(unsigned int *param_1)

{
/* irregular: 1 goto(s); 13 native warning(s); review required */
  unsigned short *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar6;
  unsigned char temp_v3;
  unsigned char temp_v4 [104];
  
  puVar1 = (unsigned short *)*param_1;
  puVar2 = g_btlHelp;
  while( 1 ) {
    if (puVar1 == (unsigned short *)0x0) {
      g_btlHelp = puVar2;
      return 0;
    }
    puVar6 = *(unsigned short **)(puVar1 + 0x43a);
    g_btlHelp = puVar2;
    if (-1 < (short)puVar1[0x439]) break;
    if (*(int *)(puVar1 + 0x43c) == 0) {
      *puVar2 = (unsigned int)puVar6;
    }
    else {
      *(unsigned short **)(*(int *)(puVar1 + 0x43c) + 0x874) = puVar6;
    }
    if (*(int *)(puVar1 + 0x43a) == 0) {
      puVar2[1] = *(unsigned int *)(puVar1 + 0x43c);
    }
    else {
      *(unsigned int *)(*(int *)(puVar1 + 0x43a) + 0x878) = *(unsigned int *)(puVar1 + 0x43c);
    }
    puVar2[2] = puVar2[2] - 1;
    asdMemFree();
    puVar1 = puVar6;
    puVar2 = g_btlHelp;
  }
  if (puVar1[1] != 0) {
    if ((puVar1[1] != 1) || (temp_v2 = infoWinHasValue(), temp_v2 == 0)) {
      puVar1[0x439] = puVar1[0x439] - 1;
      puVar1[0x438] = puVar1[0x438] + 1;
      return 0;
    }
    puVar1[0x439] = 1;
  }
  else {
    temp_v2 = infoWinHasValue();
    if ((temp_v2 != 0) || (temp_v2 = dialogIsActive(), temp_v2 != 0)) {
      puVar1[0x439] = 1;
      puVar1[0x439] = puVar1[0x439] - 1;
      puVar1[0x438] = puVar1[0x438] + 1;
      return 0;
    }
    sysMemClear(temp_v4,0x68);
    switch(*puVar1) {
    case 0:
      FUN_002a49e4(*(unsigned int *)(puVar1 + 6),*(unsigned int *)(puVar1 + 4) & 0xffff);
      dialogOpen((int)*(char *)(puVar1 + 0x410),1);
      temp_v2 = *(int *)(puVar1 + 0x436);
      goto joined_r0x002318b0;
    case 1:
      if ((*(unsigned int *)(puVar1 + 8) != 0 || *(unsigned int *)(puVar1 + 10) != 0) &&
         (-1 < *(int *)(puVar1 + 0x412))) {
        if (!((*(unsigned int *)(puVar1 + 10) & uRam005738f4) == 0 &&
             (*(unsigned int *)(puVar1 + 8) & uRam005738f0) == 0)) {
          temp_v0 = gameGetPlayerName();
          libc_strcpy(temp_v4,temp_v0);
        }
        else {
          temp_v1 = (unsigned int)(unsigned short)puVar1[0xbb];
          FUN_00180118(temp_v1);
          libc_strcpy(temp_v4,temp_v1);
        }
        FUN_003180c4(*(unsigned int *)(puVar1 + 0x412),temp_v4);
      }
      FUN_002a49e4(*(unsigned int *)(puVar1 + 6),*(unsigned int *)(puVar1 + 4) & 0xffff);
      dialogOpen((int)*(char *)(puVar1 + 0x410),1);
      temp_v2 = *(int *)(puVar1 + 0x436);
joined_r0x002318b0:
      if (temp_v2 < 1) {
        puVar1[0x439] = 1;
        puVar1[1] = 1;
        puVar1[0x439] = puVar1[0x439] - 1;
        puVar1[0x438] = puVar1[0x438] + 1;
        return 0;
      }
      infoWinSetTimer();
      puVar1[0x439] = 1;
      puVar1[1] = 1;
      puVar1[0x439] = puVar1[0x439] - 1;
      puVar1[0x438] = puVar1[0x438] + 1;
      return 0;
    case 2:
      if (*(unsigned int *)(puVar1 + 8) != 0 || *(unsigned int *)(puVar1 + 10) != 0) {
        temp_v2 = *(int *)(puVar1 + 0x412);
        temp_v3 = -1 < temp_v2;
        if (temp_v3) {
          temp_v2 = *(int *)(puVar1 + 0x414);
        }
        if (temp_v3 && -1 < temp_v2) {
          if (!((*(unsigned int *)(puVar1 + 10) & uRam005738f4) == 0 &&
               (*(unsigned int *)(puVar1 + 8) & uRam005738f0) == 0)) {
            temp_v0 = gameGetPlayerName();
            libc_strcpy(temp_v4,temp_v0);
          }
          else {
            temp_v1 = (unsigned int)(unsigned short)puVar1[0xbb];
            FUN_00180118(temp_v1);
            libc_strcpy(temp_v4,temp_v1);
          }
          FUN_003180c4(*(unsigned int *)(puVar1 + 0x412),temp_v4);
          if (!((*(unsigned int *)(puVar1 + 0x20c) & uRam005738f0) == 0 &&
               (*(unsigned int *)(puVar1 + 0x20e) & uRam005738f4) == 0)) {
            temp_v0 = gameGetPlayerName();
            libc_strcpy(temp_v4,temp_v0);
          }
          else {
            temp_v1 = (unsigned int)(unsigned short)puVar1[0x2bf];
            FUN_00180118(temp_v1);
            libc_strcpy(temp_v4,temp_v1);
          }
          FUN_003180c4(*(unsigned int *)(puVar1 + 0x414),temp_v4);
        }
      }
      FUN_002a49e4(*(unsigned int *)(puVar1 + 6),*(unsigned int *)(puVar1 + 4) & 0xffff);
      dialogOpen((int)*(char *)(puVar1 + 0x410),1);
      temp_v2 = *(int *)(puVar1 + 0x436);
      break;
    case 3:
      if ((*(unsigned int *)(puVar1 + 8) != 0 || *(unsigned int *)(puVar1 + 10) != 0) &&
         (-1 < *(int *)(puVar1 + 0x412))) {
        if (!((*(unsigned int *)(puVar1 + 10) & uRam005738f4) == 0 &&
             (uRam005738f0 & *(unsigned int *)(puVar1 + 8)) == 0)) {
          temp_v0 = gameGetPlayerName();
          libc_strcpy(temp_v4,temp_v0);
        }
        else {
          temp_v1 = (unsigned int)(unsigned short)puVar1[0xbb];
          FUN_00180118(temp_v1);
          libc_strcpy(temp_v4,temp_v1);
        }
        FUN_003180c4(*(unsigned int *)(puVar1 + 0x412),temp_v4);
      }
      FUN_002e5c6c(puVar1[2]);
      temp_v2 = *(int *)(puVar1 + 0x436);
      break;
    case 4:
      temp_v2 = (int)(short)puVar1[2];
      FUN_0015f858(temp_v2,0);
      libc_strcpy(temp_v4,temp_v2);
      FUN_003180c4(*(unsigned int *)(puVar1 + 0x412),temp_v4);
      FUN_002a49e4(*(unsigned int *)(puVar1 + 6),*(unsigned int *)(puVar1 + 4) & 0xffff);
      dialogOpen((int)*(char *)(puVar1 + 0x410),1);
      temp_v2 = *(int *)(puVar1 + 0x436);
      break;
    case 5:
      temp_v0 = FUN_0014bd84((int)(short)puVar1[2]);
      libc_strcpy(temp_v4,temp_v0);
      FUN_003180c4(*(unsigned int *)(puVar1 + 0x412),temp_v4);
      FUN_002a49e4(*(unsigned int *)(puVar1 + 6),*(unsigned int *)(puVar1 + 4) & 0xffff);
      dialogOpen((int)*(char *)(puVar1 + 0x410),1);
      temp_v2 = *(int *)(puVar1 + 0x436);
      break;
    case 6:
      FUN_002392b8(puVar1 + 0x416);
      dialogOpen((int)*(char *)(puVar1 + 0x410),1);
      temp_v2 = *(int *)(puVar1 + 0x436);
      break;
    case 7:
      if (*(unsigned int *)(puVar1 + 8) != 0 || *(unsigned int *)(puVar1 + 10) != 0) {
        temp_v2 = *(int *)(puVar1 + 0x412);
        temp_v3 = -1 < temp_v2;
        if (temp_v3) {
          temp_v2 = *(int *)(puVar1 + 0x414);
        }
        if (temp_v3 && -1 < temp_v2) {
          if (!((*(unsigned int *)(puVar1 + 8) & uRam005738f0) == 0 &&
               (*(unsigned int *)(puVar1 + 10) & uRam005738f4) == 0)) {
            temp_v0 = gameGetPlayerName();
            libc_strcpy(temp_v4,temp_v0);
          }
          else {
            temp_v1 = (unsigned int)(unsigned short)puVar1[0xbb];
            FUN_00180118(temp_v1);
            libc_strcpy(temp_v4,temp_v1);
          }
          FUN_003180c4(*(unsigned int *)(puVar1 + 0x412),temp_v4);
          FUN_003180c4(*(unsigned int *)(puVar1 + 0x414),puVar1 + 0x416);
        }
      }
      FUN_002a49e4(*(unsigned int *)(puVar1 + 6),*(unsigned int *)(puVar1 + 4) & 0xffff);
      dialogOpen((int)*(char *)(puVar1 + 0x410),1);
      temp_v2 = *(int *)(puVar1 + 0x436);
      break;
    case 8:
      FUN_002a49e4(*(unsigned int *)(puVar1 + 6),*(unsigned int *)(puVar1 + 4) & 0xffff);
      uiNavigatorStart((int)(short)puVar1[2],(int)*(char *)(puVar1 + 0x410),1,0,0);
      if (0 < *(int *)(puVar1 + 0x436)) {
        infoWinSetTimer();
      }
      FUN_0047f8ac((int)(short)puVar1[2],*(unsigned int *)(puVar1 + 4));
    default:
      puVar1[0x439] = 1;
      puVar1[1] = 1;
      puVar1[0x439] = puVar1[0x439] - 1;
      puVar1[0x438] = puVar1[0x438] + 1;
      return 0;
    }
    if (0 < temp_v2) {
      infoWinSetTimer();
    }
    puVar1[0x439] = 1;
    puVar1[1] = 1;
  }
  puVar1[0x439] = puVar1[0x439] - 1;
  puVar1[0x438] = puVar1[0x438] + 1;
  return 0;
}

} /* extern "C" */
