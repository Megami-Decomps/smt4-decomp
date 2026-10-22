/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ff10` (_code @ 0x23ff10, 0x250 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_00183f58(...);
int FUN_001ad9b4(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_uiQuest; /* 0x57f28c */
extern unsigned char g_gameState; /* 0x5f15fc */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00183f58. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int resourceRunOperationIfUnblocked(void);
extern int FUN_002a4894(int);
extern int partyEntryFlagsBit3(unsigned int);
extern unsigned int FUN_004186e0(void);


void FUN_0023ff10(void)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v4 = g_uiQuest;
  temp_v1 = *(int *)(g_uiQuest + 0x918);
  if (*(char *)(g_uiQuest + 0x90c) != '\0') {
    if ((*(signed char *)((unsigned char *)&g_gameState + 0x460)) != '\0') {
      if (temp_v1 == 1) {
        sysPlaySe(0x10e);
      }
      if (*(int *)(temp_v4 + 0x918) == 2) {
        if (*(int *)(temp_v4 + 0x910) == 0) {
          sysPlaySe(0x10f);
        }
        if (*(int *)(temp_v4 + 0x910) == 1) {
          sysPlaySe(0x110);
          return;
        }
      }
    }
    else {
      if (temp_v1 == 1) {
        sysPlaySe(0x6e);
      }
      if (*(int *)(temp_v4 + 0x918) == 2) {
        if (*(int *)(temp_v4 + 0x910) == 0) {
          sysPlaySe(0x6f);
        }
        if (*(int *)(temp_v4 + 0x910) == 1) {
          sysPlaySe(0x70);
          return;
        }
      }
    }
    return;
  }
  if (temp_v1 == 1) {
    sysPlaySe(0x71);
  }
  if (*(int *)(temp_v4 + 0x918) == 2) {
    if (*(char *)(temp_v4 + 0x944) != '\0') {
      if (*(int *)(temp_v4 + 0x910) == 0) {
        sysPlaySe(0xf7);
      }
      if (*(int *)(temp_v4 + 0x910) == 1) {
        temp_v2 = 0xf8;
        sysPlaySe(temp_v2);
      }
    }
    else {
      if (*(int *)(temp_v4 + 0x910) == 0) {
        sysPlaySe(0x72);
      }
      if (*(int *)(temp_v4 + 0x910) == 1) {
        temp_v2 = 0x73;
        sysPlaySe(temp_v2);
      }
    }
  }
  if (*(int *)(temp_v4 + 0x918) == 3) {
    if (*(int *)(temp_v4 + 0x910) == 0) {
      sysPlaySe(0x74);
    }
    if (*(int *)(temp_v4 + 0x910) == 1) {
      sysPlaySe(0x75);
    }
    if (*(int *)(temp_v4 + 0x910) == 2) {
      sysPlaySe(0x76);
    }
  }
  temp_v1 = resourceRunOperationIfUnblocked();
  temp_v3 = FUN_002a4894(temp_v4 + 0x9ac);
  temp_v8 = (unsigned int)*(unsigned short *)(temp_v4 + (temp_v3 + temp_v1) * 2 + 0xad6);
  temp_v5 = temp_v8;
  FUN_001ad9b4();
  if (*(char *)(temp_v4 + 0x93d) != '\0') {
    FUN_00183f58(5,1,0x32);
    temp_v7 = 0;
    temp_v6 = 0x12;
    temp_v2 = 2;
    FUN_00183f58(temp_v2,temp_v6,temp_v7,1);
  }
  else {
    if ((temp_v5 != 0) &&
       (temp_v0 = *(char *)(temp_v5 + 6), (temp_v0 == '\x06' || temp_v0 == '\t') || temp_v0 == '\v')) {
      temp_v4 = partyEntryFlagsBit3(temp_v8);
      temp_v0 = '\0';
      if (temp_v4 != 0) {
        temp_v0 = *(char *)(temp_v5 + 6);
      }
      if ((temp_v4 == 0 || temp_v0 == '\t') && (temp_v5 = FUN_004186e0(), temp_v5 != temp_v8)) {
        temp_v7 = 0x31;
        temp_v6 = 1;
        temp_v2 = 5;
        FUN_00183f58(temp_v2,temp_v6,temp_v7,1);
        FUN_00183f58(2,0x12,0,1);
        return;
      }
    }
    FUN_00183f58(5,0x12,0,1);
  }
  FUN_00183f58(2,0x12,0,1);
  return;
}

} /* extern "C" */
