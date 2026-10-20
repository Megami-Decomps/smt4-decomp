/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a4a60` (_code @ 0x3a4a60, 0xce4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019e0c0(...);
int FUN_0022e4a4(...);
int FUN_0022e500(...);
int FUN_0022fcb8(...);
int FUN_002306f8(...);
int FUN_0023553c(...);
int FUN_00295660(...);
int FUN_00296f4c(...);
int FUN_00299370(...);
int FUN_002996d8(...);
int FUN_0029a0cc(...);
int FUN_0029a0e8(...);
int FUN_0029c43c(...);
int FUN_0029ede8(...);
int FUN_002bf810(...);

int FUN_0022e538(...);
int FUN_0022f834(...);
int FUN_002305fc(...);
int FUN_00230954(unsigned int *, unsigned int *);
int FUN_00230e04(...);
int FUN_00231240(...);
int FUN_0023266c(unsigned int *, int, int, int);
int FUN_00232848(void);
int FUN_002328b4(void);
int FUN_00233240(unsigned int *, int);
int FUN_00233344(...);
int FUN_0023360c(...);
int FUN_0029212c(...);
int FUN_002937c8(...);
int FUN_00296e90(void);
int FUN_00297050(...);
int FUN_0029e620(...);
int FUN_002b8838(...);
int FUN_002b8cc8(void);
int FUN_0039fe64(void);

typedef int romwright_code(...);
extern unsigned char LAB_003a54c0; /* 0x3a54c0 */
extern unsigned char LAB_003a54d0; /* 0x3a54d0 */
extern unsigned char LAB_003a54e4; /* 0x3a54e4 */
extern unsigned char LAB_003a54f4; /* 0x3a54f4 */
extern unsigned char LAB_003a5744; /* 0x3a5744 */
extern unsigned char LAB_003a5754; /* 0x3a5754 */

/* Supplied declaration required: FUN_0019e0c0. */
/* Supplied declaration required: FUN_0022e4a4. */
/* Supplied declaration required: FUN_0022e500. */
extern int FUN_0022e520(void);
/* Supplied declaration required: FUN_0022e538. */
/* Supplied declaration required: FUN_0022f834. */
/* Supplied declaration required: FUN_0022fcb8. */
/* Supplied declaration required: FUN_002305fc. */
/* Supplied declaration required: FUN_002306f8. */
/* Supplied declaration required: FUN_00230954. */
extern int FUN_00230b90(unsigned int *, unsigned short);
extern unsigned int FUN_00230c1c(unsigned short, unsigned int);
extern unsigned int FUN_00230c80(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00230e04. */
/* Supplied declaration required: FUN_00231240. */
/* Supplied declaration required: FUN_0023266c. */
/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: FUN_00233344. */
/* Supplied declaration required: FUN_0023360c. */
/* Supplied declaration required: FUN_0023553c. */
extern int FUN_00240d5c(unsigned int *);
extern int FUN_00246570(int);
extern int FUN_002762e0(void);
extern int FUN_0027ee9c(void);
extern int FUN_0028e9d0(unsigned short);
extern unsigned int FUN_0028fb3c(unsigned short);
extern unsigned int FUN_00290d74(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0029212c. */
/* Supplied declaration required: FUN_002937c8. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_00296e90. */
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_00297050. */
extern int FUN_002973d8(void);
/* Supplied declaration required: FUN_00299370. */
/* Supplied declaration required: FUN_002996d8. */
extern int FUN_00299fc0(void);
/* Supplied declaration required: FUN_0029a0cc. */
/* Supplied declaration required: FUN_0029a0e8. */
extern int FUN_0029c3ec(void);
/* Supplied declaration required: FUN_0029c43c. */
/* Supplied declaration required: FUN_0029e620. */
extern int FUN_0029e924(unsigned int *);
/* Supplied declaration required: FUN_0029ede8. */
extern int FUN_002a0ce8(void);
extern unsigned int FUN_002ae3c0(unsigned short);
extern unsigned short *FUN_002b63ac(void);
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002b8cc8. */
extern unsigned int FUN_002bed98(unsigned int *);
extern unsigned int FUN_002beda4(unsigned int *);
/* Supplied declaration required: FUN_002bf810. */
/* Supplied declaration required: FUN_0039fe64. */


void FUN_003a4a60(unsigned int *param_1)

{
/* irregular: 1 goto(s); 35 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned char temp_v7;
  
  temp_v7 = 0;
  FUN_00233344(param_1 + 0xea,2);
  FUN_00233344(param_1 + 0xea,3);
  switch(param_1[2]) {
  case 0:
    *param_1 = *param_1 | 0x1000;
    FUN_00233240(param_1 + 0xea,6);
    FUN_00233240(param_1 + 0xea,7);
    FUN_0023266c(param_1 + 0xe5,0x140,0,0x2b);
    param_1[2] = 1;
    FUN_002b8838(0x85);
    param_1[0x575a] = 0xffffffff;
    temp_v6 = FUN_0023360c(param_1 + param_1[0x218] * 0x1d + 0x220);
    param_1[0x575a] = temp_v6;
    break;
  case 1:
    FUN_00233344(param_1 + 0xea,6);
    temp_v4 = FUN_002bed98(param_1 + 0x1c4);
    temp_v2 = FUN_002beda4(param_1 + 0x1c4);
    FUN_00231240(param_1 + 0xe5,temp_v2,temp_v4);
    if (*(char *)((int)param_1 + 0x79a) != '\0') {
      FUN_0022e538(param_1 + 0x21a);
      param_1[2] = 2;
      temp_v6 = param_1[0x218];
      temp_v5 = FUN_0023360c(param_1 + temp_v6 * 0x1d + 0x220);
      if (param_1[0x218] != 8) {
        temp_v5 = FUN_00230e04();
        temp_v5 = temp_v5 * param_1[0x21a];
      }
      else {
        temp_v5 = FUN_00246570((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
        temp_v5 = temp_v5 * param_1[0x21a];
      }
      if (param_1[0x218] != 8) {
        temp_v5 = -temp_v5;
      }
      FUN_0029e620(temp_v5,0);
    }
    break;
  case 2:
    FUN_0039fe64();
    puVar9 = param_1 + 0x218;
    puVar10 = param_1 + param_1[0x218] * 0x1d + 0x220;
    temp_v6 = FUN_0023360c(puVar10);
    FUN_00230954(param_1 + 0x20a,puVar10);
    (**(romwright_code **)(*(int *)param_1[0x217] + 0xc))((int *)param_1[0x217],puVar10);
    FUN_00233344(param_1 + 0xea,2);
    FUN_00233344(param_1 + 0xea,3);
    temp_v1 = FUN_0023360c(puVar10);
    if (temp_v6 == temp_v1) {
      FUN_002937c8(puVar10);
    }
    temp_v6 = param_1[0x218];
    temp_v5 = FUN_0023360c(param_1 + temp_v6 * 0x1d + 0x220);
    FUN_0029212c(*(unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94));
    temp_v6 = param_1[0x218];
    temp_v5 = FUN_0023360c(param_1 + temp_v6 * 0x1d + 0x220);
    if (*puVar9 != 8) {
      temp_v5 = FUN_00230e04();
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    else {
      temp_v5 = FUN_00246570((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    if (param_1[0x218] != 8) {
      temp_v5 = -temp_v5;
    }
    FUN_0029e620(temp_v5,0);
    temp_v5 = FUN_0027ee9c();
    if ((temp_v5 != 0) && (param_1[0x575a] == temp_v1)) {
      if ((int)param_1[0x21a] >= 1) {
        if (!(param_1[0x218] == 7 || param_1[0x218] == 8)) {
          FUN_002b8cc8();
          FUN_002b8cc8();
          temp_v6 = 5;
        }
        else {
          FUN_00296e90();
          if (param_1[1] == 0xb) {
            FUN_00297050(1);
          }
          FUN_002b8cc8();
          FUN_002b8cc8();
          temp_v6 = 4;
        }
        param_1[2] = temp_v6;
        FUN_002328b4();
      }
      else {
        FUN_002b8cc8();
        FUN_002b8cc8();
        param_1[2] = 3;
      }
    }
    temp_v5 = FUN_002762e0();
    if (temp_v5 != 0) {
      FUN_002b8cc8();
      FUN_002b8cc8();
      FUN_00232848();
      param_1[2] = 3;
    }
    else if (param_1[0x575a] != temp_v1) {
      param_1[0x575a] = temp_v1;
      param_1[0x21a] = 0;
      FUN_002b8cc8();
      FUN_002b8cc8();
      temp_v5 = FUN_00240d5c(param_1 + param_1[0x218] * 0x1d + 0x220);
      temp_v6 = *puVar9;
      if (temp_v6 == 7 || temp_v6 == 8) {
        temp_v1 = temp_v5 + 1;
      }
      else {
        temp_v1 = temp_v5 + 2;
      }
      temp_v5 = FUN_0023360c(param_1 + temp_v6 * 0x1d + 0x220);
      puVar5 = (unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      if (*puVar9 != 8) {
        temp_v4 = FUN_00230e04(puVar5);
        temp_v6 = FUN_00230c1c(*puVar5,temp_v4);
      }
      else {
        temp_v6 = FUN_0028fb3c(*puVar5);
        if ((int)temp_v6 < 0) {
          temp_v6 = 0;
        }
        else if ((int)temp_v6 >= 100) {
          temp_v6 = 99;
        }
        temp_v5 = FUN_00230b90(param_1,*puVar5);
        if (temp_v5 != 0) {
          temp_v6 = temp_v6 - 1;
        }
      }
      param_1[0x21a] = (unsigned int)(temp_v6 != 0);
      param_1[0x21b] = temp_v6;
      param_1[0x21c] = 0;
      param_1[0x21d] = temp_v1;
      FUN_0022e538(param_1 + 0x21a);
    }
    temp_v6 = param_1[0x218];
    if (((temp_v6 < 2) || (temp_v6 == 2 || temp_v6 == 3)) || ((temp_v6 == 4 || temp_v6 == 5) || temp_v6 == 6)) {
      FUN_0022f834(param_1);
      temp_v7 = *(char *)((int)param_1 + 0x1f) == '\0';
    }
    break;
  case 3:
    if ((*param_1 & 0x1000) != 0) {
      FUN_00233344(param_1 + 0xea,7);
      temp_v4 = FUN_002bed98(param_1 + 0x1e7);
      temp_v2 = FUN_002beda4(param_1 + 0x1e7);
      FUN_00231240(param_1 + 0xe5,temp_v2,temp_v4);
      if (*(char *)((int)param_1 + 0x826) == '\0') break;
    }
    param_1[0x575a] = 0xffffffff;
    FUN_002305fc(param_1);
    if (param_1[1] == 0xb) {
      FUN_00297050(0);
    }
    *param_1 = *param_1 & 0xffffefff;
    if (param_1[0x218] != 8) {
      if (param_1[0x218] == 7) {
        temp_v6 = 6;
      }
      else {
        temp_v6 = 5;
      }
      param_1[1] = temp_v6;
      param_1[2] = 0;
    }
    else {
      param_1[1] = 7;
      param_1[2] = 0;
    }
    break;
  case 4:
    temp_v5 = FUN_002a0ce8();
    if (temp_v5 == 0) break;
    temp_v6 = 5;
    param_1[2] = temp_v6;
    break;
  case 5:
    temp_v6 = param_1[0x218];
    temp_v5 = FUN_0023360c(param_1 + temp_v6 * 0x1d + 0x220);
    temp_v0 = *(unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
    temp_v6 = param_1[0x218];
    temp_v5 = FUN_0023360c(param_1 + temp_v6 * 0x1d + 0x220);
    if (param_1[0x218] != 8) {
      temp_v5 = FUN_00230e04();
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    else {
      temp_v5 = FUN_00246570((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    temp_v4 = FUN_00230c80(temp_v0,1);
    FUN_00295660(0,temp_v4);
    FUN_0029ede8(0x18,param_1[0x21a],0xffffffff,0);
    FUN_0029ede8(0x19,temp_v5,0xffffffff,0);
    if (param_1[0x218] != 8) {
      temp_v4 = FUN_00290d74(param_1[0x58],&LAB_003a54c0);
      FUN_00296f4c(param_1[0x5a],temp_v4);
    }
    else {
      temp_v4 = FUN_00290d74(param_1[0x58],&LAB_003a54d0);
      FUN_00296f4c(param_1[0x5a],temp_v4);
    }
    FUN_0023553c(1);
    temp_v5 = FUN_0022e520();
    if (temp_v5 != 0) {
      FUN_0022e500(1);
    }
    temp_v6 = 6;
    param_1[2] = temp_v6;
    break;
  case 6:
    temp_v5 = FUN_0019e0c0(param_1[0x5a]);
    if (temp_v5 != 2) break;
    temp_v5 = FUN_002973d8();
    if (temp_v5 == 0) {
      param_1[2] = 7;
      FUN_002b8838(0x76);
      break;
    }
    temp_v5 = FUN_0022e520();
    if (temp_v5 != 0) {
      FUN_0022e500(0);
    }
    FUN_0022e538(param_1 + 0x21a);
    param_1[2] = 2;
    FUN_002b8838(0x85);
    temp_v6 = param_1[0x218];
    if (temp_v6 == 8) {
      FUN_00297050(0);
      temp_v4 = FUN_00290d74(param_1[0x58],&LAB_003a5754);
      FUN_00296f4c(param_1[0x5a],temp_v4);
      FUN_0019e0c0(param_1[0x5a]);
      break;
    }
joined_r0x003a5580:
    if (temp_v6 != 7) break;
    temp_v4 = FUN_00290d74(param_1[0x58],&LAB_003a54e4);
    FUN_00296f4c(param_1[0x5a],temp_v4);
    FUN_0019e0c0(param_1[0x5a]);
    break;
  case 7:
    temp_v6 = param_1[0x218];
    temp_v5 = FUN_0023360c(param_1 + temp_v6 * 0x1d + 0x220);
    if (param_1[0x218] != 8) {
      temp_v5 = FUN_00230e04();
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    else {
      temp_v5 = FUN_00246570((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    temp_v3 = -temp_v5;
    if (param_1[0x218] == 8) {
      temp_v3 = temp_v5;
    }
    FUN_0029c43c(temp_v3,0);
    param_1[2] = 8;
    temp_v4 = FUN_00290d74(param_1[0x58],&LAB_003a54f4);
    FUN_00296f4c(param_1[0x5a],temp_v4);
    FUN_0019e0c0(param_1[0x5a]);
    param_1[3] = 0;
    break;
  case 8:
    param_1[3] = param_1[3] + 1;
    FUN_0019e0c0(param_1[0x5a]);
    if ((*param_1 & 0x1000) != 0) {
      FUN_00233344(param_1 + 0xea,7);
      temp_v4 = FUN_002bed98(param_1 + 0x1e7);
      temp_v2 = FUN_002beda4(param_1 + 0x1e7);
      FUN_00231240(param_1 + 0xe5,temp_v2,temp_v4);
      if (*(char *)((int)param_1 + 0x826) != '\0') {
        *param_1 = *param_1 & 0xffffefff;
      }
    }
    temp_v5 = FUN_0029c3ec();
    if ((temp_v5 == 1) && ((int)param_1[3] >= 0x1e)) {
      temp_v6 = param_1[0x218];
      temp_v5 = FUN_0023360c(param_1 + temp_v6 * 0x1d + 0x220);
      puVar5 = (unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      temp_v6 = param_1[0x21a];
      if (param_1[0x218] == 8) {
        temp_v6 = -temp_v6;
      }
      FUN_002306f8(puVar5,temp_v6,1);
      param_1[2] = 9;
      if ((param_1[0x218] == 8) && (temp_v5 = FUN_0028e9d0(*puVar5), temp_v5 == 0)) {
        temp_v6 = param_1[0x218];
        puVar9 = param_1 + temp_v6 * 0x1d + 0x220;
        temp_v3 = FUN_00240d5c(puVar9);
        temp_v5 = FUN_0029e924(puVar9);
        FUN_0022fcb8(param_1,0);
        if (temp_v5 >= 1) {
          temp_v5 = temp_v5 - 1;
        }
        else if ((temp_v3 != 0) && ((int)param_1[temp_v6 * 0x1d + 0x222] <= temp_v3 + temp_v5)) {
          temp_v3 = temp_v3 - 1;
        }
        FUN_0022e4a4(puVar9,temp_v5,temp_v3);
      }
    }
    break;
  case 9:
    temp_v5 = FUN_0019e0c0(param_1[0x5a]);
    if (temp_v5 != 2) break;
    temp_v6 = param_1[0x218];
    if ((temp_v6 != 7) && (temp_v6 != 8)) {
      temp_v5 = FUN_0023360c(param_1 + temp_v6 * 0x1d + 0x220);
      temp_v5 = FUN_00230b90(param_1,*(unsigned short *)
                                    ((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94));
      if (temp_v5 == 0) {
        temp_v4 = FUN_00290d74(param_1[0x58],&LAB_003a5744);
        FUN_00296f4c(param_1[0x5a],temp_v4);
        FUN_0023553c(1);
        temp_v6 = 10;
        param_1[2] = temp_v6;
        break;
      }
    }
    temp_v6 = param_1[0x218];
    param_1[2] = 3;
    if (temp_v6 != 8) goto joined_r0x003a5580;
    temp_v4 = FUN_00290d74(param_1[0x58],&LAB_003a5754);
    FUN_00296f4c(param_1[0x5a],temp_v4);
    FUN_0019e0c0(param_1[0x5a]);
    break;
  case 10:
    temp_v5 = FUN_0019e0c0(param_1[0x5a]);
    if (temp_v5 != 2) break;
    temp_v5 = FUN_002973d8();
    if (temp_v5 == 0) {
      temp_v6 = param_1[0x218];
      temp_v5 = FUN_0023360c(param_1 + temp_v6 * 0x1d + 0x220);
      temp_v0 = *(unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      puVar5 = (unsigned short *)FUN_002b63ac();
      temp_v4 = FUN_002ae3c0(temp_v0);
      switch(temp_v4) {
      case 2:
        *puVar5 = temp_v0;
        break;
      case 3:
        puVar5[1] = temp_v0;
        break;
      case 4:
        puVar5[3] = temp_v0;
        break;
      case 5:
        puVar5[4] = temp_v0;
        break;
      case 6:
        puVar5[5] = temp_v0;
        break;
      case 7:
        puVar5[6] = temp_v0;
        break;
      case 8:
        puVar5[2] = temp_v0;
      }
      FUN_00299370(0);
      FUN_0029a0e8(puVar5);
      FUN_0029a0cc(puVar5);
      FUN_002bf810(0x100025f);
    }
    temp_v5 = FUN_0022e520();
    if (temp_v5 != 0) {
      FUN_0022e500(0);
    }
    temp_v6 = 3;
    param_1[2] = temp_v6;
  }
  temp_v5 = FUN_0022e520();
  if (((temp_v5 != 0) && (temp_v5 = FUN_00299fc0(), temp_v5 != 0)) &&
     ((*(char *)((int)param_1 + 0x1f) == '\0' && (!temp_v7)))) {
    FUN_002996d8(1);
    *(unsigned char *)((int)param_1 + 0x1f) = 1;
  }
  return;
}

} /* extern "C" */
