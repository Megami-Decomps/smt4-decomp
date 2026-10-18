/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00522304` (_code @ 0x522304, 0x3bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_6_stack;

/* Supplied declaration required: FUN_00431400. */
extern int *FUN_00501fb4(unsigned char *, int *);
extern int *FUN_00502038(unsigned char *, short **);
/* Supplied declaration required: FUN_00522040. */
/* Supplied declaration required: FUN_00522278. */
/* Supplied declaration required: n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF. */
/* Supplied declaration required: nn_dbm_RomPathTool_GetParentDirectoryName. */
extern int *nn_dbm_RomPathTool_PathParser_GetNextDirectoryName(unsigned char *, int *);
extern int *nn_dbm_RomPathTool_PathParser_Initialize(unsigned char *, int);
extern int nn_dbm_RomPathTool_PathParser_IsDirectoryPath(unsigned char *);


int * FUN_00522304(int *param_1,int *param_2,unsigned int *param_3,int *param_4,int param_5,
                  int param_6)

{
/* irregular: 4 goto(s); 5 native warning(s); review required */
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int *piVar4;
  int *piVar5;
  int temp_v0;
  int temp_v1;
  short *psVar8;
  short *temp_v2;
  int temp_v3;
  short *temp_v4;
  short *temp_v5;
  unsigned char temp_v6 [4];
  short *temp_v7;
  unsigned int *temp_v8;
  int temp_v9;
  short *psStack_78;
  unsigned char *temp_v10;
  short **temp_v11;
  unsigned char temp_v12 [16];
  int temp_v13;
  unsigned int uStack_54;
  unsigned int uStack_50;
  int *temp_v14;
  short *temp_v15;
  int temp_v16;
  unsigned char temp_v17 [12];
  int *temp_v18;
  int *piStack_30;
  unsigned int *temp_v19;
  int *piStack_28;
  
  temp_v18 = param_1;
  piStack_30 = param_2;
  temp_v19 = param_3;
  piStack_28 = param_4;
  FUN_00431400(temp_v12);
  piVar4 = (int *)nn_dbm_RomPathTool_PathParser_Initialize(temp_v12,param_6);
  if ((int)piVar4 < 0) {
    return piVar4;
  }
  psVar8 = (short *)0x0;
  temp_v10 = temp_v12;
  temp_v14 = temp_v18;
  temp_v8 = temp_v19;
  temp_v5 = (short *)0x0;
  temp_v2 = (short *)0x0;
  piVar4 = (int *)nn_dbm_RomPathTool_PathParser_GetNextDirectoryName(temp_v10,&temp_v3);
  psVar3 = temp_v7;
  if (-1 < (int)piVar4) {
    piVar4 = temp_v14;
    n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF
              (temp_v14,&temp_v5,&temp_v13,&temp_v2);
    psVar3 = temp_v7;
    while (psVar1 = temp_v2, temp_v0 = temp_v3, psVar2 = temp_v4, temp_v7 = temp_v5,
          -1 < (int)piVar4) {
      while( 1 ) {
        do {
          temp_v4 = psVar2;
          temp_v3 = temp_v0;
          temp_v2 = psVar1;
          psVar2 = temp_v4;
          temp_v0 = temp_v3;
          psVar1 = temp_v2;
          if (temp_v10[0xc] != '\0') {
            *param_2 = (int)temp_v2;
            param_2[1] = temp_v3;
            param_2[2] = (int)temp_v4;
            *temp_v8 = temp_v13;
            temp_v8[1] = uStack_54;
            temp_v8[2] = uStack_50;
            piVar4 = (int *)0x0;
            psVar8 = temp_v7;
            psVar3 = temp_v7;
            goto LAB_005223c8;
          }
          piVar4 = (int *)nn_dbm_RomPathTool_PathParser_GetNextDirectoryName(temp_v10,&temp_v3);
          piVar5 = temp_v14;
          psVar3 = temp_v7;
          if ((int)piVar4 < 0) goto LAB_005223c8;
        } while ((temp_v3 == 1) && (*temp_v4 == 0x2e));
        piVar4 = temp_v14;
        if ((temp_v3 != 2) || ((*temp_v4 != 0x2e || (temp_v4[1] != 0x2e)))) break;
        if (temp_v7 == (short *)0x0) {
          piVar4 = (int *)0xe0c04702;
          goto LAB_005223c8;
        }
        temp_v11 = &temp_v7;
        temp_v16 = param_6;
        temp_v9 = temp_v3;
        psStack_78 = temp_v4;
        FUN_00522040(temp_v14,&temp_v15,temp_v17,0,0,temp_v2);
        if (-1 < (int)piVar4) {
          temp_v2 = temp_v15;
          piVar4 = &temp_v3;
          nn_dbm_RomPathTool_GetParentDirectoryName(piVar4,&temp_v9,temp_v16);
          if ((-1 < (int)piVar4) &&
             (n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF
                        (piVar5,temp_v11,&temp_v13,&temp_v2), piVar4 = piVar5,
             ((unsigned int)piVar5 & 0x80000000) == 0)) {
            piVar4 = (int *)0x0;
          }
        }
        psVar1 = temp_v2;
        temp_v0 = temp_v3;
        psVar2 = temp_v4;
        psVar3 = temp_v7;
        if ((int)piVar4 < 0) goto LAB_005223c8;
      }
      temp_v2 = temp_v7;
      n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF
                (temp_v14,&temp_v5,&temp_v13,&temp_v2);
      psVar3 = temp_v7;
    }
  }
LAB_005223c8:
  temp_v7 = psVar3;
  if ((int)piVar4 < 0) {
    return piVar4;
  }
  if (param_5 != 0) {
    piVar4 = (int *)FUN_00502038(temp_v12,&temp_v4);
    if ((int)piVar4 < 0) {
      return piVar4;
    }
    if (temp_v4 != (short *)0x1) {
      if (((temp_v4 != (short *)0x2) || (*temp_v5 != 0x2e)) || (temp_v5[1] != 0x2e)) {
        param_4[1] = (int)temp_v4;
        param_4[2] = (int)temp_v5;
        if (temp_v4 == (short *)0x0) {
          psVar8 = (short *)0x0;
        }
        *param_4 = (int)psVar8;
        return (int *)0x0;
      }
      if (psVar8 == (short *)0x0) {
        return (int *)0xe0c04702;
      }
      temp_v3 = param_6;
      temp_v2 = (short *)param_2[2];
      piVar4 = temp_v18;
      FUN_00522278(temp_v18,temp_v6,param_4,&temp_v7,*param_2,param_2[1]);
      if ((int)piVar4 < 0) {
        return piVar4;
      }
      if (*param_4 == 0) {
        return (int *)0x0;
      }
      temp_v3 = param_6;
      temp_v2 = (short *)param_4[2];
      FUN_00522278(temp_v18,temp_v6,param_2,temp_v19,*param_4,param_4[1]);
    }
    else {
      if (*temp_v5 != 0x2e) {
        param_4[1] = (int)temp_v4;
        param_4[2] = (int)temp_v5;
        if (temp_v4 == (short *)0x0) {
          psVar8 = (short *)0x0;
        }
        *param_4 = (int)psVar8;
        return (int *)0x0;
      }
      temp_v2 = (short *)param_2[2];
      temp_v0 = *param_2;
      temp_v1 = param_2[1];
      param_4[2] = (int)temp_v2;
      *param_4 = temp_v0;
      param_4[1] = temp_v1;
      if (temp_v0 == 0) {
        return (int *)0x0;
      }
      temp_v3 = param_6;
      FUN_00522278(temp_v18,temp_v6,param_2,temp_v19,temp_v0,temp_v1);
    }
  }
  else {
    temp_v0 = nn_dbm_RomPathTool_PathParser_IsDirectoryPath(temp_v12);
    if (temp_v0 != 0) {
      return (int *)0xe0c04702;
    }
    *param_4 = (int)psVar8;
    temp_v18 = (int *)FUN_00501fb4(temp_v12,param_4 + 1);
  }
  if ((int)temp_v18 < 0) {
    return temp_v18;
  }
  return (int *)0x0;
}
