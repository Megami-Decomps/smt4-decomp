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
extern unsigned int FUN_00501fb4(unsigned char *, int *);
extern unsigned int FUN_00502038(unsigned char *, short **);
/* Supplied declaration required: FUN_00522040. */
/* Supplied declaration required: FUN_00522278. */
/* Supplied declaration required: n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF. */
extern unsigned int nn_dbm_RomPathTool_GetParentDirectoryName(unsigned int, unsigned int, unsigned int);
extern unsigned int nn_dbm_RomPathTool_PathParser_GetNextDirectoryName(unsigned int, unsigned int);
extern unsigned int nn_dbm_RomPathTool_PathParser_Initialize(unsigned int, unsigned int);
extern unsigned char nn_dbm_RomPathTool_PathParser_IsDirectoryPath(unsigned int);


unsigned int FUN_00522304(unsigned int param_1,int *param_2,unsigned int *param_3,int *param_4,int param_5,int param_6
                 )

{
/* irregular: 4 goto(s); 4 native warning(s); review required */
  short *psVar1;
  short *psVar2;
  short *psVar3;
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar9;
  short *temp_v5;
  int temp_v6;
  short *temp_v7;
  short *temp_v8;
  unsigned char temp_v9 [4];
  short *temp_v10;
  unsigned int *temp_v11;
  int temp_v12;
  short *psStack_78;
  unsigned char *temp_v13;
  short **temp_v14;
  unsigned char temp_v15 [16];
  int temp_v16;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int temp_v17;
  short *temp_v18;
  int temp_v19;
  unsigned char temp_v20 [12];
  unsigned int temp_v21;
  int *piStack_30;
  unsigned int *temp_v22;
  int *piStack_28;
  
  temp_v21 = param_1;
  piStack_30 = param_2;
  temp_v22 = param_3;
  piStack_28 = param_4;
  FUN_00431400(temp_v15);
  temp_v1 = nn_dbm_RomPathTool_PathParser_Initialize((unsigned int)temp_v15,param_6);
  if ((int)temp_v1 < 0) {
    return temp_v1;
  }
  psVar9 = (short *)0x0;
  temp_v13 = temp_v15;
  temp_v17 = temp_v21;
  temp_v11 = temp_v22;
  temp_v8 = (short *)0x0;
  temp_v5 = (short *)0x0;
  temp_v1 = nn_dbm_RomPathTool_PathParser_GetNextDirectoryName((unsigned int)temp_v13,(unsigned int)&temp_v6);
  psVar3 = temp_v10;
  if (-1 < (int)temp_v1) {
    temp_v1 = temp_v17;
    n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF
              (temp_v17,&temp_v8,&temp_v16,&temp_v5);
    psVar3 = temp_v10;
    while (psVar1 = temp_v5, temp_v3 = temp_v6, psVar2 = temp_v7, temp_v10 = temp_v8,
          -1 < (int)temp_v1) {
      while( 1 ) {
        do {
          temp_v7 = psVar2;
          temp_v6 = temp_v3;
          temp_v5 = psVar1;
          psVar2 = temp_v7;
          temp_v3 = temp_v6;
          psVar1 = temp_v5;
          if (temp_v13[0xc] != '\0') {
            *param_2 = (int)temp_v5;
            param_2[1] = temp_v6;
            param_2[2] = (int)temp_v7;
            *temp_v11 = temp_v16;
            temp_v11[1] = uStack_54;
            temp_v11[2] = uStack_50;
            temp_v1 = 0;
            psVar9 = temp_v10;
            psVar3 = temp_v10;
            goto LAB_005223c8;
          }
          temp_v1 = nn_dbm_RomPathTool_PathParser_GetNextDirectoryName((unsigned int)temp_v13,(unsigned int)&temp_v6);
          temp_v2 = temp_v17;
          psVar3 = temp_v10;
          if ((int)temp_v1 < 0) goto LAB_005223c8;
        } while ((temp_v6 == 1) && (*temp_v7 == 0x2e));
        temp_v1 = temp_v17;
        if ((temp_v6 != 2) || ((*temp_v7 != 0x2e || (temp_v7[1] != 0x2e)))) break;
        if (temp_v10 == (short *)0x0) {
          temp_v1 = 0xe0c04702;
          goto LAB_005223c8;
        }
        temp_v14 = &temp_v10;
        temp_v19 = param_6;
        temp_v12 = temp_v6;
        psStack_78 = temp_v7;
        FUN_00522040(temp_v17,&temp_v18,temp_v20,0,0,temp_v5);
        if (-1 < (int)temp_v1) {
          temp_v5 = temp_v18;
          temp_v1 = nn_dbm_RomPathTool_GetParentDirectoryName((unsigned int)&temp_v6,(unsigned int)&temp_v12,temp_v19);
          if ((-1 < (int)temp_v1) &&
             (n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF
                        (temp_v2,temp_v14,&temp_v16,&temp_v5), temp_v1 = temp_v2,
             (temp_v2 & 0x80000000) == 0)) {
            temp_v1 = 0;
          }
        }
        psVar1 = temp_v5;
        temp_v3 = temp_v6;
        psVar2 = temp_v7;
        psVar3 = temp_v10;
        if ((int)temp_v1 < 0) goto LAB_005223c8;
      }
      temp_v5 = temp_v10;
      n_dbm_HierarchicalRomFileTableTemplate_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomFsStorage_nn_fs_CTR_MPCore_detail_RomFsArchive_RomF
                (temp_v17,&temp_v8,&temp_v16,&temp_v5);
      psVar3 = temp_v10;
    }
  }
LAB_005223c8:
  temp_v10 = psVar3;
  if ((int)temp_v1 < 0) {
    return temp_v1;
  }
  if (param_5 != 0) {
    temp_v1 = FUN_00502038(temp_v15,&temp_v7);
    if ((int)temp_v1 < 0) {
      return temp_v1;
    }
    if (temp_v7 != (short *)0x1) {
      if (((temp_v7 != (short *)0x2) || (*temp_v8 != 0x2e)) || (temp_v8[1] != 0x2e)) {
        param_4[1] = (int)temp_v7;
        param_4[2] = (int)temp_v8;
        if (temp_v7 == (short *)0x0) {
          psVar9 = (short *)0x0;
        }
        *param_4 = (int)psVar9;
        return 0;
      }
      if (psVar9 == (short *)0x0) {
        return 0xe0c04702;
      }
      temp_v6 = param_6;
      temp_v5 = (short *)param_2[2];
      temp_v1 = temp_v21;
      FUN_00522278(temp_v21,temp_v9,param_4,&temp_v10,*param_2,param_2[1]);
      if ((int)temp_v1 < 0) {
        return temp_v1;
      }
      if (*param_4 == 0) {
        return 0;
      }
      temp_v6 = param_6;
      temp_v5 = (short *)param_4[2];
      FUN_00522278(temp_v21,temp_v9,param_2,temp_v22,*param_4,param_4[1]);
    }
    else {
      if (*temp_v8 != 0x2e) {
        param_4[1] = (int)temp_v7;
        param_4[2] = (int)temp_v8;
        if (temp_v7 == (short *)0x0) {
          psVar9 = (short *)0x0;
        }
        *param_4 = (int)psVar9;
        return 0;
      }
      temp_v5 = (short *)param_2[2];
      temp_v3 = *param_2;
      temp_v4 = param_2[1];
      param_4[2] = (int)temp_v5;
      *param_4 = temp_v3;
      param_4[1] = temp_v4;
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v6 = param_6;
      FUN_00522278(temp_v21,temp_v9,param_2,temp_v22,temp_v3,temp_v4);
    }
  }
  else {
    temp_v0 = nn_dbm_RomPathTool_PathParser_IsDirectoryPath((unsigned int)temp_v15);
    if (temp_v0) {
      return 0xe0c04702;
    }
    *param_4 = (int)psVar9;
    temp_v21 = FUN_00501fb4(temp_v15,param_4 + 1);
  }
  if ((int)temp_v21 < 0) {
    return temp_v21;
  }
  return 0;
}
