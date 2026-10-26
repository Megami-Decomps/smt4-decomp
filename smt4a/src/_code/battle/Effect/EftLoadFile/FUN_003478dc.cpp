/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003478dc` (_code @ 0x3478dc, 0x860 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(...);
int asdMemFree(...);
int FUN_0023aa50(...);
int FUN_0023aa8c(...);
int keyedRecordSetVectorPair0(...);
int FUN_0023aca0(...);
int sysMemClear(void);
int keyedCopyPayload(...);
int libc_strcmp(int, unsigned char *);
int effectAllocateSavedRenderRecords(...);
int FUN_003b6728(...);
int SBORROW4(int, int);
int VectorSignedToFloat(...);
int rt_memcpy(...);
int __aeabi_memcpy4(...);

/* stack frame of param_2: 32 slot(s), 116 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned char sp40; /* 0x40: local_40 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned char sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
} param_2_stack;

extern unsigned char LAB_003480c0; /* 0x3480c0 */
extern unsigned char LAB_003480c4; /* 0x3480c4 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0023aa50. */
/* Supplied declaration required: FUN_0023aa8c. */
/* Supplied declaration required: keyedRecordSetVectorPair0. */
/* Supplied declaration required: FUN_0023aca0. */
extern int libc_strlen(int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: keyedCopyPayload. */
/* Supplied declaration required: libc_strcmp. */
extern unsigned int effectTextureFindOrReserve(int);
/* Supplied declaration required: effectAllocateSavedRenderRecords. */
/* Supplied declaration required: FUN_003b6728. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: __aeabi_memcpy4. */


unsigned int FUN_003478dc(unsigned int param_1,char *param_2)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  char *pcVar6;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char *puVar10;
  unsigned char temp_v8;
  unsigned char *puVar12;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int *puVar15;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  int temp_v39;
  unsigned int temp_v40;
  unsigned int temp_v41;
  unsigned int temp_v42;
  unsigned int temp_v43;
  unsigned int temp_v44;
  unsigned int temp_v45;
  unsigned int temp_v46;
  unsigned char temp_v47 [3];
  unsigned char temp_v48 [33];
  unsigned int temp_v49;
  char *pcStack_28;
  
  temp_v0 = 0;
  temp_v2 = 1;
  temp_v3 = 0x100;
  temp_v49 = param_1;
  pcStack_28 = param_2;
  asdMemoryAllocTracked();
  sysMemClear();
  temp_v1 = *param_2;
  temp_v14 = temp_v1 == 'V';
  if (temp_v14) {
    temp_v1 = param_2[1];
  }
  temp_v15 = temp_v14 && temp_v1 == 'E';
  if (temp_v14 && temp_v1 == 'E') {
    temp_v15 = param_2[2] == 'R';
  }
  if (!temp_v15) {
    return 0xff;
  }
  temp_v13 = (int)param_2[4];
  temp_v12 = (int)param_2[5];
  if ((temp_v13 >= 0x31) && (temp_v0 = temp_v12 >= 0x31, temp_v12 >= 0x33)) {
    temp_v2 = 0;
  }
  temp_v14 = SBORROW4(temp_v13,0x31);
  temp_v4 = temp_v13 - 0x31;
  if (temp_v13 >= 0x31) {
    temp_v14 = SBORROW4(temp_v12,0x32);
    temp_v4 = temp_v12 - 0x32;
  }
  if (temp_v4 < 0 == temp_v14) {
    if (temp_v12 < 0x34) {
      temp_v4 = *(int *)(param_2 + 0x10);
      temp_v5 = 0;
      pcVar6 = param_2 + 0x1e4;
      if (0 < temp_v4) {
        do {
          temp_v7 = *(unsigned int *)(pcVar6 + 4);
          temp_v17 = *(unsigned int *)(pcVar6 + 8);
          temp_v18 = *(unsigned int *)(pcVar6 + 0xc);
          temp_v19 = *(unsigned int *)(pcVar6 + 0x10);
          temp_v20 = *(unsigned int *)(pcVar6 + 0x14);
          temp_v21 = *(unsigned int *)(pcVar6 + 0x18);
          temp_v22 = *(unsigned int *)(pcVar6 + 0x1c);
          puVar15 = (unsigned int *)(temp_v3 + temp_v5 * 0x348);
          *puVar15 = *(unsigned int *)pcVar6;
          puVar15[1] = temp_v7;
          puVar15[2] = temp_v17;
          puVar15[3] = temp_v18;
          puVar15[4] = temp_v19;
          puVar15[5] = temp_v20;
          puVar15[6] = temp_v21;
          puVar15[7] = temp_v22;
          __aeabi_memcpy4(puVar15 + 8,pcVar6 + 0x20,0x134);
          __aeabi_memcpy4(puVar15 + 0x55,pcVar6 + 0x154,0xb0);
          temp_v5 = temp_v5 + 1;
          *(char *)(puVar15 + 0xd1) = pcVar6[0x224];
          *(unsigned char *)((int)puVar15 + 0x151) = 0;
          temp_v7 = *(unsigned int *)(pcVar6 + 0x208);
          temp_v17 = *(unsigned int *)(pcVar6 + 0x20c);
          temp_v18 = *(unsigned int *)(pcVar6 + 0x210);
          temp_v19 = *(unsigned int *)(pcVar6 + 0x214);
          temp_v20 = *(unsigned int *)(pcVar6 + 0x218);
          temp_v21 = *(unsigned int *)(pcVar6 + 0x21c);
          temp_v22 = *(unsigned int *)(pcVar6 + 0x220);
          puVar15[0x81] = *(unsigned int *)(pcVar6 + 0x204);
          puVar15[0x82] = temp_v7;
          puVar15[0x83] = temp_v17;
          puVar15[0x84] = temp_v18;
          puVar15[0x85] = temp_v19;
          puVar15[0x86] = temp_v20;
          puVar15[0x87] = temp_v21;
          puVar15[0x88] = temp_v22;
          puVar15[0x89] = 0;
          puVar15[0x8a] = 0;
          temp_v4 = *(int *)(param_2 + 0x10);
          pcVar6 = pcVar6 + 0x228;
        } while (temp_v5 < temp_v4);
      }
      rt_memcpy(temp_v47,param_2 + temp_v4 * 0x228 + 0x1e4);
      if (temp_v0) {
        rt_memcpy(&temp_v23,param_2 + temp_v4 * 0x228 + 0x1ec,0x20);
        rt_memcpy(&temp_v31,param_2 + temp_v4 * 0x228 + 500,0x20);
        rt_memcpy(&temp_v39,param_2 + temp_v4 * 0x228 + 0x1fc);
      }
      else {
LAB_00347b00:
        temp_v25 = 0;
        temp_v30 = 0;
        temp_v36 = 0;
        temp_v28 = 0;
        temp_v31 = 0xffffff;
        temp_v26 = 0;
        temp_v27 = 0;
        temp_v24 = 0;
        temp_v32 = 0;
        temp_v33 = 0;
        temp_v44 = 0;
        temp_v29 = 0;
        temp_v23 = 0xffffff;
        temp_v37 = 0;
        temp_v38 = 0;
        temp_v34 = 0;
        temp_v35 = 0;
        temp_v40 = 0;
        temp_v41 = 0;
        temp_v42 = 0;
        temp_v43 = 0;
        temp_v45 = 0;
        temp_v46 = 0;
        temp_v39 = 0xffffff;
      }
      goto LAB_00347b8c;
    }
    rt_memcpy(temp_v3,param_2 + 0x1e4,*(int *)(param_2 + 0x10) * 0x348);
    temp_v4 = *(int *)(param_2 + 0x10);
    rt_memcpy(temp_v47,param_2 + temp_v4 * 0x348 + 0x1e4);
    if (!temp_v0) goto LAB_00347b00;
    rt_memcpy(&temp_v23,param_2 + temp_v4 * 0x348 + 0x1ec,0x20);
    rt_memcpy(&temp_v31,param_2 + temp_v4 * 0x348 + 500,0x20);
    rt_memcpy(&temp_v39,param_2 + temp_v4 * 0x348 + 0x1fc);
  }
  else {
    if (!temp_v0) goto LAB_00347b00;
LAB_00347b8c:
    if (temp_v13 < 0x31) goto LAB_00347c88;
  }
  if ((temp_v12 < 0x35) && (temp_v4 = *(int *)(param_2 + 0x10), 0 < temp_v4)) {
    pcVar6 = (char *)(temp_v3 + 0x344);
    puVar10 = (unsigned char *)(temp_v3 + 0x1fe);
    puVar12 = (unsigned char *)(temp_v3 + 0x1ff);
    do {
      temp_v1 = *pcVar6;
      pcVar6 = pcVar6 + 0x348;
      if (temp_v1 == '\x03') {
        *puVar10 = 0xb4;
        *puVar12 = 0xb4;
      }
      temp_v4 = temp_v4 - 1;
      puVar10 = puVar10 + 0x348;
      puVar12 = puVar12 + 0x348;
    } while (temp_v4 != 0);
  }
  if (temp_v13 == 0x31) {
    if (temp_v12 == 0x35) {
      if ((int)*(unsigned int *)(param_2 + 0x10) < 1) {
        temp_v9 = 0;
      }
      else {
        temp_v9 = *(unsigned int *)(param_2 + 0x10) & 1;
        if (temp_v9 == 1) {
          *(unsigned char *)(temp_v3 + 0x150) = *(unsigned char *)(temp_v3 + 0x150) & 0xf7;
        }
      }
      if ((int)temp_v9 < *(int *)(param_2 + 0x10)) {
        do {
          temp_v10 = temp_v9 + 2;
          temp_v13 = temp_v3 + temp_v9 * 0x348;
          *(unsigned char *)(temp_v13 + 0x150) = *(unsigned char *)(temp_v13 + 0x150) & 0xf7;
          *(unsigned char *)(temp_v13 + 0x498) = *(unsigned char *)(temp_v13 + 0x498) & 0xf7;
          temp_v9 = temp_v10;
        } while ((int)temp_v10 < *(int *)(param_2 + 0x10));
      }
    }
    if (temp_v12 < 0x37) {
      temp_v47[0] = 0;
      temp_v48[5] = 0;
      temp_v48[0xd] = 0;
      temp_v48[0x15] = 0;
    }
  }
LAB_00347c88:
  temp_v12 = *(int *)(param_2 + 0x10);
  temp_v13 = 0;
  if (temp_v13 < temp_v12) {
    do {
      temp_v12 = 0;
      temp_v4 = temp_v3 + temp_v13 * 0x348;
      temp_v9 = (unsigned int)*(unsigned char *)(temp_v4 + 0x151);
      if (temp_v9 == 0) {
        temp_v9 = 1;
      }
      do {
        temp_v11 = temp_v4 + temp_v12 * 0x28;
        temp_v5 = libc_strlen(temp_v11 + 0x204);
        if (temp_v5 >= 3) {
          temp_v11 = temp_v11 + temp_v5;
          temp_v6 = temp_v11 + 0x201;
          temp_v5 = temp_v6;
          libc_strcmp(temp_v6,&LAB_003480c0);
          if ((temp_v5 == 0) || (libc_strcmp(temp_v6,&LAB_003480c4), temp_v6 == 0)) {
            *(unsigned char *)(temp_v11 + 0x201) = 0;
          }
        }
        temp_v12 = temp_v12 + 1;
      } while (temp_v12 < (int)temp_v9);
      temp_v12 = *(int *)(param_2 + 0x10);
      temp_v13 = temp_v13 + 1;
    } while (temp_v13 < temp_v12);
  }
  temp_v13 = 0;
  if (0 < temp_v12) {
    do {
      temp_v12 = 0;
      temp_v4 = temp_v3 + temp_v13 * 0x348;
      temp_v9 = (unsigned int)*(unsigned char *)(temp_v4 + 0x151);
      if (temp_v9 == 0) {
        temp_v9 = 1;
      }
      do {
        temp_v5 = temp_v4 + temp_v12 * 0x28;
        temp_v7 = effectTextureFindOrReserve(temp_v5 + 0x204);
        temp_v12 = temp_v12 + 1;
        *(unsigned int *)(temp_v5 + 0x228) = temp_v7;
      } while (temp_v12 < (int)temp_v9);
      temp_v13 = temp_v13 + 1;
      *(unsigned int *)(temp_v4 + 0x14c) = *(unsigned int *)(temp_v4 + 0x228);
    } while (temp_v13 < *(int *)(param_2 + 0x10));
  }
  temp_v12 = 0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x140,1);
  __aeabi_memcpy4(temp_v12,param_2 + 0xa4,*(int *)(param_2 + 0xc) * 0x14);
  if (temp_v2) {
    temp_v13 = 0;
    if (temp_v13 < *(int *)(param_2 + 0x10)) {
      do {
        temp_v5 = 0;
        temp_v4 = temp_v3 + temp_v13 * 0x348;
        do {
          temp_v11 = temp_v4 + temp_v5 * 0x44;
          temp_v8 = *(unsigned char *)(temp_v11 + 0x57);
          temp_v9 = (unsigned int)temp_v8;
          if (temp_v9 != 0) {
            if (temp_v9 >= 0x1f) {
              temp_v8 = 0xff;
            }
            else {
              temp_v16 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v6 = (int)(temp_v16 * 8.226f);
              if (temp_v6 >= 0x100) {
                temp_v6 = 0xff;
              }
              temp_v8 = (unsigned char)temp_v6;
            }
          }
          *(unsigned char *)(temp_v11 + 0x57) = temp_v8;
          temp_v6 = temp_v4 + temp_v5 * 0x18;
          temp_v11 = *(int *)(temp_v6 + 0x1a0);
          temp_v9 = 0;
          if (temp_v11 != 0) {
            if (temp_v11 >= 0x1f) {
              temp_v9 = 0xff;
            }
            else {
              temp_v16 = (float)VectorSignedToFloat(temp_v11,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v9 = (unsigned int)(temp_v16 * 8.226f);
              if ((int)temp_v9 >= 0x100) {
                temp_v9 = 0xff;
              }
              temp_v9 = temp_v9 & 0xff;
            }
          }
          temp_v5 = temp_v5 + 1;
          *(unsigned int *)(temp_v6 + 0x1a0) = temp_v9;
        } while (temp_v5 < 4);
        temp_v13 = temp_v13 + 1;
        temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x140),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v4 + 0x140) = temp_v16 * 0.00024414062f;
        temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x144),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v4 + 0x144) = temp_v16 * 0.00024414062f;
        temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v4 + 0x148),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v4 + 0x148) = temp_v16 * 0.00024414062f;
      } while (temp_v13 < *(int *)(param_2 + 0x10));
    }
    temp_v13 = 0;
    do {
      temp_v8 = temp_v48[temp_v13 * 8];
      temp_v9 = (unsigned int)temp_v8;
      if (temp_v9 != 0) {
        if (temp_v9 >= 0x1f) {
          temp_v8 = 0xff;
        }
        else {
          temp_v16 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = (int)(temp_v16 * 8.226f);
          if (temp_v4 >= 0x100) {
            temp_v4 = 0xff;
          }
          temp_v8 = (unsigned char)temp_v4;
        }
      }
      temp_v48[temp_v13 * 8] = temp_v8;
      temp_v8 = *(unsigned char *)((int)&temp_v23 + temp_v13 * 8 + 3);
      temp_v9 = (unsigned int)temp_v8;
      if (temp_v9 != 0) {
        if (temp_v9 >= 0x1f) {
          temp_v8 = 0xff;
        }
        else {
          temp_v16 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = (int)(temp_v16 * 8.226f);
          if (temp_v4 >= 0x100) {
            temp_v4 = 0xff;
          }
          temp_v8 = (unsigned char)temp_v4;
        }
      }
      *(unsigned char *)((int)&temp_v23 + temp_v13 * 8 + 3) = temp_v8;
      temp_v8 = *(unsigned char *)((int)&temp_v31 + temp_v13 * 8 + 3);
      temp_v9 = (unsigned int)temp_v8;
      if (temp_v9 != 0) {
        if (temp_v9 >= 0x1f) {
          temp_v8 = 0xff;
        }
        else {
          temp_v16 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = (int)(temp_v16 * 8.226f);
          if (temp_v4 >= 0x100) {
            temp_v4 = 0xff;
          }
          temp_v8 = (unsigned char)temp_v4;
        }
      }
      *(unsigned char *)((int)&temp_v31 + temp_v13 * 8 + 3) = temp_v8;
      temp_v4 = temp_v13 * 8;
      temp_v8 = *(unsigned char *)((int)&temp_v39 + temp_v4 + 3);
      temp_v9 = (unsigned int)temp_v8;
      if (temp_v9 != 0) {
        if (temp_v9 >= 0x1f) {
          temp_v8 = 0xff;
        }
        else {
          temp_v16 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v5 = (int)(temp_v16 * 8.226f);
          if (temp_v5 >= 0x100) {
            temp_v5 = 0xff;
          }
          temp_v8 = (unsigned char)temp_v5;
        }
      }
      temp_v13 = temp_v13 + 1;
      *(unsigned char *)((int)&temp_v39 + temp_v4 + 3) = temp_v8;
    } while (temp_v13 < 4);
    temp_v13 = 0;
    if (0 < *(int *)(param_2 + 0xc)) {
      do {
        temp_v4 = temp_v13 + 1;
        temp_v13 = temp_v12 + temp_v13 * 0x14;
        temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v13 + 8),(unsigned char)(in_fpscr >> 0x16) & 3
                                           );
        *(float *)(temp_v13 + 8) = temp_v16 * 0.00024414062f;
        temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v13 + 0xc),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v13 + 0xc) = temp_v16 * 0.00024414062f;
        temp_v16 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v13 + 0x10),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(temp_v13 + 0x10) = temp_v16 * 0.00024414062f;
        temp_v13 = temp_v4;
      } while (temp_v4 < *(int *)(param_2 + 0xc));
    }
  }
  effectAllocateSavedRenderRecords(temp_v49,temp_v3,*(unsigned int *)(param_2 + 0x10));
  FUN_003b6728(temp_v49,temp_v12,*(unsigned int *)(param_2 + 0xc));
  keyedCopyPayload(temp_v49,param_2 + 0x14);
  keyedRecordSetVectorPair0(temp_v49,temp_v47);
  FUN_0023aca0(temp_v49,&temp_v23);
  FUN_0023aa50(temp_v49,&temp_v31);
  FUN_0023aa8c(temp_v49,&temp_v39);
  asdMemFree(temp_v3);
  asdMemFree(temp_v12);
  return temp_v49;
}

} /* extern "C" */
