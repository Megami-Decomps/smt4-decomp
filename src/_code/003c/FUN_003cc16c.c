/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cc16c` (_code @ 0x3cc16c, 0x9dc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 7 slot(s), 25 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
} param_2_stack;

extern int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */
extern unsigned int DAT_00439cf8; /* 0x439cf8 */

/* Supplied declaration required: FUN_0022922c. */
/* Supplied declaration required: FUN_002292ac. */
/* Supplied declaration required: FUN_00229870. */
/* Supplied declaration required: FUN_00229b2c. */
/* Supplied declaration required: FUN_00229bb8. */
/* Supplied declaration required: FUN_00229ca4. */
/* Supplied declaration required: FUN_00246e5c. */
/* Supplied declaration required: FUN_002475e4. */
/* Supplied declaration required: FUN_0027dca0. */
extern int FUN_0027e584(unsigned int);
/* Supplied declaration required: FUN_00282b94. */
extern int FUN_0028d498(int);
/* Supplied declaration required: FUN_0029c0fc. */
extern int FUN_0029e2cc(void);
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002bf9e4. */
extern int FUN_002bffbc(unsigned int);
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_003ae828(unsigned int, unsigned int);
extern unsigned int FUN_003af274(unsigned int);
/* Supplied declaration required: FUN_003af28c. */
/* Supplied declaration required: FUN_003d0910. */
/* Supplied declaration required: FUN_003d11f8. */
/* Supplied declaration required: FUN_003d2058. */
/* Supplied declaration required: FUN_003ddc4c. */


int FUN_003cc16c(int *param_1,unsigned int *param_2)

{
/* irregular: 20 native warning(s); review required */
  unsigned char *pbVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *temp_v5;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int temp_v6;
  unsigned int *puVar10;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13 [28];
  unsigned char temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  
  temp_v0 = *(unsigned int *)(*param_1 + 0x44a0);
  if ((temp_v0 & 0x40) != 0) {
    if ((*param_2 & 0x80) == 0) {
      *param_2 = *param_2 | 0x880;
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 1;
      FUN_00229870(DAT_00439ca8);
      return 1;
    }
  }
  else if (((temp_v0 & 0x100) != 0) && ((*param_2 & 0x1000) == 0)) {
    *param_2 = *param_2 | 0x1800;
    *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 1;
    FUN_00229870(DAT_00439ca8);
    return 1;
  }
  if ((temp_v0 & 0x800) != 0) {
    return 0;
  }
  temp_v9 = 0;
  temp_v1 = (int)*(short *)(param_2[10] + 0x14e);
  temp_v15 = (int)*(short *)(param_2[10] + 0x14c);
  temp_v16 = temp_v1;
  FUN_002ae3f0();
  temp_v17 = temp_v1;
  FUN_002475e4(temp_v13,*param_1,param_2[8]);
  temp_v18 = (unsigned int)temp_v14;
  if ((*param_2 & 0x1080) == 0) {
    if (temp_v18 == 1) {
      temp_v2 = 0x6d;
      temp_v1 = 0;
      do {
        if (*(char *)((int)param_2 + temp_v1 + 0xbd) != '\0') {
          *(unsigned char *)((int)param_2 + temp_v1 + 0x38) = 1;
        }
        temp_v2 = temp_v2 - 1;
        temp_v1 = temp_v1 + 1;
      } while (temp_v2 != 0);
      FUN_002292ac(param_1,1,0xffffffff,param_2);
    }
    else if (temp_v18 != 0) {
      temp_v0 = 0;
      do {
        temp_v3 = *(unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v0 * 0x288);
        if (((temp_v3 & 1) != 0) && ((temp_v3 & 0x40) == 0)) {
          *(unsigned char *)((int)param_2 + temp_v0 + 0x38) = 1;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x6d);
      FUN_002292ac(param_1,1,0xffffffff,param_2);
    }
    else {
      FUN_003d2058(param_1,param_2);
      FUN_002292ac(param_1,1,param_2[0x169],param_2);
    }
    temp_v1 = 0;
    temp_v2 = 0x6d;
    do {
      temp_v7 = temp_v1 * 0x114 + 0x50;
      temp_v4 = *(int *)(*param_1 + 0x1e98);
      temp_v0 = *(unsigned int *)(temp_v4 + temp_v7);
      if ((((temp_v0 & 8) == 0) && (temp_v6 = (int)*(short *)(temp_v4 + temp_v1 * 0x114 + 0x60), -1 < temp_v6)
          ) && (*(char *)((int)param_2 + temp_v6 + 0x38) != '\0')) {
        *(unsigned int *)(temp_v4 + temp_v7) = temp_v0 | 8;
      }
      temp_v2 = temp_v2 - 1;
      temp_v1 = temp_v1 + 1;
    } while (temp_v2 != 0);
    if ((temp_v18 == 0) && (temp_v0 = FUN_003af274(DAT_00439ca8), -1 < (int)temp_v0)) {
      temp_v2 = 0x6d;
      temp_v1 = 0;
      do {
        temp_v4 = temp_v1 * 0x114 + 0x50;
        temp_v2 = temp_v2 - 1;
        *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v4) =
             *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v4) & 0xfffffff7;
        *(unsigned char *)((int)param_2 + temp_v1 + 0x38) = 0;
        temp_v1 = temp_v1 + 1;
      } while (temp_v2 != 0);
      temp_v3 = 0xffffffff;
      temp_v1 = 0;
      do {
        if (param_2[temp_v1 + 0x51] == temp_v0) {
          temp_v3 = param_2[temp_v1 + 0xd6];
          break;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x85);
      temp_v1 = 0;
      do {
        if ((int)*(short *)(*(int *)(*param_1 + 0x1fc0) + temp_v1 * 0x288 + 0x6e) == temp_v3) {
          temp_v2 = 0;
          do {
            temp_v4 = *(int *)(*param_1 + 0x1e98) + temp_v2 * 0x114;
            if ((int)*(short *)(temp_v4 + 0x60) == temp_v3) {
              *(unsigned int *)(temp_v4 + 0x50) = *(unsigned int *)(temp_v4 + 0x50) | 8;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x6d);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x6d);
      if (-1 < (int)temp_v3) {
        param_2[0x169] = temp_v3;
        *(unsigned char *)((int)param_2 + temp_v3 + 0x38) = 1;
      }
    }
    else {
      FUN_002c4b30(&temp_v11,0x88);
      temp_v0 = 0;
      temp_v3 = 0;
      temp_v1 = 0;
      do {
        temp_v4 = *param_1;
        temp_v2 = *(int *)(temp_v4 + 0x1e98) + temp_v1 * 0x114;
        puVar8 = *(unsigned int **)(temp_v2 + 0x50);
        if ((((unsigned int)puVar8 & 8) != 0) &&
           (FUN_00282b94(temp_v4,(int)*(short *)(temp_v2 + 0x62)), puVar8 = temp_v5, temp_v4 != 0)) {
          temp_v2 = 0x85;
          puVar10 = param_2 + 0x51;
          pbVar1 = (unsigned char *)&temp_v11;
          puVar7 = param_2 + 0xd6;
          do {
            puVar8 = puVar7 + 1;
            temp_v8 = *puVar7;
            temp_v10 = temp_v8 == (int)*(short *)(temp_v4 + 0x6e);
            if (temp_v10) {
              temp_v8 = (unsigned int)*pbVar1;
            }
            if (temp_v10 && temp_v8 == 0) {
              temp_v8 = *puVar10;
              *pbVar1 = 1;
              temp_v8 = 1 << (temp_v8 & 0xff);
              temp_v0 = temp_v0 | temp_v8;
              temp_v3 = temp_v3 | ((int)temp_v8 >> 0x1f);
            }
            temp_v2 = temp_v2 - 1;
            pbVar1 = pbVar1 + 1;
            puVar10 = puVar10 + 1;
            puVar7 = puVar8;
          } while (temp_v2 != 0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x6d);
      FUN_003af28c(DAT_00439ca8,puVar8,temp_v0,temp_v3);
    }
  }
  temp_v10 = 0;
  if ((*param_2 & 0x80) != 0) {
    FUN_0022922c(param_1);
    temp_v1 = 0;
    do {
      puVar8 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v1 * 0x288);
      if ((((-1 < *(short *)((int)puVar8 + 0x6e)) && (temp_v0 = *puVar8, (temp_v0 & 1) != 0)) &&
          ((temp_v0 & 0x40) == 0)) && ((temp_v0 & 0x10) != 0)) {
        *puVar8 = *puVar8 | 0x400;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x6d);
    if (temp_v18 != 0) {
      FUN_003d11f8(param_1,1);
    }
    else {
      FUN_00229b2c(param_1);
    }
    temp_v1 = 0;
    temp_v9 = 0x6d;
    do {
      temp_v9 = temp_v9 - 1;
      temp_v2 = temp_v1 * 0x114 + 0x50;
      temp_v1 = temp_v1 + 1;
      temp_v0 = *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2);
      *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2) = temp_v0 & 0xfffffffb;
      *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2) = temp_v0 & 0xfffffff3;
    } while (temp_v9 != 0);
    FUN_00229ca4(param_1,param_2);
    temp_v10 = 1;
    temp_v9 = 1;
    FUN_00229bb8(DAT_00439ca8);
    FUN_002292ac(param_1,0,0xffffffff);
  }
  else if ((*param_2 & 0x1000) != 0) {
    FUN_0022922c(param_1);
    temp_v1 = 0;
    do {
      puVar8 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v1 * 0x288);
      if ((((-1 < *(short *)((int)puVar8 + 0x6e)) && (temp_v0 = *puVar8, (temp_v0 & 1) != 0)) &&
          ((temp_v0 & 0x40) == 0)) && ((temp_v0 & 0x10) != 0)) {
        *puVar8 = *puVar8 | 0x400;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x6d);
    FUN_003d0910(param_1,param_2);
    temp_v9 = 0x6d;
    temp_v1 = 0;
    do {
      temp_v9 = temp_v9 - 1;
      temp_v2 = temp_v1 * 0x114 + 0x50;
      temp_v0 = *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2);
      *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2) = temp_v0 & 0xfffffffb;
      *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2) = temp_v0 & 0xfffffff3;
      temp_v1 = temp_v1 + 1;
    } while (temp_v9 != 0);
    FUN_00229ca4(param_1,param_2);
    temp_v10 = 1;
    temp_v9 = 1;
    FUN_00229bb8(DAT_00439ca8);
    FUN_002292ac(param_1,0,0xffffffff);
  }
  else {
    temp_v1 = FUN_002bffbc(0);
    if ((temp_v1 != 0) || (temp_v1 = FUN_003ae828(DAT_00439ca8,0), temp_v1 != 0)) {
      if (temp_v15 != 0xe) {
        FUN_002bf9e4(0x100016d);
        temp_v1 = 0;
        temp_v9 = *(int *)(*param_1 + 0x1e98);
        do {
          if ((*(unsigned int *)(temp_v9 + temp_v1 * 0x114 + 0x50) & 8) != 0) {
            *(unsigned short *)(*param_1 + 0x225a) = *(unsigned short *)(temp_v9 + temp_v1 * 0x114 + 0x62);
            break;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 0x6d);
        temp_v9 = 0x6d;
        temp_v1 = 0;
        do {
          temp_v9 = temp_v9 - 1;
          temp_v2 = temp_v1 * 0x114 + 0x50;
          temp_v0 = *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2);
          *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2) = temp_v0 & 0xfffffffb;
          *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2) = temp_v0 & 0xfffffff3;
          temp_v1 = temp_v1 + 1;
        } while (temp_v9 != 0);
        if ((temp_v15 != 3) ||
           (FUN_00246e5c(*param_1,*(unsigned int *)(*param_1 + 0x49dc)),
           *(char *)(temp_v17 + 0x55) == '\0')) {
          FUN_00229ca4(param_1,param_2);
        }
        else {
          FUN_00229ca4(param_1,param_2);
          temp_v1 = FUN_0028d498(temp_v16);
          FUN_003ddc4c(1,param_2,-temp_v1);
          FUN_0029c0fc(1,temp_v1);
        }
        temp_v10 = 1;
        temp_v9 = 1;
        FUN_00229bb8(DAT_00439ca8);
        FUN_002292ac(param_1,0,0xffffffff);
      }
    }
    else {
      temp_v1 = FUN_002bffbc(1);
      if (((temp_v1 != 0) || (temp_v1 = FUN_003ae828(DAT_00439ca8,1), temp_v1 != 0)) &&
         ((temp_v1 = FUN_0029e2cc(), temp_v1 == 0 && (temp_v1 = FUN_0027e584(DAT_00439ca8), temp_v1 != 0))))
      {
        FUN_002bf9e4(0x100016e);
        temp_v10 = 1;
        temp_v9 = 0;
        temp_v1 = 0x6d;
        do {
          temp_v1 = temp_v1 - 1;
          temp_v2 = temp_v9 * 0x114 + 0x50;
          temp_v9 = temp_v9 + 1;
          temp_v0 = *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2);
          *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2) = temp_v0 & 0xfffffffb;
          *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v2) = temp_v0 & 0xfffffff3;
        } while (temp_v1 != 0);
        *param_2 = *param_2 | 0x800;
        temp_v9 = 1;
        *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 1;
        FUN_002292ac(param_1,0,0xffffffff);
      }
    }
  }
  temp_v1 = 0;
  do {
    temp_v2 = *(int *)(*param_1 + 0x1e98);
    temp_v0 = *(unsigned int *)(temp_v2 + temp_v1 * 0x114 + 0x50);
    if (((temp_v0 & 1) != 0 && (temp_v0 & 2) != 0) &&
       ((*(unsigned int *)(temp_v2 + temp_v1 * 0x114 + 0xf8) & 2) == 0)) {
      if ((temp_v0 & 8) != 0) {
        *(unsigned int *)(temp_v2 + temp_v1 * 0x114 + 100) = DAT_00439cf8;
      }
      else {
        temp_v12 = temp_v1 * 0x114 + 0x68;
        temp_v11 = temp_v1 * 0x114 + 100;
        *(unsigned int *)(temp_v2 + temp_v11) = *(unsigned int *)(temp_v2 + temp_v12);
        if (temp_v9 == 0) {
          temp_v2 = *param_1;
          FUN_0027dca0(temp_v2,(int)*(short *)(*(int *)(temp_v2 + 0x1e98) + temp_v1 * 0x114 + 0x62));
          if ((temp_v2 != 0) && ((*(unsigned short *)(temp_v2 + 0xfa) & 0x10) == 0)) {
            *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v11) = 0x4c4c4cff;
            temp_v1 = temp_v1 + 1;
            if (temp_v1 >= 0x6d) {
              if (temp_v10) {
                FUN_00229870(DAT_00439ca8);
              }
              return temp_v9;
            }
            continue;
          }
        }
        *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v11) =
             *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v12);
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x6d) {
      if (temp_v10) {
        FUN_00229870(DAT_00439ca8);
      }
      return temp_v9;
    }
  } while( 1 );
}
