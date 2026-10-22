/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e15fc` (_code @ 0x4e15fc, 0x938 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(...);

int dataTable04FindById(int);
int sysMemClear(int *, int);
int FUN_003e8bb0(unsigned char [28], int, unsigned int);
int FUN_003f0e20(int, int);
int FUN_0047fa50(...);
int btlUIClearWorkTables(...);
int FUN_004aba84(unsigned int, unsigned int *, unsigned int, unsigned int);
int FUN_004abde4(...);
int FUN_004e6fb0(int *);
int FUN_004e7c04(int *, int);
int FUN_004e8454(int *);
int FUN_004e8668(int *, unsigned int *);
int btlUnitMarkTargetCandidates(int *, int);
int FUN_004eae30(...);
int FUN_004eb42c(int *, unsigned int *);
int FUN_004eb838(...);

/* stack frame of param_2: 5 slot(s), 17 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
} param_2_stack;

extern int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571218; /* 0x571218 */
extern unsigned int DAT_0057121c; /* 0x57121c */
extern unsigned int DAT_00571228; /* 0x571228 */
extern unsigned int DAT_0057122c; /* 0x57122c */
extern unsigned int DAT_00571238; /* 0x571238 */
extern unsigned int DAT_0057123c; /* 0x57123c */
extern unsigned int g_btlUiBlock; /* 0x57a9c8 */
extern unsigned int DAT_0057aa1c; /* 0x57aa1c */

/* Supplied declaration required: FUN_001568f8. */
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: dataTable04FindById. */
extern int FUN_002a7410(void);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_0047fa50. */
/* Supplied declaration required: btlUIClearWorkTables. */
extern int FUN_004aa098(unsigned int, unsigned int);
extern unsigned int FUN_004aba54(unsigned int);
/* Supplied declaration required: FUN_004aba84. */
extern int btlUiIsMenuReady(unsigned int);
/* Supplied declaration required: FUN_004abde4. */
/* Supplied declaration required: FUN_004e6fb0. */
/* Supplied declaration required: FUN_004e7c04. */
/* Supplied declaration required: FUN_004e8454. */
/* Supplied declaration required: FUN_004e8668. */
/* Supplied declaration required: btlUnitMarkTargetCandidates. */
/* Supplied declaration required: FUN_004eae30. */
/* Supplied declaration required: FUN_004eb42c. */
/* Supplied declaration required: FUN_004eb838. */


int FUN_004e15fc(int *param_1,unsigned int *param_2)

{
/* irregular: 18 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *pbVar5;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *temp_v7;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int *puVar13;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned char temp_v14;
  int temp_v15;
  int temp_v16;
  unsigned char temp_v17 [28];
  unsigned char temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  
  temp_v1 = *(unsigned int *)(*param_1 + 0x45a0);
  temp_v4 = *(unsigned int *)(*param_1 + 0x45a4);
  if (!((temp_v4 & DAT_0057121c) == 0 && (temp_v1 & DAT_00571218) == 0)) {
    if ((*param_2 & 0x80) == 0) {
      *param_2 = *param_2 | 0x880;
      *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 1;
      FUN_004abde4(g_btlUiBlock);
      return 1;
    }
  }
  else if (((DAT_00571228 & temp_v1) != 0 || (DAT_0057122c & temp_v4) != 0) &&
          ((*param_2 & 0x1000) == 0)) {
    *param_2 = *param_2 | 0x1800;
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 1;
    FUN_004abde4(g_btlUiBlock);
    return 1;
  }
  if ((temp_v1 & DAT_00571238) != 0 || (temp_v4 & DAT_0057123c) != 0) {
    return 0;
  }
  temp_v13 = 0;
  temp_v19 = (int)*(short *)(param_2[10] + 0x1be);
  dataTable04FindById((int)*(short *)(param_2[10] + 0x1c0));
  FUN_003e8bb0(temp_v17,*param_1,param_2[8]);
  temp_v0 = DAT_0057117c;
  temp_v12 = DAT_00571178;
  temp_v4 = DAT_0057114c;
  temp_v1 = DAT_00571148;
  temp_v20 = (unsigned int)temp_v18;
  if ((*param_2 & 0x1080) == 0) {
    if (temp_v20 != 1) {
      if (temp_v20 != 0) {
        temp_v2 = 0;
        do {
          puVar10 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v2 * 0x408);
          temp_v5 = *puVar10;
          temp_v8 = puVar10[1];
          if (((temp_v5 & temp_v1) != 0 || (temp_v8 & temp_v4) != 0) &&
             ((temp_v5 & temp_v12) == 0 && (temp_v8 & temp_v0) == 0)) {
            *(unsigned char *)((int)param_2 + temp_v2 + 0x38) = 1;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x6d);
        FUN_004eae30(param_1,1,0xffffffff,param_2);
      }
      else {
        FUN_004eb42c(param_1,param_2);
        FUN_004eae30(param_1,1,param_2[0x16b],param_2);
      }
    }
    else {
      temp_v11 = 0x6d;
      temp_v3 = 0;
      do {
        if (*(char *)((int)param_2 + temp_v3 + 0xbd) != '\0') {
          *(unsigned char *)((int)param_2 + temp_v3 + 0x38) = 1;
        }
        temp_v11 = temp_v11 - 1;
        temp_v3 = temp_v3 + 1;
      } while (temp_v11 != 0);
      FUN_004eae30(param_1,1,0xffffffff,param_2);
    }
    temp_v3 = 0;
    temp_v11 = 0x6d;
    do {
      temp_v10 = temp_v3 * 0x1d0 + 0x50;
      temp_v6 = *(int *)(*param_1 + 0x1ed4);
      temp_v1 = *(unsigned int *)(temp_v6 + temp_v10);
      if ((((temp_v1 & 8) == 0) &&
          (temp_v9 = (int)*(short *)(temp_v6 + temp_v3 * 0x1d0 + 0x68), -1 < temp_v9)) &&
         (*(char *)((int)param_2 + temp_v9 + 0x38) != '\0')) {
        *(unsigned int *)(temp_v6 + temp_v10) = temp_v1 | 8;
      }
      temp_v11 = temp_v11 - 1;
      temp_v3 = temp_v3 + 1;
    } while (temp_v11 != 0);
    if ((temp_v20 == 0) && (temp_v1 = FUN_004aba54(g_btlUiBlock), -1 < (int)temp_v1)) {
      temp_v11 = 0x6d;
      temp_v3 = 0;
      do {
        temp_v6 = temp_v3 * 0x1d0 + 0x50;
        temp_v11 = temp_v11 - 1;
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v6) =
             *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v6) & 0xfffffff7;
        *(unsigned char *)((int)param_2 + temp_v3 + 0x38) = 0;
        temp_v3 = temp_v3 + 1;
      } while (temp_v11 != 0);
      temp_v4 = 0xffffffff;
      temp_v3 = 0;
      do {
        if (param_2[temp_v3 + 0x51] == temp_v1) {
          temp_v4 = param_2[temp_v3 + 0xd6];
          break;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x85);
      temp_v3 = 0;
      do {
        if ((int)*(short *)(*(int *)(*param_1 + 0x1ffc) + temp_v3 * 0x408 + 0x6e) == temp_v4) {
          temp_v11 = 0;
          do {
            temp_v6 = *(int *)(*param_1 + 0x1ed4) + temp_v11 * 0x1d0;
            if ((int)*(short *)(temp_v6 + 0x68) == temp_v4) {
              *(unsigned int *)(temp_v6 + 0x50) = *(unsigned int *)(temp_v6 + 0x50) | 8;
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < 0x6d);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x6d);
      if (-1 < (int)temp_v4) {
        param_2[0x16b] = temp_v4;
        *(unsigned char *)((int)param_2 + temp_v4 + 0x38) = 1;
      }
    }
    else {
      sysMemClear(&temp_v15,0x88);
      temp_v1 = 0;
      temp_v4 = 0;
      temp_v3 = 0;
      do {
        temp_v11 = *param_1;
        puVar10 = (unsigned int *)(*(int *)(temp_v11 + 0x1ed4) + temp_v3 * 0x1d0);
        if (((puVar10[0x14] & 8) != 0) &&
           (FUN_003f0e20(temp_v11,(int)*(short *)((int)puVar10 + 0x6a)), puVar10 = temp_v7,
           temp_v11 != 0)) {
          temp_v6 = 0x85;
          puVar13 = param_2 + 0x51;
          pbVar5 = (unsigned char *)&temp_v15;
          puVar9 = param_2 + 0xd6;
          do {
            puVar10 = puVar9 + 1;
            temp_v12 = *puVar9;
            temp_v14 = temp_v12 == (int)*(short *)(temp_v11 + 0x6e);
            if (temp_v14) {
              temp_v12 = (unsigned int)*pbVar5;
            }
            if (temp_v14 && temp_v12 == 0) {
              temp_v12 = *puVar13;
              *pbVar5 = 1;
              temp_v12 = 1 << (temp_v12 & 0xff);
              temp_v1 = temp_v1 | temp_v12;
              temp_v4 = temp_v4 | ((int)temp_v12 >> 0x1f);
            }
            temp_v6 = temp_v6 - 1;
            pbVar5 = pbVar5 + 1;
            puVar13 = puVar13 + 1;
            puVar9 = puVar10;
          } while (temp_v6 != 0);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x6d);
      FUN_004aba84(g_btlUiBlock,puVar10,temp_v1,temp_v4);
    }
  }
  temp_v14 = 0;
  if ((*param_2 & 0x80) != 0) {
    FUN_004e8454(param_1);
    FUN_004e7c04(param_1,1);
    if (temp_v20 != 0) {
      btlUnitMarkTargetCandidates(param_1,1);
    }
    else {
      FUN_004e6fb0(param_1);
    }
    temp_v13 = 0;
    temp_v3 = 0x6d;
    do {
      temp_v3 = temp_v3 - 1;
      temp_v11 = temp_v13 * 0x1d0 + 0x50;
      temp_v13 = temp_v13 + 1;
      temp_v1 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11);
      *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11) = temp_v1 & 0xfffffffb;
      *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11) = temp_v1 & 0xfffffff3;
    } while (temp_v3 != 0);
    temp_v14 = 1;
    FUN_004eb838(param_1,param_2);
    temp_v13 = 1;
    btlUIClearWorkTables(g_btlUiBlock);
    FUN_004eae30(param_1,0,0xffffffff);
  }
  else if ((*param_2 & 0x1000) != 0) {
    FUN_004e8454(param_1);
    FUN_004e7c04(param_1,1);
    FUN_004e8668(param_1,param_2);
    temp_v13 = 0;
    temp_v3 = 0x6d;
    do {
      temp_v3 = temp_v3 - 1;
      temp_v11 = temp_v13 * 0x1d0 + 0x50;
      temp_v13 = temp_v13 + 1;
      temp_v1 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11);
      *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11) = temp_v1 & 0xfffffffb;
      *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11) = temp_v1 & 0xfffffff3;
    } while (temp_v3 != 0);
    temp_v14 = 1;
    FUN_004eb838(param_1,param_2);
    temp_v13 = 1;
    btlUIClearWorkTables(g_btlUiBlock);
    FUN_004eae30(param_1,0,0xffffffff);
  }
  else {
    temp_v3 = padButtonIsPressed(0);
    if ((temp_v3 != 0) || (temp_v3 = FUN_004aa098(g_btlUiBlock,0), temp_v3 != 0)) {
      if (temp_v19 != 0xe) {
        FUN_0047fa50(0x100020e);
        temp_v13 = 0;
        temp_v3 = *(int *)(*param_1 + 0x1ed4);
        do {
          if ((*(unsigned int *)(temp_v3 + temp_v13 * 0x1d0 + 0x50) & 8) != 0) {
            *(unsigned short *)(*param_1 + 0x2356) = *(unsigned short *)(temp_v3 + temp_v13 * 0x1d0 + 0x6a);
            break;
          }
          temp_v13 = temp_v13 + 1;
        } while (temp_v13 < 0x6d);
        temp_v3 = 0x6d;
        temp_v13 = 0;
        do {
          temp_v3 = temp_v3 - 1;
          temp_v11 = temp_v13 * 0x1d0 + 0x50;
          temp_v1 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11);
          *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11) = temp_v1 & 0xfffffffb;
          *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11) = temp_v1 & 0xfffffff3;
          temp_v13 = temp_v13 + 1;
        } while (temp_v3 != 0);
        temp_v14 = 1;
        FUN_004eb838(param_1,param_2);
        temp_v13 = 1;
        btlUIClearWorkTables(g_btlUiBlock);
        FUN_004eae30(param_1,0,0xffffffff);
      }
    }
    else {
      temp_v3 = padButtonIsPressed(1);
      if (((temp_v3 != 0) || (temp_v3 = FUN_004aa098(g_btlUiBlock,1), temp_v3 != 0)) &&
         ((temp_v3 = FUN_002a7410(), temp_v3 == 0 && (temp_v3 = btlUiIsMenuReady(g_btlUiBlock), temp_v3 != 0))))
      {
        FUN_0047fa50(0x100020f);
        temp_v14 = 1;
        temp_v3 = 0x6d;
        temp_v13 = 0;
        do {
          temp_v3 = temp_v3 - 1;
          temp_v11 = temp_v13 * 0x1d0 + 0x50;
          temp_v1 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11);
          *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11) = temp_v1 & 0xfffffffb;
          *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v11) = temp_v1 & 0xfffffff3;
          temp_v13 = temp_v13 + 1;
        } while (temp_v3 != 0);
        *param_2 = *param_2 | 0x800;
        temp_v13 = 1;
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 1;
        FUN_004eae30(param_1,0,0xffffffff);
      }
    }
  }
  temp_v3 = 0;
  do {
    temp_v11 = *(int *)(*param_1 + 0x1ed4);
    temp_v1 = *(unsigned int *)(temp_v11 + temp_v3 * 0x1d0 + 0x50);
    if (((temp_v1 & 1) != 0 && (temp_v1 & 2) != 0) &&
       ((*(unsigned int *)(temp_v11 + temp_v3 * 0x1d0 + 0x10c) & 2) == 0)) {
      if ((temp_v1 & 8) != 0) {
        *(unsigned int *)(temp_v11 + temp_v3 * 0x1d0 + 0x6c) = DAT_0057aa1c;
      }
      else {
        temp_v16 = temp_v3 * 0x1d0 + 0x70;
        temp_v15 = temp_v3 * 0x1d0 + 0x6c;
        *(unsigned int *)(temp_v11 + temp_v15) = *(unsigned int *)(temp_v11 + temp_v16);
        if (temp_v13 == 0) {
          temp_v11 = *param_1;
          FUN_001568f8(temp_v11,(int)*(short *)(*(int *)(temp_v11 + 0x1ed4) + temp_v3 * 0x1d0 + 0x6a));
          if ((temp_v11 != 0) && ((*(unsigned short *)(temp_v11 + 0x110) & 0x10) == 0)) {
            *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v15) = 0x4c4c4cff;
            temp_v3 = temp_v3 + 1;
            if (temp_v3 >= 0x6d) {
              if (temp_v14) {
                FUN_004abde4(g_btlUiBlock);
              }
              return temp_v13;
            }
            continue;
          }
        }
        *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v15) =
             *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v16);
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x6d) {
      if (temp_v14) {
        FUN_004abde4(g_btlUiBlock);
      }
      return temp_v13;
    }
  } while( 1 );
}

} /* extern "C" */
