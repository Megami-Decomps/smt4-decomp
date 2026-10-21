/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295108` (_code @ 0x295108, 0x318 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagIsSet(...);
int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);
int popupQueueInsertUnique(int);
int gameFlagSetValue(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int *g_popupState; /* 0x58104c */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1994; /* 0x5f1994 */

extern int randRange(unsigned int);
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
extern int FUN_002d8b58(unsigned int);
/* Supplied declaration required: popupQueueInsertUnique. */
/* Supplied declaration required: gameFlagSetValue. */


void FUN_00295108(int param_1)

{
/* irregular: 4 goto(s); 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  
  temp_v0 = 0;
  if (*g_popupState != 0) {
    if (param_1 != 0) {
      return;
    }
    if (*g_popupState == 0x12) {
      return;
    }
    temp_v1 = randRange(99);
    if (temp_v1 + 1 >= 11) {
      return;
    }
    popupQueueInsertUnique(0x12);
    return;
  }
  temp_v1 = gameFlagIsSet(0x8d);
  if ((temp_v1 == 0) || (temp_v1 = gameFlagIsSet(0x8e), temp_v1 != 0)) {
    temp_v1 = gameFlagIsSet(0x90);
    if ((temp_v1 == 0) || (temp_v1 = gameFlagIsSet(0x92), temp_v1 != 0)) {
      temp_v1 = gameFlagIsSet(0x95);
      if ((temp_v1 == 0) || (temp_v1 = gameFlagIsSet(0x98), temp_v1 != 0)) {
        temp_v1 = gameFlagIsSet(0xd9);
        if ((temp_v1 == 0) || (temp_v1 = gameFlagIsSet(0xed), temp_v1 != 0)) goto LAB_002952c0;
        temp_v2 = 0x542;
        temp_v1 = gameFlagIsSet(0x542);
      }
      else {
        temp_v2 = 0x541;
        temp_v1 = gameFlagIsSet(0x541);
      }
joined_r0x002952a0:
      if (temp_v1 == 0) {
        gameFlagSetValue(temp_v2,1);
        temp_v0 = 1;
        DAT_005f1994 = 0;
        goto LAB_002952dc;
      }
    }
    else {
      temp_v1 = gameFlagIsSet(0xc2);
      if ((temp_v1 != 0) && (temp_v1 = gameFlagIsSet(0x540), temp_v1 == 0)) {
        gameFlagSetValue(0x540,1);
        temp_v0 = 1;
        DAT_005f1994 = 0;
        goto LAB_002952dc;
      }
    }
  }
  else {
    temp_v1 = gameFlagIsSet(0xc2);
    if (temp_v1 != 0) {
      temp_v2 = 0x535;
      temp_v1 = gameFlagIsSet(0x535);
      goto joined_r0x002952a0;
    }
  }
LAB_002952c0:
  if ((DAT_005f1994 != 0) && (DAT_005f1994 = DAT_005f1994 + 1, DAT_005f1994 >= 10)) {
    DAT_005f1994 = 0;
  }
LAB_002952dc:
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
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)(temp_v3 + temp_v5 * 0x20);
      }
      if ((((piVar7[1] == 0x13) && (((short)piVar7[2] == 0 || (temp_v3 = gameFlagIsSet(), temp_v3 != 0)))
           ) && ((*(short *)((int)piVar7 + 10) == 0 || (temp_v3 = gameFlagIsSet(), temp_v3 == 0)))) &&
         ((((*piVar7 != 0xad || (g_gameState == 0x1c)) ||
           (g_gameState == 0x1d || g_gameState == 0x1e)) ||
          (g_gameState == 0x1f || g_gameState == 0x20)))) {
        if ((param_1 == 0 && !temp_v0) &&
           (temp_v3 = randRange(99), temp_v3 + 1 <= (int)(short)piVar7[3])) {
          return;
        }
        if (DAT_005f1994 == 0) {
          DAT_005f1994 = 1;
          g_popupState[6] = *piVar7;
          temp_v1 = FUN_002d8b58(0x13);
          piVar7 = g_popupState;
          g_popupState[5] = temp_v1;
          *piVar7 = 0x12;
          piVar7[1] = 0;
          return;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < temp_v1);
  }
  return;
}

} /* extern "C" */
