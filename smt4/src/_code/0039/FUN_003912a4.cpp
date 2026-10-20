/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003912a4` (_code @ 0x3912a4, 0x24c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002332e8(unsigned int *, unsigned int, unsigned int);
int FUN_00240d5c(unsigned int *);
int FUN_00290994(...);
int FUN_0029e924(unsigned int *);
int FUN_002bed3c(void);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf538(void);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int FUN_002c39a4(int);
int FUN_003909d0(unsigned int *, int, int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Supplied declaration required: FUN_002332e8. */
extern int FUN_0023360c(unsigned int *);
/* Supplied declaration required: FUN_00240d5c. */
/* Supplied declaration required: FUN_00290994. */
/* Supplied declaration required: FUN_0029e924. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf538. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003909d0. */


void FUN_003912a4(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  
  if ((*param_1 & 0x10000) == 0) {
    FUN_002c39a4(g_titleScene);
    FUN_002bed3c();
    FUN_002bf538();
    temp_v1 = g_titleScene;
    temp_v0 = FUN_002c5d80(1,0);
    piVar7 = (int *)(temp_v1 + 0x124c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    FUN_002bf380(2,0x3a,7,0,0,0x81);
    temp_v1 = FUN_0029e924(param_1 + 0x90);
    FUN_00240d5c(param_1 + 0x90);
    temp_v6 = param_1[0x91];
    temp_v0 = 0;
    if (temp_v0 < (int)temp_v6) {
      do {
        temp_v4 = FUN_0023360c(param_1 + 0x90);
        FUN_003909d0(param_1,temp_v0,temp_v1 + temp_v0,temp_v4 == temp_v1 + temp_v0);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)temp_v6);
    }
    temp_v2 = FUN_00240d5c(param_1 + 0x90);
    temp_v3 = FUN_0029e924(param_1 + 0x90);
    FUN_002332e8(param_1 + 0xba,temp_v3,temp_v2);
    temp_v1 = (int)(short)param_1[0xd0];
    temp_v0 = (int)(short)param_1[0xcf];
    temp_v4 = (int)*(short *)((int)param_1 + 0x33e);
    if ((char)param_1[0xd3] == '\0') {
      temp_v1 = -1;
      temp_v0 = -1;
      temp_v4 = -1;
    }
    FUN_00290994(param_1[0xce],0,0,0x3a,0x4b,0x4c,0x4d,0x47,0x49,0x48,0x4a,temp_v1,temp_v0,temp_v4,0x81,0)
    ;
    temp_v1 = g_titleScene;
    piVar7 = (int *)(g_titleScene + 0x124c);
    temp_v0 = *piVar7;
    temp_v4 = piVar7[temp_v0 + 2];
    *piVar7 = temp_v0 - 1;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v4 != piVar7[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    FUN_002bed3c();
    FUN_002bf538();
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
    return;
  }
  return;
}

} /* extern "C" */
