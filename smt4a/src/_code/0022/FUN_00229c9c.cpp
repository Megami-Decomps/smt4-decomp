/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229c9c` (_code @ 0x229c9c, 0x31c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ea0(int);
int FUN_001386b4(void);
int FUN_001386e8(int);
int gameDataBlocksMaskClearBits(int);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int FUN_00224880(int);
int FUN_00275bc8(void);
int scrScriptProcessStartEntry(...);
int FUN_0031ed60(char *, int);
int obj04Finish(void);
int FUN_0035d7bc(char *);

extern signed char DAT_0057f6c9; /* 0x57f6c9 */
extern signed char DAT_0057f6ca; /* 0x57f6ca */
extern char *DAT_0057f6d0; /* 0x57f6d0 */
extern int DAT_0057f6d8; /* 0x57f6d8 */
extern int DAT_005e2108; /* 0x5e2108 */
extern int DAT_005e210c; /* 0x5e210c */
extern int DAT_005e2110; /* 0x5e2110 */

/* Supplied declaration required: FUN_00137ea0. */
/* Supplied declaration required: FUN_001386b4. */
/* Supplied declaration required: FUN_001386e8. */
/* Supplied declaration required: gameDataBlocksMaskClearBits. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_0031ed60. */
/* Supplied declaration required: obj04Finish. */
/* Supplied declaration required: FUN_0035d7bc. */
extern int FUN_0035d83c(char *);


unsigned int FUN_00229c9c(unsigned int param_1,int param_2)

{
/* irregular: 12 native warning(s); review required */
  char temp_v0;
  char *pcVar2;
  int temp_v1;
  unsigned int temp_v2;
  
  pcVar2 = DAT_0057f6d0;
  if (DAT_0057f6d0 == (char *)0x0) {
    return 1;
  }
  if (DAT_005e2108 != 0) {
    param_2 = DAT_005e210c;
  }
  if (DAT_005e2108 == 0 || param_2 == 0) {
    return 0;
  }
  if (DAT_005e2110 == 0) {
    temp_v1 = DAT_005e2108;
    FUN_00275bc8();
    DAT_005e2110 = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
  }
  if (pcVar2[0x5c] != '\0') {
    temp_v1 = FUN_00224880(DAT_005e2110);
    if (temp_v1 != 2) {
      return 0;
    }
    pcVar2[0x5c] = '\0';
    pcVar2[0x58] = -1;
    pcVar2[0x59] = -1;
    pcVar2[0x5a] = -1;
    pcVar2[0x5b] = -1;
    return 0;
  }
  if (*(int *)(pcVar2 + 0x58) != -1) {
    *(int *)(pcVar2 + 0x20) = *(int *)(pcVar2 + 0x58);
    scrScriptProcessStartEntry(DAT_005e2110);
    pcVar2[0x5c] = '\x01';
    pcVar2[0x54] = '\0';
    obj04Finish();
    return 0;
  }
  switch(*(unsigned int *)(pcVar2 + 0xc)) {
  case 0:
    temp_v1 = *(int *)(pcVar2 + 4);
    pcVar2[0x50] = '\0';
    pcVar2[0x51] = '\0';
    pcVar2[0x52] = '\0';
    pcVar2[0x53] = '\0';
    if ((temp_v1 != 0) && ((*pcVar2 != '\x05' || (*(int *)(pcVar2 + 8) == 1)))) {
      pcVar2[0xc] = '\x01';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      *(int *)(pcVar2 + 0x10) = *(int *)(pcVar2 + 0x10) + 1;
      return 0;
    }
    temp_v2 = 3;
    break;
  case 1:
    FUN_0031ed60(pcVar2,4);
    temp_v2 = 2;
    pcVar2[0x54] = '\0';
    break;
  case 2:
    temp_v1 = FUN_0035d83c(pcVar2);
    if (temp_v1 != 0) {
      FUN_0035d7bc(pcVar2);
      if (DAT_0057f6c9 != '\0') {
        pcVar2[0x5d] = '\x01';
        pcVar2[0xc] = '\x03';
        pcVar2[0xd] = '\0';
        pcVar2[0xe] = '\0';
        pcVar2[0xf] = '\0';
      }
      else if (DAT_0057f6ca != '\0') {
        if (*(int *)(pcVar2 + 0x50) == 0) {
          pcVar2[0x50] = '\x01';
          pcVar2[0x51] = '\0';
          pcVar2[0x52] = '\0';
          pcVar2[0x53] = '\0';
          pcVar2[0xc] = '\x01';
          pcVar2[0xd] = '\0';
          pcVar2[0xe] = '\0';
          pcVar2[0xf] = '\0';
        }
        else {
          temp_v0 = *pcVar2;
          pcVar2[0xc] = '\t';
          pcVar2[0xd] = '\0';
          pcVar2[0xe] = '\0';
          pcVar2[0xf] = '\0';
          pcVar2[0x5d] = '\0';
          if (temp_v0 == '\x05') {
            pcVar2[0xc] = '\x03';
            pcVar2[0xd] = '\0';
            pcVar2[0xe] = '\0';
            pcVar2[0xf] = '\0';
          }
        }
      }
      else {
        temp_v0 = *pcVar2;
        pcVar2[0xc] = '\t';
        pcVar2[0xd] = '\0';
        pcVar2[0xe] = '\0';
        pcVar2[0xf] = '\0';
        pcVar2[0x5d] = '\0';
        if (temp_v0 == '\x05') {
          pcVar2[0xc] = '\x03';
          pcVar2[0xd] = '\0';
          pcVar2[0xe] = '\0';
          pcVar2[0xf] = '\0';
        }
      }
      pcVar2[0x54] = '\0';
    }
    else if (pcVar2[0x54] != '\0') {
      FUN_00224880(DAT_005e2110);
    }
    *(int *)(pcVar2 + 0x10) = *(int *)(pcVar2 + 0x10) + 1;
    return 0;
  case 3:
    FUN_0031ed60(pcVar2,*pcVar2);
    temp_v2 = 6;
    break;
  default:
    *(int *)(pcVar2 + 0x10) = *(int *)(pcVar2 + 0x10) + 1;
    return 0;
  case 6:
    temp_v1 = FUN_0035d83c(pcVar2);
    if (temp_v1 == 0) {
      *(int *)(pcVar2 + 0x10) = *(int *)(pcVar2 + 0x10) + 1;
      return 0;
    }
    FUN_0035d7bc(pcVar2);
    if (DAT_0057f6c9 == '\0') {
      if (DAT_0057f6d8 != -1) {
        FUN_001386e8(1);
        FUN_00137ea0(1);
        gameDataBlocksMaskClearBits(1);
        pcVar2[0xc] = '\n';
        pcVar2[0xd] = '\0';
        pcVar2[0xe] = '\0';
        pcVar2[0xf] = '\0';
        scrScriptProcessStartEntry(DAT_005e2110,DAT_0057f6d8);
        *(int *)(pcVar2 + 0x10) = *(int *)(pcVar2 + 0x10) + 1;
        return 0;
      }
      temp_v2 = 9;
      break;
    }
  case 9:
    temp_v2 = 7;
    break;
  case 7:
    if ((*(int *)(DAT_0057f6d0 + 4) == 1) && ((*pcVar2 != '\x05' || (*(int *)(pcVar2 + 8) == 4)))) {
      FUN_001386b4();
    }
    if (DAT_005e2110 != 0) {
      scrScriptProcessDestroy();
      DAT_005e2110 = 0;
    }
    if (DAT_0057f6d0 != (char *)0x0) {
      asdMemFree();
    }
    DAT_0057f6d0 = (char *)0x0;
    return 1;
  case 10:
    temp_v1 = FUN_00224880(DAT_005e2110);
    if (temp_v1 != 2) {
      *(int *)(pcVar2 + 0x10) = *(int *)(pcVar2 + 0x10) + 1;
      return 0;
    }
    temp_v2 = 9;
  }
  *(unsigned int *)(pcVar2 + 0xc) = temp_v2;
  *(int *)(pcVar2 + 0x10) = *(int *)(pcVar2 + 0x10) + 1;
  return 0;
}

} /* extern "C" */
