/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039d69c` (_code @ 0x39d69c, 0xecc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
} param_2_stack;

extern unsigned char LAB_00103001; /* 0x103001 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00231494. */
/* Supplied declaration required: FUN_002314d0. */
extern unsigned int *FUN_00248248(int);
extern int FUN_002482a8(void);
/* Supplied declaration required: FUN_0024c1e4. */
extern unsigned short FUN_00276348(unsigned int);
/* Supplied declaration required: FUN_002c09d0. */
extern unsigned short FUN_003218e0(unsigned int);
extern short *FUN_0039fc34(unsigned char *, int);
/* Supplied declaration required: FUN_0039fca8. */
/* Supplied declaration required: MapNaviTable_GetCategoryCount. */
extern short *MapNaviTable_GetCategoryRecord(unsigned char *, int);


void FUN_0039d69c(int param_1,unsigned int param_2)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 9 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  short temp_v2;
  short temp_v3;
  short temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned char *puVar8;
  unsigned int *puVar9;
  short *psVar10;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  char *pcVar17;
  int temp_v13;
  int temp_v14;
  unsigned char temp_v15;
  unsigned int in_fpscr;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  float temp_v23;
  unsigned int temp_v24;
  float temp_v25;
  float temp_v26;
  unsigned long long temp_v27;
  unsigned long long temp_v28;
  float temp_v29;
  unsigned int temp_v30;
  unsigned long long temp_v31;
  unsigned long long temp_v32;
  int temp_v33;
  unsigned char temp_v34 [4];
  int temp_v35;
  int temp_v36;
  int temp_v37;
  int temp_v38;
  int temp_v39;
  int temp_v40;
  int temp_v41;
  int temp_v42;
  int temp_v43;
  int iStack_2c;
  unsigned int temp_v44;
  
  pcVar17 = (char *)0x0;
  temp_v14 = 0;
  temp_v10 = 0;
  temp_v13 = 0;
  temp_v42 = 0;
  temp_v35 = 0;
  iStack_2c = param_1;
  temp_v44 = param_2;
  do {
    temp_v11 = 0;
    puVar8 = temp_v34;
    FUN_002314d0();
    if (0 < (int)puVar8) {
      do {
        pcVar17 = (char *)FUN_00231494(temp_v34,temp_v11);
        if ((int)*pcVar17 == temp_v44) {
          if (temp_v13 != 0) {
            if (temp_v13 != 1) {
              if (temp_v13 != 2) {
                if (temp_v13 != 3) {
                  if ((temp_v13 == 4) && (*(short *)(pcVar17 + 8) == 3)) {
LAB_0039d774:
                    if (((*(short *)(pcVar17 + 4) == 0) || (temp_v12 = FUN_002c09d0(), temp_v12 != 0))
                       && ((*(short *)(pcVar17 + 6) == 0 || (temp_v12 = FUN_002c09d0(), temp_v12 == 0)))
                       ) {
                      temp_v4 = *(short *)(pcVar17 + 10);
                      temp_v0 = *(short *)(pcVar17 + 0xc);
                      if (temp_v4 != 0 || temp_v0 != 0) {
                        if (*(short *)(pcVar17 + 8) == 2 || *(short *)(pcVar17 + 8) == 4) {
                          temp_v30 = 0x13;
                        }
                        else {
                          temp_v30 = 0x33;
                        }
                        temp_v2 = *(short *)(pcVar17 + 0xe);
                        temp_v3 = *(short *)(pcVar17 + 0x10);
                        temp_v38 = (int)(short)((short)pcVar17[0x12] + temp_v2 / 2);
                        temp_v39 = (int)(short)((short)pcVar17[0x13] + temp_v3 / 2);
                        FUN_0024c1e4(temp_v30,temp_v4,&temp_v36,&temp_v37);
                        FUN_0024c1e4(temp_v30,temp_v0,&temp_v40,&temp_v41);
                        if (*(short *)(pcVar17 + 8) != 0) {
                          puVar9 = (unsigned int *)(param_1 + temp_v14 * 0x4c + 0xe88);
                          temp_v14 = temp_v14 + 1;
                        }
                        else {
                          puVar9 = (unsigned int *)(param_1 + temp_v42 * 0x4c + 0x5a90);
                          temp_v42 = temp_v42 + 1;
                        }
                        *puVar9 = temp_v30;
                        temp_v30 = VectorSignedToFloat((int)temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
                        temp_v24 = VectorSignedToFloat((int)temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
                        *(char *)(puVar9 + 1) = pcVar17[1];
                        temp_v22 = VectorSignedToFloat(temp_v38,(unsigned char)(in_fpscr >> 0x16) & 3);
                        temp_v20 = VectorSignedToFloat(temp_v39,(unsigned char)(in_fpscr >> 0x16) & 3);
                        *(unsigned short *)(puVar9 + 0xb) = *(unsigned short *)(pcVar17 + 8);
                        *(char *)((int)puVar9 + 5) = pcVar17[2];
                        *(short *)((int)puVar9 + 6) = (short)pcVar17[3];
                        *(unsigned short *)(puVar9 + 0xc) = *(unsigned short *)(pcVar17 + 4);
                        *(unsigned short *)((int)puVar9 + 0x32) = *(unsigned short *)(pcVar17 + 6);
                        *(short *)(puVar9 + 2) = temp_v4;
                        puVar9[3] = temp_v30;
                        puVar9[4] = temp_v24;
                        temp_v30 = VectorSignedToFloat(temp_v36,(unsigned char)(in_fpscr >> 0x16) & 3);
                        puVar9[5] = temp_v30;
                        temp_v30 = VectorSignedToFloat(temp_v37,(unsigned char)(in_fpscr >> 0x16) & 3);
                        puVar9[6] = temp_v30;
                        *(short *)((int)puVar9 + 10) = temp_v0;
                        puVar9[7] = temp_v22;
                        puVar9[8] = temp_v20;
                        temp_v30 = VectorSignedToFloat(temp_v40,(unsigned char)(in_fpscr >> 0x16) & 3);
                        puVar9[9] = temp_v30;
                        temp_v30 = VectorSignedToFloat(temp_v41,(unsigned char)(in_fpscr >> 0x16) & 3);
                        puVar9[10] = temp_v30;
                        *(unsigned short *)(puVar9 + 0xd) = 0;
                        puVar9[0x12] = 0xffffffff;
                      }
                    }
                  }
                }
                else if (*(short *)(pcVar17 + 8) == 2) goto LAB_0039d774;
              }
              else if (*(short *)(pcVar17 + 8) == 4) goto LAB_0039d774;
            }
            else if (*(short *)(pcVar17 + 8) == 0) goto LAB_0039d774;
          }
          else if (*(short *)(pcVar17 + 8) == 1) goto LAB_0039d774;
        }
        temp_v11 = temp_v11 + 1;
        puVar8 = temp_v34;
        FUN_002314d0();
      } while (temp_v11 < (int)puVar8);
    }
    temp_v13 = temp_v13 + 1;
  } while (temp_v13 < 4);
  temp_v30 = 0x3cc49ba6;
  temp_v32 = 0x3c449ba6;
  temp_v27 = 0x40e000003cc49ba6;
  temp_v28 = 0x3c449ba640400000;
  FUN_0024c1e4(0x13,0x1b67,&temp_v36,&temp_v37);
  FUN_0024c1e4(0x13,0x1b8f,&temp_v40,&temp_v41);
  temp_v11 = 0;
  temp_v13 = FUN_002482a8();
  temp_v20 = (unsigned int)temp_v32;
  temp_v31 = romwright_piece_4_4(temp_v30,0x3f000000);
  if (0 < temp_v13) {
    do {
      puVar9 = (unsigned int *)FUN_00248248(temp_v11);
      if (((int)*(char *)(puVar9 + 2) == temp_v44) &&
         (temp_v1 = *(char *)((int)puVar9 + 10),
         (temp_v1 == '\x18' || temp_v1 == '\x19') || temp_v1 == '\x1a')) {
        temp_v13 = 0;
        puVar8 = temp_v34;
        temp_v35 = 1;
        FUN_002314d0();
        if (0 < (int)puVar8) {
          do {
            pcVar17 = (char *)FUN_00231494(temp_v34,temp_v13);
            if ((*(short *)(pcVar17 + 8) == 0) && (pcVar17[1] == *(char *)((int)puVar9 + 0xb))) {
              temp_v35 = (int)pcVar17[3];
              break;
            }
            temp_v13 = temp_v13 + 1;
            puVar8 = temp_v34;
            FUN_002314d0();
          } while (temp_v13 < (int)puVar8);
        }
        temp_v13 = param_1 + *(char *)((int)puVar9 + 9) * 8;
        temp_v30 = *(unsigned int *)(temp_v13 + 0xb88);
        temp_v21 = (float)VectorSignedToFloat((int)*(short *)((int)puVar9 + 0x16),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorSignedToFloat((int)*(short *)((int)puVar9 + 0x1a),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v18 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v25 = (float)VectorSignedToFloat((int)(short)(int)temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v23 = (float)VectorSignedToFloat((int)*(short *)((int)puVar9 + 0x16),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v19 = (float)VectorSignedToFloat((int)*(short *)((int)puVar9 + 0x1a),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorSignedToFloat((int)(short)(int)(temp_v18 * (float)temp_v31),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = param_1 + temp_v14 * 0x4c;
        temp_v29 = (float)((unsigned long long)temp_v28 >> 0x20);
        temp_v25 = (float)VectorSignedToFloat((int)(short)(int)(temp_v25 + temp_v21 * (float)temp_v27),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v26 = (float)((unsigned long long)temp_v27 >> 0x20);
        temp_v17 = (float)VectorSignedToFloat((int)(short)(int)(temp_v17 + temp_v23 * temp_v29),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v38 = (int)(short)(int)(temp_v17 - (float)temp_v28);
        temp_v30 = *(unsigned int *)(temp_v13 + 0xb8c);
        temp_v17 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v18 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v21 = (float)VectorSignedToFloat((int)(short)(int)temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorSignedToFloat((int)(short)(int)(temp_v18 * (float)temp_v31),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorSignedToFloat((int)(short)(int)(temp_v21 + temp_v16 * (float)temp_v27),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorSignedToFloat((int)(short)(int)(temp_v17 + temp_v19 * temp_v29),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v39 = (int)(short)(int)(temp_v17 - (float)temp_v28);
        *(unsigned int *)(temp_v12 + 0xe88) = 0x13;
        *(char *)(temp_v12 + 0xe8c) = pcVar17[1];
        *(unsigned short *)(temp_v12 + 0xeb4) = 2;
        *(unsigned char *)(temp_v12 + 0xe8d) = 0xff;
        temp_v5 = FUN_00276348(*puVar9);
        temp_v20 = VectorSignedToFloat((int)(short)(int)(temp_v25 - temp_v26),(unsigned char)(in_fpscr >> 0x16) & 3
                                    );
        temp_v30 = VectorSignedToFloat((int)(short)(int)(temp_v16 - temp_v26),(unsigned char)(in_fpscr >> 0x16) & 3
                                    );
        *(unsigned short *)(temp_v12 + 0xeb6) = temp_v5;
        *(short *)(temp_v12 + 0xe8e) = (short)temp_v35;
        *(unsigned short *)(temp_v12 + 0xeb8) = 0;
        *(unsigned short *)(temp_v12 + 0xeba) = 0;
        temp_v14 = temp_v14 + 1;
        *(unsigned short *)(temp_v12 + 0xe90) = 0x1b67;
        *(unsigned int *)(temp_v12 + 0xe94) = temp_v20;
        *(unsigned int *)(temp_v12 + 0xe98) = temp_v30;
        temp_v22 = VectorSignedToFloat(temp_v39,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v20 = VectorSignedToFloat(temp_v38,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v30 = VectorSignedToFloat(temp_v36,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v12 + 0xe9c) = temp_v30;
        temp_v30 = VectorSignedToFloat(temp_v37,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v12 + 0xea0) = temp_v30;
        *(unsigned short *)(temp_v12 + 0xe92) = 0x1b8f;
        *(unsigned int *)(temp_v12 + 0xea4) = temp_v20;
        *(unsigned int *)(temp_v12 + 0xea8) = temp_v22;
        temp_v30 = VectorSignedToFloat(temp_v40,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v12 + 0xeac) = temp_v30;
        temp_v30 = VectorSignedToFloat(temp_v41,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v12 + 0xeb0) = temp_v30;
        *(unsigned short *)(temp_v12 + 0xebc) = 0;
        *(unsigned int *)(temp_v12 + 0xed0) = 0xffffffff;
      }
      temp_v11 = temp_v11 + 1;
      temp_v13 = FUN_002482a8();
      temp_v20 = (unsigned int)temp_v32;
    } while (temp_v11 < temp_v13);
  }
  temp_v27 = romwright_piece_4_4((int)((unsigned long long)temp_v27 >> 0x20),temp_v20);
  FUN_0024c1e4(0x13,0x1b67,&temp_v36,&temp_v37);
  FUN_0024c1e4(0x13,0x1b8f,&temp_v40,&temp_v41);
  temp_v11 = 0;
  temp_v13 = FUN_002482a8();
  if (0 < temp_v13) {
    do {
      puVar9 = (unsigned int *)FUN_00248248(temp_v11);
      temp_v8 = (unsigned int)*(char *)(puVar9 + 2);
      temp_v15 = temp_v8 == temp_v44;
      if (temp_v15) {
        temp_v8 = (unsigned int)*(unsigned char *)((int)puVar9 + 10);
      }
      if ((temp_v15 && temp_v8 == 0x2b) &&
         (((unsigned char *)*puVar9 != &LAB_00103001 || (temp_v13 = FUN_002c09d0(0xef), temp_v13 == 0)))) {
        temp_v13 = 0;
        puVar8 = temp_v34;
        temp_v35 = 1;
        FUN_002314d0();
        if (0 < (int)puVar8) {
          do {
            pcVar17 = (char *)FUN_00231494(temp_v34,temp_v13);
            if ((*(short *)(pcVar17 + 8) == 0) && (pcVar17[1] == *(char *)((int)puVar9 + 0xb))) {
              temp_v35 = (int)pcVar17[3];
              break;
            }
            temp_v13 = temp_v13 + 1;
            puVar8 = temp_v34;
            FUN_002314d0();
          } while (temp_v13 < (int)puVar8);
        }
        temp_v13 = param_1 + *(char *)((int)puVar9 + 9) * 8;
        temp_v30 = *(unsigned int *)(temp_v13 + 0xb88);
        temp_v21 = (float)VectorSignedToFloat((int)*(short *)((int)puVar9 + 0x16),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorSignedToFloat((int)*(short *)((int)puVar9 + 0x1a),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v18 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v25 = (float)VectorSignedToFloat((int)(short)(int)temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v26 = (float)((unsigned long long)temp_v31 >> 0x20);
        temp_v23 = (float)VectorSignedToFloat((int)*(short *)((int)puVar9 + 0x16),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v19 = (float)VectorSignedToFloat((int)*(short *)((int)puVar9 + 0x1a),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorSignedToFloat((int)(short)(int)(temp_v18 * (float)temp_v31),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v12 = param_1 + temp_v14 * 0x4c;
        temp_v18 = (float)VectorSignedToFloat((int)(short)(int)(temp_v25 + temp_v21 * temp_v26),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v25 = (float)((unsigned long long)temp_v27 >> 0x20);
        temp_v17 = (float)VectorSignedToFloat((int)(short)(int)(temp_v17 + temp_v23 * (float)temp_v27),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v38 = (int)(short)(int)(temp_v17 - (float)temp_v28);
        temp_v30 = *(unsigned int *)(temp_v13 + 0xb8c);
        temp_v17 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v21 = (float)VectorSignedToFloat(temp_v30,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v23 = (float)VectorSignedToFloat((int)(short)(int)temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorSignedToFloat((int)(short)(int)(temp_v21 * (float)temp_v31),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v16 = (float)VectorSignedToFloat((int)(short)(int)(temp_v23 + temp_v16 * temp_v26),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v17 = (float)VectorSignedToFloat((int)(short)(int)(temp_v17 + temp_v19 * (float)temp_v27),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v39 = (int)(short)(int)(temp_v17 - (float)temp_v28);
        *(unsigned int *)(temp_v12 + 0xe88) = 0x13;
        *(char *)(temp_v12 + 0xe8c) = pcVar17[1];
        *(unsigned short *)(temp_v12 + 0xeb4) = 2;
        *(unsigned char *)(temp_v12 + 0xe8d) = 0xfe;
        temp_v5 = FUN_003218e0(*puVar9);
        temp_v20 = VectorSignedToFloat((int)(short)(int)(temp_v18 - temp_v25),(unsigned char)(in_fpscr >> 0x16) & 3
                                    );
        temp_v30 = VectorSignedToFloat((int)(short)(int)(temp_v16 - temp_v25),(unsigned char)(in_fpscr >> 0x16) & 3
                                    );
        *(unsigned short *)(temp_v12 + 0xeb6) = temp_v5;
        *(short *)(temp_v12 + 0xe8e) = (short)temp_v35;
        *(unsigned short *)(temp_v12 + 0xeb8) = 0;
        *(unsigned short *)(temp_v12 + 0xeba) = 0;
        temp_v14 = temp_v14 + 1;
        *(unsigned short *)(temp_v12 + 0xe90) = 0x1b67;
        *(unsigned int *)(temp_v12 + 0xe94) = temp_v20;
        *(unsigned int *)(temp_v12 + 0xe98) = temp_v30;
        temp_v22 = VectorSignedToFloat(temp_v39,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v20 = VectorSignedToFloat(temp_v38,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v30 = VectorSignedToFloat(temp_v36,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v12 + 0xe9c) = temp_v30;
        temp_v30 = VectorSignedToFloat(temp_v37,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v12 + 0xea0) = temp_v30;
        *(unsigned short *)(temp_v12 + 0xe92) = 0x1b8f;
        *(unsigned int *)(temp_v12 + 0xea4) = temp_v20;
        *(unsigned int *)(temp_v12 + 0xea8) = temp_v22;
        temp_v30 = VectorSignedToFloat(temp_v40,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v12 + 0xeac) = temp_v30;
        temp_v30 = VectorSignedToFloat(temp_v41,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v12 + 0xeb0) = temp_v30;
        *(unsigned short *)(temp_v12 + 0xebc) = 0;
        *(unsigned int *)(temp_v12 + 0xed0) = 0xffffffff;
      }
      temp_v11 = temp_v11 + 1;
      temp_v13 = FUN_002482a8();
    } while (temp_v11 < temp_v13);
  }
  temp_v43 = param_1 + 0x6000;
  *(int *)(param_1 + 0x5a88) = temp_v14;
  *(int *)(param_1 + 0x61b0) = temp_v42;
  temp_v14 = 0;
  do {
    temp_v8 = 0;
    temp_v13 = temp_v14 + 2;
    temp_v14 = param_1 + temp_v14 * 0x30;
    *(unsigned char *)(temp_v14 + 0x61b4) = 0;
    *(unsigned char *)(temp_v14 + 0x61e4) = 0;
    temp_v14 = temp_v13;
  } while (temp_v13 < 0x400);
  temp_v33 = 0;
  puVar8 = temp_v34;
  MapNaviTable_GetCategoryCount();
  temp_v27 = 0;
  temp_v28 = 0x3b800000;
  if (0 < (int)puVar8) {
    do {
      psVar10 = (short *)MapNaviTable_GetCategoryRecord(temp_v34,temp_v33);
      if ((int)*psVar10 == temp_v44) {
        temp_v30 = (unsigned int)((unsigned long long)temp_v27 >> 0x20);
        temp_v27 = romwright_piece_4_4(temp_v30,temp_v30);
        temp_v14 = (((int)(char)psVar10[4] - (int)(char)psVar10[3]) + 1) / 2;
        temp_v13 = (((int)*(char *)((int)psVar10 + 9) - (int)*(char *)((int)psVar10 + 7)) + 1) / 2;
        temp_v11 = *(int *)(temp_v43 + 0x1b0);
        temp_v35 = -99;
        if (0 < temp_v11) {
          temp_v8 = (unsigned int)*(unsigned char *)(psVar10 + 2);
        }
        temp_v12 = 0;
        if (temp_v12 < temp_v11) {
          do {
            temp_v9 = param_1 + temp_v12 * 0x4c;
            if (temp_v8 == *(unsigned char *)(temp_v9 + 0x5a94)) {
              temp_v8 = 0xf5;
              temp_v35 = (int)*(short *)(temp_v9 + 0x5a96);
              temp_v16 = (float)VectorSignedToFloat(temp_v12 * -2 + 0xf5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v27 = CONCAT44(temp_v30,temp_v16 * (float)temp_v28);
              if (temp_v35 == 99) goto LAB_0039e364;
              break;
            }
            temp_v12 = temp_v12 + 1;
          } while (temp_v12 < temp_v11);
        }
        temp_v11 = 0;
        puVar8 = temp_v34;
        FUN_002314d0();
        if (0 < (int)puVar8) {
          do {
            pcVar17 = (char *)FUN_00231494(temp_v34,temp_v11);
            temp_v6 = (unsigned short)*(unsigned char *)(psVar10 + 2);
            temp_v15 = temp_v6 == (unsigned char)pcVar17[1];
            if (temp_v15) {
              temp_v6 = *(unsigned short *)(pcVar17 + 8);
            }
            if (temp_v15 && temp_v6 == 0) break;
            temp_v11 = temp_v11 + 1;
            puVar8 = temp_v34;
            FUN_002314d0();
          } while (temp_v11 < (int)puVar8);
        }
        temp_v4 = *(short *)(pcVar17 + 0x10);
        temp_v12 = (int)*(short *)(pcVar17 + 0xe);
        temp_v8 = temp_v12 - (temp_v12 >> 0x1f);
        temp_v38 = (int)(short)((short)pcVar17[0x12] + *(short *)(pcVar17 + 0xe) / 2);
        temp_v11 = 0;
        temp_v39 = (int)(short)((short)pcVar17[0x13] + temp_v4 / 2);
        if (0 < temp_v13) {
          do {
            temp_v8 = 0;
            if ((int)temp_v8 < temp_v14) {
              do {
                if (((((char)psVar10[2] != -0x72) || (temp_v8 - 3 >= 2)) ||
                    (((temp_v11 < 0 || (temp_v11 >= 3)) && ((temp_v11 < 5 || (temp_v11 >= 7)))))) &&
                   (temp_v10 < 0x400)) {
                  temp_v7 = param_1 + temp_v10 * 0x30;
                  *(unsigned char *)(temp_v7 + 0x61b4) = 0;
                  *(unsigned char *)(temp_v7 + 0x61b5) = 1;
                  temp_v10 = temp_v10 + 1;
                  *(char *)(temp_v7 + 0x61b6) = (char)psVar10[2];
                  *(short *)(temp_v7 + 0x61ba) = (short)temp_v35;
                  temp_v18 = (float)VectorSignedToFloat(temp_v11 * 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
                  *(char *)(temp_v7 + 0x61b7) = pcVar17[2];
                  temp_v16 = (float)VectorSignedToFloat((int)temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v9 = (unsigned int)*(unsigned char *)(temp_v7 + 0x61b6) * 8;
                  *(unsigned int *)(temp_v7 + 0x61bc) =
                       (unsigned int)*(unsigned short *)(temp_v9 + 0x4c322a) * temp_v11 +
                       (unsigned int)*(unsigned short *)(temp_v9 + 0x4c3228) + temp_v8;
                  temp_v17 = (float)VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v19 = (float)VectorSignedToFloat(temp_v8 * 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v21 = (float)VectorSignedToFloat(temp_v8 * 0xc,(unsigned char)(in_fpscr >> 0x16) & 3);
                  *(float *)(temp_v7 + 0x61c0) = temp_v19 + temp_v17;
                  *(float *)(temp_v7 + 0x61c4) = temp_v18 + temp_v16;
                  temp_v16 = (float)VectorSignedToFloat(temp_v38,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = (float)VectorSignedToFloat(temp_v11 * 0xc,(unsigned char)(in_fpscr >> 0x16) & 3);
                  *(float *)(temp_v7 + 0x61c8) = temp_v21 + temp_v16;
                  temp_v16 = (float)VectorSignedToFloat(temp_v39,(unsigned char)(in_fpscr >> 0x16) & 3);
                  *(float *)(temp_v7 + 0x61cc) = temp_v17 + temp_v16;
                  *(int *)(temp_v7 + 0x61e0) = (int)temp_v27;
                }
                temp_v8 = temp_v8 + 1;
              } while ((int)temp_v8 < temp_v14);
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < temp_v13);
        }
      }
LAB_0039e364:
      temp_v33 = temp_v33 + 1;
      puVar8 = temp_v34;
      MapNaviTable_GetCategoryCount();
    } while (temp_v33 < (int)puVar8);
  }
  temp_v13 = 0;
  puVar8 = temp_v34;
  FUN_0039fca8();
  temp_v14 = temp_v10;
  if (0 < (int)puVar8) {
    do {
      psVar10 = (short *)FUN_0039fc34(temp_v34,temp_v13);
      temp_v14 = temp_v10;
      if ((int)*psVar10 == 0xffffffff) break;
      if ((int)*psVar10 == temp_v44) {
        temp_v30 = (unsigned int)((unsigned long long)temp_v27 >> 0x20);
        temp_v27 = romwright_piece_4_4(temp_v30,temp_v30);
        temp_v11 = 0;
        if (temp_v11 < *(int *)(temp_v43 + 0x1b0)) {
          do {
            temp_v12 = param_1 + temp_v11 * 0x4c;
            if ((char)psVar10[1] == *(char *)(temp_v12 + 0x5a94)) {
              temp_v35 = (int)*(short *)(temp_v12 + 0x5a96);
              temp_v16 = (float)VectorSignedToFloat(temp_v11 * -2 + 0xf5,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v27 = CONCAT44(temp_v30,temp_v16 * (float)temp_v28);
              break;
            }
            temp_v11 = temp_v11 + 1;
          } while (temp_v11 < *(int *)(temp_v43 + 0x1b0));
        }
        temp_v11 = 0;
        puVar8 = temp_v34;
        FUN_002314d0();
        if (0 < (int)puVar8) {
          do {
            temp_v8 = FUN_00231494(temp_v34,temp_v11);
            temp_v15 = (char)psVar10[1] == *(char *)(temp_v8 + 1);
            if (temp_v15) {
              temp_v8 = (unsigned int)*(unsigned short *)(temp_v8 + 8);
            }
            if (temp_v15 && temp_v8 == 0) break;
            temp_v11 = temp_v11 + 1;
            puVar8 = temp_v34;
            FUN_002314d0();
          } while (temp_v11 < (int)puVar8);
        }
        if (temp_v10 < 0x400) {
          temp_v14 = temp_v10 + 1;
          temp_v10 = param_1 + temp_v10 * 0x30;
          *(unsigned char *)(temp_v10 + 0x61b4) = 0;
          *(unsigned char *)(temp_v10 + 0x61b5) = 1;
          *(char *)(temp_v10 + 0x61b6) = (char)psVar10[1];
          *(short *)(temp_v10 + 0x61ba) = (short)temp_v35;
          *(unsigned char *)(temp_v10 + 0x61b7) = *(unsigned char *)((int)psVar10 + 3);
          *(char *)(temp_v10 + 0x61b8) = (char)psVar10[2];
          *(unsigned char *)(temp_v10 + 0x61b9) = *(unsigned char *)((int)psVar10 + 5);
          *(unsigned int *)(temp_v10 + 0x61bc) = 0xffffffff;
          temp_v30 = VectorSignedToFloat((int)psVar10[3],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v10 + 0x61c0) = temp_v30;
          temp_v30 = VectorSignedToFloat((int)psVar10[4],(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v10 + 0x61c4) = temp_v30;
          temp_v30 = VectorUnsignedToFloat((unsigned int)*(unsigned char *)(psVar10 + 5),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v10 + 0x61c8) = temp_v30;
          temp_v30 = VectorUnsignedToFloat
                             ((unsigned int)*(unsigned char *)((int)psVar10 + 0xb),(unsigned char)(in_fpscr >> 0x16) & 3);
          *(unsigned int *)(temp_v10 + 0x61cc) = temp_v30;
          *(int *)(temp_v10 + 0x61e0) = (int)temp_v27;
        }
      }
      temp_v13 = temp_v13 + 1;
      puVar8 = temp_v34;
      FUN_0039fca8();
      temp_v10 = temp_v14;
    } while (temp_v13 < (int)puVar8);
  }
  *(int *)(param_1 + 0x121b4) = temp_v14;
  return;
}
