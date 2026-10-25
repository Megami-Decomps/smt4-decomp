/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc720` (_code @ 0x1fc720, 0x1694 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/TextureDrawCall.h"

extern "C" {

int fontMeasureLineAdvance(...);
int dataTable00FindById(void);
int fadeObjectResetIfActive(...);
int FUN_00288b20(...);

int textFormatBuffer(...);
int FUN_0014bd84(...);
int FUN_00162790(...);
int FUN_00164b5c(...);
int efctSetSpeed(...);
int FUN_00180310(...);
int FUN_001834a4(...);
int FUN_00185e84(...);
int dataTable04FindById(void);
int statusDownDrawIndicatorPairs(int, int);
int FUN_002c7e24(void);
int unitRecordBuild(int, unsigned char [300]);
int FUN_0035ad50(int, unsigned char [300]);
int statDrawClampedDelta(...);
int recordFindAcceptedById(int);
int recordContainsPairedId(...);
int FUN_004bcbb4(...);
int FUN_004bd6b0(...);
int VectorSignedToFloat(...);
int __aeabi_memcpy4(unsigned char [300], unsigned char *, int);

typedef int romwright_code(...);
/* stack frame of param_2: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp1D0; /* 0x1d0: local_1d0 */
    unsigned int sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1D8; /* 0x1d8: local_1d8 */
    unsigned int sp1DC; /* 0x1dc: local_1dc */
    unsigned int sp1E0; /* 0x1e0: local_1e0 */
} param_2_stack;

extern unsigned char LAB_001fcdfc; /* 0x1fcdfc */
extern unsigned char LAB_001fce04; /* 0x1fce04 */
extern unsigned char LAB_001fce1c; /* 0x1fce1c */
extern unsigned char LAB_001fd310; /* 0x1fd310 */
extern unsigned char LAB_001fd328; /* 0x1fd328 */
extern unsigned char LAB_001fd7cc; /* 0x1fd7cc */
extern unsigned char LAB_001fdcbc; /* 0x1fdcbc */
extern unsigned char LAB_001fdccc; /* 0x1fdccc */
extern unsigned char LAB_001fddb4; /* 0x1fddb4 */
extern int g_statusDown; /* 0x588fe8 */
extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0014bd84. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
extern int vec2GetXInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: fontMeasureLineAdvance. */
/* Supplied declaration required: FUN_00185e84. */
/* Supplied declaration required: dataTable00FindById. */
extern unsigned char *slotRecordFindById(void);
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: statusDownDrawIndicatorPairs. */
/* Supplied declaration required: fadeObjectResetIfActive. */
extern int FUN_0026264c(unsigned short);
/* Supplied declaration required: FUN_00288b20. */
extern int FUN_002a4894(void);
extern int objectApplyIfUnblocked(int);
/* Supplied declaration required: FUN_002c7e24. */
extern int FUN_002c7e3c(void);
extern int FUN_002c7e54(void);
/* Supplied declaration required: unitRecordBuild. */
extern int uiSearchPrimary(int);
/* Supplied declaration required: FUN_0035ad50. */
/* Supplied declaration required: statDrawClampedDelta. */
/* Supplied declaration required: recordFindAcceptedById. */
extern unsigned int FUN_003df57c(unsigned short, unsigned int);
extern int countUnlockedSlots(void);
/* Supplied declaration required: recordContainsPairedId. */
/* Supplied declaration required: FUN_004bcbb4. */
extern int getUnlockedSlotCount(unsigned char *);
/* Supplied declaration required: FUN_004bd6b0. */
/* Supplied declaration required: __aeabi_memcpy4. */


void FUN_001fc720(int param_1,int param_2)

{
/* irregular: 14 goto(s); irregular input(s): in_fpscr; 25 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  short *psVar4;
  unsigned short *puVar5;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar8;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char *puVar15;
  int temp_v11;
  int *piVar17;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int in_fpscr;
  int temp_v17;
  unsigned int temp_v18;
  unsigned char temp_v19 [300];
  unsigned char temp_v20 [64];
  int temp_v21;
  int temp_v22;
  int temp_v23;
  unsigned int temp_v24;
  int temp_v25;
  int temp_v26;
  unsigned int temp_v27;
  int temp_v28;
  int temp_v29;
  
  temp_v2 = g_statusDown;
  temp_v23 = g_statusDown + 0x5ec;
  temp_v21 = FUN_002a4894();
  temp_v27 = 0;
  temp_v24 = 0;
  psVar4 = (short *)FUN_002c7e24();
  temp_v12 = 0;
  if (*psVar4 < 0) {
    temp_v24 = 1;
  }
  temp_v22 = FUN_002c7e3c();
  if (temp_v22 != 0xe) {
    if (temp_v22 != 7) {
      if (temp_v22 == 0x10) {
        temp_v12 = 1;
      }
    }
    else {
      puVar5 = (unsigned short *)FUN_002c7e24();
      temp_v3 = FUN_0026264c(*puVar5);
      if (temp_v3 == 0) {
        temp_v12 = 1;
      }
    }
  }
  else {
    temp_v12 = 1;
  }
  efctSetSpeed();
  FUN_00164b5c(2,0x12,4,param_1,param_2,0xb3);
  FUN_00164b5c(2,0x12,6,param_1,param_2,0xb5);
  statusDownDrawIndicatorPairs(param_1,param_2);
  temp_v25 = temp_v2 + 0x500;
  puVar15 = (unsigned char *)0x0;
  if (*(short *)(temp_v2 + 0x598) >= 0) {
    if (temp_v22 != 4) {
      temp_v3 = FUN_002c7e3c();
      if (temp_v3 != 5) {
        puVar15 = (unsigned char *)slotRecordFindById();
        if (puVar15 != (unsigned char *)0x0) {
          __aeabi_memcpy4(temp_v19,puVar15,300);
        }
        else {
          unitRecordBuild(*(unsigned short *)(temp_v25 + 0x98),temp_v19);
        }
      }
      else {
        FUN_0035ad50(*(unsigned short *)(temp_v25 + 0x98),temp_v19);
      }
      if (*(short *)(temp_v25 + 0x98) < 0) {
        temp_v3 = countUnlockedSlots();
      }
      else if (temp_v22 != 4) {
        if (puVar15 == (unsigned char *)0x0) {
          puVar15 = temp_v19;
        }
        temp_v3 = getUnlockedSlotCount(puVar15);
      }
      else {
        recordFindAcceptedById(*(unsigned short *)(temp_v25 + 0x98));
        temp_v3 = 8;
      }
    }
    else {
      recordFindAcceptedById(*(unsigned short *)(temp_v25 + 0x98));
      temp_v3 = 8;
    }
  }
  else {
    temp_v3 = countUnlockedSlots();
  }
  temp_v28 = temp_v2 + 0x2500;
  temp_v26 = temp_v2 + 0x600;
  temp_v11 = 0;
  do {
    temp_v7 = temp_v2 + temp_v11 * 2;
    temp_v16 = 0;
    if (*(short *)(temp_v7 + 0x59c) != 0) {
      temp_v17 = 0;
      if (*(int *)(temp_v2 + 0x518) == 4) {
        if (*(int *)(temp_v2 + 0x524) >= 9) {
          temp_v8 = uiSearchPrimary(temp_v23);
          if (temp_v8 == temp_v11 + 1) {
            temp_v17 = vec2GetXInt(temp_v2 + 0x2e4);
          }
          goto LAB_001fc9d0;
        }
      }
      else {
LAB_001fc9d0:
        if (*(int *)(temp_v2 + 0x518) == 0xc) {
          if (*(int *)(temp_v2 + 0x654) == temp_v11) {
            temp_v17 = *(int *)(temp_v2 + 0x524);
            if (temp_v17 >= 9) {
              temp_v17 = vec2GetXInt(temp_v2 + 0x2e4);
              goto LAB_001fca00;
            }
            temp_v17 = temp_v17 * -0x28;
          }
        }
        else {
LAB_001fca00:
          temp_v8 = *(int *)(temp_v2 + 0x518);
          temp_v15 = temp_v8 == 0x11;
          if (temp_v15) {
            temp_v8 = *(int *)(temp_v2 + 0x65c);
          }
          if (temp_v15 && temp_v8 == temp_v11) {
            temp_v17 = *(int *)(temp_v2 + 0x524);
            if (temp_v17 < 9) {
              temp_v17 = temp_v17 * -0x28;
            }
            else {
              temp_v17 = vec2GetXInt(temp_v2 + 0x2e4);
            }
          }
        }
      }
      temp_v8 = FUN_001834a4(0x12,temp_v11 + 0x414);
      temp_v4 = FUN_001834a4(0x12,0x40f);
      if (temp_v12 != 0) {
        textFormatBuffer(temp_v20,&LAB_001fcdfc);
      }
      else {
        temp_v14 = FUN_0014bd84(*(unsigned short *)(temp_v7 + 0x59c));
        textFormatBuffer(temp_v20,&LAB_001fce04,temp_v14);
      }
      if ((*(char *)(temp_v28 + 0x98) == '\0') || (temp_v16 = temp_v3 <= temp_v11, temp_v11 < temp_v3)) {
        temp_v9 = *(int *)(temp_v2 + 0x518);
        if (!(temp_v9 == 0xe || temp_v9 == 0x11)) {
          if (temp_v9 == 7 || temp_v9 == 0xc) {
            temp_v14 = 0xffffffff;
          }
          else if ((((temp_v9 != 4) || (*(int *)(temp_v2 + 0x524) < 9)) ||
                   (temp_v9 = uiSearchPrimary(temp_v23), temp_v9 != temp_v11 + 1)) &&
                  ((*(char *)(temp_v26 + 0x60) == '\0' || (*(int *)(temp_v2 + 0x664) != temp_v11)))) {
            temp_v14 = 0xffffffff;
            temp_v0 = *(char *)(temp_v2 + temp_v11 + 0x5dc);
            if (temp_v0 != '\x01') {
              if (temp_v0 == '\x02') {
                temp_v14 = 0xdc0f14ff;
              }
            }
            else {
              temp_v14 = 0x57d8ffff;
            }
          }
          else {
            temp_v14 = 0x57d8ffff;
          }
        }
        else if (*(int *)(temp_v2 + 0x65c) == temp_v11) {
          temp_v14 = 0x57d8ffff;
        }
        else {
          temp_v14 = 0x9b9b9bff;
        }
      }
      else {
        temp_v14 = 0x9b9b9bff;
      }
      temp_v17 = temp_v17 + param_1;
      VectorSignedToFloat((int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat((int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v17,
                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v29 = temp_v17;
      FUN_00162790(2,temp_v14,temp_v20,(int)*(short *)(temp_v4 + 8));
      temp_v4 = FUN_001834a4(0x12,0x40e);
      FUN_00185e84((int)*(short *)(temp_v7 + 0x59c),
                   (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v17,
                   (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0xb5,
                   temp_v24,0);
      if ((-1 < *(short *)(temp_v25 + 0x98)) && (temp_v22 != 4)) {
        temp_v17 = recordContainsPairedId(temp_v19,*(unsigned short *)(temp_v7 + 0x59c));
        if (temp_v17 == 0) {
          FUN_004bd6b0(temp_v19,*(unsigned short *)(temp_v7 + 0x59c),temp_v11);
        }
        statDrawClampedDelta(temp_v19,(int)*(short *)(temp_v7 + 0x59c),
                     temp_v29 + (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v4 + 8),
                     (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0xb5,0);
      }
      if (temp_v12 == 0) {
        if (*(short *)(temp_v25 + 0x98) < 0) {
          temp_v27 = FUN_003df57c(*(unsigned short *)(temp_v7 + 0x59c),1);
        }
        else {
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v7 + 0x59c);
          if (temp_v22 != 7) {
            temp_v27 = FUN_004bcbb4(temp_v19);
          }
          else {
            dataTable04FindById();
            if (temp_v5 != 0) {
              temp_v27 = (unsigned int)*(unsigned char *)(temp_v5 + 0x22);
            }
          }
        }
        FUN_00164b5c(2,0x12,7,*(short *)(temp_v8 + 8) + temp_v29,*(short *)(temp_v8 + 10) + param_2,
                     0xb5);
        temp_v7 = FUN_001834a4(0x12,0x413);
        FUN_00180310(0,(int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v8 + 8) + temp_v29,
                     (int)*(short *)(temp_v8 + 10) + (int)*(short *)(temp_v7 + 10) + param_2,1,4,0xba,
                     &LAB_001fce1c,temp_v27);
      }
      if (temp_v16) {
        FUN_001835b4(2,0x12,temp_v11 + 0x54b,param_1,param_2,0xbb);
      }
    }
    else if ((temp_v3 <= temp_v11) && (temp_v22 != 7)) {
      FUN_001835b4(2,0x12,temp_v11 + 0x54b,param_1,param_2,0xb5);
    }
    temp_v11 = temp_v11 + 1;
  } while (temp_v11 < 8);
  temp_v11 = *(int *)(temp_v2 + 0x518);
  if (temp_v11 != 3) {
    if (temp_v11 == 7) {
      if (*(int *)(temp_v2 + 0x524) >= 9) {
        temp_v11 = objectApplyIfUnblocked(temp_v23);
        if (temp_v11 - 1 == temp_v21) goto LAB_001fcee8;
        if (*(int *)(temp_v2 + 0x518) == 0xe) goto LAB_001fce54;
      }
      goto LAB_001fce6c;
    }
    if (temp_v11 == 0xe) {
LAB_001fce54:
      temp_v11 = objectApplyIfUnblocked(temp_v23);
      if (temp_v11 - 1 != temp_v21) goto LAB_001fce6c;
      goto LAB_001fcee8;
    }
    if ((temp_v11 == 0x12 || temp_v11 == 0xb) || (temp_v11 == 10 || temp_v11 == 8)) goto LAB_001fce6c;
LAB_001fcef4:
    if (temp_v11 != 0x11) {
      if (*(char *)(temp_v26 + 0x50) != '\0') {
        if ((!(temp_v11 == 7 || temp_v11 == 8)) && (temp_v12 = FUN_002c7e54(), temp_v12 != 0xc)) {
          FUN_00164b5c(2,0x12,9,param_1,param_2,0xbf);
        }
        else {
          FUN_00164b5c(2,0x12,0x12,param_1,param_2,0xbf);
        }
        temp_v12 = 0;
        do {
          temp_v3 = temp_v2 + temp_v12 * 2;
          if (*(short *)(temp_v3 + 0x5bc) == 0) break;
          if (*(short *)(temp_v3 + 0x5be) == 0) {
            temp_v12 = temp_v12 + 1;
            break;
          }
          temp_v12 = temp_v12 + 2;
        } while (temp_v12 < 8);
        if (temp_v12 < 1) {
          FUN_001835b4(2,0x12,0x4e3,param_1,param_2,0xb3);
          FUN_001835b4(2,0x12,0x4e4,param_1,param_2,0xb3);
          FUN_001835b4(2,0x12,0x4e5,param_1,param_2,0xb3);
          temp_v12 = FUN_001834a4(0x12,0x4e6);
          textFormatBuffer(temp_v20,&LAB_001fd310);
          VectorSignedToFloat(*(short *)(temp_v12 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat(*(short *)(temp_v12 + 8) + param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(2,0xf4f4f4ff,temp_v20);
        }
        else {
          while (temp_v3 = temp_v12 - 1, -1 < temp_v3) {
            temp_v7 = *(int *)(temp_v2 + 0x518);
            temp_v11 = 0;
            if (temp_v7 != 4) {
              if (temp_v7 != 0xc) {
                if ((((temp_v7 == 7 || temp_v7 == 8) || temp_v7 == 9) && (0 < temp_v3)) &&
                   (temp_v11 = *(int *)(temp_v2 + 0x524) * 0x10, temp_v11 >= 0x85)) {
                  temp_v11 = 0x84;
                }
                if (((temp_v7 != 7 && temp_v7 != 0xc) && (temp_v7 != 8 && temp_v7 != 9)) &&
                   (temp_v7 != 10 && temp_v7 != 0xb)) goto LAB_001fd420;
              }
              else {
                temp_v11 = *(int *)(temp_v2 + 0x524) * -0x18;
                if (0 < temp_v3) {
                  temp_v11 = temp_v11 + 0x84;
                  goto joined_r0x001fd3ac;
                }
              }
              if (temp_v3 != 0) goto LAB_001fd420;
              temp_v12 = 0;
              if (((temp_v7 == 7) || (temp_v7 == 8 || temp_v7 == 9)) || (temp_v7 == 10 || temp_v7 == 0xb)
                 ) {
                temp_v12 = objectApplyIfUnblocked(temp_v23);
                temp_v12 = temp_v12 - 1;
              }
              if (*(int *)(temp_v2 + 0x518) == 0xc) {
                temp_v12 = objectApplyIfUnblocked(temp_v23);
              }
              if ((*(int *)(temp_v2 + 0x524) >= 9) && (temp_v21 == temp_v12)) {
                temp_v7 = FUN_001834a4(0x12,0x50b);
                efctSetSpeed();
                FUN_00164b5c(2,0x12,0x16,*(short *)(temp_v7 + 8) + param_1,
                             *(short *)(temp_v7 + 10) + param_2,0xbf);
                efctSetSpeed();
                FUN_001835b4(2,0x12,0x4ff,*(short *)(temp_v7 + 8) + param_1,
                             *(short *)(temp_v7 + 10) + param_2,0xc2);
                temp_v12 = *(int *)(temp_v2 + 0x530);
                temp_v16 = temp_v12 != 0;
                if (!temp_v16) {
                  temp_v12 = *(int *)(temp_v2 + 0x534);
                }
                if (!(temp_v16 || temp_v12 != 0)) {
                  temp_v12 = *(int *)(temp_v2 + 0x538);
                  temp_v16 = temp_v12 == 0;
                  if (temp_v16) {
                    temp_v12 = *(int *)(temp_v2 + 0x53c);
                  }
                  temp_v15 = temp_v16 && temp_v12 == 0;
                  if (temp_v16 && temp_v12 == 0) {
                    temp_v15 = *(int *)(temp_v2 + 0x540) == 0;
                  }
                  if ((!temp_v15) || (*(int *)(temp_v2 + 0x52c) < 0)) goto LAB_001fd80c;
                  temp_v10 = 0x5ad;
                  temp_v13 = 0x5b0;
                  temp_v18 = 0xf5ff9fff;
                  temp_v14 = 0x5ae;
                  temp_v6 = 0x5af;
                }
                else {
LAB_001fd80c:
                  temp_v10 = 0x500;
                  temp_v18 = 0x9fe7ffff;
                  temp_v14 = 0x501;
                  temp_v6 = 0x502;
                  temp_v13 = 0x59e;
                }
                FUN_001835b4(2,0x12,temp_v10,*(short *)(temp_v7 + 8) + param_1,
                             *(short *)(temp_v7 + 10) + param_2,0xc4);
                FUN_001835b4(2,0x12,temp_v14,*(short *)(temp_v7 + 8) + param_1,
                             *(short *)(temp_v7 + 10) + param_2,0xc4);
                FUN_001835b4(2,0x12,temp_v6,*(short *)(temp_v7 + 8) + param_1,
                             *(short *)(temp_v7 + 10) + param_2,0xc4);
                efctSetSpeed();
                FUN_001835b4(2,0x12,temp_v13,*(short *)(temp_v7 + 8) + param_1,
                             *(short *)(temp_v7 + 10) + param_2,0xc5);
                efctSetSpeed();
                FUN_001835b4(2,0x12,0x503,*(short *)(temp_v7 + 8) + param_1,
                             *(short *)(temp_v7 + 10) + param_2,0xc6);
                FUN_001835b4(2,0x12,0x504,*(short *)(temp_v7 + 8) + param_1,
                             *(short *)(temp_v7 + 10) + param_2,0xc6);
                temp_v12 = FUN_001834a4(0x12,0x50a);
                temp_v14 = FUN_0014bd84(*(unsigned short *)(temp_v25 + 0xbc));
                textFormatBuffer(temp_v20,&LAB_001fdcbc,temp_v14);
                VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v12 + 10) +
                                    param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat((int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v7 + 8) +
                                    param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_00162790(3,temp_v18,temp_v20,(int)*(short *)(temp_v7 + 8));
                temp_v12 = FUN_001834a4(0x12,0x509);
                FUN_00185e84((int)*(short *)(temp_v25 + 0xbc),
                             (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v12 + 8) + param_1,
                             (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v12 + 10) + param_2,
                             0xc9,temp_v24,0);
                if ((-1 < *(short *)(temp_v25 + 0x98)) && (temp_v22 != 4)) {
                  temp_v17 = recordContainsPairedId(temp_v19,*(unsigned short *)(temp_v25 + 0xbc));
                  if (temp_v17 == 0) {
                    FUN_004bd6b0(temp_v19,*(unsigned short *)(temp_v25 + 0xbc),0);
                  }
                  statDrawClampedDelta(temp_v19,(int)*(short *)(temp_v25 + 0xbc),
                               (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v12 + 8) + param_1,
                               (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v12 + 10) + param_2
                               ,0xc9,0);
                }
                temp_v14 = FUN_004bcbb4(temp_v19,*(unsigned short *)(temp_v25 + 0xbc));
                temp_v12 = FUN_001834a4(0x12,0x508);
                FUN_00180310(0,(int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v7 + 8) + param_1,
                             (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v12 + 10) + param_2,1
                             ,4,0xc9,&LAB_001fdccc,temp_v14);
              }
              else {
                temp_v7 = FUN_001834a4(0x12,0x43f);
                FUN_001834a4(0x12,0x4f1);
                temp_v17 = param_1 + temp_v11;
                FUN_00164b5c(2,0x12,0x15,temp_v17,param_2,0xb3);
                temp_v12 = FUN_001834a4(0x12,0x4f6);
                FUN_00185e84((int)*(short *)(temp_v25 + 0xbc),*(short *)(temp_v12 + 8) + temp_v17,
                             *(short *)(temp_v12 + 10) + param_2,0xb5,0,0);
                if ((-1 < *(short *)(temp_v25 + 0x98)) && (temp_v22 != 4)) {
                  temp_v8 = recordContainsPairedId(temp_v19,*(unsigned short *)(temp_v25 + 0xbc));
                  if (temp_v8 == 0) {
                    FUN_004bd6b0(temp_v19,*(unsigned short *)(temp_v25 + 0xbc),0);
                  }
                  statDrawClampedDelta(temp_v19,(int)*(short *)(temp_v25 + 0xbc),
                               *(short *)(temp_v12 + 8) + temp_v17,*(short *)(temp_v12 + 10) + param_2,
                               0xb5,0);
                }
                temp_v12 = FUN_001834a4(0x12,0x4f7);
                temp_v14 = FUN_0014bd84(*(unsigned short *)(temp_v25 + 0xbc));
                textFormatBuffer(temp_v20,&LAB_001fdcbc,temp_v14);
                VectorSignedToFloat(*(short *)(temp_v12 + 8) + temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                VectorSignedToFloat(*(short *)(temp_v12 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_00162790(2,0xffffffff,temp_v20);
                temp_v14 = FUN_004bcbb4(temp_v19,*(unsigned short *)(temp_v25 + 0xbc));
                temp_v12 = FUN_001834a4(0x12,0x4fb);
                FUN_00180310(0,*(short *)(temp_v12 + 8) + temp_v17,*(short *)(temp_v12 + 10) + param_2,1,4
                             ,0xc9,&LAB_001fdccc,temp_v14);
              }
            }
            else {
              temp_v11 = *(int *)(temp_v2 + 0x524) * -8;
              if (0 < temp_v3) {
joined_r0x001fd3ac:
                if (temp_v11 < -0x2c) {
                  temp_v11 = -0x2c;
                }
              }
LAB_001fd420:
              temp_v7 = FUN_001834a4(0x12,temp_v12 + 0x43e);
              FUN_00164b5c(2,0x12,10,(int)*(short *)(temp_v7 + 8) + param_1 + temp_v11,
                           *(short *)(temp_v7 + 10) + param_2,0xb3);
              temp_v12 = FUN_001834a4(0x12,0x43e);
              FUN_00185e84((int)*(short *)(temp_v2 + temp_v3 * 2 + 0x5bc),
                           (int)*(short *)(temp_v12 + 8) + (int)*(short *)(temp_v7 + 8) +
                           param_1 + temp_v11,
                           (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v12 + 10) + param_2,
                           0xb5,0,0);
            }
            temp_v17 = 0;
            do {
              temp_v12 = *(int *)(temp_v2 + 0x518);
              if (((((temp_v12 != 7 && temp_v12 != 8) && temp_v12 != 9) || temp_v3 != 0) &&
                  (temp_v1 = *(short *)(temp_v2 + temp_v17 * 2 + 0x5cc), temp_v1 != 0)) &&
                 (temp_v1 == *(short *)(temp_v2 + temp_v3 * 2 + 0x5bc))) {
                temp_v5 = *(unsigned int *)(temp_v2 + 0x524);
                temp_v12 = (int)(((long long)(int)temp_v5 * -0x77777777 + ((unsigned long long)temp_v5 << 0x20)) >>
                              0x20);
                temp_v12 = temp_v5 + ((temp_v12 >> 3) - (temp_v12 >> 0x1f)) * -0xf;
                VectorSignedToFloat(temp_v12,(unsigned char)(in_fpscr >> 0x16) & 3);
                efctSetSpeed(temp_v12);
                FUN_001835b4(2,0x12,0x50d,(int)*(short *)(temp_v7 + 8) + temp_v11 + param_1,
                             *(short *)(temp_v7 + 10) + param_2,0xbf);
                efctSetSpeed();
              }
              temp_v17 = temp_v17 + 1;
              temp_v12 = temp_v3;
            } while (temp_v17 < 8);
          }
        }
      }
      goto LAB_001fd57c;
    }
  }
  else {
LAB_001fce6c:
    temp_v1 = *(short *)(temp_v2 + temp_v21 * 2 + 0x59c);
    if (temp_v1 != 0) {
      temp_v14 = 0;
      if ((*(char *)(temp_v28 + 0x98) != '\0') && (temp_v3 <= temp_v21)) {
        temp_v14 = 1;
      }
      FUN_00288b20(param_1,param_2,temp_v1,temp_v21 + 0x42c,temp_v24,temp_v12,0,
                   *(unsigned char *)(temp_v21 + temp_v2 + 0x5dc),temp_v14);
    }
LAB_001fcee8:
    temp_v11 = *(int *)(temp_v2 + 0x518);
    if (temp_v11 != 0xe) goto LAB_001fcef4;
  }
  temp_v12 = 0;
  if (temp_v11 == 0x11) {
    temp_v12 = *(int *)(temp_v2 + 0x524) * -0x28;
  }
  temp_v3 = FUN_001834a4(0x12,0x54a);
  temp_v12 = temp_v12 + param_1;
  FUN_001835b4(2,0x12,0x4e3,temp_v12,param_2,0xb3);
  FUN_001835b4(2,0x12,0x4e4,temp_v12,param_2,0xb3);
  FUN_001835b4(2,0x12,0x4e5,temp_v12,param_2,0xb3);
  FUN_00164b5c(2,0x12,0x13,param_1,param_2,0xb3);
  if ((*(int *)(temp_v2 + 0x518) == 0xe) && (temp_v11 = objectApplyIfUnblocked(temp_v23), temp_v11 - 1 == temp_v21))
  {
    FUN_00288b20(temp_v12,param_2,*(unsigned int *)(temp_v2 + 0x658) & 0xffff,0x435,temp_v24,0,0,0,0);
  }
  else {
    temp_v11 = FUN_001834a4(0x12,0x40f);
    temp_v14 = FUN_0014bd84(*(unsigned int *)(temp_v2 + 0x658));
    textFormatBuffer(temp_v20,&LAB_001fce04,temp_v14);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v11 + 10) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v12,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0x57d8ffff,temp_v20,(int)*(short *)(temp_v11 + 8));
    temp_v11 = FUN_001834a4(0x12,0x40e);
    FUN_00185e84((int)(short)*(unsigned int *)(temp_v2 + 0x658),
                 (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v12,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v11 + 10) + param_2,0xb5,temp_v24,
                 0);
    if ((-1 < *(short *)(temp_v25 + 0x98)) && (temp_v22 != 4)) {
      temp_v7 = recordContainsPairedId(temp_v19,*(unsigned int *)(temp_v2 + 0x658));
      if (temp_v7 == 0) {
        FUN_004bd6b0(temp_v19,*(unsigned int *)(temp_v2 + 0x658),0);
      }
      statDrawClampedDelta(temp_v19,(int)(short)*(unsigned int *)(temp_v2 + 0x658),
                   (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v11 + 8) + temp_v12,
                   (int)*(short *)(temp_v11 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,0xb5,0);
    }
    temp_v14 = FUN_004bcbb4(temp_v19,*(unsigned int *)(temp_v2 + 0x658));
    FUN_00164b5c(2,0x12,7,*(short *)(temp_v3 + 8) + temp_v12,*(short *)(temp_v3 + 10) + param_2,0xb5);
    temp_v11 = FUN_001834a4(0x12,0x413);
    FUN_00180310(0,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v3 + 8) + temp_v12,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v11 + 10) + param_2,1,4,0xba,
                 &LAB_001fd328,temp_v14);
  }
LAB_001fd57c:
  temp_v12 = objectApplyIfUnblocked(temp_v23);
  if (temp_v12 < 1) {
    FUN_00164b5c(2,0x12,0x1b,param_1,param_2,0xdd);
    temp_v12 = FUN_001834a4(0x12,0x544);
    puVar8 = (unsigned short *)FUN_002c7e24();
    temp_v5 = (unsigned int)*puVar8;
    dataTable00FindById();
    if (((temp_v5 == 0) || ((*(unsigned short *)(temp_v5 + 0x16) & 1) != 0)) && (temp_v22 != 0x10)) {
      textFormatBuffer(temp_v20,&LAB_001fd7cc);
    }
    else {
      textFormatBuffer(temp_v20,&LAB_001fddb4);
    }
    puVar15 = temp_v20;
    fontMeasureLineAdvance(puVar15,2);
    VectorSignedToFloat((int)*(short *)(temp_v12 + 8) +
                        ((int)**(short **)(temp_v12 + 0xc) - (int)puVar15) / 2 + param_1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v12 + 10) + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xffffffff,temp_v20);
  }
  temp_v12 = g_renderCtx;
  temp_v3 = *(int *)(temp_v2 + 0x518);
  if ((temp_v3 == 4 || temp_v3 == 0xc) || temp_v3 == 0x11) {
    temp_v3 = packNibblesAndByte(6,1,0);
    piVar17 = (int *)(temp_v12 + 0x12b8);
    temp_v11 = piVar17[*piVar17 + 2];
    piVar17[*piVar17 + 2] = temp_v3;
    if (*(char *)(temp_v12 + 0x12d0) != '\0' || temp_v11 != temp_v3) {
      (**(romwright_code **)(temp_v12 + 0x12d4))();
      *(unsigned char *)(temp_v12 + 0x12d0) = 0;
    }
    fadeObjectResetIfActive(temp_v2 + 0x370);
    temp_v2 = g_renderCtx;
    temp_v12 = packNibblesAndByte(6,7,0);
    piVar17 = (int *)(temp_v2 + 0x12b8);
    temp_v3 = piVar17[*piVar17 + 2];
    piVar17[*piVar17 + 2] = temp_v12;
    if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v3 != temp_v12) {
      (**(romwright_code **)(temp_v2 + 0x12d4))();
      *(unsigned char *)(temp_v2 + 0x12d0) = 0;
    }
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
