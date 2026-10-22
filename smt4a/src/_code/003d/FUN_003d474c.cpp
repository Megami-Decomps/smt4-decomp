/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d474c` (_code @ 0x3d474c, 0x238 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019de98(int, unsigned int);
int FUN_001ad9b4(void);
unsigned int questHasSpecialDetailPage(unsigned int);
int partyEntryFlagsBit3(...);
int FUN_004186e0(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int g_uiQuest; /* 0x57f28c */

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int resourceRunOperationIfUnblocked(void);
extern int FUN_002a4894(int);
extern int FUN_003de75c(unsigned int);
/* Supplied declaration required: partyEntryFlagsBit3. */
extern int partyEntryFlagsBit1(void);
/* Supplied declaration required: FUN_004186e0. */
extern int partyEntryBitsBit4(unsigned int);


/* WARNING: Removing unreachable block (ram,0x003d485c) */

void FUN_003d474c(void)

{
/* irregular: 8 goto(s); 6 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v4 = g_uiQuest;
  if (*(char *)(g_uiQuest + 0x90c) != '\0') {
    temp_v2 = g_uiQuest + 0x948;
    temp_v3 = resourceRunOperationIfUnblocked();
    temp_v2 = FUN_002a4894(temp_v2);
    temp_v1 = *(unsigned short *)(temp_v4 + (temp_v2 + temp_v3) * 2 + 0xa10);
  }
  else {
    temp_v2 = g_uiQuest + 0x9ac;
    temp_v3 = resourceRunOperationIfUnblocked();
    temp_v2 = FUN_002a4894(temp_v2);
    temp_v1 = *(unsigned short *)(temp_v4 + (temp_v2 + temp_v3) * 2 + 0xad6);
  }
  temp_v8 = (unsigned int)temp_v1;
  if (temp_v8 == 0) {
    return;
  }
  if (*(char *)(temp_v4 + 0x90c) != '\0') {
    temp_v4 = partyEntryFlagsBit1();
    if (temp_v4 != 0) {
      temp_v4 = FUN_004186e0();
      if (temp_v4 == 0) goto LAB_003d48cc;
    }
    else {
      temp_v4 = partyEntryFlagsBit3(temp_v8);
      if (temp_v4 != 0) goto LAB_003d4938;
    }
    temp_v8 = 6;
  }
  else {
    temp_v7 = temp_v8;
    FUN_001ad9b4();
    temp_v0 = *(char *)(temp_v7 + 6);
    if (!((temp_v0 == '\x06' || temp_v0 == '\t') || temp_v0 == '\v')) {
      temp_v4 = partyEntryFlagsBit3();
      if (temp_v4 != 0) {
        temp_v4 = partyEntryBitsBit4(temp_v8);
        if (temp_v4 == 0) {
          temp_v4 = questHasSpecialDetailPage(temp_v8);
joined_r0x003d4934:
          if (temp_v4 != 0) {
            temp_v8 = 10;
            goto LAB_003d493c;
          }
        }
LAB_003d4938:
        temp_v8 = 3;
        goto LAB_003d493c;
      }
    }
    else {
      temp_v4 = FUN_003de75c(temp_v8);
      if (temp_v4 == 0) {
        temp_v4 = partyEntryFlagsBit3(temp_v8);
        if (temp_v4 == 0) {
          temp_v8 = 5;
          goto LAB_003d493c;
        }
        temp_v4 = partyEntryBitsBit4(temp_v8);
        if (temp_v4 == 0) {
          temp_v4 = questHasSpecialDetailPage(temp_v8);
          goto joined_r0x003d4934;
        }
        goto LAB_003d4938;
      }
      temp_v5 = FUN_004186e0();
      if (temp_v5 != temp_v8) {
        temp_v4 = partyEntryFlagsBit3(temp_v8);
        if (temp_v4 != 0) {
          temp_v8 = 2;
        }
        else if (*(char *)(temp_v7 + 6) == '\v') {
          temp_v8 = 0xc;
        }
        else {
          temp_v8 = 0xb;
        }
        goto LAB_003d493c;
      }
    }
LAB_003d48cc:
    temp_v8 = 0;
  }
LAB_003d493c:
  temp_v6 = dataTableGet(0x34,0);
  temp_v4 = dataTableGetEntries();
  temp_v7 = dataTableGetCount(temp_v6);
  if (temp_v8 < temp_v7) {
    temp_v4 = temp_v4 + temp_v8 * 0x60 + 1;
  }
  else {
    temp_v4 = 0;
  }
  FUN_0019de98(temp_v4,0xf4f4f4ff);
  return;
}

} /* extern "C" */
