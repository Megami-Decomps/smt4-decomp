/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016a438` (_code @ 0x16a438, 0xa5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187230(...);
int FUN_0018edbc(void);
int FUN_00193ee0(...);
int FUN_001940b0(...);
int FUN_001986c4(unsigned int, float *);
int FUN_00198848(unsigned int, float *);
int FUN_001b4030(void);
int FUN_0030ea58(int, int);
int hardfp_floorf(void);
int rt_memcpy_w(...);

/* stack frame of param_2: 27 slot(s), 108 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE8; /* 0xe8: local_e8 */
} param_2_stack;

/* Supplied declaration required: FUN_00187230. */
/* Supplied declaration required: FUN_0018edbc. */
/* Supplied declaration required: FUN_00193ee0. */
/* Supplied declaration required: FUN_001940b0. */
/* Supplied declaration required: FUN_001986c4. */
/* Supplied declaration required: FUN_00198848. */
extern unsigned int FUN_001988bc(unsigned int, unsigned char *);
extern int FUN_001a7a20(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001b4030. */
extern unsigned int wstrlen(unsigned int);
/* Supplied declaration required: FUN_0030ea58. */
/* Supplied declaration required: hardfp_floorf. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0016a438(int param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int *piVar6;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int *piVar10;
  char *pcVar11;
  unsigned int *puVar12;
  unsigned int temp_v8;
  unsigned int *puVar14;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned char temp_v15 [8];
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  unsigned int *temp_v26;
  int temp_v27;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int temp_v28;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int temp_v29;
  int *temp_v30;
  int temp_v31;
  int temp_v32;
  unsigned int *temp_v33;
  int temp_v34;
  int temp_v35;
  int temp_v36;
  int temp_v37;
  
  temp_v37 = param_2;
  temp_v36 = param_1;
  puVar14 = (unsigned int *)&temp_v27;
  temp_v27 = *(unsigned int *)(param_2 + 0x38);
  uStack_94 = *(unsigned int *)(param_2 + 0x3c);
  uStack_90 = *(unsigned int *)(param_2 + 0x40);
  uStack_8c = *(unsigned int *)(param_2 + 0x44);
  uStack_88 = *(unsigned int *)(param_2 + 0x48);
  uStack_84 = *(unsigned int *)(param_2 + 0x4c);
  uStack_80 = *(unsigned int *)(param_2 + 0x50);
  uStack_7c = *(unsigned int *)(param_2 + 0x54);
  piVar6 = (int *)(param_1 + 0x10);
  temp_v29 = *(unsigned int *)(param_2 + 100);
  temp_v28 = *(unsigned int *)(param_2 + 0x58);
  uStack_74 = *(unsigned int *)(param_2 + 0x5c);
  uStack_70 = *(unsigned int *)(param_2 + 0x60);
  temp_v12 = *(int *)(param_1 + 8) == 0;
  if (!temp_v12) {
    puVar14 = (unsigned int *)(*(int *)(param_1 + 8) + 0xc);
    temp_v12 = puVar14 == (unsigned int *)0x0;
  }
  if (!temp_v12) {
    temp_v9 = 0;
    temp_v30 = *(int **)(param_1 + 0xe8);
    temp_v25 = (unsigned int)*(unsigned short *)(puVar14[0xc] + 0x88);
    temp_v31 = **(int **)(puVar14[0xc] + 0xa8);
    if (*(int *)(temp_v31 + 0x10) != 0) {
      temp_v14 = 0;
      temp_v13 = 1.0f;
      do {
        temp_v10 = 0;
        temp_v11 = 0;
        temp_v33 = (unsigned int *)(*(int *)(temp_v36 + 0x108) + temp_v9 * 8);
        temp_v32 = 0;
        if ((char)temp_v33[1] != '\0') {
          temp_v0 = *temp_v33;
          *(unsigned int *)(*piVar6 + (temp_v9 & 0xffff) * 0x278 + 0x234) =
               (temp_v0 << 0x18) | (((temp_v0 & 0xffff) >> 8) << 0x10) |
               (((temp_v0 & 0xffffff) >> 0x10) << 8) | (temp_v0 >> 0x18);
        }
        temp_v34 = temp_v9 * 3;
        temp_v1 = temp_v36 + temp_v9 * 0xc;
        temp_v26 = *(unsigned int **)(temp_v1 + 0x118);
        puVar12 = *(unsigned int **)(temp_v1 + 0x114);
        if (puVar12 != temp_v26) {
          temp_v35 = (temp_v9 & 0xffff) * 0x4f;
          do {
            pcVar11 = (char *)*puVar12;
            if (*pcVar11 != '\0') {
              if (temp_v9 != 2) {
                FUN_001940b0(pcVar11 + 8,piVar6,temp_v9,temp_v10);
                FUN_00193ee0(pcVar11 + 8,piVar6,temp_v9,temp_v10,&temp_v27);
                temp_v1 = *(int *)(pcVar11 + 0x68);
                if (temp_v1 != 0) {
                  temp_v5 = *(int *)(pcVar11 + 0x74);
                  temp_v6 = temp_v5 + *(int *)(pcVar11 + 0x78) * 0x10;
                  for (; temp_v5 != temp_v6; temp_v5 = temp_v5 + 0x10) {
                    temp_v2 = *(int *)(temp_v5 + 0xc);
                    FUN_0030ea58(temp_v2,temp_v1);
                    if (temp_v2 == 0) break;
                  }
                  if (*(int *)(pcVar11 + 0x74) + *(int *)(pcVar11 + 0x78) * 0x10 == temp_v5) {
                    temp_v5 = 0;
                  }
                  *(int *)(*piVar6 + temp_v35 * 8 + temp_v10 * 4 + 600) = temp_v5;
                }
                temp_v1 = *(int *)(pcVar11 + 0x70);
                if (temp_v1 != 0) {
                  temp_v5 = *(int *)(pcVar11 + 0x74);
                  temp_v6 = temp_v5 + *(int *)(pcVar11 + 0x78) * 0x10;
                  for (; temp_v5 != temp_v6; temp_v5 = temp_v5 + 0x10) {
                    temp_v2 = *(int *)(temp_v5 + 0xc);
                    FUN_0030ea58(temp_v2,temp_v1);
                    if (temp_v2 == 0) break;
                  }
                  if (*(int *)(pcVar11 + 0x74) + *(int *)(pcVar11 + 0x78) * 0x10 == temp_v5) {
                    temp_v5 = 0;
                  }
                  *(int *)(*piVar6 + temp_v35 * 8 + temp_v10 * 4 + 0x238) = temp_v5;
                }
              }
              else {
                temp_v1 = puVar14[0xc];
                temp_v8 = *(unsigned int *)(pcVar11 + 8);
                temp_v4 = wstrlen(temp_v8);
                temp_v1 = FUN_001a7a20(temp_v1 + 0x88,temp_v8,temp_v4);
                if (temp_v1 < (int)temp_v25) {
                  temp_v1 = *(int *)(*(int *)(puVar14[0xc] + 0x84) + temp_v1 * 4);
                  if ((*(unsigned char *)(temp_v1 + 4) & 1) != 0) {
                    if (*(float *)(pcVar11 + 4) < (float)temp_v14) {
                      temp_v14 = temp_v14 & 0xffffffff;
                      hardfp_floorf();
                    }
                    FUN_001b4030();
                  }
                  if (*(unsigned char *)(temp_v1 + 0x19) != 0xff) {
                    temp_v16 = *(float *)(pcVar11 + 0xc);
                    temp_v17 = *(float *)(pcVar11 + 0x10);
                    temp_v18 = *(float *)(pcVar11 + 0x14);
                    temp_v19 = *(float *)(pcVar11 + 0x18);
                    temp_v20 = *(float *)(pcVar11 + 0x1c);
                    temp_v21 = *(float *)(pcVar11 + 0x20);
                    temp_v22 = *(float *)(pcVar11 + 0x24);
                    temp_v23 = *(float *)(pcVar11 + 0x28);
                    temp_v24 = *(float *)(pcVar11 + 0x2c);
                    if (*(unsigned char *)(temp_v1 + 0x19) != 0xff) {
                      FUN_001986c4(*(unsigned int *)
                                    (*(int *)(temp_v1 + 0xc) + (unsigned int)*(unsigned char *)(temp_v1 + 0x19) * 4),
                                   &temp_v16);
                      if (*(float *)(pcVar11 + 0xc) != temp_v16) {
                        *(float *)(pcVar11 + 0xc) = temp_v16;
                      }
                      if (*(float *)(pcVar11 + 0x10) != temp_v17) {
                        *(float *)(pcVar11 + 0x10) = temp_v17;
                      }
                      if (*(float *)(pcVar11 + 0x14) != temp_v18) {
                        *(float *)(pcVar11 + 0x14) = temp_v18;
                      }
                      if (*(float *)(pcVar11 + 0x18) != temp_v19) {
                        *(float *)(pcVar11 + 0x18) = temp_v19;
                      }
                      if (*(float *)(pcVar11 + 0x1c) != temp_v20) {
                        *(float *)(pcVar11 + 0x1c) = temp_v20;
                      }
                      if (*(float *)(pcVar11 + 0x20) != temp_v21) {
                        *(float *)(pcVar11 + 0x20) = temp_v21;
                      }
                      if (*(float *)(pcVar11 + 0x24) != temp_v22) {
                        *(float *)(pcVar11 + 0x24) = temp_v22;
                      }
                      if (*(float *)(pcVar11 + 0x28) != temp_v23) {
                        *(float *)(pcVar11 + 0x28) = temp_v23;
                      }
                      if (*(float *)(pcVar11 + 0x2c) != temp_v24) {
                        *(float *)(pcVar11 + 0x2c) = temp_v24;
                      }
                    }
                  }
                  if (*(unsigned char *)(temp_v1 + 0x20) != 0xff) {
                    temp_v16 = *(float *)(pcVar11 + 0x48);
                    temp_v17 = *(float *)(pcVar11 + 0x4c);
                    temp_v18 = *(float *)(pcVar11 + 0x50);
                    if (*(unsigned char *)(temp_v1 + 0x20) != 0xff) {
                      FUN_00198848(*(unsigned int *)
                                    (*(int *)(temp_v1 + 0xc) + (unsigned int)*(unsigned char *)(temp_v1 + 0x20) * 4),
                                   &temp_v16);
                      if (*(float *)(pcVar11 + 0x48) != temp_v16) {
                        *(float *)(pcVar11 + 0x48) = temp_v16;
                      }
                      if (*(float *)(pcVar11 + 0x4c) != temp_v17) {
                        *(float *)(pcVar11 + 0x4c) = temp_v17;
                      }
                      if (*(float *)(pcVar11 + 0x50) != temp_v18) {
                        *(float *)(pcVar11 + 0x50) = temp_v18;
                      }
                    }
                  }
                  if (*(unsigned char *)(temp_v1 + 0x1c) != 0xff) {
                    temp_v7 = *(unsigned int *)(pcVar11 + 0x40);
                    temp_v0 = FUN_001988bc(*(unsigned int *)
                                          (*(int *)(temp_v1 + 0xc) + (unsigned int)*(unsigned char *)(temp_v1 + 0x1c) * 4
                                          ),temp_v15);
                    if ((temp_v0 & 0x10000) != 0) {
                      temp_v3 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xffffff00) | temp_v3;
                    }
                    if ((temp_v0 & 0x20000) != 0) {
                      temp_v3 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xffff00ff) | ((temp_v3 & 0xff) << 8);
                    }
                    if ((temp_v0 & 0x40000) != 0) {
                      temp_v3 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xff00ffff) | ((temp_v3 & 0xff) << 0x10);
                    }
                    if ((temp_v0 & 0x80000) != 0) {
                      temp_v5 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xffffff) | (temp_v5 << 0x18);
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x40] != (temp_v7 & 0xff)) {
                      pcVar11[0x40] = (char)temp_v7;
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x41] != (temp_v7 & 0xffff) >> 8) {
                      pcVar11[0x41] = (char)(temp_v7 >> 8);
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x42] != (temp_v7 & 0xffffff) >> 0x10) {
                      pcVar11[0x42] = (char)(temp_v7 >> 0x10);
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x43] != temp_v7 >> 0x18) {
                      pcVar11[0x43] = (char)(temp_v7 >> 0x18);
                    }
                  }
                  if (*(unsigned char *)(temp_v1 + 0x1d) != 0xff) {
                    temp_v7 = *(unsigned int *)(pcVar11 + 0x44);
                    temp_v0 = FUN_001988bc(*(unsigned int *)
                                          (*(int *)(temp_v1 + 0xc) + (unsigned int)*(unsigned char *)(temp_v1 + 0x1d) * 4
                                          ),temp_v15);
                    if ((temp_v0 & 0x10000) != 0) {
                      temp_v3 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xffffff00) | temp_v3;
                    }
                    if ((temp_v0 & 0x20000) != 0) {
                      temp_v3 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xffff00ff) | ((temp_v3 & 0xff) << 8);
                    }
                    if ((temp_v0 & 0x40000) != 0) {
                      temp_v3 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xff00ffff) | ((temp_v3 & 0xff) << 0x10);
                    }
                    if ((temp_v0 & 0x80000) != 0) {
                      temp_v5 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xffffff) | (temp_v5 << 0x18);
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x44] != (temp_v7 & 0xff)) {
                      pcVar11[0x44] = (char)temp_v7;
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x45] != (temp_v7 & 0xffff) >> 8) {
                      pcVar11[0x45] = (char)(temp_v7 >> 8);
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x46] != (temp_v7 & 0xffffff) >> 0x10) {
                      pcVar11[0x46] = (char)(temp_v7 >> 0x10);
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x47] != temp_v7 >> 0x18) {
                      pcVar11[0x47] = (char)(temp_v7 >> 0x18);
                    }
                  }
                  if (*(unsigned char *)(temp_v1 + 0x1b) != 0xff) {
                    temp_v7 = *(unsigned int *)(pcVar11 + 0x3c);
                    temp_v0 = FUN_001988bc(*(unsigned int *)
                                          (*(int *)(temp_v1 + 0xc) + (unsigned int)*(unsigned char *)(temp_v1 + 0x1b) * 4
                                          ),temp_v15);
                    if ((temp_v0 & 0x10000) != 0) {
                      temp_v3 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xffffff00) | temp_v3;
                    }
                    if ((temp_v0 & 0x20000) != 0) {
                      temp_v3 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xffff00ff) | ((temp_v3 & 0xff) << 8);
                    }
                    if ((temp_v0 & 0x40000) != 0) {
                      temp_v3 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xff00ffff) | ((temp_v3 & 0xff) << 0x10);
                    }
                    if ((temp_v0 & 0x80000) != 0) {
                      temp_v1 = FUN_0018edbc();
                      temp_v7 = (temp_v7 & 0xffffff) | (temp_v1 << 0x18);
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x3c] != (temp_v7 & 0xff)) {
                      pcVar11[0x3c] = (char)temp_v7;
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x3d] != (temp_v7 & 0xffff) >> 8) {
                      pcVar11[0x3d] = (char)(temp_v7 >> 8);
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x3e] != (temp_v7 & 0xffffff) >> 0x10) {
                      pcVar11[0x3e] = (char)(temp_v7 >> 0x10);
                    }
                    if ((unsigned int)(unsigned char)pcVar11[0x3f] != temp_v7 >> 0x18) {
                      pcVar11[0x3f] = (char)(temp_v7 >> 0x18);
                    }
                  }
                  *(float *)(pcVar11 + 4) = *(float *)(pcVar11 + 4) + temp_v13;
                }
                FUN_001940b0(pcVar11 + 8,piVar6,2,temp_v10);
                FUN_00193ee0(pcVar11 + 8,piVar6,2,temp_v10,&temp_v27);
                temp_v1 = *(int *)(pcVar11 + 0x68);
                if (temp_v1 != 0) {
                  temp_v5 = *(int *)(pcVar11 + 0x74);
                  temp_v6 = temp_v5 + *(int *)(pcVar11 + 0x78) * 0x10;
                  for (; temp_v5 != temp_v6; temp_v5 = temp_v5 + 0x10) {
                    temp_v2 = *(int *)(temp_v5 + 0xc);
                    FUN_0030ea58(temp_v2,temp_v1);
                    if (temp_v2 == 0) break;
                  }
                  if (*(int *)(pcVar11 + 0x74) + *(int *)(pcVar11 + 0x78) * 0x10 == temp_v5) {
                    temp_v5 = 0;
                  }
                  *(int *)(*piVar6 + temp_v35 * 8 + temp_v10 * 4 + 600) = temp_v5;
                }
                temp_v1 = *(int *)(pcVar11 + 0x70);
                if (temp_v1 != 0) {
                  temp_v5 = *(int *)(pcVar11 + 0x74);
                  temp_v6 = temp_v5 + *(int *)(pcVar11 + 0x78) * 0x10;
                  for (; temp_v5 != temp_v6; temp_v5 = temp_v5 + 0x10) {
                    temp_v2 = *(int *)(temp_v5 + 0xc);
                    FUN_0030ea58(temp_v2,temp_v1);
                    if (temp_v2 == 0) break;
                  }
                  if (*(int *)(pcVar11 + 0x74) + *(int *)(pcVar11 + 0x78) * 0x10 == temp_v5) {
                    temp_v5 = 0;
                  }
                  *(int *)(*piVar6 + temp_v35 * 8 + temp_v10 * 4 + 0x238) = temp_v5;
                }
              }
              temp_v10 = temp_v10 + 1;
            }
            puVar12 = puVar12 + 1;
          } while (puVar12 != temp_v26);
        }
        temp_v0 = 0;
        piVar10 = (int *)(*(int *)(temp_v31 + 0xc) + temp_v34 * 4);
        if (piVar10[2] != 0) {
          do {
            temp_v1 = puVar14[0xc];
            temp_v8 = *(unsigned int *)(piVar10[1] + temp_v0 * 4);
            temp_v4 = wstrlen(temp_v8);
            temp_v1 = FUN_001a7a20(temp_v1 + 0x40,temp_v8,temp_v4);
            temp_v1 = *(int *)(*(int *)(puVar14[0xc] + 0x3c) + temp_v1 * 4);
            if ((*(unsigned char *)(temp_v1 + 0x28) & 4) != 0) {
              rt_memcpy_w(*temp_v30 + *piVar10 * 0x704 + temp_v11 * 0x70,temp_v1,0x70);
              temp_v11 = temp_v11 + 1;
            }
            else if (*(unsigned char *)(temp_v1 + 0x28) == 1) {
              rt_memcpy_w(*temp_v30 + *piVar10 * 0x704 + 0x680,temp_v1,0x60);
              temp_v32 = temp_v32 + 1;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < (unsigned int)piVar10[2]);
        }
        if (temp_v10 < 8) {
          do {
            temp_v1 = *piVar6 + (temp_v9 & 0xffff) * 0x278 + temp_v10;
            temp_v10 = temp_v10 + 1;
            *(unsigned char *)(temp_v1 + 0x168) = 0;
          } while (temp_v10 < 8);
        }
        *(char *)(*temp_v30 + temp_v9 * 0x704 + 0x700) = (char)temp_v11;
        if (temp_v32 == 0) {
          *(unsigned char *)(*temp_v30 + temp_v9 * 0x704 + 0x6a9) = 0;
        }
        if ((char)temp_v33[1] == '\0') {
          *(unsigned int *)(*piVar6 + (temp_v9 & 0xffff) * 0x278 + 0x234) = 0;
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(unsigned int *)(temp_v31 + 0x10));
    }
    temp_v10 = *temp_v30;
    temp_v11 = temp_v10 + temp_v30[1] * 0x704;
    for (; temp_v10 != temp_v11; temp_v10 = temp_v10 + 0x704) {
      FUN_00187230(temp_v10,temp_v37 + 0x38,temp_v37 + 0x38);
    }
  }
  return;
}

} /* extern "C" */
