/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a4c7c` (_code @ 0x3a4c7c, 0xce4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_003a56dc; /* 0x3a56dc */
extern unsigned char LAB_003a56ec; /* 0x3a56ec */
extern unsigned char LAB_003a5700; /* 0x3a5700 */
extern unsigned char LAB_003a5710; /* 0x3a5710 */
extern unsigned char LAB_003a5960; /* 0x3a5960 */
extern unsigned char LAB_003a5970; /* 0x3a5970 */

/* Supplied declaration required: FUN_0019dfbc. */
/* Supplied declaration required: FUN_0022e638. */
/* Supplied declaration required: FUN_0022e694. */
extern int FUN_0022e6b4(void);
/* Supplied declaration required: FUN_0022e6cc. */
/* Supplied declaration required: FUN_0022f9c8. */
/* Supplied declaration required: FUN_0022fe4c. */
/* Supplied declaration required: FUN_00230790. */
/* Supplied declaration required: FUN_0023088c. */
/* Supplied declaration required: FUN_00230ae8. */
extern int FUN_00230d24(unsigned int *, unsigned short);
extern unsigned int FUN_00230db0(unsigned short, unsigned int);
extern unsigned int FUN_00230e14(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00230f98. */
/* Supplied declaration required: FUN_002313d4. */
/* Supplied declaration required: FUN_00232800. */
/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_00232a48. */
/* Supplied declaration required: FUN_002333d4. */
/* Supplied declaration required: FUN_002334d8. */
/* Supplied declaration required: FUN_002337a0. */
/* Supplied declaration required: FUN_002356d4. */
extern int FUN_00240e8c(unsigned int *);
extern int FUN_002466dc(int);
extern int FUN_00276550(void);
extern int FUN_0027f10c(void);
extern int FUN_0028ec74(unsigned short);
extern unsigned int FUN_0028fde0(unsigned short);
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002923d0. */
/* Supplied declaration required: FUN_00293a6c. */
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972e8. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029960c. */
/* Supplied declaration required: FUN_00299974. */
extern int FUN_0029a25c(void);
/* Supplied declaration required: FUN_0029a368. */
/* Supplied declaration required: FUN_0029a384. */
extern int FUN_0029c68c(void);
/* Supplied declaration required: FUN_0029c6dc. */
/* Supplied declaration required: FUN_0029e8c0. */
extern int FUN_0029ebc4(unsigned int *);
/* Supplied declaration required: FUN_0029f088. */
extern int FUN_002a0f88(void);
extern unsigned int FUN_002ae64c(unsigned short);
extern unsigned short *FUN_002b66ec(void);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b9008. */
extern unsigned int FUN_002bef70(unsigned int *);
extern unsigned int FUN_002bef7c(unsigned int *);
/* Supplied declaration required: FUN_002bf9e8. */
/* Supplied declaration required: FUN_003a0080. */


void FUN_003a4c7c(unsigned int *param_1)

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
  FUN_002334d8(param_1 + 0xea,2);
  FUN_002334d8(param_1 + 0xea,3);
  switch(param_1[2]) {
  case 0:
    *param_1 = *param_1 | 0x1000;
    FUN_002333d4(param_1 + 0xea,6);
    FUN_002333d4(param_1 + 0xea,7);
    FUN_00232800(param_1 + 0xe5,0x140,0,0x2b);
    param_1[2] = 1;
    FUN_002b8b78(0x85);
    param_1[0x575a] = 0xffffffff;
    temp_v6 = FUN_002337a0(param_1 + param_1[0x218] * 0x1d + 0x220);
    param_1[0x575a] = temp_v6;
    break;
  case 1:
    FUN_002334d8(param_1 + 0xea,6);
    temp_v4 = FUN_002bef70(param_1 + 0x1c4);
    temp_v2 = FUN_002bef7c(param_1 + 0x1c4);
    FUN_002313d4(param_1 + 0xe5,temp_v2,temp_v4);
    if (*(char *)((int)param_1 + 0x79a) != '\0') {
      FUN_0022e6cc(param_1 + 0x21a);
      param_1[2] = 2;
      temp_v6 = param_1[0x218];
      temp_v5 = FUN_002337a0(param_1 + temp_v6 * 0x1d + 0x220);
      if (param_1[0x218] != 8) {
        temp_v5 = FUN_00230f98();
        temp_v5 = temp_v5 * param_1[0x21a];
      }
      else {
        temp_v5 = FUN_002466dc((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
        temp_v5 = temp_v5 * param_1[0x21a];
      }
      if (param_1[0x218] != 8) {
        temp_v5 = -temp_v5;
      }
      FUN_0029e8c0(temp_v5,0);
    }
    break;
  case 2:
    FUN_003a0080();
    puVar9 = param_1 + 0x218;
    puVar10 = param_1 + param_1[0x218] * 0x1d + 0x220;
    temp_v6 = FUN_002337a0(puVar10);
    FUN_00230ae8(param_1 + 0x20a,puVar10);
    (**(romwright_code **)(*(int *)param_1[0x217] + 0xc))((int *)param_1[0x217],puVar10);
    FUN_002334d8(param_1 + 0xea,2);
    FUN_002334d8(param_1 + 0xea,3);
    temp_v1 = FUN_002337a0(puVar10);
    if (temp_v6 == temp_v1) {
      FUN_00293a6c(puVar10);
    }
    temp_v6 = param_1[0x218];
    temp_v5 = FUN_002337a0(param_1 + temp_v6 * 0x1d + 0x220);
    FUN_002923d0(*(unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94));
    temp_v6 = param_1[0x218];
    temp_v5 = FUN_002337a0(param_1 + temp_v6 * 0x1d + 0x220);
    if (*puVar9 != 8) {
      temp_v5 = FUN_00230f98();
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    else {
      temp_v5 = FUN_002466dc((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    if (param_1[0x218] != 8) {
      temp_v5 = -temp_v5;
    }
    FUN_0029e8c0(temp_v5,0);
    temp_v5 = FUN_0027f10c();
    if ((temp_v5 != 0) && (param_1[0x575a] == temp_v1)) {
      if ((int)param_1[0x21a] >= 1) {
        if (!(param_1[0x218] == 7 || param_1[0x218] == 8)) {
          FUN_002b9008();
          FUN_002b9008();
          temp_v6 = 5;
        }
        else {
          FUN_00297128();
          if (param_1[1] == 0xb) {
            FUN_002972e8(1);
          }
          FUN_002b9008();
          FUN_002b9008();
          temp_v6 = 4;
        }
        param_1[2] = temp_v6;
        FUN_00232a48();
      }
      else {
        FUN_002b9008();
        FUN_002b9008();
        param_1[2] = 3;
      }
    }
    temp_v5 = FUN_00276550();
    if (temp_v5 != 0) {
      FUN_002b9008();
      FUN_002b9008();
      FUN_002329dc();
      param_1[2] = 3;
    }
    else if (param_1[0x575a] != temp_v1) {
      param_1[0x575a] = temp_v1;
      param_1[0x21a] = 0;
      FUN_002b9008();
      FUN_002b9008();
      temp_v5 = FUN_00240e8c(param_1 + param_1[0x218] * 0x1d + 0x220);
      temp_v6 = *puVar9;
      if (temp_v6 == 7 || temp_v6 == 8) {
        temp_v1 = temp_v5 + 1;
      }
      else {
        temp_v1 = temp_v5 + 2;
      }
      temp_v5 = FUN_002337a0(param_1 + temp_v6 * 0x1d + 0x220);
      puVar5 = (unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      if (*puVar9 != 8) {
        temp_v4 = FUN_00230f98(puVar5);
        temp_v6 = FUN_00230db0(*puVar5,temp_v4);
      }
      else {
        temp_v6 = FUN_0028fde0(*puVar5);
        if ((int)temp_v6 < 0) {
          temp_v6 = 0;
        }
        else if ((int)temp_v6 >= 100) {
          temp_v6 = 99;
        }
        temp_v5 = FUN_00230d24(param_1,*puVar5);
        if (temp_v5 != 0) {
          temp_v6 = temp_v6 - 1;
        }
      }
      param_1[0x21a] = (unsigned int)(temp_v6 != 0);
      param_1[0x21b] = temp_v6;
      param_1[0x21c] = 0;
      param_1[0x21d] = temp_v1;
      FUN_0022e6cc(param_1 + 0x21a);
    }
    temp_v6 = param_1[0x218];
    if (((temp_v6 < 2) || (temp_v6 == 2 || temp_v6 == 3)) || ((temp_v6 == 4 || temp_v6 == 5) || temp_v6 == 6)) {
      FUN_0022f9c8(param_1);
      temp_v7 = *(char *)((int)param_1 + 0x1f) == '\0';
    }
    break;
  case 3:
    if ((*param_1 & 0x1000) != 0) {
      FUN_002334d8(param_1 + 0xea,7);
      temp_v4 = FUN_002bef70(param_1 + 0x1e7);
      temp_v2 = FUN_002bef7c(param_1 + 0x1e7);
      FUN_002313d4(param_1 + 0xe5,temp_v2,temp_v4);
      if (*(char *)((int)param_1 + 0x826) == '\0') break;
    }
    param_1[0x575a] = 0xffffffff;
    FUN_00230790(param_1);
    if (param_1[1] == 0xb) {
      FUN_002972e8(0);
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
    temp_v5 = FUN_002a0f88();
    if (temp_v5 == 0) break;
    temp_v6 = 5;
    param_1[2] = temp_v6;
    break;
  case 5:
    temp_v6 = param_1[0x218];
    temp_v5 = FUN_002337a0(param_1 + temp_v6 * 0x1d + 0x220);
    temp_v0 = *(unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
    temp_v6 = param_1[0x218];
    temp_v5 = FUN_002337a0(param_1 + temp_v6 * 0x1d + 0x220);
    if (param_1[0x218] != 8) {
      temp_v5 = FUN_00230f98();
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    else {
      temp_v5 = FUN_002466dc((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    temp_v4 = FUN_00230e14(temp_v0,1);
    FUN_00295904(0,temp_v4);
    FUN_0029f088(0x18,param_1[0x21a],0xffffffff,0);
    FUN_0029f088(0x19,temp_v5,0xffffffff,0);
    if (param_1[0x218] != 8) {
      temp_v4 = FUN_00291018(param_1[0x58],&LAB_003a56dc);
      FUN_002971e4(param_1[0x5a],temp_v4);
    }
    else {
      temp_v4 = FUN_00291018(param_1[0x58],&LAB_003a56ec);
      FUN_002971e4(param_1[0x5a],temp_v4);
    }
    FUN_002356d4(1);
    temp_v5 = FUN_0022e6b4();
    if (temp_v5 != 0) {
      FUN_0022e694(1);
    }
    temp_v6 = 6;
    param_1[2] = temp_v6;
    break;
  case 6:
    temp_v5 = FUN_0019dfbc(param_1[0x5a]);
    if (temp_v5 != 2) break;
    temp_v5 = FUN_00297674();
    if (temp_v5 == 0) {
      param_1[2] = 7;
      FUN_002b8b78(0x76);
      break;
    }
    temp_v5 = FUN_0022e6b4();
    if (temp_v5 != 0) {
      FUN_0022e694(0);
    }
    FUN_0022e6cc(param_1 + 0x21a);
    param_1[2] = 2;
    FUN_002b8b78(0x85);
    temp_v6 = param_1[0x218];
    if (temp_v6 == 8) {
      FUN_002972e8(0);
      temp_v4 = FUN_00291018(param_1[0x58],&LAB_003a5970);
      FUN_002971e4(param_1[0x5a],temp_v4);
      FUN_0019dfbc(param_1[0x5a]);
      break;
    }
joined_r0x003a579c:
    if (temp_v6 != 7) break;
    temp_v4 = FUN_00291018(param_1[0x58],&LAB_003a5700);
    FUN_002971e4(param_1[0x5a],temp_v4);
    FUN_0019dfbc(param_1[0x5a]);
    break;
  case 7:
    temp_v6 = param_1[0x218];
    temp_v5 = FUN_002337a0(param_1 + temp_v6 * 0x1d + 0x220);
    if (param_1[0x218] != 8) {
      temp_v5 = FUN_00230f98();
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    else {
      temp_v5 = FUN_002466dc((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      temp_v5 = temp_v5 * param_1[0x21a];
    }
    temp_v3 = -temp_v5;
    if (param_1[0x218] == 8) {
      temp_v3 = temp_v5;
    }
    FUN_0029c6dc(temp_v3,0);
    param_1[2] = 8;
    temp_v4 = FUN_00291018(param_1[0x58],&LAB_003a5710);
    FUN_002971e4(param_1[0x5a],temp_v4);
    FUN_0019dfbc(param_1[0x5a]);
    param_1[3] = 0;
    break;
  case 8:
    param_1[3] = param_1[3] + 1;
    FUN_0019dfbc(param_1[0x5a]);
    if ((*param_1 & 0x1000) != 0) {
      FUN_002334d8(param_1 + 0xea,7);
      temp_v4 = FUN_002bef70(param_1 + 0x1e7);
      temp_v2 = FUN_002bef7c(param_1 + 0x1e7);
      FUN_002313d4(param_1 + 0xe5,temp_v2,temp_v4);
      if (*(char *)((int)param_1 + 0x826) != '\0') {
        *param_1 = *param_1 & 0xffffefff;
      }
    }
    temp_v5 = FUN_0029c68c();
    if ((temp_v5 == 1) && ((int)param_1[3] >= 0x1e)) {
      temp_v6 = param_1[0x218];
      temp_v5 = FUN_002337a0(param_1 + temp_v6 * 0x1d + 0x220);
      puVar5 = (unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      temp_v6 = param_1[0x21a];
      if (param_1[0x218] == 8) {
        temp_v6 = -temp_v6;
      }
      FUN_0023088c(puVar5,temp_v6,1);
      param_1[2] = 9;
      if ((param_1[0x218] == 8) && (temp_v5 = FUN_0028ec74(*puVar5), temp_v5 == 0)) {
        temp_v6 = param_1[0x218];
        puVar9 = param_1 + temp_v6 * 0x1d + 0x220;
        temp_v3 = FUN_00240e8c(puVar9);
        temp_v5 = FUN_0029ebc4(puVar9);
        FUN_0022fe4c(param_1,0);
        if (temp_v5 >= 1) {
          temp_v5 = temp_v5 - 1;
        }
        else if ((temp_v3 != 0) && ((int)param_1[temp_v6 * 0x1d + 0x222] <= temp_v3 + temp_v5)) {
          temp_v3 = temp_v3 - 1;
        }
        FUN_0022e638(puVar9,temp_v5,temp_v3);
      }
    }
    break;
  case 9:
    temp_v5 = FUN_0019dfbc(param_1[0x5a]);
    if (temp_v5 != 2) break;
    temp_v6 = param_1[0x218];
    if ((temp_v6 != 7) && (temp_v6 != 8)) {
      temp_v5 = FUN_002337a0(param_1 + temp_v6 * 0x1d + 0x220);
      temp_v5 = FUN_00230d24(param_1,*(unsigned short *)
                                    ((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94));
      if (temp_v5 == 0) {
        temp_v4 = FUN_00291018(param_1[0x58],&LAB_003a5960);
        FUN_002971e4(param_1[0x5a],temp_v4);
        FUN_002356d4(1);
        temp_v6 = 10;
        param_1[2] = temp_v6;
        break;
      }
    }
    temp_v6 = param_1[0x218];
    param_1[2] = 3;
    if (temp_v6 != 8) goto joined_r0x003a579c;
    temp_v4 = FUN_00291018(param_1[0x58],&LAB_003a5970);
    FUN_002971e4(param_1[0x5a],temp_v4);
    FUN_0019dfbc(param_1[0x5a]);
    break;
  case 10:
    temp_v5 = FUN_0019dfbc(param_1[0x5a]);
    if (temp_v5 != 2) break;
    temp_v5 = FUN_00297674();
    if (temp_v5 == 0) {
      temp_v6 = param_1[0x218];
      temp_v5 = FUN_002337a0(param_1 + temp_v6 * 0x1d + 0x220);
      temp_v0 = *(unsigned short *)((int)param_1 + temp_v5 * 4 + temp_v6 * 0x1002 + 0xc94);
      puVar5 = (unsigned short *)FUN_002b66ec();
      temp_v4 = FUN_002ae64c(temp_v0);
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
      FUN_0029960c(0);
      FUN_0029a384(puVar5);
      FUN_0029a368(puVar5);
      FUN_002bf9e8(0x100025f);
    }
    temp_v5 = FUN_0022e6b4();
    if (temp_v5 != 0) {
      FUN_0022e694(0);
    }
    temp_v6 = 3;
    param_1[2] = temp_v6;
  }
  temp_v5 = FUN_0022e6b4();
  if (((temp_v5 != 0) && (temp_v5 = FUN_0029a25c(), temp_v5 != 0)) &&
     ((*(char *)((int)param_1 + 0x1f) == '\0' && (!temp_v7)))) {
    FUN_00299974(1);
    *(unsigned char *)((int)param_1 + 0x1f) = 1;
  }
  return;
}
