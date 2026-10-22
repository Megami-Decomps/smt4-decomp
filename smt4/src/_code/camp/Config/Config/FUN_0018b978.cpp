/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b978` (_code @ 0x18b978, 0x6a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int messageMainFinishWindow(void);
int FUN_0029efd8(...);
int eventQueueAddUnique(...);
int eventQueueAddUniqueIfValid(...);

int FUN_00195510(...);
int scrRunOpcodesStub(unsigned int);
int FUN_001d15fc(void);
int scrScriptProcessStartEntry(...);
int messageMainSetEnabled(...);
int FUN_00297060(unsigned int, unsigned int);
int FUN_002973ec(void);
int gameCounterAddSaturating(int, int);
int FUN_0029ee6c(...);
int FUN_002bf4f8(int, int);
int dataTableGetCount(...);
int dataTableGetEntries(void);
int FUN_002c1658(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int g_config; /* 0x43dc58 */

/* Supplied declaration required: FUN_00195510. */
/* Supplied declaration required: scrRunOpcodesStub. */
/* Supplied declaration required: FUN_001d15fc. */
/* Supplied declaration required: messageMainFinishWindow. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: messageMainSetEnabled. */
/* Supplied declaration required: FUN_00297060. */
extern int messageMainGetChoiceResult(void);
/* Supplied declaration required: FUN_002973ec. */
/* Supplied declaration required: gameCounterAddSaturating. */
extern int ifTouchGetSelectionModeForRegion(int);
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);
/* Supplied declaration required: FUN_0029efd8. */
extern unsigned short FUN_002b8584(unsigned int, unsigned int);
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_002bf4f8. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c1658. */


void FUN_0018b978(void)

{
/* irregular: 23 unstructured edge(s); 1 goto(s); 17 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  
  temp_v8 = g_config;
  temp_v10 = 0;
  temp_v2 = *(int *)(g_config + 100);
  if (temp_v2 == 0) {
    if (*(int *)(g_config + 0xac) == 0) {
      return;
    }
    if (*(int *)(g_config + 0xb0) == 0) {
      return;
    }
    temp_v1 = FUN_002b8584(0x2f,0x20);
    *(unsigned short *)(temp_v8 + 0x70) = temp_v1;
    *(unsigned int *)(temp_v8 + 0xb4) = 0;
    *(short *)(temp_v8 + 0x74) = *(short *)(temp_v8 + 0x74) + 1;
    temp_v9 = *(unsigned int *)(temp_v8 + 0xac);
    FUN_00297060(temp_v9,*(unsigned int *)(temp_v8 + 0xb0));
    *(unsigned int *)(temp_v8 + 0xb4) = temp_v9;
    messageMainSetEnabled(0);
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v8 + 0xb4),0);
    temp_v2 = FUN_002973ec();
    temp_v5 = 1;
    temp_v3 = gameFlagIsSet(0x555);
    if ((temp_v3 != 0) && (temp_v3 = gameFlagIsSet(0x557), temp_v3 != 0)) {
      if (temp_v2 != 0) {
        if (temp_v2 != 1) {
          if (temp_v2 == 2) {
            temp_v5 = 2;
          }
        }
        else {
          temp_v5 = 0;
        }
      }
    }
    else {
      temp_v3 = gameFlagIsSet(0x557);
      if (temp_v3 != 0) {
        if (temp_v2 != 0) {
          if (temp_v2 == 1) {
            temp_v5 = 0;
          }
        }
      }
      else {
        temp_v3 = gameFlagIsSet(0x555);
        if (temp_v3 != 0) {
          if (temp_v2 == 0) {
            temp_v5 = 0;
          }
        }
      }
    }
    *(unsigned int *)(temp_v8 + 0x80) = temp_v5;
    temp_v2 = gameFlagIsSet(0x555);
    if ((temp_v2 != 0) && (temp_v2 = gameFlagIsSet(0x557), temp_v2 == 0)) {
      temp_v5 = temp_v5 + 1;
    }
    temp_v9 = dataTableGet(0x36,1);
    temp_v2 = dataTableGetEntries();
    temp_v7 = dataTableGetCount(temp_v9);
    if (temp_v5 < temp_v7) {
      temp_v10 = temp_v2 + temp_v5 * 0x50;
    }
    FUN_0029ee6c(temp_v10,0x323232ff);
    FUN_001d15fc();
    *(unsigned int *)(temp_v8 + 100) = 1;
    return;
  }
  if (temp_v2 != 1) {
    if (temp_v2 != 2) {
      return;
    }
    temp_v2 = scrRunOpcodesStub(*(unsigned int *)(g_config + 0xb4));
    if (temp_v2 != 2) {
      return;
    }
    temp_v10 = messageMainGetChoiceResult();
    temp_v2 = g_config;
    if (temp_v10 == 0) {
      temp_v10 = gameFlagIsSet(0x555);
      if ((temp_v10 != 0) && (temp_v10 = gameFlagIsSet(0x557), temp_v10 != 0)) {
        temp_v2 = *(int *)(temp_v2 + 0x80);
        if (temp_v2 != 0) {
          if ((temp_v2 == 1) || (temp_v2 != 2)) {
            FUN_002973ec();
            temp_v9 = 0;
          }
          else {
            FUN_002973ec();
            temp_v9 = 2;
          }
          FUN_00195510(temp_v9);
        }
        else {
LAB_0018bf50:
          temp_v2 = FUN_002973ec();
          FUN_00195510(1);
          if (temp_v2 == 1) {
            scrScriptProcessStartEntry(*(unsigned int *)(temp_v8 + 0xb4),0);
            messageMainSetEnabled(0);
            *(unsigned int *)(temp_v8 + 100) = 1;
            return;
          }
          gameCounterAddSaturating(0x29,1);
        }
      }
      else {
        temp_v10 = gameFlagIsSet(0x557);
        if (temp_v10 != 0) {
          if (*(int *)(temp_v2 + 0x80) == 0) goto LAB_0018bf50;
        }
        else {
          temp_v10 = gameFlagIsSet(0x555);
          if ((temp_v10 != 0) && (*(int *)(temp_v2 + 0x80) != 0)) {
            if (*(int *)(temp_v2 + 0x80) == 1) {
              FUN_002973ec();
              temp_v9 = 2;
              FUN_00195510(temp_v9);
              scrScriptProcessStartEntry(*(unsigned int *)(temp_v8 + 0xb4),0);
              messageMainSetEnabled(0);
              *(unsigned int *)(temp_v8 + 100) = 1;
              return;
            }
          }
        }
        FUN_002973ec();
        temp_v9 = 0;
        FUN_00195510(temp_v9);
      }
    }
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v8 + 0xb4),0);
    messageMainSetEnabled(0);
    *(unsigned int *)(temp_v8 + 100) = 1;
    return;
  }
  FUN_002bf4f8(0x2f,0x59);
  scrRunOpcodesStub(*(unsigned int *)(temp_v8 + 0xb4));
  temp_v2 = g_config;
  temp_v3 = FUN_0029efc0(g_config);
  temp_v4 = FUN_0029efa8(temp_v2);
  temp_v9 = dataTableGet(0x36,0);
  dataTableGetEntries();
  dataTableGetCount(temp_v9);
  temp_v3 = temp_v2 + (temp_v3 + temp_v4) * 4;
  temp_v0 = 0;
  temp_v5 = *(unsigned int *)(temp_v3 + 0x80);
  if (*(char *)(temp_v2 + 0xa8) != '\0') {
    temp_v4 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x78));
    temp_v6 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x7a));
    temp_v2 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x7c));
    if (!(temp_v4 == 1 || temp_v4 == 2)) {
      if (!(temp_v6 == 1 || temp_v6 == 2)) {
        if (temp_v2 == 1 || temp_v2 == 2) {
          temp_v7 = 2;
          *(unsigned int *)(temp_v3 + 0x80) = temp_v7;
        }
        else {
          temp_v2 = 4;
          FUN_002c1658(4,0);
          if (temp_v2 != 0) {
            temp_v2 = *(int *)(temp_v3 + 0x80) - 1;
            *(int *)(temp_v3 + 0x80) = temp_v2;
            if (temp_v2 < 0) {
              *(unsigned int *)(temp_v3 + 0x80) = 2;
            }
            temp_v0 = 1;
          }
          else {
            temp_v2 = 3;
            FUN_002c1658(3,0);
            if (temp_v2 != 0) {
              temp_v2 = *(int *)(temp_v3 + 0x80) + 1;
              *(int *)(temp_v3 + 0x80) = temp_v2;
              if (temp_v2 >= 3) {
                *(unsigned int *)(temp_v3 + 0x80) = 0;
              }
              temp_v0 = 1;
            }
          }
        }
      }
      else {
        *(unsigned int *)(temp_v3 + 0x80) = 1;
      }
    }
    else {
      *(unsigned int *)(temp_v3 + 0x80) = 0;
    }
  }
  else {
    temp_v4 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x78));
    temp_v2 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x7a));
    if (!(temp_v4 == 1 || temp_v4 == 2)) {
      if (!(temp_v2 == 1 || temp_v2 == 2)) {
        temp_v2 = 4;
        FUN_002c1658(4,0);
        if (temp_v2 == 0) {
          temp_v2 = 3;
          FUN_002c1658(3,0);
          if (temp_v2 != 0) {
            temp_v0 = 1;
            temp_v7 = *(unsigned int *)(temp_v3 + 0x80) ^ 1;
            *(unsigned int *)(temp_v3 + 0x80) = temp_v7;
          }
        }
        else {
          temp_v0 = 1;
          temp_v7 = *(unsigned int *)(temp_v3 + 0x80) ^ 1;
          *(unsigned int *)(temp_v3 + 0x80) = temp_v7;
        }
      }
      else {
        *(unsigned int *)(temp_v3 + 0x80) = 1;
      }
    }
    else {
      *(unsigned int *)(temp_v3 + 0x80) = 0;
    }
  }
  temp_v7 = *(unsigned int *)(temp_v3 + 0x80);
  if (temp_v7 != temp_v5) {
    temp_v8 = gameFlagIsSet(0x555);
    if ((temp_v8 != 0) && (temp_v8 = gameFlagIsSet(0x557), temp_v8 == 0)) {
      temp_v7 = temp_v7 + 1;
    }
    temp_v9 = dataTableGet(0x36,1);
    temp_v8 = dataTableGetEntries();
    temp_v5 = dataTableGetCount(temp_v9);
    if (temp_v7 < temp_v5) {
      temp_v10 = temp_v8 + temp_v7 * 0x50;
    }
    FUN_0029ee6c(temp_v10,0x323232ff);
    if (temp_v0) {
      eventQueueAddUnique(0x100016c);
      return;
    }
    return;
  }
  temp_v3 = temp_v8;
  FUN_0029efd8(temp_v8,1);
  temp_v2 = g_config;
  if (temp_v3 != 0) {
    temp_v8 = FUN_0029efc0(g_config);
    temp_v2 = FUN_0029efa8(temp_v2);
    temp_v9 = dataTableGet(0x36,0);
    temp_v3 = dataTableGetEntries();
    temp_v5 = dataTableGetCount(temp_v9);
    if ((unsigned int)(temp_v8 + temp_v2) < temp_v5) {
      temp_v10 = temp_v3 + (temp_v8 + temp_v2) * 0x80;
    }
    FUN_0029ee6c(temp_v10 + 0x3c,0x323232ff);
    FUN_001d15fc();
    return;
  }
  temp_v10 = 0;
  FUN_002c1658(0,1);
  temp_v2 = g_config;
  if (temp_v10 == 0) {
    if (*(char *)(g_config + 0xa8) != '\x01') {
      temp_v10 = ifTouchGetSelectionModeForRegion((int)*(short *)(g_config + 0x78));
      if (temp_v10 != 6) {
        temp_v2 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x7a));
        if (temp_v2 != 6) {
          temp_v2 = 1;
          FUN_002c1658();
          if (temp_v2 == 0) {
            return;
          }
          eventQueueAddUniqueIfValid(0x100016e);
          messageMainSetEnabled(1);
          temp_v9 = 3;
          *(unsigned int *)(temp_v8 + 100) = temp_v9;
          return;
        }
      }
    }
    else {
      temp_v10 = ifTouchGetSelectionModeForRegion((int)*(short *)(g_config + 0x78));
      if (temp_v10 != 6) {
        temp_v10 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x7a));
        if (temp_v10 != 6) {
          temp_v2 = ifTouchGetSelectionModeForRegion((int)*(short *)(temp_v2 + 0x7c));
          if (temp_v2 != 6) {
            temp_v2 = 1;
            FUN_002c1658();
            if (temp_v2 == 0) {
              return;
            }
            eventQueueAddUniqueIfValid(0x100016e);
            messageMainSetEnabled(1);
            temp_v9 = 3;
            *(unsigned int *)(temp_v8 + 100) = temp_v9;
            return;
          }
        }
      }
    }
  }
  temp_v8 = g_config;
  eventQueueAddUnique(0x100016d);
  messageMainFinishWindow();
  messageMainSetEnabled(1);
  scrScriptProcessStartEntry(*(unsigned int *)(temp_v8 + 0xb4),1);
  temp_v9 = 2;
  *(unsigned int *)(temp_v8 + 0xb8) = 0;
  *(unsigned int *)(temp_v8 + 100) = temp_v9;
  return;
}

} /* extern "C" */
