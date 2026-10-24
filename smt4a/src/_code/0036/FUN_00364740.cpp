/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00364740` (_code @ 0x364740, 0x10b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a90f0(...);
int libc_strcpy(...);
int mapIfRequestById(...);

int gameFlagIsSet(void);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int sceneRegisterBoxEffect(...);
int FUN_0035363c(...);
int sceneLoadParameterPreset(int, unsigned char [8]);
int aocDataTable23GetEntry(...);
int FUN_003799d0(void);
int contentEntryGet(...);
int dataTable2FType0Count(void);
int dataTable2FType1Count(void);
int dataTable2FType2Count(void);
int partyEntryFlagsBit1(int);
int VectorSignedToFloat(int, int);

/* stack frame of param_3: 30 slot(s), 120 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_3_stack;

extern unsigned char LAB_0036535c; /* 0x36535c */
extern unsigned char LAB_0036536c; /* 0x36536c */
extern unsigned int *DAT_00580c94; /* 0x580c94 */
extern unsigned char DAT_00580c98; /* 0x580c98 */
extern unsigned char DAT_00580c99; /* 0x580c99 */
extern unsigned char DAT_00580c9a; /* 0x580c9a */
extern unsigned char DAT_00580c9b; /* 0x580c9b */
extern unsigned char DAT_00580c9c; /* 0x580c9c */
extern unsigned char DAT_005f32a0; /* 0x5f32a0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: gameFlagIsSet. */
/* Supplied declaration required: FUN_001a90f0. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: libc_strcpy. */
extern unsigned int gameFlagsGet(unsigned char *);
extern unsigned int gameFlags2Get(unsigned char *);
/* Supplied declaration required: sceneRegisterBoxEffect. */
/* Supplied declaration required: FUN_0035363c. */
/* Supplied declaration required: mapIfRequestById. */
extern int FUN_00356380(int);
extern unsigned int FUN_00356528(int);
extern unsigned int uiScreenIdToLayoutSet(int);
/* Supplied declaration required: sceneLoadParameterPreset. */
extern unsigned int FUN_00368868(unsigned int);
extern int gameOwnedBitTest(int);
/* Supplied declaration required: aocDataTable23GetEntry. */
extern unsigned int *dataTable23Sub0GetEntry(unsigned int);
/* Supplied declaration required: FUN_003799d0. */
/* Supplied declaration required: contentEntryGet. */
extern int dataTable23Section5CountWithExtras(void);
extern unsigned int *dataTable2FType0GetEntry(unsigned char *);
extern unsigned int *dataTable2FType1GetEntry(unsigned char *);
extern unsigned int *dataTable2FType2GetEntry(unsigned char *);
extern unsigned int FUN_003b5620(void);
extern int dataTable23Type0CountWithAoc(void);
extern int dataTableGetRecordFortyEight(void);
extern int dataTable23Type4CountWithAoc(void);
/* Supplied declaration required: dataTable2FType0Count. */
/* Supplied declaration required: dataTable2FType1Count. */
/* Supplied declaration required: dataTable2FType2Count. */
/* Supplied declaration required: partyEntryFlagsBit1. */


void FUN_00364740(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 28 goto(s); irregular input(s): in_fpscr, in_r12; 17 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int *piVar6;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char *puVar10;
  unsigned int *puVar11;
  int temp_v7;
  unsigned int temp_v8;
  unsigned char *puVar14;
  unsigned int temp_v9;
  unsigned int *puVar16;
  unsigned int temp_v10;
  unsigned char *in_r12;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  int temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned char temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned char temp_v22 [8];
  unsigned int temp_v23;
  unsigned int *temp_v24;
  unsigned int temp_v25 [3];
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned char *temp_v30;
  int temp_v31;
  int temp_v32;
  int temp_v33;
  unsigned char *temp_v34;
  int iStack_2c;
  unsigned int *temp_v35;
  
  iStack_2c = param_1;
  temp_v35 = param_2;
  temp_v2 = dataTable23Type0CountWithAoc();
  temp_v10 = 0;
  if ((int)temp_v10 < temp_v2) {
    do {
      puVar4 = (unsigned int *)dataTable23Sub0GetEntry(temp_v10);
      temp_v3 = (int)(char)puVar4[2];
      if (temp_v3 == -1) {
        return;
      }
      if (temp_v3 == param_1) {
        if (temp_v3 < 100) {
          param_3 = (unsigned int *)(int)*(char *)((int)puVar4 + 9);
          if (param_3 == temp_v35) {
LAB_003647c0:
            puVar16 = (unsigned int *)*puVar4;
            puVar11 = (unsigned int *)0x2801001;
            if (puVar16 != (unsigned int *)0x2801001) {
              puVar11 = (unsigned int *)0x2801002;
            }
            if (puVar16 != (unsigned int *)0x2801001 && puVar16 != puVar11) {
              puVar11 = (unsigned int *)0x2901002;
              if (puVar16 != (unsigned int *)0x2901002) {
                puVar11 = (unsigned int *)0x2901003;
              }
              if (puVar16 != (unsigned int *)0x2901002 && puVar16 != puVar11) {
                puVar11 = (unsigned int *)0x3002001;
                if (puVar16 != (unsigned int *)0x3002001) {
                  puVar11 = (unsigned int *)0x3002002;
                }
                if (puVar16 != (unsigned int *)0x3002001 && puVar16 != puVar11) {
                  puVar11 = (unsigned int *)0x3101001;
                  if (puVar16 != (unsigned int *)0x3101001) {
                    puVar11 = (unsigned int *)0x3101002;
                  }
                  if (puVar16 != (unsigned int *)0x3101001 && puVar16 != puVar11) {
                    puVar11 = (unsigned int *)0x3120006;
                    if (puVar16 != (unsigned int *)0x3120006) {
                      puVar11 = (unsigned int *)0x3120007;
                    }
                    if (puVar16 != (unsigned int *)0x3120006 && puVar16 != puVar11) {
                      param_3 = &temp_v23;
                      temp_v23 = 0xffffffff;
                      temp_v33 = -1;
                      temp_v31 = 0;
                      temp_v30 = (unsigned char *)0xffffffff;
                      temp_v32 = 0;
                      temp_v28 = 0;
                      temp_v16 = 0;
                      temp_v26 = puVar4[1];
                      temp_v24 = puVar16;
                      if (puVar16 == (unsigned int *)0x4) {
                        temp_v28 = 1;
                      }
                      else if (puVar16 != (unsigned int *)0x0) {
                        if ((unsigned int *)0xff < puVar16) {
                          temp_v3 = dataTable23Type4CountWithAoc();
                          temp_v7 = 0;
                          if (0 < temp_v3) {
                            do {
                              piVar6 = (int *)contentEntryGet(temp_v7);
                              if (*piVar6 == -1) break;
                              temp_v4 = partyEntryFlagsBit1((short)piVar6[1]);
                              if ((((temp_v4 != 0) && ((unsigned int *)*piVar6 == puVar16)) &&
                                  ((*(short *)((int)piVar6 + 6) == 0 ||
                                   (temp_v4 = gameFlagIsSet(), temp_v4 != 0)))) &&
                                 (((short)piVar6[2] == 0 || (temp_v4 = gameFlagIsSet(), temp_v4 == 0))))
                              {
                                temp_v33 = temp_v7;
                                if (temp_v7 == -1) goto LAB_00364944;
                                goto LAB_00364da4;
                              }
                              temp_v7 = temp_v7 + 1;
                            } while (temp_v7 < temp_v3);
                            temp_v33 = -1;
                          }
LAB_00364944:
                          temp_v9 = *puVar4;
                          temp_v5 = FUN_003b5620();
                          temp_v8 = 0;
                          temp_v6 = temp_v5;
                          if (0 < (int)temp_v5) {
                            do {
                              puVar11 = (unsigned int *)aocDataTable23GetEntry(temp_v8);
                              temp_v6 = *puVar11;
                              if (temp_v6 == 0xffffffff) break;
                              if (temp_v6 == temp_v9) {
                                if ((((short)puVar11[1] != 0) &&
                                    (temp_v3 = gameFlagIsSet(), temp_v3 == 0)) ||
                                   ((*(short *)((int)puVar11 + 6) != 0 &&
                                    (temp_v3 = gameFlagIsSet(), temp_v3 != 0)))) {
                                  temp_v6 = (unsigned int)*(short *)((int)puVar11 + 10);
                                  if (temp_v6 != 0xffffffff) goto LAB_003649bc;
                                }
                                else {
                                  temp_v6 = (int)*(short *)((int)puVar11 + 10);
                                  if ((int)*(short *)((int)puVar11 + 10) == 0xffffffff) break;
                                  if (temp_v8 != 0xfffffffe) {
                                    temp_v23 = temp_v8;
                                    if (temp_v8 == 0xffffffff) goto LAB_00364aa0;
                                    param_3 = (unsigned int *)aocDataTable23GetEntry();
                                    DAT_00580c98 = 0;
                                    DAT_00580c99 = 0;
                                    DAT_00580c9a = 0;
                                    DAT_00580c9b = 0;
                                    DAT_00580c9c = 0;
                                    if ((*(short *)((int)param_3 + 10) != 0) &&
                                       (*(short *)((int)param_3 + 10) < 0x259)) {
                                      switch((char)param_3[7]) {
                                      case 0:
                                      case 1:
                                        goto LAB_003657d4;
                                      case 3:
                                      case 4:
                                      case 5:
                                        DAT_00580c98 = 1;
                                        DAT_00580c9a = *(unsigned char *)((int)param_3 + 0x1d);
                                        DAT_00580c9b = *(unsigned char *)((int)param_3 + 0x1e);
                                        DAT_00580c9c = *(unsigned char *)((int)param_3 + 0x1f);
                                        DAT_00580c99 = (char)param_3[7];
                                      }
                                    }
                                    temp_v32 = 1;
                                    goto LAB_00364de8;
                                  }
                                }
                                temp_v16 = 1;
                                temp_v8 = 0xffffffff;
                                temp_v23 = 0xffffffff;
                                goto LAB_00364aa0;
                              }
LAB_003649bc:
                              temp_v8 = temp_v8 + 1;
                            } while ((int)temp_v8 < (int)temp_v5);
                          }
                          temp_v8 = temp_v6;
                          temp_v23 = 0xffffffff;
LAB_00364aa0:
                          temp_v6 = *puVar4;
                          puVar14 = (unsigned char *)0x0;
                          dataTable2FType0Count();
                          if (0 < (int)temp_v8) {
                            do {
                              puVar11 = (unsigned int *)dataTable2FType0GetEntry(puVar14);
                              temp_v8 = *puVar11;
                              if (temp_v8 == 0xffffffff) break;
                              if (temp_v8 == temp_v6) {
                                if ((short)puVar11[1] != 0) {
                                  temp_v3 = gameFlagIsSet();
                                  temp_v8 = 0;
                                  if (temp_v3 == 0) goto LAB_00364b10;
                                }
                                temp_v8 = 0;
                                if ((*(short *)((int)puVar11 + 6) == 0) ||
                                   (temp_v8 = gameFlagIsSet(), temp_v8 == 0)) {
                                  temp_v30 = puVar14;
                                  if (puVar14 == (unsigned char *)0xffffffff) goto LAB_00364b74;
                                  temp_v31 = 1;
                                  goto LAB_00364da4;
                                }
                              }
LAB_00364b10:
                              puVar14 = puVar14 + 1;
                              dataTable2FType0Count();
                            } while ((int)puVar14 < (int)temp_v8);
                          }
                          temp_v30 = (unsigned char *)0xffffffff;
LAB_00364b74:
                          temp_v6 = *puVar4;
                          puVar14 = (unsigned char *)0x0;
                          dataTable2FType1Count();
                          if (0 < (int)temp_v8) {
                            do {
                              puVar11 = (unsigned int *)dataTable2FType1GetEntry(puVar14);
                              temp_v8 = *puVar11;
                              if (temp_v8 == 0xffffffff) break;
                              if (temp_v8 == temp_v6) {
                                if (*(short *)((int)puVar11 + 6) != 0) {
                                  temp_v3 = gameFlagIsSet();
                                  temp_v8 = 0;
                                  if (temp_v3 == 0) goto LAB_00364c54;
                                }
                                if (((short)puVar11[2] == 0) ||
                                   (temp_v8 = gameFlagIsSet(), temp_v8 == 0)) {
                                  if ((short)puVar11[1] != 0) {
                                    temp_v3 = partyEntryFlagsBit1((short)puVar11[1]);
                                    temp_v8 = 0;
                                    if (temp_v3 == 0) goto LAB_00364c54;
                                  }
                                  temp_v8 = gameFlagsGet(puVar14);
                                  if ((0 < (int)temp_v8) &&
                                     (temp_v8 = gameFlagsGet(puVar14), temp_v8 != 0xff))
                                  goto LAB_00364d94;
                                  temp_v30 = puVar14;
                                  if (puVar14 == (unsigned char *)0xffffffff) goto LAB_00364c70;
                                  if (puVar14 == (unsigned char *)0xfffffffe) goto LAB_00364d94;
                                  temp_v8 = 2;
                                  temp_v31 = 2;
                                  if (puVar14 == (unsigned char *)0xffffffff) goto LAB_00364c70;
                                  goto LAB_00364da4;
                                }
                              }
LAB_00364c54:
                              puVar14 = puVar14 + 1;
                              dataTable2FType1Count();
                            } while ((int)puVar14 < (int)temp_v8);
                            temp_v30 = (unsigned char *)0xffffffff;
                          }
LAB_00364c70:
                          temp_v6 = *puVar4;
                          puVar14 = (unsigned char *)0x0;
                          dataTable2FType2Count();
                          if (0 < (int)temp_v8) {
                            do {
                              puVar11 = (unsigned int *)dataTable2FType2GetEntry(puVar14);
                              temp_v8 = *puVar11;
                              if (temp_v8 == 0xffffffff) break;
                              if (temp_v8 == temp_v6) {
                                if ((short)puVar11[1] != 0) {
                                  temp_v3 = gameFlagIsSet();
                                  temp_v8 = 0;
                                  if (temp_v3 == 0) goto LAB_00364d0c;
                                }
                                if (((*(short *)((int)puVar11 + 6) == 0) ||
                                    (temp_v8 = gameFlagIsSet(), temp_v8 == 0)) &&
                                   (temp_v8 = gameFlags2Get(puVar14), (int)temp_v8 < 1)) {
                                  temp_v30 = puVar14;
                                  if (puVar14 == (unsigned char *)0xffffffff) goto LAB_00364d28;
                                  temp_v31 = 3;
                                  goto LAB_00364da4;
                                }
                              }
LAB_00364d0c:
                              puVar14 = puVar14 + 1;
                              dataTable2FType2Count();
                            } while ((int)puVar14 < (int)temp_v8);
                            temp_v30 = (unsigned char *)0xffffffff;
                          }
LAB_00364d28:
                          if (temp_v16 == 0) {
                            temp_v8 = *puVar4;
                            puVar14 = (unsigned char *)0x0;
                            temp_v3 = dataTableGetRecordFortyEight();
                            if (0 < temp_v3) {
                              do {
                                puVar10 = puVar14;
                                FUN_003799d0();
                                if ((*(unsigned int *)(puVar10 + 0x20) != 0xffffffff) &&
                                   (*(unsigned int *)(puVar10 + 0x20) == temp_v8)) {
                                  temp_v3 = gameOwnedBitTest((int)*(short *)(puVar10 + 0x24));
                                  if (temp_v3 == 0) goto LAB_00364d94;
                                  temp_v30 = puVar14;
                                  if (puVar14 != (unsigned char *)0xffffffff) {
                                    if (puVar14 != (unsigned char *)0xfffffffe) {
                                      temp_v31 = 4;
                                    }
                                    else {
LAB_00364d94:
                                      temp_v31 = 5;
                                      temp_v30 = (unsigned char *)0x0;
                                    }
                                  }
                                  goto LAB_00364da4;
                                }
                                puVar14 = puVar14 + 1;
                                temp_v3 = dataTableGetRecordFortyEight();
                              } while ((int)puVar14 < temp_v3);
                              temp_v30 = (unsigned char *)0xffffffff;
                            }
                            if (temp_v23 != 0xffffffff) {
LAB_00364de8:
                              temp_v3 = aocDataTable23GetEntry(temp_v23);
                              temp_v0 = *(short *)(temp_v3 + 8);
                              temp_v11 = temp_v0 == 0;
                              if (temp_v11) {
                                temp_v0 = *(short *)(temp_v3 + 10);
                              }
                              if ((temp_v11 && temp_v0 == 0) &&
                                 (*(char *)(temp_v3 + 0xc) == '\0' || *(char *)(temp_v3 + 0xc) == '0'))
                              {
                                temp_v23 = 0xffffffff;
                              }
                              goto LAB_00364e34;
                            }
                          }
LAB_00364da4:
                          if ((((*(char *)((int)puVar4 + 10) != '\x12') &&
                               (temp_v30 == (unsigned char *)0xffffffff)) && (temp_v33 == -1)) &&
                             (((unsigned int)temp_v24 & 0x80000000) == 0)) goto LAB_003657d4;
                        }
                      }
                      else {
                        temp_v24 = (unsigned int *)((temp_v10 & 0xff) |
                                            (temp_v3 << 0x10) | ((int)*(char *)((int)puVar4 + 9) << 8)
                                           | 0xff000000);
                      }
LAB_00364e34:
                      puVar11 = temp_v24;
                      temp_v3 = dataTable23Section5CountWithExtras();
                      temp_v16 = 0;
                      if (temp_v16 < temp_v3) {
                        do {
                          temp_v7 = FUN_00356380(temp_v16);
                          if (*(int *)(temp_v7 + 0x20) == -1) break;
                          if (((*(short *)(temp_v7 + 0x26) == 0) ||
                              (temp_v4 = gameFlagIsSet(), temp_v4 == 0)) &&
                             ((*(unsigned int **)(temp_v7 + 0x20) == puVar11 &&
                              (temp_v7 = partyEntryFlagsBit1(*(unsigned short *)(temp_v7 + 0x24)), temp_v7 == 0)))
                             ) {
                            temp_v34 = (unsigned char *)(int)(short)temp_v16;
                            goto LAB_00364eac;
                          }
                          temp_v16 = temp_v16 + 1;
                        } while (temp_v16 < temp_v3);
                      }
                      temp_v34 = (unsigned char *)0xffffffff;
LAB_00364eac:
                      temp_v8 = (unsigned int)*(signed char *)((int)puVar4 + 10);
                      if ((temp_v23 != 0xffffffff) && (temp_v8 == 3 || temp_v8 == 0xb)) {
                        aocDataTable23GetEntry();
                        temp_v8 = 0x10;
                      }
                      temp_v3 = FUN_00368868((unsigned int)(int)(short)temp_v8);
                      temp_v29 = FUN_00356528((int)(short)temp_v8);
                      temp_v27 = uiScreenIdToLayoutSet((int)*(char *)((int)puVar4 + 10));
                      VectorSignedToFloat((int)(short)puVar4[7],(unsigned char)(in_fpscr >> 0x16) & 3);
                      VectorSignedToFloat((int)*(short *)((int)puVar4 + 0x16),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      VectorSignedToFloat((int)(short)puVar4[6],(unsigned char)(in_fpscr >> 0x16) & 3);
                      VectorSignedToFloat((int)*(short *)((int)puVar4 + 0x1a),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
                      param_3 = temp_v25;
                      sceneLoadParameterPreset((int)*(char *)((int)puVar4 + 0x1e),temp_v22);
                      temp_v16 = (int)*(char *)((int)puVar4 + 0x11);
                      if (((!(temp_v8 == 3 || temp_v8 == 0x2c)) &&
                          (!(temp_v8 == 0x23 || temp_v8 == 0x24))) &&
                         (!(temp_v8 == 0x33 || temp_v8 == 0x39))) {
                        temp_v6 = temp_v26;
                        if (!(temp_v8 == 0x21 || temp_v8 == 5)) {
                          if (temp_v8 != 0x1f) {
                            if (temp_v8 == 0x45) {
                              FUN_001bc124();
                              FUN_001bbf0c();
                              temp_v12 = 0x202;
                              temp_v6 = 0;
                              param_3 = (unsigned int *)&LAB_0036535c;
                              sceneRegisterBoxEffect(temp_v12,temp_v6,&LAB_0036535c,0x48,0,0xffffffff,0,0,0,0,0,0,
                                           0,0,0);
                            }
                          }
                          else {
                            temp_v12 = 0x204;
                            param_3 = (unsigned int *)&LAB_0036535c;
                            sceneRegisterBoxEffect(temp_v12,temp_v6,&LAB_0036535c,0x48,0,0xffffffff,0,0,0,0,0,0,0,
                                         0,0);
                          }
                        }
                        else {
                          temp_v12 = 0x201;
                          param_3 = (unsigned int *)&LAB_0036535c;
                          sceneRegisterBoxEffect(temp_v12,temp_v6,&LAB_0036535c,0x48,0,0xffffffff,0,0,0,0,0,0,0,0,
                                       0);
                        }
                      }
                      else {
                        temp_v6 = 0;
                        temp_v12 = 0x200;
                        param_3 = (unsigned int *)&LAB_0036535c;
                        sceneRegisterBoxEffect(temp_v12,temp_v6,&LAB_0036535c,0x48,0,0xffffffff,0,0,0,0,0,0,0,0,0)
                        ;
                      }
                      if (temp_v3 != 1) {
                        if (temp_v3 == 0) {
                          temp_v19 = (unsigned char)puVar4[4];
                          temp_v18 = *(unsigned char *)((int)puVar4 + 0xf);
                          temp_v15 = *(unsigned char *)((int)puVar4 + 0xd);
                          temp_v17 = *(unsigned char *)((int)puVar4 + 0xe);
                          temp_v14 = (unsigned char)puVar4[3];
                          temp_v13 = *(unsigned char *)((int)puVar4 + 0xb);
                          param_3 = (unsigned int *)0x365754;
                          puVar4 = temp_v24;
                          temp_v6 = temp_v26;
                          temp_v12 = temp_v27;
                          temp_v5 = temp_v10;
                          temp_v20 = temp_v28;
                          temp_v21 = temp_v29;
                          sceneRegisterBoxEffect(puVar4,temp_v6,param_3,temp_v8,temp_v12,temp_v5,temp_v13,temp_v14,temp_v15
                                       ,temp_v17,temp_v18,temp_v19,temp_v20,temp_v16,temp_v21);
                        }
                      }
                      else {
                        param_3 = (unsigned int *)&LAB_0036536c;
                        FUN_0035363c(temp_v24,temp_v26,&LAB_0036536c,temp_v8,temp_v27,temp_v10,
                                     *(unsigned char *)((int)puVar4 + 0xb),(char)puVar4[3],
                                     *(unsigned char *)((int)puVar4 + 0xd),
                                     *(unsigned char *)((int)puVar4 + 0xe),
                                     *(unsigned char *)((int)puVar4 + 0xf),(char)puVar4[4],temp_v28,
                                     temp_v16,temp_v29);
                        if (temp_v8 != 2) {
                          if ((int)temp_v8 < 2) {
                            if (temp_v8 < 2) goto LAB_003652e4;
                          }
                          else if (temp_v8 == 10 || temp_v8 == 0x2a) goto LAB_003652e4;
                        }
                        else {
LAB_003652e4:
                          temp_v6 = 0;
                          temp_v19 = 0;
                          temp_v20 = 0;
                          temp_v16 = 0;
                          temp_v21 = 0;
                          temp_v17 = 0;
                          temp_v14 = 0;
                          temp_v15 = 0;
                          temp_v18 = 0;
                          temp_v12 = 0;
                          temp_v5 = 0xffffffff;
                          temp_v13 = 0;
                          temp_v8 = 0x48;
                          param_3 = (unsigned int *)&LAB_0036535c;
                          puVar4 = (unsigned int *)0x3;
                          sceneRegisterBoxEffect(puVar4,temp_v6,param_3,temp_v8,temp_v12,temp_v5,temp_v13,temp_v14,temp_v15
                                       ,temp_v17,temp_v18,temp_v19,temp_v20,temp_v16,temp_v21);
                        }
                      }
                      if (temp_v33 != -1) {
                        piVar6 = (int *)contentEntryGet();
                        temp_v3 = 0;
                        if (0 < (int)DAT_00580c94) {
                          in_r12 = &DAT_005f32a0;
                          do {
                            if (*(int *)(temp_v3 * 0x17c + 0x5f33cc) == *piVar6) {
                              *(int *)(temp_v3 * 0x17c + 0x5f33d4) = (int)*(short *)((int)piVar6 + 10)
                              ;
                              libc_strcpy(temp_v3 * 0x17c + 0x5f33d8,piVar6 + 3);
                              break;
                            }
                            temp_v3 = temp_v3 + 1;
                          } while (temp_v3 < (int)DAT_00580c94);
                        }
                        temp_v3 = piVar6[2];
                        if (0 < (int)DAT_00580c94) {
                          in_r12 = &DAT_005f32a0;
                        }
                        temp_v16 = 0;
                        param_3 = DAT_00580c94;
                        if (0 < (int)DAT_00580c94) {
                          do {
                            if (*(int *)(in_r12 + temp_v16 * 0x17c + 300) == *piVar6) {
                              *(unsigned short *)(in_r12 + temp_v16 * 0x17c + 0x160) =
                                   *(unsigned short *)((int)piVar6 + 6);
                              *(short *)(in_r12 + temp_v16 * 0x17c + 0x162) = (short)temp_v3;
                              in_r12[temp_v16 * 0x17c + 0x164] = 0;
                              param_3 = (unsigned int *)0x0;
                              break;
                            }
                            temp_v16 = temp_v16 + 1;
                          } while (temp_v16 < (int)DAT_00580c94);
                        }
                      }
                      if (temp_v23 != 0xffffffff) {
                        piVar6 = (int *)aocDataTable23GetEntry();
                        if ((short)piVar6[2] != 0) {
                          temp_v3 = 0;
                          if (0 < (int)DAT_00580c94) {
                            in_r12 = &DAT_005f32a0;
                            do {
                              if (*(int *)(temp_v3 * 0x17c + 0x5f33cc) == *piVar6) {
                                *(short *)(temp_v3 * 0x17c + 0x5f33fc) = (short)piVar6[2];
                                break;
                              }
                              temp_v3 = temp_v3 + 1;
                            } while (temp_v3 < (int)DAT_00580c94);
                          }
                        }
                        else {
                          temp_v3 = 0;
                          if (0 < (int)DAT_00580c94) {
                            in_r12 = &DAT_005f32a0;
                            do {
                              if (*(int *)(temp_v3 * 0x17c + 0x5f33cc) == *piVar6) {
                                *(int *)(temp_v3 * 0x17c + 0x5f33d4) =
                                     (int)*(short *)((int)piVar6 + 10);
                                libc_strcpy(temp_v3 * 0x17c + 0x5f33d8,piVar6 + 3);
                                break;
                              }
                              temp_v3 = temp_v3 + 1;
                            } while (temp_v3 < (int)DAT_00580c94);
                          }
                        }
                        temp_v1 = *(unsigned short *)((int)piVar6 + 6);
                        temp_v3 = 0;
                        param_3 = DAT_00580c94;
                        if (0 < (int)DAT_00580c94) {
                          do {
                            in_r12 = *(unsigned char **)(temp_v3 * 0x17c + 0x5f33cc);
                            if (in_r12 == (unsigned char *)*piVar6) {
                              temp_v3 = temp_v3 * 0x17c;
                              *(short *)(temp_v3 + 0x5f3400) = (short)piVar6[1];
                              *(unsigned short *)(temp_v3 + 0x5f3402) = temp_v1;
                              *(unsigned char *)(temp_v3 + 0x5f3404) = 0;
                              param_3 = (unsigned int *)0x0;
                              break;
                            }
                            temp_v3 = temp_v3 + 1;
                          } while (temp_v3 < (int)DAT_00580c94);
                        }
                      }
                      if (temp_v31 != 0) {
                        temp_v3 = 0;
                        if (temp_v3 < (int)DAT_00580c94) {
                          do {
                            if (*(unsigned int **)(temp_v3 * 0x17c + 0x5f33cc) == temp_v24) {
                              *(short *)(temp_v3 * 0x17c + 0x5f3406) = (short)temp_v31;
                              *(short *)(temp_v3 * 0x17c + 0x5f3408) = (short)(int)temp_v30;
                              break;
                            }
                            temp_v3 = temp_v3 + 1;
                          } while (temp_v3 < (int)DAT_00580c94);
                        }
                        param_3 = temp_v24;
                        in_r12 = temp_v30;
                        if (temp_v31 == 5) {
                          mapIfRequestById(temp_v24);
                        }
                      }
                      if (temp_v32 != 0) {
                        param_3 = (unsigned int *)&DAT_00580c98;
                        temp_v3 = 0;
                        if (0 < (int)DAT_00580c94) {
                          in_r12 = &DAT_005f32a0;
                          do {
                            if (*(unsigned int **)(temp_v3 * 0x17c + 0x5f33cc) == temp_v24) {
                              FUN_001a90f0(temp_v3 * 0x17c + 0x5f340e,&DAT_00580c98);
                              break;
                            }
                            temp_v3 = temp_v3 + 1;
                          } while (temp_v3 < (int)DAT_00580c94);
                        }
                      }
                      if ((temp_v34 != (unsigned char *)0xffffffff) &&
                         (temp_v3 = 0, param_3 = DAT_00580c94, in_r12 = temp_v34,
                         0 < (int)DAT_00580c94)) {
                        do {
                          if (*(unsigned int **)(temp_v3 * 0x17c + 0x5f33cc) == temp_v24) {
                            *(short *)(temp_v3 * 0x17c + 0x5f33fe) = (short)(int)temp_v34;
                            break;
                          }
                          temp_v3 = temp_v3 + 1;
                        } while (temp_v3 < (int)DAT_00580c94);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          puVar11 = (unsigned int *)(int)*(char *)((int)puVar4 + 9);
          if (puVar11 != (unsigned int *)0x0) {
            param_3 = temp_v35;
          }
          if (puVar11 == (unsigned int *)0x0 || puVar11 == param_3) goto LAB_003647c0;
        }
      }
LAB_003657d4:
      temp_v10 = temp_v10 + 1;
    } while ((int)temp_v10 < temp_v2);
  }
  return;
}

} /* extern "C" */
