/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00494a34` (_code @ 0x494a34, 0x2e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_0019de98(int, int);
int FUN_00224880(unsigned int);
int scrScriptProcessStartEntry(unsigned int, unsigned int);
int panelSetTarget(int);
int FUN_0037c8e4(int, int);
int FUN_0049a5b4(unsigned int *);
int FUN_0049a9a8(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_00494d28; /* 0x494d28 */
extern unsigned char LAB_00494d34; /* 0x494d34 */
extern unsigned char LAB_00494d4c; /* 0x494d4c */
extern unsigned int DAT_005f1990; /* 0x5f1990 */

/* Supplied declaration required: sysPlaySe. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_001ba3d4(unsigned int);
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern unsigned int tableGroupFindEntryIndex(unsigned int, unsigned char *);
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: FUN_0037c8e4. */
extern int FUN_00481100(unsigned int);
/* Supplied declaration required: FUN_0049a5b4. */
/* Supplied declaration required: FUN_0049a9a8. */


void FUN_00494a34(unsigned int *param_1)

{
/* irregular: 3 goto(s); 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v3 = 0x3b7;
  temp_v0 = param_1[2];
  temp_v4 = 0x47f;
  if (temp_v0 != 0) {
    if (temp_v0 == 1) {
      temp_v1 = FUN_00224880(param_1[99]);
      if (temp_v1 == 2) {
        puVar4 = param_1;
        FUN_0049a9a8();
        *(char *)((int)param_1 + 0x21) = (char)(int)puVar4;
        param_1[2] = 3;
      }
      return;
    }
    if (temp_v0 != 2) {
      if (temp_v0 != 3) {
        return;
      }
    }
    else {
      temp_v1 = FUN_00224880(param_1[99]);
      if (temp_v1 != 2) {
        return;
      }
      param_1[2] = 3;
    }
    FUN_0037c8e4(1,0);
    panelSetTarget(0);
    do {
      temp_v1 = FUN_00481100(temp_v3);
      if (temp_v1 != 0) goto LAB_00494cb0;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x47f);
    do {
      temp_v1 = FUN_00481100(temp_v4);
      if (temp_v1 != 0) {
LAB_00494cb0:
        param_1[4] = param_1[1];
        param_1[1] = 2;
        param_1[2] = 0;
        FUN_0049a5b4(param_1);
        sysPlaySe(0x77);
        FUN_0019de98(0,0x323232ff);
        DAT_005f1990 = 0;
        return;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x79f);
  }
  else {
    *param_1 = *param_1 | 4;
    if (param_1[7] != 9) {
      if (((char)param_1[0x5813] == '\x01') && (temp_v1 = gameFlagIsSet(0x170), temp_v1 != 0)) {
        temp_v1 = gameFlagIsSet(0x1cf);
        if (temp_v1 == 0) {
          temp_v2 = tableGroupFindEntryIndex(param_1[0x61],&LAB_00494d28);
          scrScriptProcessStartEntry(param_1[99],temp_v2);
          FUN_00224880(param_1[99]);
          param_1[2] = 1;
          sysPlaySe(0xa0);
          return;
        }
      }
    }
    else {
      temp_v1 = FUN_001ba3d4(0x363);
      if ((0 < temp_v1) && (temp_v1 = gameFlagIsSet(0x114), temp_v1 == 0)) goto LAB_00494b40;
      temp_v1 = gameFlagIsSet(0x113);
      if (temp_v1 == 0) {
LAB_00494b40:
        temp_v2 = tableGroupFindEntryIndex(param_1[0x61],&LAB_00494d28);
        scrScriptProcessStartEntry(param_1[99],temp_v2);
        FUN_00224880(param_1[99]);
        param_1[2] = 1;
        sysPlaySe(0xa0);
        return;
      }
    }
    do {
      temp_v1 = FUN_00481100(temp_v3);
      if (temp_v1 != 0) goto LAB_00494bb0;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x47f);
    do {
      temp_v1 = FUN_00481100(temp_v4);
      if (temp_v1 != 0) {
LAB_00494bb0:
        if (*(char *)((int)param_1 + 0x21) != '\0') {
          temp_v2 = tableGroupFindEntryIndex(param_1[0x61],&LAB_00494d34);
          scrScriptProcessStartEntry(param_1[99],temp_v2);
        }
        else {
          temp_v2 = tableGroupFindEntryIndex(param_1[0x61],&LAB_00494d4c);
          scrScriptProcessStartEntry(param_1[99],temp_v2);
        }
        FUN_00224880(param_1[99]);
        param_1[2] = 2;
        sysPlaySe(0xa0);
        return;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x79f);
    FUN_0037c8e4(1,0);
    panelSetTarget(0);
  }
  param_1[4] = param_1[1];
  param_1[1] = 5;
  param_1[2] = 0;
  return;
}

} /* extern "C" */
