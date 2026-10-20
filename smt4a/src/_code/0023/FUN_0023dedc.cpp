/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023dedc` (_code @ 0x23dedc, 0x43c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(int, int, int, unsigned int, unsigned int, unsigned int);
int FUN_001835b4(...);
int FUN_001ad9b4(void);

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

extern int g_uiQuest; /* 0x57f28c */

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_003de75c(void);
extern int FUN_003de830(int);
extern int FUN_003dee58(int);
extern int FUN_003df004(int, int, int *);
extern int partyEntryFlagsBit3(int);
extern int partyEntryFlagsBit1(void);
extern int FUN_004186e0(void);


/* WARNING: Type propagation algorithm not settling */

unsigned int
FUN_0023dedc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
            int param_6)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4 [3];
  int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  temp_v2 = 0xf5ff9fff;
  if ((param_6 == 0) && (temp_v2 = 0x9fe7ffff, param_5 == 0)) {
    temp_v2 = 0xffffffff;
  }
  temp_v5 = param_1;
  temp_v6 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  if (*(char *)(g_uiQuest + 0x90c) != '\0') {
    temp_v0 = partyEntryFlagsBit1();
    if (temp_v0 != 0) {
      temp_v0 = FUN_004186e0();
      if (temp_v0 == 0) {
        FUN_00164b5c(2,0x1e,0xc,temp_v6,param_3,param_4);
        if (param_6 != 0) {
          return 0xf5ff9fff;
        }
        if (param_5 != 0) {
          return 0x9fe7ffff;
        }
        return 0x57d8ffff;
      }
      FUN_001835b4(2,0x1e,0x92);
    }
    else {
      temp_v0 = partyEntryFlagsBit3(temp_v5);
      if (temp_v0 == 0) {
        return temp_v2;
      }
      FUN_001835b4(2,0x1e,0x93,temp_v6,param_3,param_4);
    }
  }
  else {
    FUN_001ad9b4();
    if (param_1 == 0) {
      return temp_v2;
    }
    if (*(char *)(param_1 + 6) != '\0') {
      if (*(char *)(param_1 + 6) != '\n') {
        temp_v0 = FUN_003de75c();
        if (temp_v0 != 0) {
          temp_v0 = FUN_004186e0();
          if (temp_v0 == temp_v5) {
            FUN_00164b5c(2,0x1e,0xd,temp_v6,param_3,param_4);
            if (param_6 != 0) {
              return 0xf5ff9fff;
            }
            if (param_5 != 0) {
              return 0x9fe7ffff;
            }
            return 0x57d8ffff;
          }
          temp_v0 = partyEntryFlagsBit3(temp_v5);
          if (temp_v0 == 0) {
            return temp_v2;
          }
          FUN_001835b4(2,0x1e,0x93,temp_v6,param_3,param_4);
          return temp_v2;
        }
        temp_v0 = FUN_003dee58(temp_v5);
        if (temp_v0 != 0) {
          FUN_001835b4(2,0x1e,0x91,temp_v6,param_3,param_4);
        }
        else {
          temp_v0 = partyEntryFlagsBit3(temp_v5);
          if (temp_v0 != 0) {
            FUN_001835b4(2,0x1e,0x93,temp_v6,param_3,param_4);
          }
          else {
            FUN_001835b4(2,0x1e,0x91,temp_v6,param_3,param_4);
          }
        }
      }
      else {
        temp_v0 = partyEntryFlagsBit3(temp_v5);
        if (temp_v0 == 0) {
          return temp_v2;
        }
        FUN_001835b4(2,0x1e,0x93,temp_v6,param_3,param_4);
      }
    }
    else {
      temp_v0 = 0;
      temp_v3 = 1;
      do {
        temp_v1 = FUN_003df004(temp_v5,temp_v0,temp_v4);
        if ((temp_v1 != 0) && ((temp_v1 = partyEntryFlagsBit3(temp_v5), temp_v1 != 0 || (0 < temp_v4[0])))) {
          temp_v3 = 0;
          break;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 4);
      temp_v0 = FUN_003de830(temp_v5);
      if (temp_v0 == 0) {
        temp_v0 = partyEntryFlagsBit3(temp_v5);
        if (temp_v0 == 0) {
          FUN_001835b4(2,0x1e,0xc2,temp_v6,param_3,param_4);
          return temp_v2;
        }
        FUN_001835b4(2,0x1e,0x93,temp_v6,param_3,param_4);
        return temp_v2;
      }
      if (temp_v3 != 0) {
        FUN_00164b5c(2,0x1e,0xe,temp_v6,param_3,param_4);
        return temp_v2;
      }
      temp_v0 = partyEntryFlagsBit3(temp_v5);
      if (temp_v0 == 0) {
        return temp_v2;
      }
      FUN_001835b4(2,0x1e,0x93,temp_v6,param_3,param_4);
    }
  }
  if (param_6 != 0) {
    return 0xf5ff9fff;
  }
  if (param_5 != 0) {
    return 0x9fe7ffff;
  }
  return 0x9b9b9bff;
}

} /* extern "C" */
