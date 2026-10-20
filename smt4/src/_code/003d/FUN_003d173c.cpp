/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d173c` (_code @ 0x3d173c, 0x4b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00229ad4(...);
int FUN_00244fb0(...);
int FUN_0026c820(...);
int FUN_002a0cb0(void);
int FUN_002b8838(void);
int FUN_00339828(...);

int FUN_00227750(...);
int FUN_0024082c(...);
int FUN_00245228(...);
int FUN_002505c0(...);
int FUN_00267d3c(unsigned int);
int FUN_00282820(...);
int FUN_00293e08(void);
int FUN_00295d28(void);
int FUN_002c1658(int, int);
int FUN_00338358(int);
int FUN_00338404(int);
int FUN_00338754(...);
int FUN_00338fb0(...);
int FUN_0033911c(int);
int FUN_00339254(...);
int FUN_00339754(int);
int FUN_00339dc0(...);
int FUN_0033a264(int);
int FUN_0034008c(...);
int FUN_003d5ef4(unsigned int);
int FUN_003d6408(unsigned int);
int FUN_003d660c(...);
int FUN_003dc02c(...);
int FUN_003ddb50(int, int, int);
int FUN_003de8c4(unsigned int, int, int);
int FUN_003de9e4(...);
int FUN_003dea78(...);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int g_btlMain; /* 0x4342c8 */
extern unsigned int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_004398d4; /* 0x4398d4 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00227750. */
/* Supplied declaration required: FUN_00229ad4. */
/* Supplied declaration required: FUN_0024082c. */
/* Supplied declaration required: FUN_00244fb0. */
extern int FUN_0024502c(int, unsigned int);
/* Supplied declaration required: FUN_00245228. */
extern int FUN_00245278(int, unsigned int);
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00267d3c. */
/* Supplied declaration required: FUN_0026c820. */
/* Supplied declaration required: FUN_00282820. */
/* Supplied declaration required: FUN_00293e08. */
extern int FUN_00293ed0(int);
/* Supplied declaration required: FUN_00295d28. */
/* Supplied declaration required: FUN_002a0cb0. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: FUN_00338358. */
/* Supplied declaration required: FUN_00338404. */
/* Supplied declaration required: FUN_00338754. */
/* Supplied declaration required: FUN_00338fb0. */
/* Supplied declaration required: FUN_0033911c. */
/* Supplied declaration required: FUN_00339254. */
/* Supplied declaration required: FUN_00339754. */
/* Supplied declaration required: FUN_00339828. */
/* Supplied declaration required: FUN_00339dc0. */
/* Supplied declaration required: FUN_0033a264. */
/* Supplied declaration required: FUN_0034008c. */
/* Supplied declaration required: FUN_003d5ef4. */
/* Supplied declaration required: FUN_003d6408. */
/* Supplied declaration required: FUN_003d660c. */
/* Supplied declaration required: FUN_003dc02c. */
/* Supplied declaration required: FUN_003ddb50. */
/* Supplied declaration required: FUN_003de8c4. */
/* Supplied declaration required: FUN_003de9e4. */
/* Supplied declaration required: FUN_003dea78. */


unsigned int FUN_003d173c(int *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0; 33 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int in_s0;
  
  temp_v5 = 0;
  FUN_00338358(*param_1);
  FUN_00339754(*param_1);
  temp_v0 = FUN_00293ed0(*param_1);
  temp_v4 = 0;
  if (temp_v0 != 0) {
    temp_v0 = *(int *)(param_2 + 0xc);
    FUN_00338404(*param_1);
    if (in_s0 == 0x42200000) {
      FUN_002505c0(0,param_2,0x10001ee,0,0,0,0);
    }
    temp_v1 = 9;
    FUN_002c1658(9,1);
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = temp_v0;
    }
    if ((((temp_v1 != 0 && temp_v0 != 0) && -1 < temp_v2) &&
        (temp_v2 = FUN_00245278(*param_1,0), temp_v2 != 0)) &&
       (temp_v2 = FUN_0024502c(*param_1,0), temp_v2 != 0)) {
      if (-1 < *(int *)(*param_1 + 0x49e8)) {
        FUN_00295d28();
      }
      temp_v0 = 0x122;
    }
    temp_v4 = temp_v5;
    if (temp_v0 == 0xd4) {
      temp_v0 = 0x43;
      do {
        temp_v2 = *(int *)(*param_1 + 0x1e98) + temp_v0 * 0x114;
        if ((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 0x8000) != 0) {
          *(unsigned short *)(temp_v2 + 0x58) = *(unsigned short *)(temp_v2 + 0x58) | 0x1000;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x6d);
    }
    else if (temp_v0 < 0xd4) {
      if (temp_v0 == 0x94) {
        temp_v0 = 0x43;
        do {
          temp_v2 = *(int *)(*param_1 + 0x1e98) + temp_v0 * 0x114;
          temp_v3 = *(unsigned int *)(temp_v2 + 0x50);
          if ((temp_v3 & 1) != 0 && (temp_v3 & 0x8000) != 0) {
            *(unsigned int *)(temp_v2 + 0x50) = temp_v3 | 0x80000;
            *(unsigned short *)(temp_v2 + 0x58) = *(unsigned short *)(temp_v2 + 0x58) & 0xefff;
            FUN_003de8c4(*(unsigned int *)(temp_v2 + 0x5c),param_2,temp_v2);
            FUN_002505c0(*(unsigned int *)(temp_v2 + 0x5c),param_2,0x10001e9,0,0,0,0);
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 0x6d);
      }
      else if (temp_v0 < 0x94) {
        if (temp_v0 != 0) {
          if (temp_v0 != 0x5a) {
            if ((temp_v0 == 100) && (*(int *)(*param_1 + 0x4394) != 0)) {
              FUN_00293e08();
            }
          }
          else {
            FUN_003ddb50(0,param_2,5);
          }
        }
        else {
          FUN_0033911c(*param_1);
          FUN_0033a264(*param_1);
          FUN_003d6408(g_btlMain);
          FUN_003d5ef4(g_btlMain);
          FUN_00267d3c(DAT_00439ca8);
          FUN_00245228(*param_1,0,10);
          FUN_002505c0(0,param_2,0x100010a,0,0,0,1);
        }
      }
    }
    else if (temp_v0 != 0x108) {
      if (temp_v0 < 0x109) {
        if (temp_v0 != 0xda) {
          if (temp_v0 != 0xe4) {
            if (temp_v0 == 0xe5) {
              FUN_00227750(0,param_2,10);
            }
          }
          else {
            FUN_003de9e4(0,param_2);
            FUN_003dea78(1,param_2);
          }
        }
        else {
          FUN_00282820(0,0,0,0,5,0,6,0);
        }
      }
      else if (temp_v0 != 0x10a) {
        if (temp_v0 == 0x122) {
          *(unsigned int *)(*param_1 + 0x49e8) = 0xffffffff;
          FUN_00339254(*param_1);
          FUN_0034008c(DAT_004398d4);
          FUN_00227750(0,param_2,1);
          FUN_003d660c(g_btlMain);
          FUN_0024082c(g_btlMain,0);
          FUN_003dc02c(DAT_00435d18);
          FUN_00339dc0(*param_1);
          FUN_00338fb0(*param_1);
          FUN_00338754(*param_1);
          FUN_00339828(*param_1);
          FUN_0026c820(DAT_00439ca8);
          FUN_002a0cb0();
          FUN_002b8838();
          FUN_00229ad4(param_1);
          temp_v4 = 1;
        }
      }
      else {
        FUN_00244fb0(*param_1,0,1,0xf,0xff);
      }
    }
    else {
      FUN_00282820(0,0,0,0,5,1,6,0);
    }
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  }
  return temp_v4;
}

} /* extern "C" */
