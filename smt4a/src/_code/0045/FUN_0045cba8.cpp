/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045cba8` (_code @ 0x45cba8, 0xfc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0045c944(...);
int FUN_0045e228(...);
int nw_snd_SoundHandle_detail_AttachSound(...);

int FUN_0015fe40(int, int *);
int FUN_001742e4(...);
int FUN_001756d0(...);
int FUN_0018c87c(...);
int nw_snd_SoundArchive_GetSoundType(int, int *);
int FUN_002f5020(...);
int FUN_0045db6c(...);
int FUN_0045f410(...);
int obj50Set(...);
int FUN_0045f67c(...);
int FUN_0045f724(...);
int vslot9ObjRefresh(...);
int UnsignedDoesSaturate(...);
int UnsignedSaturate(...);
int VectorSignedToFloat(...);
int nw_snd_SoundHandle_DetachSound(int *);
int nw_snd_internal_BasicSound_SetAmbientInfo(...);
int nw_ut_internal_LinkListImpl_insert(...);
int rt_memcpy_w(...);

typedef int romwright_code(...);
/* stack frame of param_7: 32 slot(s), 116 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned char sp45; /* 0x45: local_45 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned char spAA; /* 0xaa: local_aa */
    unsigned char spAB; /* 0xab: local_ab */
    unsigned char spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
} param_7_stack;

extern int FUN_0045bc98(...); /* 0x45bc98 */
extern unsigned char DAT_00548f3c; /* 0x548f3c */
extern unsigned char DAT_00548f40; /* 0x548f40 */

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int nw_snd_SoundArchive_IsAvailable(void);
/* Supplied declaration required: FUN_0015fe40. */
/* Supplied declaration required: FUN_001742e4. */
/* Supplied declaration required: FUN_001756d0. */
extern unsigned long long FUN_00178400(unsigned int, int *, unsigned char *);
/* Supplied declaration required: FUN_0018c87c. */
extern int FUN_0019472c(unsigned int, int *, unsigned int **);
extern int FUN_00194784(unsigned int, int *, unsigned int **);
/* Supplied declaration required: nw_snd_SoundArchive_GetSoundType. */
/* Supplied declaration required: FUN_002f5020. */
extern int FUN_0045b844(unsigned int, int *);
extern unsigned long long FUN_0045b904(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0045c944. */
/* Supplied declaration required: FUN_0045db6c. */
/* Supplied declaration required: FUN_0045e228. */
/* Supplied declaration required: FUN_0045f410. */
/* Supplied declaration required: obj50Set. */
/* Supplied declaration required: FUN_0045f67c. */
/* Supplied declaration required: FUN_0045f724. */
/* Supplied declaration required: vslot9ObjRefresh. */
extern int FUN_004611ec(int, int *);
extern unsigned long long FUN_004612bc(int, unsigned int);
extern int FUN_00507bc4(unsigned int, int *, int **);
extern int FUN_00507c1c(unsigned int, int *, int **);
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */
/* Supplied declaration required: nw_snd_SoundHandle_detail_AttachSound. */
extern int *nw_snd_internal_BasicSound_GetAmbientPriority(int *, int *);
/* Supplied declaration required: nw_snd_internal_BasicSound_SetAmbientInfo. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_0045cba8(unsigned int param_1,int *param_2,int *param_3,int *param_4,int param_5,int param_6,
                 unsigned int *param_7)

{
/* irregular: 13 goto(s); irregular input(s): in_fpscr; 48 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int **ppiVar7;
  char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int *temp_v9;
  int *temp_v10;
  int *temp_v11;
  int *temp_v12;
  unsigned int temp_v13;
  int *temp_v14;
  int *temp_v15;
  int *temp_v16;
  int *temp_v17;
  int *temp_v18;
  int *temp_v19;
  int *temp_v20;
  int *piVar11;
  int *temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  int *piVar12;
  unsigned int *puVar13;
  unsigned int in_fpscr;
  unsigned long long temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  int *piVar17;
  unsigned char temp_v36 [4];
  int *temp_v37;
  unsigned int temp_v38;
  int *temp_v39;
  unsigned int temp_v40;
  unsigned char temp_v41;
  unsigned char temp_v42;
  char temp_v43;
  int *temp_v44;
  int *temp_v45;
  int temp_v46;
  int *temp_v47;
  unsigned int temp_v48;
  int *temp_v49;
  int *temp_v50;
  unsigned int *temp_v51;
  int *temp_v52;
  int *temp_v53;
  int *temp_v54;
  unsigned int temp_v55;
  int *temp_v56;
  unsigned int *temp_v57;
  int temp_v58;
  int temp_v59;
  char temp_v60;
  int **temp_v61;
  unsigned int *temp_v62;
  unsigned int uStack_34;
  int *temp_v63;
  int *temp_v64;
  int *piStack_28;
  
  if ((*(int *)(param_1 + 4) == 0) ||
     (uStack_34 = param_1, temp_v63 = param_2, temp_v64 = param_3, piStack_28 = param_4,
     temp_v2 = nw_snd_SoundArchive_IsAvailable(), temp_v2 == 0)) {
    return 0xb;
  }
  if (*temp_v63 != 0) {
    nw_snd_SoundHandle_DetachSound(temp_v63);
  }
  temp_v2 = *(int *)(param_1 + 4);
  FUN_0015fe40(temp_v2,temp_v64);
  piVar4 = *(int **)(param_1 + 0x114);
  temp_v0 = 0;
  temp_v7 = temp_v6;
  if (piVar4 != (int *)0x0) {
    temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
  }
  if (!((piVar4 == (int *)0x0 || temp_v7 == 0) || temp_v2 == 0)) {
    (**(romwright_code **)(*piVar4 + 0xc))();
    piVar4 = *(int **)(param_1 + 0x114);
    if (((char)piVar4[1] != '\0') && (temp_v3 = (**(romwright_code **)(*piVar4 + 8))(piVar4,temp_v2), temp_v3 != 0))
    {
      piVar4 = *(int **)(*(int *)(param_1 + 4) + 8);
      if ((char)piVar4[1] == '\0') {
        temp_v59 = 0;
      }
      else {
        temp_v59 = (**(romwright_code **)(*piVar4 + 0x14))(piVar4,temp_v2);
        if (temp_v59 != 1) {
          temp_v0 = 0;
          if ((temp_v59 != 2) && (temp_v59 == 3)) {
            piVar4 = *(int **)(param_1 + 0x114);
            if (((char)piVar4[1] != '\0') &&
               (temp_v2 = (**(romwright_code **)(*piVar4 + 0x18))(piVar4,temp_v2,&DAT_00548f3c,"bxwsd",0),
               temp_v2 != 0)) {
              temp_v1 = 1;
            }
            else {
              temp_v1 = 0;
            }
            temp_v0 = (unsigned char)(temp_v1 ^ 1);
            if (temp_v0) {
              *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 0;
              *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 0;
            }
          }
        }
        else {
          piVar4 = *(int **)(param_1 + 0x114);
          if (((char)piVar4[1] == '\0') ||
             (temp_v2 = (**(romwright_code **)(*piVar4 + 0x18))(piVar4,temp_v2,&DAT_00548f40,"bxseq",0),
             temp_v2 == 0)) {
            temp_v1 = 0;
          }
          else {
            temp_v1 = 1;
          }
          temp_v0 = (unsigned char)(temp_v1 ^ 1);
          if (temp_v0) {
            *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 0;
            *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 0;
          }
        }
      }
    }
    else {
      temp_v0 = 1;
      *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 0;
      *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 0;
      temp_v2 = *(int *)(param_1 + 4);
      nw_snd_SoundArchive_GetSoundType(temp_v2,temp_v64);
      temp_v59 = temp_v2;
    }
  }
  else {
    if (temp_v64 == (int *)0xffffffff) {
      return 2;
    }
    temp_v2 = *(int *)(param_1 + 4);
    nw_snd_SoundArchive_GetSoundType(temp_v2,temp_v64);
    temp_v59 = temp_v2;
  }
  temp_v33 = FUN_00178400(*(unsigned int *)(param_1 + 4),temp_v64,temp_v36);
  temp_v7 = (unsigned int)((unsigned long long)temp_v33 >> 0x20);
  if ((int)temp_v33 == 0) {
    if (temp_v0) {
      *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
      *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
    }
    piVar4 = *(int **)(param_1 + 0x114);
    if (piVar4 != (int *)0x0) {
      temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
    }
    if (piVar4 == (int *)0x0 || temp_v7 == 0) {
      return 3;
    }
    (**(romwright_code **)(*piVar4 + 0x10))();
    return 3;
  }
  temp_v34 = 0;
  temp_v35 = 0;
  puVar13 = (unsigned int *)0x0;
  temp_v50 = temp_v39;
  temp_v62 = (unsigned int *)0x0;
  temp_v47 = temp_v37;
  temp_v61 = (int **)0x0;
  temp_v57 = (unsigned int *)0x0;
  temp_v51 = (unsigned int *)0x0;
  temp_v7 = temp_v38;
  if (param_7 != (unsigned int *)0x0) {
    temp_v8 = *param_7;
    if ((temp_v8 & 1) != 0) {
      temp_v34 = (unsigned int)(unsigned char)param_7[1];
      temp_v35 = param_7[2];
    }
    if ((temp_v8 & 4) != 0) {
      temp_v50 = (int *)param_7[4];
    }
    if ((temp_v8 & 2) != 0) {
      temp_v47 = (int *)param_7[3];
    }
    if ((temp_v8 & 8) != 0) {
      temp_v38 = param_7[5];
    }
    if ((temp_v8 & 0x10) != 0) {
      puVar13 = param_7 + 6;
    }
    if ((temp_v8 & 0x20) != 0) {
      temp_v51 = param_7 + 0xc;
    }
    if ((temp_v8 & 0x200) != 0) {
      temp_v62 = param_7 + 0x12;
    }
    if ((temp_v8 & 0x400) != 0) {
      temp_v61 = (int **)(param_7 + 0x23);
    }
    temp_v7 = temp_v38;
    if ((temp_v8 & 0x40) != 0) {
      temp_v57 = param_7 + 0x26;
    }
  }
  piVar12 = (int *)0x0;
  piVar4 = temp_v50;
  if (param_6 != 0) {
    piVar4 = (int *)((int)temp_v50 - 1);
  }
  if (param_4 != (int *)0x0) {
    piVar12 = (int *)nw_snd_internal_BasicSound_GetAmbientPriority(param_4,temp_v64);
  }
  temp_v58 = (int)piVar4 + (int)piVar12;
  temp_v46 = 0;
  temp_v8 = UnsignedSaturate(temp_v58,7);
  UnsignedDoesSaturate(temp_v58,7);
  if ((param_5 != 0) && ((temp_v7 >= 4 || (temp_v46 = param_5 + temp_v7 * 0x10 + 8, temp_v46 == 0)))) {
    if (temp_v0) {
      *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
      *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
    }
    piVar4 = *(int **)(param_1 + 0x114);
    if (piVar4 != (int *)0x0) {
      temp_v8 = (unsigned int)*(unsigned char *)(piVar4 + 1);
    }
    if (piVar4 == (int *)0x0 || temp_v8 == 0) {
      return 0xe;
    }
    (**(romwright_code **)(*piVar4 + 0x10))();
    return 0xe;
  }
  if (temp_v47 == (int *)0xffffffff) {
    if (temp_v0) {
      *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
      *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
    }
    piVar4 = *(int **)(param_1 + 0x114);
    if (piVar4 != (int *)0x0) {
      temp_v8 = (unsigned int)*(unsigned char *)(piVar4 + 1);
    }
    if (piVar4 == (int *)0x0 || temp_v8 == 0) {
      return 0xe;
    }
    (**(romwright_code **)(*piVar4 + 0x10))();
    return 0xe;
  }
  temp_v55 = *(int *)(param_1 + 0x1c) + ((unsigned int)temp_v47 & 0xffffff) * 0x5c;
  temp_v33 = FUN_0045b904(temp_v55,temp_v8);
  temp_v7 = (unsigned int)((unsigned long long)temp_v33 >> 0x20);
  if ((int)temp_v33 == 0) {
    if (temp_v0) {
      *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
      *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
    }
    piVar4 = *(int **)(param_1 + 0x114);
    if (piVar4 != (int *)0x0) {
      temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
    }
    if (piVar4 == (int *)0x0 || temp_v7 == 0) {
      return 1;
    }
    (**(romwright_code **)(*piVar4 + 0x10))();
    return 1;
  }
  if (temp_v46 != 0) {
    temp_v33 = FUN_004612bc(temp_v46,temp_v8);
    temp_v7 = (unsigned int)((unsigned long long)temp_v33 >> 0x20);
    if ((int)temp_v33 == 0) {
      if (temp_v0) {
        *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
        *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
      }
      piVar4 = *(int **)(param_1 + 0x114);
      if (piVar4 != (int *)0x0) {
        temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
      }
      if (piVar4 == (int *)0x0 || temp_v7 == 0) {
        return 1;
      }
      (**(romwright_code **)(*piVar4 + 0x10))();
      return 1;
    }
  }
  temp_v5 = '\0';
  piVar17 = (int *)0x0;
  temp_v45 = (int *)0x0;
  temp_v47 = (int *)0x0;
  if (temp_v59 != 1) {
    if (temp_v59 != 2) {
      if (temp_v59 != 3) {
        if (temp_v0) {
          *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
          *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
        }
        piVar4 = *(int **)(param_1 + 0x114);
        if (piVar4 != (int *)0x0) {
          temp_v5 = (char)piVar4[1];
        }
        if (piVar4 == (int *)0x0 || temp_v5 == '\0') {
          return 3;
        }
        (**(romwright_code **)(*piVar4 + 0x10))();
        return 3;
      }
      temp_v2 = UnsignedSaturate(temp_v58,7);
      UnsignedDoesSaturate(temp_v58,7);
      temp_v54 = temp_v64;
      piVar11 = temp_v64;
      temp_v47 = piVar12;
      temp_v53 = param_4;
      temp_v56 = piVar4;
LAB_0045d4ac:
      do {
        if (*(int *)(param_1 + 0x80) == 0) {
          if (*(int *)(param_1 + 0x74) == 0) {
            piVar4 = (int *)0x0;
            goto LAB_0045d554;
          }
          temp_v3 = *(int *)(param_1 + 0x78);
          if (temp_v3 - 0xf8 != 0) {
            temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 - 0x5b) + *(int *)(temp_v3 - 0xa8);
            piVar11 = (int *)UnsignedSaturate(temp_v4,7);
            UnsignedDoesSaturate(temp_v4,7);
            if ((int)piVar11 <= temp_v2) {
              FUN_001742e4(temp_v3 - 0xf8,0);
              piVar11 = temp_v21;
              goto LAB_0045d4ac;
            }
          }
          piVar4 = (int *)0x0;
          goto LAB_0045d578;
        }
        temp_v3 = *(int *)(param_1 + 0x84);
        piVar4 = (int *)(temp_v3 - 0xf8);
        FUN_0018c87c(param_1 + 0x80);
        piVar11 = temp_v18;
      } while (piVar4 == (int *)0x0);
      (**(romwright_code **)(*piVar4 + 0xc))(piVar4);
      obj50Set(piVar4,temp_v56,temp_v47);
      piVar12 = *(int **)(param_1 + 0x78);
      if (piVar12 != (int *)(param_1 + 0x78)) {
        do {
          temp_v4 = piVar12[-0x2a] + (unsigned int)*(unsigned char *)((int)piVar12 - 0x5b);
          if (temp_v4 >= 0x80) {
            temp_v4 = 0x7f;
          }
          else if (temp_v4 < 0) {
            temp_v4 = 0;
          }
        } while ((temp_v4 <= temp_v2) && (piVar12 = (int *)*piVar12, piVar12 != (int *)(param_1 + 0x78))
                );
      }
      nw_ut_internal_LinkListImpl_insert(param_1 + 0x74,piVar12,temp_v3);
      piVar11 = temp_v19;
LAB_0045d554:
      if (piVar4 != (int *)0x0) {
        piVar4[0x2c] = (int)temp_v54;
        piVar11 = (int *)0x0;
        if (temp_v53 != (int *)0x0) {
          nw_snd_internal_BasicSound_SetAmbientInfo(piVar4);
          piVar11 = temp_v20;
        }
LAB_0045d578:
        temp_v47 = piVar4;
        if (piVar4 != (int *)0x0) goto LAB_0045d254;
      }
      if (temp_v0) {
        *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
        *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
      }
      piVar4 = *(int **)(param_1 + 0x114);
      if (piVar4 != (int *)0x0) {
        piVar11 = (int *)(unsigned int)*(unsigned char *)(piVar4 + 1);
      }
      if (piVar4 == (int *)0x0 || piVar11 == (int *)0x0) {
        return 0xd;
      }
    }
    else {
      temp_v2 = UnsignedSaturate(temp_v58,7);
      UnsignedDoesSaturate(temp_v58,7);
      temp_v56 = temp_v64;
      piVar11 = temp_v64;
      temp_v44 = piVar12;
      temp_v52 = param_4;
      temp_v53 = piVar4;
LAB_0045d328:
      do {
        if (*(int *)(param_1 + 0xcc) == 0) {
          if (*(int *)(param_1 + 0xc0) == 0) {
            piVar4 = (int *)0x0;
            goto LAB_0045d3d0;
          }
          temp_v3 = *(int *)(param_1 + 0xc4);
          if (temp_v3 - 0xf8 != 0) {
            temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 - 0x5b) + *(int *)(temp_v3 - 0xa8);
            piVar11 = (int *)UnsignedSaturate(temp_v4,7);
            UnsignedDoesSaturate(temp_v4,7);
            if ((int)piVar11 <= temp_v2) {
              FUN_001742e4(temp_v3 - 0xf8,0);
              piVar11 = temp_v17;
              goto LAB_0045d328;
            }
          }
          piVar4 = (int *)0x0;
          goto LAB_0045d3f4;
        }
        temp_v3 = *(int *)(param_1 + 0xd0);
        piVar4 = (int *)(temp_v3 - 0xf8);
        FUN_0018c87c(param_1 + 0xcc);
        piVar11 = temp_v14;
      } while (piVar4 == (int *)0x0);
      (**(romwright_code **)(*piVar4 + 0xc))(piVar4);
      obj50Set(piVar4,temp_v53,temp_v44);
      piVar12 = *(int **)(param_1 + 0xc4);
      if (piVar12 != (int *)(param_1 + 0xc4)) {
        do {
          temp_v4 = piVar12[-0x2a] + (unsigned int)*(unsigned char *)((int)piVar12 - 0x5b);
          if (temp_v4 >= 0x80) {
            temp_v4 = 0x7f;
          }
          else if (temp_v4 < 0) {
            temp_v4 = 0;
          }
        } while ((temp_v4 <= temp_v2) && (piVar12 = (int *)*piVar12, piVar12 != (int *)(param_1 + 0xc4))
                );
      }
      nw_ut_internal_LinkListImpl_insert(param_1 + 0xc0,piVar12,temp_v3);
      piVar11 = temp_v15;
LAB_0045d3d0:
      if (piVar4 != (int *)0x0) {
        piVar4[0x2c] = (int)temp_v56;
        piVar11 = (int *)0x0;
        if (temp_v52 != (int *)0x0) {
          nw_snd_internal_BasicSound_SetAmbientInfo(piVar4);
          piVar11 = temp_v16;
        }
LAB_0045d3f4:
        temp_v45 = piVar4;
        if (piVar4 != (int *)0x0) goto LAB_0045d254;
      }
      if (temp_v0) {
        *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
        *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
      }
      piVar4 = *(int **)(param_1 + 0x114);
      if (piVar4 != (int *)0x0) {
        piVar11 = (int *)(unsigned int)*(unsigned char *)(piVar4 + 1);
      }
      if (piVar4 == (int *)0x0 || piVar11 == (int *)0x0) {
        return 0xd;
      }
    }
  }
  else {
    temp_v2 = UnsignedSaturate(temp_v58,7);
    UnsignedDoesSaturate(temp_v58,7);
    temp_v52 = temp_v64;
    piVar11 = temp_v64;
    temp_v49 = param_4;
    temp_v54 = piVar12;
    temp_v56 = piVar4;
LAB_0045d0e4:
    do {
      if (*(int *)(param_1 + 0x34) == 0) {
        if (*(int *)(param_1 + 0x28) == 0) {
          piVar4 = (int *)0x0;
          goto LAB_0045d18c;
        }
        temp_v3 = *(int *)(param_1 + 0x2c);
        if (temp_v3 - 0xf8 != 0) {
          temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 - 0x5b) + *(int *)(temp_v3 - 0xa8);
          piVar11 = (int *)UnsignedSaturate(temp_v4,7);
          UnsignedDoesSaturate(temp_v4,7);
          if ((int)piVar11 <= temp_v2) {
            FUN_001742e4(temp_v3 - 0xf8,0);
            piVar11 = temp_v12;
            goto LAB_0045d0e4;
          }
        }
        piVar4 = (int *)0x0;
        goto LAB_0045d1b0;
      }
      temp_v3 = *(int *)(param_1 + 0x38);
      piVar4 = (int *)(temp_v3 - 0xf8);
      FUN_0018c87c(param_1 + 0x34);
      piVar11 = temp_v9;
    } while (piVar4 == (int *)0x0);
    (**(romwright_code **)(*piVar4 + 0xc))(piVar4);
    obj50Set(piVar4,temp_v56,temp_v54);
    piVar12 = *(int **)(param_1 + 0x2c);
    if (piVar12 != (int *)(param_1 + 0x2c)) {
      do {
        temp_v4 = piVar12[-0x2a] + (unsigned int)*(unsigned char *)((int)piVar12 - 0x5b);
        if (temp_v4 >= 0x80) {
          temp_v4 = 0x7f;
        }
        else if (temp_v4 < 0) {
          temp_v4 = 0;
        }
      } while ((temp_v4 <= temp_v2) && (piVar12 = (int *)*piVar12, piVar12 != (int *)(param_1 + 0x2c)));
    }
    nw_ut_internal_LinkListImpl_insert(param_1 + 0x28,piVar12,temp_v3);
    piVar11 = temp_v10;
LAB_0045d18c:
    if (piVar4 != (int *)0x0) {
      piVar4[0x2c] = (int)temp_v52;
      piVar11 = (int *)0x0;
      if (temp_v49 != (int *)0x0) {
        nw_snd_internal_BasicSound_SetAmbientInfo(piVar4);
        piVar11 = temp_v11;
      }
LAB_0045d1b0:
      piVar17 = piVar4;
      if (piVar4 != (int *)0x0) {
LAB_0045d254:
        temp_v2 = FUN_0045b844(temp_v55,piVar4);
        if (temp_v2 == 0) {
          (**(romwright_code **)(*piVar4 + 0x10))(piVar4);
          if (temp_v0) {
            *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
            *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
          }
          piVar4 = *(int **)(param_1 + 0x114);
          temp_v7 = temp_v22;
          if (piVar4 != (int *)0x0) {
            temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
          }
          if (piVar4 != (int *)0x0 && temp_v7 != 0) {
            (**(romwright_code **)(*piVar4 + 0x10))();
          }
          return 0xff;
        }
        FUN_0045f67c(piVar4,(int)temp_v43);
        if ((param_7 != (unsigned int *)0x0) && ((*param_7 & 0x100) != 0)) {
          piVar4[0x3d] = param_7[0x29];
        }
        if (temp_v59 != 1) {
          if (temp_v59 == 2) {
            ppiVar7 = &temp_v53;
            temp_v52 = (int *)0x0;
            FUN_002f5020(ppiVar7,FUN_0045bc98,0xd,4);
            ppiVar7[0xd] = (int *)0x3f800000;
            *(unsigned char *)(ppiVar7 + 0xe) = 0x7f;
            *(unsigned char *)((int)ppiVar7 + 0x3b) = 0;
            ppiVar7[0xf] = (int *)0xffffffff;
            *(unsigned short *)((int)ppiVar7 + 0x39) = 0;
            if (temp_v62 != (unsigned int *)0x0) {
              rt_memcpy_w(&temp_v52,temp_v62,0x44);
            }
            else {
              temp_v2 = FUN_00507bc4(*(unsigned int *)(param_1 + 4),temp_v64,&temp_v52);
              if (temp_v2 == 0) {
                (**(romwright_code **)(*temp_v45 + 0x10))(temp_v45);
                if (temp_v0) {
                  *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
                  *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
                }
                piVar4 = *(int **)(param_1 + 0x114);
                temp_v7 = temp_v28;
                if (piVar4 != (int *)0x0) {
                  temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
                }
                if (piVar4 == (int *)0x0 || temp_v7 == 0) {
                  return 3;
                }
                (**(romwright_code **)(*piVar4 + 0x10))();
                return 3;
              }
            }
            temp_v47 = (int *)((unsigned int)temp_v47 & 0xffffff00);
            temp_v49 = (int *)0x0;
            ppiVar7 = (int **)0x0;
            if (temp_v60 == '\x02') {
              ppiVar7 = temp_v61;
            }
            temp_v48 = 0;
            if (temp_v60 == '\x02' && ppiVar7 == (int **)0x0) {
              temp_v2 = FUN_00507c1c(*(unsigned int *)(param_1 + 4),temp_v64,&temp_v47);
              if (temp_v2 == 0) {
                (**(romwright_code **)(*temp_v45 + 0x10))(temp_v45);
                if (temp_v0) {
                  *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
                  *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
                }
                piVar4 = *(int **)(param_1 + 0x114);
                temp_v7 = temp_v29;
                if (piVar4 != (int *)0x0) {
                  temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
                }
                if (piVar4 == (int *)0x0 || temp_v7 == 0) {
                  return 3;
                }
                (**(romwright_code **)(*piVar4 + 0x10))();
                return 3;
              }
              ppiVar7 = &temp_v47;
            }
            temp_v8 = param_1;
            FUN_0045db6c(param_1,temp_v45,temp_v36,&temp_v52,ppiVar7,temp_v34,temp_v35,temp_v51);
            temp_v8 = temp_v8 & 0xff;
            temp_v7 = temp_v26;
            if (temp_v8 == 0) {
LAB_0045da60:
              if (temp_v0) {
                *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
                *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
              }
              piVar12 = *(int **)(param_1 + 0x114);
              if (piVar12 != (int *)0x0) {
                temp_v7 = (unsigned int)*(unsigned char *)(piVar12 + 1);
              }
              if (piVar12 != (int *)0x0 && temp_v7 != 0) {
                (**(romwright_code **)(*piVar12 + 0x10))();
              }
              VectorSignedToFloat(temp_v40,(unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_0045f724(piVar4);
              FUN_001756d0(piVar4,temp_v41);
              FUN_0045f410(piVar4,temp_v42);
              if ((temp_v46 != 0) && (temp_v2 = FUN_004611ec(temp_v46,piVar4), temp_v2 == 0)) {
                (**(romwright_code **)(*piVar4 + 0x10))(piVar4);
                return 0xff;
              }
              if (param_5 != 0) {
                piVar4[5] = param_5;
              }
              if (param_6 != 0) {
                vslot9ObjRefresh(piVar4,temp_v50);
              }
              nw_snd_SoundHandle_detail_AttachSound(temp_v63,piVar4);
              return 0;
            }
            (**(romwright_code **)(*temp_v45 + 0x10))(temp_v45);
            if (temp_v0) {
              *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
              *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
            }
            piVar4 = *(int **)(param_1 + 0x114);
            temp_v7 = temp_v27;
            if (piVar4 != (int *)0x0) {
              temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
            }
            if (piVar4 == (int *)0x0 || temp_v7 == 0) {
              return temp_v8;
            }
            (**(romwright_code **)(*piVar4 + 0x10))();
            return temp_v8;
          }
          if (temp_v59 != 3) {
            (**(romwright_code **)(*piVar4 + 0x10))(piVar4);
            if (temp_v0) {
              *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
              *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
            }
            piVar4 = *(int **)(param_1 + 0x114);
            temp_v7 = temp_v13;
            if (piVar4 != (int *)0x0) {
              temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
            }
            if (piVar4 == (int *)0x0 || temp_v7 == 0) {
              return 3;
            }
          }
          else {
            temp_v52 = (int *)0x0;
            temp_v53 = (int *)((unsigned int)temp_v53 & 0xffff0000);
            temp_v2 = FUN_00194784(*(unsigned int *)(param_1 + 4),temp_v64,&temp_v51);
            if (temp_v2 != 0) {
              temp_v8 = param_1;
              FUN_0045c944(param_1,temp_v47,temp_v36,&temp_v51,temp_v34,temp_v35,temp_v57);
              temp_v8 = temp_v8 & 0xff;
              temp_v7 = temp_v30;
              if (temp_v8 == 0) goto LAB_0045da60;
              (**(romwright_code **)(*temp_v47 + 0x10))(temp_v47);
              if (temp_v0) {
                *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
                *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
              }
              piVar4 = *(int **)(param_1 + 0x114);
              temp_v7 = temp_v31;
              if (piVar4 != (int *)0x0) {
                temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
              }
              if (piVar4 == (int *)0x0 || temp_v7 == 0) {
                return temp_v8;
              }
              (**(romwright_code **)(*piVar4 + 0x10))();
              return temp_v8;
            }
            (**(romwright_code **)(*temp_v47 + 0x10))(temp_v47);
            if (temp_v0) {
              *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
              *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
            }
            piVar4 = *(int **)(param_1 + 0x114);
            temp_v7 = temp_v32;
            if (piVar4 != (int *)0x0) {
              temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
            }
            if (piVar4 == (int *)0x0 || temp_v7 == 0) {
              return 3;
            }
          }
        }
        else {
          temp_v51 = (unsigned int *)0x0;
          temp_v57 = (unsigned int *)((unsigned int)temp_v57 & 0xffff0000);
          temp_v54 = (int *)0xffffffff;
          temp_v56 = (int *)0x0;
          temp_v52 = (int *)0xffffffff;
          temp_v53 = (int *)0xffffffff;
          temp_v55 = 0xffffffff;
          temp_v2 = FUN_0019472c(*(unsigned int *)(param_1 + 4),temp_v64,&temp_v51);
          if (temp_v2 != 0) {
            if (puVar13 != (unsigned int *)0x0) {
              if ((int *)puVar13[2] != (int *)0xffffffff) {
                temp_v52 = (int *)puVar13[2];
              }
              if ((int *)puVar13[3] != (int *)0xffffffff) {
                temp_v53 = (int *)puVar13[3];
              }
              if ((int *)puVar13[4] != (int *)0xffffffff) {
                temp_v54 = (int *)puVar13[4];
              }
              if (puVar13[5] != 0xffffffff) {
                temp_v55 = puVar13[5];
              }
            }
            temp_v8 = param_1;
            FUN_0045e228(param_1,piVar17,temp_v36,&temp_v51,temp_v34,temp_v35,puVar13);
            temp_v8 = temp_v8 & 0xff;
            temp_v7 = temp_v23;
            if (temp_v8 == 0) goto LAB_0045da60;
            (**(romwright_code **)(*piVar17 + 0x10))(piVar17);
            if (temp_v0) {
              *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
              *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
            }
            piVar4 = *(int **)(param_1 + 0x114);
            temp_v7 = temp_v24;
            if (piVar4 != (int *)0x0) {
              temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
            }
            if (piVar4 == (int *)0x0 || temp_v7 == 0) {
              return temp_v8;
            }
            (**(romwright_code **)(*piVar4 + 0x10))();
            return temp_v8;
          }
          (**(romwright_code **)(*piVar17 + 0x10))(piVar17);
          if (temp_v0) {
            *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
            *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
          }
          piVar4 = *(int **)(param_1 + 0x114);
          temp_v7 = temp_v25;
          if (piVar4 != (int *)0x0) {
            temp_v7 = (unsigned int)*(unsigned char *)(piVar4 + 1);
          }
          if (piVar4 == (int *)0x0 || temp_v7 == 0) {
            return 3;
          }
        }
        (**(romwright_code **)(*piVar4 + 0x10))();
        return 3;
      }
    }
    if (temp_v0) {
      *(unsigned char *)(*(int *)(*(int *)(param_1 + 4) + 8) + 4) = 1;
      *(unsigned char *)(*(int *)(param_1 + 0x114) + 4) = 1;
    }
    piVar4 = *(int **)(param_1 + 0x114);
    if (piVar4 != (int *)0x0) {
      piVar11 = (int *)(unsigned int)*(unsigned char *)(piVar4 + 1);
    }
    if (piVar4 == (int *)0x0 || piVar11 == (int *)0x0) {
      return 0xd;
    }
  }
  (**(romwright_code **)(*piVar4 + 0x10))();
  return 0xd;
}

} /* extern "C" */
