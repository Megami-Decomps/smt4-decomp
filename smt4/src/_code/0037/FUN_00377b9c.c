/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377b9c` (_code @ 0x377b9c, 0x908 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_7: 23 slot(s), 73 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp37; /* 0x37: local_37 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned char sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned char sp60; /* 0x60: local_60 */
    unsigned short sp62; /* 0x62: local_62 */
    unsigned short sp64; /* 0x64: local_64 */
    unsigned char sp72; /* 0x72: local_72 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_7_stack;

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
/* Unsupported intrinsic, declaration required: UnsignedDoesSaturate (CALLOTHER). */
/* Supplied declaration required: FUN_00141fd0. */
extern int FUN_0014d3fc(unsigned int, unsigned int, unsigned char *);
extern int FUN_0014d478(unsigned int, unsigned int, unsigned char *);
extern int FUN_0014d530(unsigned int, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002bda30. */
extern int FUN_002bf684(void);
/* Supplied declaration required: FUN_00377a10. */
/* Supplied declaration required: FUN_003784a4. */
/* Supplied declaration required: FUN_00378698. */
/* Supplied declaration required: FUN_0037960c. */
/* Supplied declaration required: FUN_00379864. */
extern int FUN_003e7114(unsigned int, unsigned int, unsigned short *);
extern int FUN_003e716c(unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: nw_snd_SoundHandle_DetachSound. */
/* Supplied declaration required: nw_snd_SoundHandle_detail_AttachSound. */
/* Supplied declaration required: nw_snd_SoundPlayer_detail_AllocPlayerHeap. */
extern int nw_snd_SoundPlayer_detail_AppendSound(int, int *);
extern int nw_snd_SoundPlayer_detail_CanPlaySound(int, unsigned int);
extern unsigned int nw_snd_internal_BasicSound_GetAmbientPriority(unsigned int, unsigned int);
/* Supplied declaration required: nw_snd_internal_BasicSound_SetAmbientInfo. */
/* Supplied declaration required: nw_snd_internal_BasicSound_SetPlayerPriority. */
extern int nw_snd_internal_ExternalSoundPlayer_AppendSound(int, int *);
extern int nw_snd_internal_ExternalSoundPlayer_detail_CanPlaySound(int, unsigned int);
/* Supplied declaration required: nw_ut_internal_LinkListImpl_erase_2BAE30. */
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


unsigned int FUN_00377b9c(unsigned int param_1,int *param_2,unsigned int param_3,unsigned int param_4,int param_5,int param_6,
                 unsigned int *param_7)

{
/* irregular: 9 goto(s); 16 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *puVar7;
  int temp_v6;
  int *piVar9;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar12;
  unsigned int temp_v9;
  int *piVar14;
  unsigned int temp_v10;
  int *piVar16;
  int *piVar17;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned char temp_v13 [4];
  unsigned int temp_v14;
  unsigned int uStack_80;
  unsigned int temp_v15;
  char temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  char temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned char temp_v22 [4];
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned char temp_v29;
  unsigned char temp_v30;
  unsigned int uStack_34;
  int *temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  
  if ((*(int *)(param_1 + 4) == 0) ||
     (uStack_34 = param_1, temp_v31 = param_2, temp_v32 = param_3, temp_v33 = param_4,
     temp_v1 = FUN_002bf684(), temp_v1 == 0)) {
    return 0xb;
  }
  if (*temp_v31 != 0) {
    nw_snd_SoundHandle_DetachSound(temp_v31);
  }
  temp_v1 = FUN_0014d3fc(*(unsigned int *)(param_1 + 4),temp_v32,temp_v13);
  if (temp_v1 == 0) {
    return 3;
  }
  temp_v11 = 0;
  temp_v12 = 0;
  puVar12 = (unsigned int *)0x0;
  temp_v21 = temp_v15;
  temp_v9 = temp_v14;
  temp_v10 = uStack_80;
  if (param_7 != (unsigned int *)0x0) {
    temp_v2 = *param_7;
    if ((temp_v2 & 1) != 0) {
      temp_v11 = (unsigned int)(unsigned char)param_7[1];
      temp_v12 = param_7[2];
    }
    if ((temp_v2 & 4) != 0) {
      temp_v21 = param_7[4];
    }
    if ((temp_v2 & 2) != 0) {
      temp_v14 = param_7[3];
    }
    if ((temp_v2 & 8) != 0) {
      uStack_80 = param_7[5];
    }
    temp_v9 = temp_v14;
    temp_v10 = uStack_80;
    if ((temp_v2 & 0x10) != 0) {
      puVar12 = param_7 + 6;
    }
  }
  temp_v8 = 0;
  temp_v2 = temp_v21;
  if (param_6 != 0) {
    temp_v2 = temp_v21 - 1;
  }
  if (temp_v33 != 0) {
    temp_v8 = nw_snd_internal_BasicSound_GetAmbientPriority(temp_v33,temp_v32);
  }
  temp_v27 = temp_v2 + temp_v8;
  temp_v0 = UnsignedSaturate(temp_v27,7);
  UnsignedDoesSaturate(temp_v27,7);
  temp_v1 = 0;
  if ((param_5 != 0) && ((temp_v10 >= 4 || (temp_v1 = param_5 + temp_v10 * 0x10 + 8, temp_v1 == 0)))) {
    return 0xe;
  }
  temp_v3 = *(int *)(param_1 + 0x24) + (temp_v9 & 0xffffff) * 0x48;
  temp_v4 = nw_snd_SoundPlayer_detail_CanPlaySound(temp_v3,temp_v0);
  if ((temp_v4 == 0) ||
     ((temp_v1 != 0 &&
      (temp_v4 = nw_snd_internal_ExternalSoundPlayer_detail_CanPlaySound(temp_v1,temp_v0), temp_v4 == 0))))
  {
    return 1;
  }
  piVar16 = (int *)0x0;
  temp_v4 = *(int *)(param_1 + 4);
  piVar14 = (int *)0x0;
  piVar17 = (int *)0x0;
  FUN_00141fd0(temp_v4,temp_v32);
  if (temp_v4 != 1) {
    if (temp_v4 != 2) {
      if (temp_v4 != 3) {
        return 3;
      }
      temp_v24 = temp_v33;
      temp_v25 = temp_v32;
      temp_v4 = UnsignedSaturate(temp_v27,7);
      UnsignedDoesSaturate(temp_v27,7);
      temp_v23 = temp_v8;
      temp_v26 = temp_v2;
LAB_003780a4:
      do {
        if (*(int *)(param_1 + 0x5c) == 0) {
          if (*(int *)(param_1 + 0x50) == 0) {
            piVar17 = (int *)0x0;
            goto LAB_0037814c;
          }
          temp_v6 = *(int *)(param_1 + 0x54);
          if (temp_v6 - 0xd4 != 0) {
            temp_v7 = (unsigned int)*(unsigned char *)(temp_v6 - 0x3c) + *(int *)(temp_v6 - 0x84);
            temp_v5 = UnsignedSaturate(temp_v7,7);
            UnsignedDoesSaturate(temp_v7,7);
            if (temp_v5 <= temp_v4) {
              FUN_002bda30(temp_v6 - 0xd4,0);
              goto LAB_003780a4;
            }
          }
          piVar17 = (int *)0x0;
          piVar9 = piVar17;
          goto joined_r0x00377e5c;
        }
        temp_v6 = *(int *)(param_1 + 0x60);
        piVar17 = (int *)(temp_v6 - 0xd4);
        nw_ut_internal_LinkListImpl_erase_2BAE30(param_1 + 0x5c);
      } while (piVar17 == (int *)0x0);
      (**(romwright_code **)(*piVar17 + 0xc))(piVar17);
      FUN_0037960c(piVar17,temp_v26,temp_v23);
      piVar9 = *(int **)(param_1 + 0x54);
      if (piVar9 != (int *)(param_1 + 0x54)) {
        do {
          temp_v7 = (unsigned int)*(unsigned char *)(piVar9 + -0xf) + piVar9[-0x21];
          temp_v5 = 0x7f;
          if ((temp_v7 < 0x80) && (temp_v5 = temp_v7, temp_v7 < 0)) {
            temp_v5 = 0;
          }
        } while ((temp_v5 <= temp_v4) && (piVar9 = (int *)*piVar9, piVar9 != (int *)(param_1 + 0x54)));
      }
      nw_ut_internal_LinkListImpl_insert(param_1 + 0x50,piVar9,temp_v6);
LAB_0037814c:
      if (piVar17 == (int *)0x0) {
        return 0xd;
      }
      piVar17[0x27] = temp_v25;
      piVar9 = piVar17;
      if (temp_v24 != 0) {
        nw_snd_internal_BasicSound_SetAmbientInfo(piVar17,temp_v24);
      }
    }
    else {
      temp_v23 = temp_v33;
      temp_v24 = temp_v32;
      temp_v4 = UnsignedSaturate(temp_v27,7);
      UnsignedDoesSaturate(temp_v27,7);
      temp_v25 = temp_v2;
      temp_v26 = temp_v8;
LAB_00377f48:
      do {
        if (*(int *)(param_1 + 0x7c) == 0) {
          if (*(int *)(param_1 + 0x70) == 0) {
            piVar14 = (int *)0x0;
            goto LAB_00377ff0;
          }
          temp_v6 = *(int *)(param_1 + 0x74);
          if (temp_v6 - 0xd4 != 0) {
            temp_v7 = (unsigned int)*(unsigned char *)(temp_v6 - 0x3c) + *(int *)(temp_v6 - 0x84);
            temp_v5 = UnsignedSaturate(temp_v7,7);
            UnsignedDoesSaturate(temp_v7,7);
            if (temp_v5 <= temp_v4) {
              FUN_002bda30(temp_v6 - 0xd4,0);
              goto LAB_00377f48;
            }
          }
          piVar14 = (int *)0x0;
          piVar9 = piVar14;
          goto joined_r0x00377e5c;
        }
        temp_v6 = *(int *)(param_1 + 0x80);
        piVar14 = (int *)(temp_v6 - 0xd4);
        nw_ut_internal_LinkListImpl_erase_2BAE30(param_1 + 0x7c);
      } while (piVar14 == (int *)0x0);
      (**(romwright_code **)(*piVar14 + 0xc))(piVar14);
      FUN_0037960c(piVar14,temp_v25,temp_v26);
      piVar9 = *(int **)(param_1 + 0x74);
      if (piVar9 != (int *)(param_1 + 0x74)) {
        do {
          temp_v7 = (unsigned int)*(unsigned char *)(piVar9 + -0xf) + piVar9[-0x21];
          temp_v5 = 0x7f;
          if ((temp_v7 < 0x80) && (temp_v5 = temp_v7, temp_v7 < 0)) {
            temp_v5 = 0;
          }
        } while ((temp_v5 <= temp_v4) && (piVar9 = (int *)*piVar9, piVar9 != (int *)(param_1 + 0x74)));
      }
      nw_ut_internal_LinkListImpl_insert(param_1 + 0x70,piVar9,temp_v6);
LAB_00377ff0:
      if (piVar14 == (int *)0x0) {
        return 0xd;
      }
      piVar14[0x27] = temp_v24;
      piVar9 = piVar14;
      if (temp_v23 != 0) {
        nw_snd_internal_BasicSound_SetAmbientInfo(piVar14,temp_v23);
      }
    }
  }
  else {
    temp_v20 = temp_v33;
    temp_v26 = temp_v32;
    temp_v4 = UnsignedSaturate(temp_v27,7);
    UnsignedDoesSaturate(temp_v27,7);
    temp_v24 = temp_v2;
    temp_v25 = temp_v8;
LAB_00377d84:
    do {
      if (*(int *)(param_1 + 0x3c) == 0) {
        if (*(int *)(param_1 + 0x30) == 0) {
          piVar16 = (int *)0x0;
          goto LAB_00377e2c;
        }
        temp_v6 = *(int *)(param_1 + 0x34);
        if (temp_v6 - 0xd4 != 0) {
          temp_v7 = (unsigned int)*(unsigned char *)(temp_v6 - 0x3c) + *(int *)(temp_v6 - 0x84);
          temp_v5 = UnsignedSaturate(temp_v7,7);
          UnsignedDoesSaturate(temp_v7,7);
          if (temp_v5 <= temp_v4) {
            FUN_002bda30(temp_v6 - 0xd4,0);
            goto LAB_00377d84;
          }
        }
        piVar16 = (int *)0x0;
        piVar9 = piVar16;
        goto joined_r0x00377e5c;
      }
      temp_v6 = *(int *)(param_1 + 0x40);
      piVar16 = (int *)(temp_v6 - 0xd4);
      nw_ut_internal_LinkListImpl_erase_2BAE30(param_1 + 0x3c);
    } while (piVar16 == (int *)0x0);
    (**(romwright_code **)(*piVar16 + 0xc))(piVar16);
    FUN_0037960c(piVar16,temp_v24,temp_v25);
    piVar9 = *(int **)(param_1 + 0x34);
    if (piVar9 != (int *)(param_1 + 0x34)) {
      do {
        temp_v7 = (unsigned int)*(unsigned char *)(piVar9 + -0xf) + piVar9[-0x21];
        temp_v5 = 0x7f;
        if ((temp_v7 < 0x80) && (temp_v5 = temp_v7, temp_v7 < 0)) {
          temp_v5 = 0;
        }
      } while ((temp_v5 <= temp_v4) && (piVar9 = (int *)*piVar9, piVar9 != (int *)(param_1 + 0x34)));
    }
    nw_ut_internal_LinkListImpl_insert(param_1 + 0x30,piVar9,temp_v6);
LAB_00377e2c:
    if (piVar16 == (int *)0x0) {
      return 0xd;
    }
    piVar16[0x27] = temp_v26;
    piVar9 = piVar16;
    if (temp_v20 != 0) {
      nw_snd_internal_BasicSound_SetAmbientInfo(piVar16,temp_v20);
    }
  }
joined_r0x00377e5c:
  if (piVar9 == (int *)0x0) {
    return 0xd;
  }
  temp_v4 = nw_snd_SoundPlayer_detail_AppendSound(temp_v3,piVar9);
  if (temp_v4 != 0) {
    FUN_00379864(piVar9,(int)temp_v16);
    temp_v4 = *(int *)(param_1 + 4);
    FUN_00141fd0(temp_v4,temp_v32);
    if (temp_v4 != 1) {
      if (temp_v4 != 2) {
        if (temp_v4 != 3) {
          (**(romwright_code **)(*piVar9 + 0x10))(piVar9);
          return 3;
        }
        nw_snd_SoundPlayer_detail_AllocPlayerHeap(temp_v3,piVar17);
        temp_v23 = 0;
        temp_v24 = temp_v24 & 0xffff0000;
        temp_v3 = FUN_0014d478(*(unsigned int *)(param_1 + 4),temp_v32,temp_v22);
        if (temp_v3 == 0) {
          (**(romwright_code **)(*piVar17 + 0x10))(piVar17);
          return 3;
        }
        FUN_00377a10(param_1,piVar17,temp_v13,temp_v22,temp_v11,temp_v12);
        if ((param_1 & 0xff) != 0) {
          (**(romwright_code **)(*piVar17 + 0x10))(piVar17);
          return param_1 & 0xff;
        }
      }
      else {
        temp_v17 = 0;
        temp_v18 = 0;
        temp_v19 = '\0';
        temp_v3 = FUN_003e7114(*(unsigned int *)(param_1 + 4),temp_v32,&temp_v17);
        if (temp_v3 == 0) {
          (**(romwright_code **)(*piVar14 + 0x10))(piVar14);
          return 3;
        }
        temp_v24 = 0;
        puVar7 = (unsigned char *)0x0;
        temp_v22[0] = 0;
        temp_v23 = 0;
        if (temp_v19 == '\x02') {
          temp_v3 = FUN_003e716c(*(unsigned int *)(param_1 + 4),temp_v32,temp_v22);
          if (temp_v3 == 0) {
            (**(romwright_code **)(*piVar14 + 0x10))(piVar14);
            return 3;
          }
          puVar7 = temp_v22;
        }
        FUN_003784a4(param_1,piVar14,temp_v13,&temp_v17,puVar7);
        if ((param_1 & 0xff) != 0) {
          (**(romwright_code **)(*piVar14 + 0x10))(piVar14);
          return param_1 & 0xff;
        }
      }
    }
    else {
      nw_snd_SoundPlayer_detail_AllocPlayerHeap(temp_v3,piVar16);
      temp_v23 = 0;
      temp_v29 = 0;
      temp_v28 = 0;
      temp_v30 = 0;
      temp_v27 = 0xffffffff;
      temp_v24 = 0xffffffff;
      temp_v25 = 0xffffffff;
      temp_v26 = 0xffffffff;
      temp_v3 = FUN_0014d530(*(unsigned int *)(param_1 + 4),temp_v32,&temp_v23);
      if (temp_v3 == 0) {
        (**(romwright_code **)(*piVar16 + 0x10))(piVar16);
        return 3;
      }
      if (puVar12 != (unsigned int *)0x0) {
        if (puVar12[2] != 0xffffffff) {
          temp_v24 = puVar12[2];
        }
        if (puVar12[3] != 0xffffffff) {
          temp_v25 = puVar12[3];
        }
        if (puVar12[4] != 0xffffffff) {
          temp_v26 = puVar12[4];
        }
        if (puVar12[5] != 0xffffffff) {
          temp_v27 = puVar12[5];
        }
      }
      FUN_00378698(param_1,piVar16,temp_v13,&temp_v23,temp_v11,temp_v12,puVar12);
      if ((param_1 & 0xff) != 0) {
        (**(romwright_code **)(*piVar16 + 0x10))(piVar16);
        return param_1 & 0xff;
      }
    }
    if ((temp_v1 == 0) ||
       (temp_v1 = nw_snd_internal_ExternalSoundPlayer_AppendSound(temp_v1,piVar9), temp_v1 != 0)) {
      if (param_5 != 0) {
        piVar9[5] = param_5;
      }
      if (param_6 != 0) {
        nw_snd_internal_BasicSound_SetPlayerPriority(piVar9,temp_v21);
      }
      nw_snd_SoundHandle_detail_AttachSound(temp_v31,piVar9);
      return 0;
    }
  }
  (**(romwright_code **)(*piVar9 + 0x10))(piVar9);
  return 0xff;
}
