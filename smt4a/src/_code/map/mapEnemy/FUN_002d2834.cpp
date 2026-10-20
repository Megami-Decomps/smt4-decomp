/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d2834` (_code @ 0x2d2834, 0x5444 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00272e0c(...);
int FUN_00292200(void);
int gameDataBlocksAddFloat(void);
int FUN_002d1f40(...);
int byte76Set(...);
int FUN_00352ff8(void);
int FUN_00353200(void);

int dataTable00FindById(void);
int ptrListRemoveClearOwner(...);
int vec4Forward(...);
int FUN_002b5cd4(void);
int FUN_00303a5c(void);
int FUN_00303e88(void);
int FUN_0033abb4(void);
int FUN_00384830(void);
int FUN_0040ace8(...);
int FUN_004bc420(...);
int FUN_0050d8e4(void);
int SBORROW4(...);

int CONCAT44(...);
int randRange(...);
int FUN_00178b04(...);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int FUN_0020eb44(...);
int FUN_002826dc(...);
int FUN_002b5cb4(void);
int FUN_00352bc4(void);
int FUN_00353c20(...);
int FUN_0036d984(...);
int moriModelContentCopyBody(void);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_idivmod(unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of void: 26 slot(s), 104 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
} void_stack;

extern unsigned char LAB_002d38dc; /* 0x2d38dc */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int DAT_005806a4; /* 0x5806a4 */
extern int DAT_005806d4; /* 0x5806d4 */
extern unsigned char DAT_00580b94; /* 0x580b94 */
extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern signed char DAT_005f1623; /* 0x5f1623 */
extern int DAT_005f1638; /* 0x5f1638 */
extern signed char DAT_005f17c9; /* 0x5f17c9 */
extern int DAT_005f17f0; /* 0x5f17f0 */
extern int DAT_005f17f4; /* 0x5f17f4 */
extern float DAT_005f18a8; /* 0x5f18a8 */
extern float DAT_005f18ac; /* 0x5f18ac */
extern float DAT_005f18b0; /* 0x5f18b0 */
extern float DAT_005f18b4; /* 0x5f18b4 */
extern short DAT_005f18b8; /* 0x5f18b8 */
extern signed char DAT_005f18bf; /* 0x5f18bf */
extern unsigned int DAT_005f1ad0; /* 0x5f1ad0 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: randRange. */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_00178b04. */
extern int gameGetPlayerData(void);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: vec4Forward. */
/* Supplied declaration required: FUN_0020eb44. */
extern unsigned int FUN_00261424(void);
/* Supplied declaration required: FUN_00272e0c. */
/* Supplied declaration required: FUN_002826dc. */
/* Supplied declaration required: FUN_00292200. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: gameDataBlocksAddFloat. */
/* Supplied declaration required: FUN_002d1f40. */
extern int FUN_002d7c88(unsigned int);
/* Supplied declaration required: FUN_00303a5c. */
/* Supplied declaration required: FUN_00303e88. */
extern int FUN_003303fc(void);
extern int byte76Get(void);
/* Supplied declaration required: FUN_0033abb4. */
extern int FUN_0033b100(char *);
extern int FUN_0033be00(char *);
/* Supplied declaration required: byte76Set. */
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_00352ff8. */
/* Supplied declaration required: FUN_00353200. */
/* Supplied declaration required: FUN_00353c20. */
/* Supplied declaration required: FUN_0036d984. */
/* Supplied declaration required: FUN_00384830. */
extern int FUN_003d21dc(void);
extern int gameDataFlagTestBit(unsigned int);
/* Supplied declaration required: moriModelContentCopyBody. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */
extern int FUN_004bb510(unsigned int);
extern int FUN_004bb870(unsigned int);
/* Supplied declaration required: FUN_004bc420. */
extern int FUN_004bc5a4(unsigned int);
extern int FUN_004bc850(void);
/* Supplied declaration required: FUN_0050d8e4. */
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_002d2834(void)

{
/* irregular: 25 goto(s); irregular input(s): in_fpscr; 36 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  float *pfVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  char *pcVar8;
  char temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned int *puVar12;
  int *piVar13;
  int temp_v10;
  char *pcVar15;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned int in_fpscr;
  float temp_v17;
  float temp_v18;
  unsigned int temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned long long temp_v24;
  unsigned long long temp_v25;
  unsigned long long temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  int temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float fStack_bc;
  float fStack_b8;
  int temp_v38;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int temp_v39;
  float temp_v40;
  float temp_v41;
  float temp_v42;
  float temp_v43;
  float temp_v44;
  float temp_v45;
  float temp_v46;
  float fStack_84;
  int temp_v47;
  float temp_v48;
  unsigned int uStack_78;
  int temp_v49;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  int temp_v50;
  int *temp_v51;
  int temp_v52;
  
  temp_v4 = DAT_005806d4;
  temp_v50 = gameFlagsGetBlock();
  temp_v52 = gameGetPlayerData();
  temp_v51 = (int *)(temp_v4 + 0x3d80);
  if (0 < *temp_v51) {
    *temp_v51 = *temp_v51 - 1;
  }
  temp_v11 = 0;
  do {
    temp_v10 = temp_v4 + temp_v11 * 0x188;
    pcVar15 = (char *)(temp_v10 + 0x34);
    if (*pcVar15 != '\0') {
      switch(*(unsigned int *)(temp_v10 + 0xb8)) {
      case 0:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        if ((*(char *)(temp_v10 + 0xb1) == '\0') || (temp_v3 = FUN_0033be00(pcVar15), temp_v3 != 0)) {
          temp_v30 = *(float *)(temp_v10 + 0x54);
          temp_v31 = *(float *)(temp_v10 + 0x58);
          temp_v32 = *(float *)(temp_v10 + 0x5c);
          *(int *)(temp_v10 + 0x1a4) = *(int *)(temp_v10 + 0x1a4) + 1;
          *(int *)(temp_v10 + 0xc4) = *(int *)(temp_v10 + 0xc4) + 1;
          *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
          *(unsigned int *)(temp_v10 + 100) = 1;
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          temp_v3 = FUN_0033b100(pcVar15);
          if (temp_v3 != 0) {
            *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          if ((*(char *)(temp_v10 + 0xb1) == '\0') && (*(int *)(temp_v10 + 0xc4) >= 0x169)) {
            *(unsigned int *)(temp_v10 + 0xb8) = 9;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          if (*(int *)(temp_v50 + 0x14e8) != 0) {
            temp_v8 = *(float *)(temp_v4 + 0x14);
            FUN_002b5cb4();
            temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < DAT_005f18b4) << 0x1f) |
                    ((unsigned int)(temp_v8 == DAT_005f18b4) << 0x1e);
            in_fpscr = temp_v2 | ((unsigned int)((temp_v8 != temp_v8) || (DAT_005f18b4 != DAT_005f18b4)) << 0x1c);
            temp_v14 = (unsigned char)(temp_v2 >> 0x18);
            if (!(unsigned char)((temp_v14 >> 6) & 1) && temp_v14 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              *(unsigned int *)(temp_v10 + 0xb8) = 9;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
          }
          temp_v42 = temp_v30;
          temp_v44 = temp_v32;
          temp_v34 = *(float *)(g_lmapScene + 0x1c);
          temp_v36 = *(float *)(g_lmapScene + 0x24);
          temp_v8 = *(float *)(g_lmapScene + 0x20) - temp_v31;
          temp_v43 = temp_v31 + 35.0f;
          temp_v35 = *(float *)(g_lmapScene + 0x20) + 35.0f;
          if (*(int *)(temp_v10 + 0xc0) >= 9999) {
            temp_v17 = 600.0f;
          }
          else {
            temp_v17 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v10 + 0x1b0) * 0x10 +
                                                               0x582206),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
          }
          temp_v7 = *(char *)(temp_v10 + 0xb1);
          temp_v15 = 0;
          temp_v16 = temp_v7 == '\0';
          if (temp_v16) {
            temp_v7 = *(char *)(temp_v10 + 0x171);
          }
          if (((temp_v16 && temp_v7 == '\0') && (*temp_v51 == 0)) && (0 < *(int *)(temp_v4 + 0x3d7c))) {
            temp_v3 = 0;
            do {
              temp_v12 = DAT_005806d4 + temp_v3 * 0x188;
              if (*(char *)(temp_v12 + 0x34) != '\0') {
                switch(*(unsigned int *)(temp_v12 + 0xb8)) {
                case 7:
                case 8:
                case 0xd:
                case 0xe:
                case 0xf:
                  if (((char *)(temp_v12 + 0x34) != (char *)0x0) &&
                     (*(char *)(temp_v12 + 0x171) == '\0')) {
                    temp_v20 = *(float *)(g_lmapScene + 0x1c);
                    FUN_002b5cb4();
                    temp_v21 = *(float *)(g_lmapScene + 0x1c);
                    FUN_002b5cb4();
                    if (((int)(temp_v20 - temp_v21) < 0x43fa0000) ||
                       (((int)temp_v21 < 0x43960000 && ((int)temp_v20 >= 0x43c80001)))) {
                      temp_v15 = 1;
                    }
                  }
                  goto LAB_002d2ba8;
                }
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 0x28);
          }
LAB_002d2ba8:
          temp_v16 = 0;
          if ((*(char *)(temp_v10 + 0xb1) == '\0') &&
             ((((((!temp_v15 && (0 < *(int *)(temp_v4 + 0x3d7c))) || (*(char *)(temp_v10 + 0xb2) == '\0'))
                || ((DAT_005f1638 == 0x18 || DAT_005f1638 == 0x19 ||
                    (DAT_005f1638 == 0x1a || DAT_005f1638 == 5)))) ||
               (DAT_005f1638 == 0x1f || DAT_005f1638 == 0x20)) ||
              (((DAT_005f1638 == 0x21 || DAT_005f1638 == 0x22 ||
                ((DAT_005f1638 == 0x23 || DAT_005f1638 == 0x24) || DAT_005f1638 == 0x33)) ||
               ((*(char *)(g_lmapScene + 0x194) != '\0' &&
                ((temp_v2 = *(unsigned int *)(temp_v10 + 0xbc),
                 temp_v3 = (int)(((long long)(int)temp_v2 * -0x77777777 + ((unsigned long long)temp_v2 << 0x20)) >>
                              0x20), ((temp_v3 >> 3) - (temp_v3 >> 0x1f)) * -0xf + temp_v2 != 0 ||
                 (temp_v2 = randRange(100), temp_v2 < 0x50)))))))))) {
            temp_v16 = 1;
          }
          if (DAT_005f17f0 == 0 && !temp_v16) {
            temp_v20 = *(float *)(g_lmapScene + 0x1c);
            FUN_002b5cb4();
            temp_v21 = temp_v17 - 200.0f;
            temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v21 < temp_v20) << 0x1f) |
                    ((unsigned int)(temp_v21 == temp_v20) << 0x1e);
            in_fpscr = temp_v2 | ((unsigned int)((temp_v21 != temp_v21) || (temp_v20 != temp_v20)) << 0x1c);
            temp_v14 = (unsigned char)(temp_v2 >> 0x18);
            if (((!(unsigned char)((temp_v14 >> 6) & 1) && temp_v14 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) &&
                (temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0), temp_v3 == -1)) &&
               (*(int *)(temp_v50 + 0xdf4) != 0)) {
              temp_v12 = 0;
              temp_v3 = gameDataFlagTestBit(0x8b);
              temp_v1 = *(short *)(temp_v10 + 0x1a8);
              if (temp_v3 != 0) {
                temp_v12 = 9;
              }
              temp_v5 = FUN_003d21dc();
              temp_v3 = (int)temp_v1;
              if (temp_v5 != 0) {
                temp_v19 = FUN_00261424();
                temp_v20 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v21 = (float)VectorSignedToFloat((int)*(short *)(temp_v10 + 0x1a8),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v5 = (int)(temp_v21 * (temp_v20 * 0.55f + 1.0f) + temp_v20 * temp_v20 * 5.0f);
                temp_v3 = 999;
                if (temp_v5 < 999) {
                  temp_v3 = temp_v5;
                }
              }
              if (temp_v3 < (int)((unsigned int)*(unsigned short *)(temp_v52 + 0x62) + temp_v12)) {
                temp_v30 = *(float *)(temp_v10 + 0x54);
                temp_v32 = *(float *)(temp_v10 + 0x5c);
                temp_v31 = *(float *)(temp_v10 + 0x58) + 110.0f;
                *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
                *(unsigned int *)(temp_v10 + 0xb8) = 0xb;
                *(unsigned int *)(temp_v10 + 0xbc) = 0;
                break;
              }
            }
            if (((DAT_005f17f0 == 0 && !temp_v16) &&
                (__aeabi_idivmod(*(unsigned int *)(temp_v10 + 0xbc),
                               *(unsigned int *)(&DAT_00580b94 + DAT_005f18bf * 0x1c)),
                temp_v6 == 0)) &&
               (((int)romwright_fabs_4(temp_v8) < 0x42f00000 &&
                (temp_v3 = randRange(100), temp_v3 < *(int *)(DAT_005f18bf * 0x1c + 0x580b98))))) {
              temp_v8 = *(float *)(g_lmapScene + 0x1c);
              FUN_002b5cb4();
              in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 <= temp_v8) << 0x1d);
              if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) &&
                 (temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0), temp_v3 == -1)) {
                temp_v3 = gameGetPlayerData();
                temp_v12 = gameDataFlagTestBit(0x86);
                if (temp_v12 != 0) {
                  temp_v1 = *(short *)(temp_v10 + 0x1a8);
                  temp_v5 = FUN_003d21dc();
                  temp_v12 = (int)temp_v1;
                  if (temp_v5 != 0) {
                    temp_v19 = FUN_00261424();
                    temp_v8 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v20 = (float)VectorSignedToFloat((int)*(short *)(temp_v10 + 0x1a8),
                                                        (unsigned char)(in_fpscr >> 0x16) & 3);
                    temp_v5 = (int)(temp_v20 * (temp_v8 * 0.55f + 1.0f) + temp_v8 * temp_v8 * 5.0f);
                    temp_v12 = 999;
                    if (temp_v5 < 999) {
                      temp_v12 = temp_v5;
                    }
                  }
                  if (temp_v12 <= (int)(*(unsigned short *)(temp_v3 + 0x62) - 5)) goto LAB_002d2fbc;
                }
                if (temp_v15) {
                  temp_v3 = 0;
                  do {
                    temp_v12 = DAT_005806d4 + temp_v3 * 0x188;
                    if (*(char *)(temp_v12 + 0x34) != '\0') {
                      switch(*(unsigned int *)(temp_v12 + 0xb8)) {
                      case 7:
                      case 8:
                      case 0xd:
                      case 0xe:
                      case 0xf:
                        if ((char *)(temp_v12 + 0x34) != (char *)0x0) {
                          *(unsigned char *)(temp_v12 + 0x170) = 1;
                        }
                        goto LAB_002d2f9c;
                      }
                    }
                    temp_v3 = temp_v3 + 1;
                  } while (temp_v3 < 0x28);
LAB_002d2f9c:
                  *temp_v51 = 0x5a;
                }
                goto LAB_002d3268;
              }
            }
          }
LAB_002d2fbc:
          if (*(int *)(temp_v10 + 0xc0) < 9999) {
            temp_v8 = *(float *)(temp_v10 + 0x3c);
            FUN_002b5cb4();
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 <= temp_v17 - 200.0f) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              *(unsigned int *)(temp_v10 + 0xb8) = 9;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
            if (*(int *)(temp_v10 + 0xc0) < *(int *)(temp_v10 + 0xbc)) {
              *(unsigned int *)(temp_v10 + 0xb8) = 4;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
          }
          if (*(int *)(temp_v10 + 0x1a4) != 0x1e) break;
          temp_v2 = randRange(100);
          if (temp_v2 < 0xf) {
            FUN_0020eb44(pcVar15,0);
          }
          *(unsigned int *)(temp_v10 + 0x1a4) = 0;
        }
        else {
          *(unsigned int *)(temp_v10 + 0xb8) = 9;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        break;
      case 1:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        temp_v30 = *(float *)(temp_v10 + 0x54);
        temp_v31 = *(float *)(temp_v10 + 0x58);
        temp_v32 = *(float *)(temp_v10 + 0x5c);
        *(unsigned int *)(temp_v10 + 100) = 1;
        *(unsigned int *)(temp_v10 + 0x6c) = 1;
        temp_v34 = *(float *)(g_lmapScene + 0x1c);
        temp_v36 = *(float *)(g_lmapScene + 0x24);
        temp_v43 = temp_v31 + 35.0f;
        temp_v35 = *(float *)(g_lmapScene + 0x20) + 35.0f;
        temp_v19 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v10 + 0x1b0) * 0x10 + 0x582206),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v24 = CONCAT44(temp_v19,*(float *)(g_lmapScene + 0x20) - temp_v31);
        temp_v42 = temp_v30;
        temp_v44 = temp_v32;
        temp_v3 = gameGetPlayerData();
        temp_v12 = gameDataFlagTestBit(0x86);
        if (temp_v12 != 0) {
          temp_v1 = *(short *)(temp_v10 + 0x1a8);
          temp_v5 = FUN_003d21dc();
          temp_v12 = (int)temp_v1;
          if (temp_v5 != 0) {
            temp_v19 = FUN_00261424();
            temp_v8 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v17 = (float)VectorSignedToFloat((int)*(short *)(temp_v10 + 0x1a8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v5 = (int)(temp_v17 * (temp_v8 * 0.55f + 1.0f) + temp_v8 * temp_v8 * 5.0f);
            temp_v12 = 999;
            if (temp_v5 < 999) {
              temp_v12 = temp_v5;
            }
          }
          if ((int)(*(unsigned short *)(temp_v3 + 0x62) - 5) < temp_v12) goto LAB_002d3178;
        }
        else {
LAB_002d3178:
          temp_v2 = randRange(100);
          if ((temp_v2 < 0x14) && ((int)romwright_fabs_4((float)temp_v24) < 0x42f00000)) {
            temp_v8 = *(float *)(g_lmapScene + 0x1c);
            FUN_002b5cb4();
            in_fpscr = (in_fpscr & 0xfffffff) |
                       ((unsigned int)((float)((unsigned long long)temp_v24 >> 0x20) <= temp_v8) << 0x1d);
            if ((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) &&
               (temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0), temp_v3 == -1)) {
              temp_v3 = gameGetPlayerData();
              temp_v12 = gameDataFlagTestBit(0x86);
              if (temp_v12 != 0) {
                temp_v1 = *(short *)(temp_v10 + 0x1a8);
                temp_v5 = FUN_003d21dc();
                temp_v12 = (int)temp_v1;
                if (temp_v5 != 0) {
                  temp_v19 = FUN_00261424();
                  temp_v8 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = (float)VectorSignedToFloat((int)*(short *)(temp_v10 + 0x1a8),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v12 = (int)(temp_v17 * (temp_v8 * 0.55f + 1.0f) + temp_v8 * temp_v8 * 5.0f);
                  if (temp_v12 >= 0x3e7) {
                    temp_v12 = 999;
                  }
                }
                if (temp_v12 <= (int)(*(unsigned short *)(temp_v3 + 0x62) - 5)) goto LAB_002d32a0;
              }
LAB_002d3268:
              *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) + 1;
              *(unsigned int *)(temp_v10 + 0xd4) = 0;
              *(unsigned int *)(temp_v10 + 0xb8) = 6;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              *(unsigned int *)(temp_v10 + 0xc4) = 0;
              *(unsigned int *)(temp_v10 + 0x1a4) = 0;
              *(unsigned int *)(temp_v10 + 0x178) = 0;
              break;
            }
          }
        }
LAB_002d32a0:
        *(unsigned int *)(temp_v10 + 0xb8) = 0;
        *(unsigned int *)(temp_v10 + 0xbc) = 0;
        temp_v3 = randRange(100);
        *(int *)(temp_v10 + 0xc0) = temp_v3 + 0x1e;
        *(unsigned int *)(temp_v10 + 0xc4) = 0;
        *(unsigned int *)(temp_v10 + 0x1a4) = 0;
        break;
      case 2:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        if (((((g_gameState == 0x29 || g_gameState == 0x2a) ||
              (g_gameState == 0x2b || g_gameState == 0x2c)) ||
             ((g_gameState == 0x2d || g_gameState == 0x2e) || g_gameState == 0x2f)) ||
            ((temp_v3 = gameFlagIsSet(0x300), temp_v3 == 0 && (temp_v3 = gameFlagIsSet(0x301), temp_v3 == 0)))
            ) && (piVar13 = (int *)(temp_v4 + 0x3d78), *piVar13 < DAT_005f17f4)) {
          if (*(char *)(temp_v10 + 0xb1) != '\0') {
LAB_002d3354:
            if (*(char *)(temp_v4 + 0x3d89) == '\0') {
              temp_v3 = *(int *)(temp_v4 + 0x14);
              FUN_002b5cb4();
              if (temp_v3 < 0x43160000) break;
            }
            temp_v3 = 0;
            do {
              temp_v12 = DAT_005806d4 + temp_v3 * 0x188;
              pcVar8 = (char *)(temp_v12 + 0x34);
              temp_v15 = *pcVar8 != '\0';
              temp_v7 = '\0';
              if (temp_v15) {
                temp_v7 = *(char *)(temp_v12 + 0xb1);
              }
              if (temp_v15 && temp_v7 != '\0') {
                pcVar8 = *(char **)(temp_v12 + 0xb8);
              }
              if ((temp_v15 && temp_v7 != '\0') && pcVar8 != (char *)0x2) goto LAB_002d7c04;
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 0x28);
            temp_v3 = FUN_0033be00(pcVar15);
            if (temp_v3 != 0) {
              *(unsigned int *)(temp_v10 + 0xd8) = 0;
LAB_002d3484:
              *piVar13 = *piVar13 + 1;
              *(unsigned int *)(temp_v10 + 0xb8) = 3;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              *(unsigned int *)(temp_v10 + 0x54) = *(unsigned int *)(temp_v10 + 0x3c);
              *(unsigned int *)(temp_v10 + 0x58) = *(unsigned int *)(temp_v10 + 0x40);
              *(unsigned int *)(temp_v10 + 0x5c) = *(unsigned int *)(temp_v10 + 0x44);
              if ((*(int *)(temp_v50 + 0x14e8) != 0) && (temp_v3 = FUN_003303fc(), temp_v3 == 0)) {
                temp_v27 = *(float *)(g_lmapScene + 0x1c);
                temp_v28 = *(float *)(g_lmapScene + 0x20);
                temp_v29 = *(float *)(g_lmapScene + 0x24);
                puVar12 = (unsigned int *)(DAT_005806d4 + 0x3d84);
                temp_v2 = *puVar12;
                temp_v8 = *(float *)(DAT_005806a4 + 0x18);
                if ((0 < (int)temp_v2) && ((temp_v2 & 1) != 0)) {
                  temp_v17 = (float)VectorSignedToFloat((int)(temp_v2 + 1) / 2,
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v8 = temp_v8 + temp_v17 * 35.0f;
                }
                if ((int)temp_v2 >= 0xd) {
                  temp_v19 = randRange(0x32);
                  temp_v17 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = temp_v17 + 250.0f;
                }
                else {
                  temp_v19 = randRange(0x32);
                  temp_v17 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v17 = temp_v17 + 560.0f;
                }
                temp_v8 = temp_v8 * 0.017453292f;
                temp_v20 = temp_v8;
                FUN_001bc124();
                temp_v27 = temp_v27 + temp_v8 * temp_v17;
                FUN_001bbf0c();
                temp_v29 = temp_v29 + temp_v20 * temp_v17;
                *puVar12 = *puVar12 + 1;
                temp_v45 = temp_v27;
                temp_v47 = *(unsigned int *)(g_lmapScene + 0x1c);
                uStack_78 = *(unsigned int *)(g_lmapScene + 0x24);
                temp_v46 = temp_v28 + 35.0f;
                temp_v48 = *(float *)(g_lmapScene + 0x20) + 35.0f;
                fStack_84 = temp_v29;
                temp_v3 = FUN_0036d984(&temp_v47,&temp_v45,0);
                if (temp_v3 == -1) {
                  temp_v8 = temp_v45;
                  FUN_00352bc4();
                  *(float *)(temp_v10 + 0x60) = temp_v8;
                  temp_v28 = temp_v28 - 5.0f;
                  pfVar4 = &temp_v27;
                  FUN_002826dc(pfVar4,&temp_v49,1,0);
                  if (pfVar4 != (float *)0x0) {
                    *(unsigned int *)(temp_v10 + 0x54) = temp_v49;
                    *(unsigned int *)(temp_v10 + 0x58) = uStack_6c;
                    *(unsigned int *)(temp_v10 + 0x5c) = uStack_68;
                    *(unsigned int *)(temp_v10 + 0x3c) = temp_v49;
                    *(unsigned int *)(temp_v10 + 0x40) = *(unsigned int *)(temp_v10 + 0x58);
                    *(unsigned int *)(temp_v10 + 0x44) = *(unsigned int *)(temp_v10 + 0x5c);
                  }
                }
              }
              *(unsigned int *)(temp_v10 + 0x6c) = 1;
              *(unsigned int *)(temp_v10 + 100) = 0;
              if (*(char *)(temp_v10 + 0xb1) != '\0') {
                *(unsigned char *)(temp_v4 + 0x3d89) = 1;
              }
              temp_v3 = temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8;
              if (*(char *)(temp_v3 + 0x3d91) != '\0') {
                temp_v3 = 0x20;
                FUN_00178b04(0x20,&LAB_002d38dc,0xfa6);
                temp_v19 = 0;
                if (temp_v3 != 0) {
                  temp_v19 = FUN_0040ac08();
                }
                *(unsigned int *)(temp_v10 + 0x1b4) = temp_v19;
                moriModelContentCopyBody();
                FUN_0040ace8(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v10 + 0x1b4) + 4));
                *(unsigned char *)(temp_v10 + 0x1b9) = 1;
              }
              else {
                *(unsigned int *)(temp_v10 + 0x1b4) = *(unsigned int *)(temp_v3 + 0x3d8c);
                *(unsigned char *)(temp_v3 + 0x3d91) = 1;
                *(unsigned char *)(temp_v10 + 0x1b9) = 0;
              }
              *(unsigned char *)(temp_v10 + 0x1b8) = 1;
            }
          }
          else {
            temp_v8 = *(float *)(temp_v4 + 0x14);
            FUN_002b5cb4();
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 <= DAT_005f18a8) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              if ((*(char *)(temp_v10 + 0xb2) != '\0') && (DAT_005f17f4 / 2 > *piVar13)) {
                temp_v2 = randRange(100);
                if (temp_v2 >= 0x1e) goto LAB_002d33dc;
              }
              else {
                temp_v2 = randRange(100);
                if (temp_v2 >= 0x50) goto LAB_002d33dc;
              }
            }
            else {
LAB_002d33dc:
              temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < DAT_005f18b4) << 0x1f) |
                      ((unsigned int)(temp_v8 == DAT_005f18b4) << 0x1e);
              in_fpscr = temp_v2 | ((unsigned int)((temp_v8 != temp_v8) || (DAT_005f18b4 != DAT_005f18b4)) << 0x1c);
              temp_v14 = (unsigned char)(temp_v2 >> 0x18);
              if (((((unsigned char)((temp_v14 >> 6) & 1) || temp_v14 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) ||
                   (*(char *)(temp_v10 + 0xb2) != '\0')) || (*(int *)(temp_v50 + 0x14e8) != 0)) ||
                 (temp_v3 = randRange(99), 100 - DAT_005f18b8 <= temp_v3)) {
                temp_v2 = in_fpscr & 0xfffffff;
                in_fpscr = temp_v2 | ((unsigned int)(DAT_005f18b0 <= temp_v8) << 0x1d);
                if (romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                  temp_v8 = *(float *)(temp_v4 + 0x18) - *(float *)(temp_v10 + 0x58);
                  temp_v17 = -DAT_005f18ac;
                  temp_v0 = temp_v2 | ((unsigned int)(temp_v17 < temp_v8) << 0x1f) |
                          ((unsigned int)(temp_v17 == temp_v8) << 0x1e);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v8 != temp_v8)) << 0x1c);
                  temp_v14 = (unsigned char)(temp_v0 >> 0x18);
                  temp_v13 = temp_v14 >> 7;
                  temp_v15 = (unsigned char)((temp_v14 >> 6) & 1);
                  temp_v14 = (unsigned char)(in_fpscr >> 0x1c) & 1;
                  if (temp_v15 || temp_v13 != temp_v14) {
                    in_fpscr = temp_v2 | ((unsigned int)(temp_v8 < DAT_005f18ac) << 0x1f) |
                               ((unsigned int)(temp_v8 == DAT_005f18ac) << 0x1e) |
                               ((unsigned int)((temp_v8 != temp_v8) || (DAT_005f18ac != DAT_005f18ac)) << 0x1c);
                    temp_v14 = (unsigned char)(in_fpscr >> 0x18);
                    temp_v13 = temp_v14 >> 7;
                    temp_v15 = (unsigned char)((temp_v14 >> 6) & 1);
                    temp_v14 = (temp_v14 >> 4) & 1;
                  }
                  if (temp_v15 || temp_v13 != temp_v14) {
                    temp_v3 = *(int *)(temp_v10 + 0xd8) - 1;
                    *(int *)(temp_v10 + 0xd8) = temp_v3;
                    if (*(char *)(temp_v10 + 0xb1) != '\0') goto LAB_002d3354;
                    if (temp_v3 < 1) goto LAB_002d3484;
                  }
                }
              }
            }
          }
        }
        break;
      case 3:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        if ((*(int *)(temp_v10 + 0xbc) < 0x15) || (temp_v3 = FUN_0033b100(pcVar15), temp_v3 == 0)) {
          temp_v30 = *(float *)(temp_v10 + 0x54);
          temp_v31 = *(float *)(temp_v10 + 0x58);
          temp_v32 = *(float *)(temp_v10 + 0x5c);
          *(unsigned int *)(temp_v10 + 100) = 0;
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          temp_v3 = *(int *)(temp_v10 + 0xbc) + 1;
          *(int *)(temp_v10 + 0xbc) = temp_v3;
          *(unsigned int *)(temp_v10 + 0x54) = *(unsigned int *)(temp_v10 + 0x3c);
          *(unsigned int *)(temp_v10 + 0x58) = *(unsigned int *)(temp_v10 + 0x40);
          *(unsigned int *)(temp_v10 + 0x5c) = *(unsigned int *)(temp_v10 + 0x44);
          if (temp_v3 == 1) {
            FUN_0020eb44(pcVar15,0);
          }
          if (*(int *)(temp_v10 + 0xbc) >= 0x47) {
            if (*(int *)(temp_v10 + 0xac) != 0) {
              *(unsigned int *)(temp_v10 + 0xb8) = 0;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              temp_v3 = randRange(100);
              *(int *)(temp_v10 + 0xc0) = temp_v3 + 10;
              *(unsigned int *)(temp_v10 + 0xc4) = 0;
              *(unsigned int *)(temp_v10 + 0x1a4) = 0;
              break;
            }
            *(unsigned int *)(temp_v10 + 0xb8) = 0x11;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            *(unsigned int *)(temp_v10 + 0xc0) = 0;
            *(unsigned int *)(temp_v10 + 0xc4) = 0;
            *(unsigned int *)(temp_v10 + 0x1a4) = 0;
          }
        }
        else {
          *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        break;
      case 4:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        if ((*(char *)(temp_v10 + 0xb1) == '\0') || (temp_v3 = FUN_0033be00(pcVar15), temp_v3 != 0)) {
          if (*(int *)(temp_v50 + 0x14e8) != 0) {
            temp_v8 = *(float *)(temp_v4 + 0x14);
            FUN_002b5cb4();
            temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < DAT_005f18b4) << 0x1f) |
                    ((unsigned int)(temp_v8 == DAT_005f18b4) << 0x1e);
            in_fpscr = temp_v2 | ((unsigned int)((temp_v8 != temp_v8) || (DAT_005f18b4 != DAT_005f18b4)) << 0x1c);
            temp_v14 = (unsigned char)(temp_v2 >> 0x18);
            if (!(unsigned char)((temp_v14 >> 6) & 1) && temp_v14 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              *(unsigned int *)(temp_v10 + 0xb8) = 9;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
          }
          *(int *)(temp_v10 + 0x1a4) = *(int *)(temp_v10 + 0x1a4) + 1;
          *(int *)(temp_v10 + 0xc4) = *(int *)(temp_v10 + 0xc4) + 1;
          *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
          temp_v3 = FUN_0033b100(pcVar15);
          if (temp_v3 != 0) {
            *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          temp_v30 = *(float *)(temp_v10 + 0x54);
          temp_v31 = *(float *)(temp_v10 + 0x58);
          temp_v32 = *(float *)(temp_v10 + 0x5c);
          temp_v24 = 0x420c0000;
          temp_v3 = 0;
          *(unsigned int *)(temp_v10 + 100) = 2;
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          do {
            temp_v19 = randRange(500);
            *(unsigned int *)(temp_v10 + 0xcc) = *(unsigned int *)(temp_v10 + 0x40);
            temp_v8 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(temp_v10 + 200) = temp_v8 + *(float *)(temp_v10 + 0x3c);
            temp_v19 = randRange(500);
            temp_v8 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(temp_v10 + 0xd0) = temp_v8 + *(float *)(temp_v10 + 0x44);
            temp_v42 = temp_v30;
            temp_v44 = temp_v32;
            temp_v34 = *(float *)(temp_v10 + 200);
            temp_v36 = *(float *)(temp_v10 + 0xd0);
            temp_v43 = temp_v31 + (float)temp_v24;
            temp_v35 = *(float *)(temp_v10 + 0xcc) + (float)temp_v24;
            temp_v12 = FUN_0036d984(&temp_v34,&temp_v42,0);
            if (temp_v12 == -1) {
              if (temp_v3 < 3) {
                temp_v34 = *(float *)(temp_v10 + 200);
                temp_v35 = *(float *)(temp_v10 + 0xcc);
                temp_v36 = *(float *)(temp_v10 + 0xd0);
                temp_v3 = 0;
                temp_v8 = 15.0f;
                temp_v17 = 1.0f;
                temp_v37 = temp_v34;
                fStack_bc = temp_v35;
                fStack_b8 = temp_v36;
                do {
                  temp_v35 = temp_v35 + temp_v17;
                  while( 1 ) {
                    pfVar4 = &temp_v34;
                    FUN_002826dc(pfVar4,&temp_v37,1,0);
                    if ((pfVar4 != (float *)0x0) || (temp_v3 = temp_v3 + 1, temp_v3 >= 4)) {
                      *(unsigned int *)(temp_v10 + 0xbc) = 0;
                      *(unsigned int *)(temp_v10 + 0xb8) = 5;
                      *(float *)(temp_v10 + 200) = temp_v37;
                      *(float *)(temp_v10 + 0xcc) = fStack_bc;
                      *(float *)(temp_v10 + 0xd0) = fStack_b8;
                      goto LAB_002d7c04;
                    }
                    if (temp_v3 == 0) break;
                    temp_v35 = temp_v35 - temp_v8;
                  }
                } while( 1 );
              }
              break;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 3);
        }
        *(unsigned int *)(temp_v10 + 0xb8) = 0;
        *(unsigned int *)(temp_v10 + 0xbc) = 0;
        temp_v3 = randRange(0x1e);
        *(int *)(temp_v10 + 0xc0) = temp_v3 + 0x1e;
        break;
      case 5:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        if ((*(char *)(temp_v10 + 0xb1) != '\0') && (temp_v3 = FUN_0033be00(pcVar15), temp_v3 == 0)) {
          *(unsigned int *)(temp_v10 + 0xb8) = 0;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          temp_v3 = randRange(0x1e);
          *(int *)(temp_v10 + 0xc0) = temp_v3 + 0x1e;
          break;
        }
        if (*(int *)(temp_v50 + 0x14e8) != 0) {
          temp_v8 = *(float *)(temp_v4 + 0x14);
          FUN_002b5cb4();
          temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < DAT_005f18b4) << 0x1f) |
                  ((unsigned int)(temp_v8 == DAT_005f18b4) << 0x1e);
          in_fpscr = temp_v2 | ((unsigned int)((temp_v8 != temp_v8) || (DAT_005f18b4 != DAT_005f18b4)) << 0x1c);
          temp_v14 = (unsigned char)(temp_v2 >> 0x18);
          if (!(unsigned char)((temp_v14 >> 6) & 1) && temp_v14 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
            *(unsigned int *)(temp_v10 + 0xb8) = 9;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
        }
        *(int *)(temp_v10 + 0xc4) = *(int *)(temp_v10 + 0xc4) + 1;
        *(int *)(temp_v10 + 0x1a4) = *(int *)(temp_v10 + 0x1a4) + 1;
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        temp_v3 = FUN_0033b100(pcVar15);
        if (temp_v3 != 0) {
          *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        if ((*(int *)(temp_v10 + 0xbc) >= 6) && (temp_v2 = randRange(100), 4 >= temp_v2)) {
          temp_v42 = temp_v30;
          temp_v44 = temp_v32;
          temp_v34 = *(float *)(g_lmapScene + 0x1c);
          temp_v36 = *(float *)(g_lmapScene + 0x24);
          temp_v43 = temp_v31 + 35.0f;
          temp_v35 = *(float *)(g_lmapScene + 0x20) + 35.0f;
          temp_v3 = *(int *)(g_lmapScene + 0x1c);
          FUN_002b5cb4();
          if (temp_v3 >= 0x44960000) goto LAB_002d3c7c;
        }
        else {
LAB_002d3c7c:
          temp_v30 = *(float *)(temp_v10 + 0x54);
          temp_v31 = *(float *)(temp_v10 + 0x58);
          temp_v32 = *(float *)(temp_v10 + 0x5c);
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          *(unsigned int *)(temp_v10 + 100) = 2;
          temp_v8 = *(float *)(temp_v10 + 200);
          FUN_002b5cb4();
          if ((int)temp_v8 >= 0x41f00000) {
            temp_v8 = 1.0f / temp_v8;
            temp_v17 = (*(float *)(temp_v10 + 200) - temp_v30) * temp_v8;
            temp_v20 = (*(float *)(temp_v10 + 0xd0) - temp_v32) * temp_v8;
            temp_v8 = (*(float *)(temp_v10 + 0xcc) - temp_v31) * temp_v8;
            FUN_0050d8e4();
            temp_v19 = *(unsigned int *)(temp_v10 + 0x60);
            FUN_00303a5c();
            *(unsigned int *)(temp_v10 + 0x60) = temp_v19;
            temp_v30 = *(float *)(temp_v10 + 0x54) + temp_v17 * 5.0f;
            temp_v31 = *(float *)(temp_v10 + 0x58) + temp_v8 * 5.0f;
            temp_v32 = *(float *)(temp_v10 + 0x5c) + temp_v20 * 5.0f;
            if (((*(unsigned int *)(temp_v10 + 0xbc) & 3) == 0) ||
               ((int)romwright_fabs_4(*(float *)(temp_v10 + 0xcc) - temp_v31) >= 0x40a00001)) {
              temp_v31 = temp_v31 - 5.0f;
              pfVar4 = &temp_v30;
              FUN_002826dc(pfVar4,&temp_v37,0);
              if (pfVar4 != (float *)0x0) {
                *(unsigned int *)(temp_v10 + 0xb8) = 0;
                *(unsigned int *)(temp_v10 + 0xbc) = 0;
                temp_v3 = randRange(100);
                *(int *)(temp_v10 + 0xc0) = temp_v3 + 0x1e;
                break;
              }
              temp_v30 = temp_v37;
              temp_v31 = fStack_bc;
              temp_v32 = fStack_b8;
            }
            temp_v3 = *(int *)(temp_v10 + 0x54);
            FUN_002b5cb4();
            if (temp_v3 >= 0x3f800000) {
              *(float *)(temp_v10 + 0x54) = temp_v30;
              *(float *)(temp_v10 + 0x58) = temp_v31;
              *(float *)(temp_v10 + 0x5c) = temp_v32;
              if (*(int *)(temp_v10 + 0x1a4) == 0x1e) {
                temp_v2 = randRange(100);
                if (temp_v2 < 0xf) {
                  FUN_0020eb44(pcVar15,0);
                }
                *(unsigned int *)(temp_v10 + 0x1a4) = 0;
              }
              break;
            }
            *(unsigned int *)(temp_v10 + 0xb8) = 0;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            temp_v3 = randRange(0x1e);
            *(int *)(temp_v10 + 0xc0) = temp_v3 + 0x1e;
            break;
          }
        }
        *(unsigned int *)(temp_v10 + 0xb8) = 0;
        *(unsigned int *)(temp_v10 + 0xbc) = 0;
        temp_v3 = randRange(100);
        *(int *)(temp_v10 + 0xc0) = temp_v3 + 0x1e;
        break;
      case 6:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        temp_v3 = gameFlagIsSet(0x300);
        if ((temp_v3 != 0) || (temp_v3 = gameFlagIsSet(0x301), temp_v3 != 0)) {
          if ((g_gameState != 0x29 && g_gameState != 0x2a) &&
             (((g_gameState != 0x2b && g_gameState != 0x2c &&
               (g_gameState != 0x2d && g_gameState != 0x2e)) && (g_gameState != 0x2f)))) {
            temp_v19 = 4;
            *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
          }
        }
        else {
          temp_v3 = FUN_0033b100(pcVar15);
          if (temp_v3 != 0) {
            *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          temp_v30 = *(float *)(temp_v10 + 0x54);
          temp_v31 = *(float *)(temp_v10 + 0x58);
          temp_v32 = *(float *)(temp_v10 + 0x5c);
          *(unsigned int *)(temp_v10 + 100) = 2;
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          FUN_002b5cb4();
          temp_v17 = 1.0f;
          FUN_0050d8e4();
          temp_v8 = *(float *)(temp_v10 + 0x60);
          FUN_00303a5c();
          *(float *)(temp_v10 + 0x60) = temp_v8;
          FUN_002b5cd4();
          in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v8) << 0x1d);
          if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
            temp_v8 = -temp_v8;
          }
          if (*(int *)(temp_v10 + 0xbc) == 1) {
            FUN_0020eb44(pcVar15,1);
          }
          if ((*(int *)(temp_v10 + 0xbc) >= 9) && ((int)temp_v8 < 0x41c80000)) {
            *(unsigned int *)(temp_v10 + 100) = 4;
            *(unsigned int *)(temp_v10 + 0x68) = 0xffffffff;
            *(unsigned int *)(temp_v10 + 0x6c) = 1;
            temp_v3 = *(int *)(temp_v10 + 0x1b0) * 0x10;
            temp_v12 = randRange((*(short *)(temp_v3 + 0x582210) - 1) +
                                  *(short *)(temp_v3 + 0x582208) + *(short *)(temp_v3 + 0x58220c));
            temp_v3 = *(int *)(temp_v10 + 0x1b0) * 0x10;
            temp_v5 = (int)*(short *)(temp_v3 + 0x582208);
            if ((temp_v12 < temp_v5) || (*(char *)(temp_v10 + 0xb1) != '\0')) {
              *(unsigned int *)(temp_v10 + 0xb8) = 7;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              temp_v7 = *(char *)(temp_v10 + 0x171);
              temp_v15 = temp_v7 == '\0';
              if (temp_v15) {
                temp_v7 = *(char *)(temp_v10 + 0x173);
              }
              temp_v16 = temp_v15 && temp_v7 == '\0';
              if (temp_v15 && temp_v7 == '\0') {
                temp_v16 = *(char *)(temp_v10 + 0x174) == '\0';
              }
              if (!temp_v16) {
                temp_v19 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v10 + 0x1b0) * 0x10 +
                                                            0x58220a),(unsigned char)(in_fpscr >> 0x16) & 3);
                *(unsigned int *)(temp_v10 + 0xe8) = temp_v19;
                temp_v19 = randRange(3);
                temp_v8 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v20 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v10 + 0x1b0) * 0x10
                                                                   + 0x58220a),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v8 = temp_v8 + temp_v20 + temp_v17;
              }
              else {
                *(unsigned int *)(temp_v10 + 0xe8) = *(unsigned int *)(DAT_005f18bf * 0x1c + 0x580b9c);
                temp_v8 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v10 + 0x1b0) * 0x10
                                                                   + 0x58220a),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              }
              *(float *)(temp_v10 + 0xec) = temp_v8;
              *(unsigned int *)(temp_v10 + 0xf0) = 0;
              *(unsigned int *)(temp_v10 + 0x100) = 0xb4;
            }
            else {
              if (*(short *)(temp_v3 + 0x58220c) + temp_v5 <= temp_v12) {
                *(unsigned int *)(temp_v10 + 0xb8) = 0xf;
                *(unsigned int *)(temp_v10 + 0xbc) = 0;
                temp_v7 = *(char *)(temp_v10 + 0x171);
                temp_v15 = temp_v7 == '\0';
                if (temp_v15) {
                  temp_v7 = *(char *)(temp_v10 + 0x173);
                }
                temp_v16 = temp_v15 && temp_v7 == '\0';
                if (temp_v15 && temp_v7 == '\0') {
                  temp_v16 = *(char *)(temp_v10 + 0x174) == '\0';
                }
                if (!temp_v16) {
                  temp_v19 = randRange(3);
                  temp_v20 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v8 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v10 + 0x1b0) *
                                                                      0x10 + 0x582212),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v20 = temp_v20 + temp_v8 + temp_v17;
                  *(float *)(temp_v10 + 0xe8) = temp_v20;
                  *(float *)(temp_v10 + 0xec) = temp_v20;
                }
                else {
                  temp_v19 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v10 + 0x1b0) * 0x10 +
                                                              0x582212),(unsigned char)(in_fpscr >> 0x16) & 3
                                              );
                  *(unsigned int *)(temp_v10 + 0xe8) = temp_v19;
                  *(unsigned int *)(temp_v10 + 0xec) = temp_v19;
                }
                *(unsigned int *)(temp_v10 + 0xf0) = 0;
                *(unsigned int *)(temp_v10 + 0x100) = 0x82;
                *(unsigned short *)(temp_v10 + 0x16c) = 0;
                break;
              }
              *(unsigned int *)(temp_v10 + 0xb8) = 0xd;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              temp_v7 = *(char *)(temp_v10 + 0x171);
              temp_v15 = temp_v7 == '\0';
              if (temp_v15) {
                temp_v7 = *(char *)(temp_v10 + 0x173);
              }
              temp_v16 = temp_v15 && temp_v7 == '\0';
              if (temp_v15 && temp_v7 == '\0') {
                temp_v16 = *(char *)(temp_v10 + 0x174) == '\0';
              }
              if (!temp_v16) {
                temp_v19 = VectorSignedToFloat((int)*(short *)(*(int *)(temp_v10 + 0x1b0) * 0x10 +
                                                            0x58220a),(unsigned char)(in_fpscr >> 0x16) & 3);
                *(unsigned int *)(temp_v10 + 0xe8) = temp_v19;
                temp_v19 = randRange(3);
                temp_v8 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v20 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v10 + 0x1b0) * 0x10
                                                                   + 0x58220e),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v8 = temp_v8 + temp_v20 + temp_v17;
              }
              else {
                *(unsigned int *)(temp_v10 + 0xe8) = *(unsigned int *)(DAT_005f18bf * 0x1c + 0x580ba4);
                temp_v8 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v10 + 0x1b0) * 0x10
                                                                   + 0x58220e),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
              }
              *(float *)(temp_v10 + 0x10c) = temp_v8;
              *(unsigned int *)(temp_v10 + 0x128) = *(unsigned int *)(temp_v10 + 0x60);
              *(unsigned int *)(temp_v10 + 0x130) = 0;
              *(unsigned int *)(temp_v10 + 0x134) = 0xf0;
            }
            *(unsigned short *)(temp_v10 + 0x16c) = 0;
          }
        }
        break;
      case 7:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        temp_v3 = gameFlagIsSet(0x300);
        if ((temp_v3 != 0) || (temp_v3 = gameFlagIsSet(0x301), temp_v3 != 0)) {
          if ((g_gameState != 0x29 && g_gameState != 0x2a) &&
             ((g_gameState != 0x2b && g_gameState != 0x2c &&
              ((g_gameState != 0x2d && g_gameState != 0x2e) && g_gameState != 0x2f)))) {
            *(unsigned int *)(temp_v10 + 0xb8) = 4;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
          }
        }
        else {
          *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
          if ((*(char *)(temp_v10 + 0xb1) == '\0') || (temp_v3 = FUN_0033be00(pcVar15), temp_v3 != 0)) {
            temp_v3 = FUN_0033b100(pcVar15);
            if (temp_v3 != 0) {
              *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
              *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
            temp_v30 = *(float *)(temp_v10 + 0x54);
            temp_v31 = *(float *)(temp_v10 + 0x58);
            temp_v8 = *(float *)(temp_v10 + 0x5c);
            temp_v26 = CONCAT44(temp_v30,temp_v31);
            *(unsigned int *)(temp_v10 + 100) = 4;
            temp_v3 = *(int *)(temp_v10 + 0xf0) - 1;
            *(int *)(temp_v10 + 0xf0) = temp_v3;
            *(unsigned int *)(temp_v10 + 0x6c) = 1;
            temp_v32 = temp_v8;
            if (temp_v3 < 1) {
              if (((*(int *)(temp_v10 + 0x100) >= 0) && (*(char *)(temp_v10 + 0x170) == '\0')) ||
                 (*(char *)(temp_v10 + 0xb1) != '\0')) {
                temp_v19 = randRange(200);
                temp_v17 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v17 = *(float *)(temp_v10 + 0xe8) + *(float *)(DAT_005f18bf * 0x1c + 0x580ba0) +
                         temp_v17 * 0.01f;
                *(float *)(temp_v10 + 0xe8) = temp_v17;
                temp_v20 = *(float *)(temp_v10 + 0xec);
                temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 < temp_v20) << 0x1f) |
                        ((unsigned int)(temp_v17 == temp_v20) << 0x1e);
                in_fpscr = temp_v2 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v20 != temp_v20)) << 0x1c);
                temp_v14 = (unsigned char)(temp_v2 >> 0x18);
                if (!(unsigned char)((temp_v14 >> 6) & 1) && temp_v14 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                  temp_v17 = temp_v20;
                }
                *(float *)(temp_v10 + 0xe8) = temp_v17;
              }
              else {
                if ((int)*(float *)(temp_v10 + 0xe8) < 0x40a00001) {
                  *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
                  *(unsigned int *)(temp_v10 + 0xb8) = 9;
                  *(unsigned int *)(temp_v10 + 0xbc) = 0;
                  break;
                }
                *(float *)(temp_v10 + 0xe8) = *(float *)(temp_v10 + 0xe8) - 1.0f;
              }
              if (*(char *)(temp_v10 + 0x171) == '\0') {
                temp_v3 = *(int *)(temp_v10 + 0x3c);
                FUN_002b5cb4();
                if (temp_v3 >= 0x451c4001) {
                  *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
                  *(unsigned int *)(temp_v10 + 0xb8) = 9;
                  *(unsigned int *)(temp_v10 + 0xbc) = 0;
                  break;
                }
              }
              if (*(char *)(temp_v10 + 0xb1) == '\0') {
                temp_v12 = *(int *)(g_lmapScene + 0x1c);
                FUN_002b5cb4();
                temp_v16 = SBORROW4(temp_v12,0x453b8000);
                temp_v3 = temp_v12 - 0x453b8000;
                temp_v15 = temp_v12 == 0x453b8000;
                if (temp_v12 < 0x453b8001) {
                  temp_v12 = *(int *)(temp_v10 + 0xd4);
                  temp_v16 = SBORROW4(temp_v12,0x5a);
                  temp_v3 = temp_v12 - 0x5a;
                  temp_v15 = temp_v12 == 0x5a;
                }
                if (!temp_v15 && temp_v3 < 0 == temp_v16) {
                  *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
                  *(unsigned int *)(temp_v10 + 0xb8) = 9;
                  *(unsigned int *)(temp_v10 + 0xbc) = 0;
                  break;
                }
              }
              temp_v17 = 25.0f;
              temp_v42 = temp_v30;
              temp_v44 = temp_v32;
              temp_v34 = *(float *)(g_lmapScene + 0x1c);
              temp_v36 = *(float *)(g_lmapScene + 0x24);
              temp_v43 = temp_v31 + 25.0f;
              temp_v35 = *(float *)(g_lmapScene + 0x20) + 25.0f;
              temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0);
              if (temp_v3 != -1) {
                if (((*(char *)(temp_v10 + 0x171) == '\0') &&
                    ((unsigned int)(temp_v43 - temp_v35) < 0xc1200000)) &&
                   ((int)(temp_v43 - temp_v35) < 0x41200000)) {
                  temp_v24 = CONCAT44(temp_v30,temp_v32);
                  temp_v20 = *(float *)(g_lmapScene + 0x20);
                  temp_v39 = *(unsigned int *)(g_lmapScene + 0x1c);
                  temp_v25 = romwright_piece_4_4(*(unsigned int *)(g_lmapScene + 0x24),temp_v39);
                  temp_v40 = temp_v20 + temp_v17;
                  temp_v41 = temp_v32;
                  temp_v3 = FUN_0036d984(&temp_v39,&temp_v42,0);
                  if ((temp_v3 == -1) && (temp_v3 = FUN_0036d984(&temp_v39,&temp_v34,0), temp_v3 == -1)) {
                    *(unsigned int *)(temp_v10 + 0xb8) = 8;
                    *(int *)(temp_v10 + 0xdc) = (int)temp_v25;
                    *(unsigned int *)(temp_v10 + 0xbc) = 0;
                    *(float *)(temp_v10 + 0xe0) = temp_v20;
                    *(int *)(temp_v10 + 0xe4) = (int)temp_v24;
                    break;
                  }
                  temp_v40 = temp_v20 + temp_v17;
                  temp_v39 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
                  temp_v17 = (float)((unsigned long long)temp_v25 >> 0x20);
                  temp_v41 = temp_v17;
                  temp_v19 = temp_v39;
                  temp_v3 = FUN_0036d984(&temp_v39,&temp_v42,0);
                  if ((temp_v3 == -1) && (temp_v3 = FUN_0036d984(&temp_v39,&temp_v34,0), temp_v3 == -1)) {
                    *(unsigned int *)(temp_v10 + 0xb8) = 8;
                    *(unsigned int *)(temp_v10 + 0xdc) = temp_v19;
                    *(unsigned int *)(temp_v10 + 0xbc) = 0;
                    *(float *)(temp_v10 + 0xe0) = temp_v20;
                    *(float *)(temp_v10 + 0xe4) = temp_v17;
                    break;
                  }
                }
                *(int *)(temp_v10 + 0xd4) = *(int *)(temp_v10 + 0xd4) + 1;
                *(unsigned int *)(temp_v10 + 0xf0) = 0;
              }
              else {
                *(unsigned int *)(temp_v10 + 0xd4) = 0;
                temp_v3 = randRange(2);
                *(int *)(temp_v10 + 0xf0) = temp_v3 + 2;
                temp_v19 = *(unsigned int *)(g_lmapScene + 0x1c);
                temp_v9 = *(unsigned int *)(g_lmapScene + 0x20);
                *(unsigned int *)(temp_v10 + 0xfc) = *(unsigned int *)(g_lmapScene + 0x24);
                *(unsigned int *)(temp_v10 + 0xf4) = temp_v19;
                *(unsigned int *)(temp_v10 + 0xf8) = temp_v9;
              }
            }
            if (((*(char *)(temp_v10 + 0xb1) == '\0') &&
                (temp_v3 = *(int *)(temp_v10 + 0x100) - 1, *(int *)(temp_v10 + 0x100) = temp_v3, temp_v3 < 0))
               && ((int)*(float *)(temp_v10 + 0xe8) >= 0x40a00001)) {
              *(float *)(temp_v10 + 0xe8) = *(float *)(temp_v10 + 0xe8) - 1.0f;
            }
            if (*(int *)(temp_v10 + 0xd4) >= 0xf) {
              *(unsigned int *)(temp_v10 + 100) = 1;
              *(unsigned int *)(temp_v10 + 0x6c) = 1;
            }
            else {
              FUN_002b5cb4();
              FUN_0050d8e4();
              temp_v17 = *(float *)(temp_v10 + 0x60);
              FUN_00303a5c();
              temp_v20 = 0.017453292f;
              *(float *)(temp_v10 + 0x60) = temp_v17;
              temp_v17 = temp_v17 * 0.017453292f;
              FUN_001bc124();
              temp_v30 = temp_v30 + temp_v17 * *(float *)(temp_v10 + 0xe8);
              temp_v20 = *(float *)(temp_v10 + 0x60) * temp_v20;
              FUN_001bbf0c();
              temp_v32 = temp_v32 + temp_v20 * *(float *)(temp_v10 + 0xe8);
            }
            temp_v17 = (float)temp_v26;
            temp_v3 = 0;
            temp_v20 = (float)((unsigned long long)temp_v26 >> 0x20);
            do {
              temp_v21 = temp_v20;
              if ((temp_v3 != temp_v11) &&
                 (temp_v12 = temp_v4 + temp_v3 * 0x188, *(char *)(temp_v12 + 0x34) != '\0')) {
                FUN_002b5cb4();
                if ((int)temp_v20 < 0x3f800000) {
                  temp_v20 = 1.0f;
                }
                else if ((int)temp_v20 >= 0x42480000) goto LAB_002d4824;
                temp_v20 = 1.0f / temp_v20;
                temp_v30 = temp_v30 - (*(float *)(temp_v12 + 0x54) - temp_v21) * temp_v20 * 5.0f;
                temp_v31 = temp_v31 - (*(float *)(temp_v12 + 0x58) - temp_v17) * temp_v20 * 5.0f;
                temp_v32 = temp_v32 - (*(float *)(temp_v12 + 0x5c) - temp_v8) * temp_v20 * 5.0f;
                break;
              }
LAB_002d4824:
              temp_v3 = temp_v3 + 1;
              temp_v20 = temp_v21;
            } while (temp_v3 < 0x28);
            temp_v31 = temp_v31 - 5.0f;
            FUN_002826dc(&temp_v30,&temp_v37,0);
            *(float *)(temp_v10 + 0x54) = temp_v37;
            *(float *)(temp_v10 + 0x58) = fStack_bc;
            *(float *)(temp_v10 + 0x5c) = fStack_b8;
            temp_v1 = *(short *)(temp_v10 + 0x16c) - 1;
            *(short *)(temp_v10 + 0x16c) = temp_v1;
            if (temp_v1 < 1) {
              FUN_00303e88();
              temp_v1 = randRange(2);
              *(short *)(temp_v10 + 0x16c) = temp_v1 + 9;
            }
            temp_v3 = *(int *)(temp_v10 + 0xbc);
            goto joined_r0x002d4cd0;
          }
          *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
          *(unsigned int *)(temp_v10 + 0xb8) = 9;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        break;
      case 8:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        temp_v3 = gameFlagIsSet(0x300);
        if ((temp_v3 != 0) || (temp_v3 = gameFlagIsSet(0x301), temp_v3 != 0)) {
          if ((g_gameState != 0x29 && g_gameState != 0x2a) &&
             ((g_gameState != 0x2b && g_gameState != 0x2c &&
              ((g_gameState != 0x2d && g_gameState != 0x2e) && g_gameState != 0x2f)))) {
            *(unsigned int *)(temp_v10 + 0xb8) = 4;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
          }
        }
        else {
          *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
          if ((*(char *)(temp_v10 + 0xb1) != '\0') && (temp_v3 = FUN_0033be00(pcVar15), temp_v3 == 0)) {
            *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
            *(unsigned int *)(temp_v10 + 0xb8) = 9;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          temp_v3 = FUN_0033b100(pcVar15);
          if (temp_v3 != 0) {
            *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
            *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          temp_v30 = *(float *)(temp_v10 + 0x54);
          temp_v31 = *(float *)(temp_v10 + 0x58);
          temp_v24 = *(unsigned long long *)(temp_v10 + 0x54);
          temp_v8 = *(float *)(temp_v10 + 0x5c);
          *(unsigned int *)(temp_v10 + 100) = 4;
          temp_v3 = *(int *)(temp_v10 + 0xf0) - 1;
          *(int *)(temp_v10 + 0xf0) = temp_v3;
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          temp_v32 = temp_v8;
          if (temp_v3 < 1) {
            if (((*(int *)(temp_v10 + 0x100) >= 0) && (*(char *)(temp_v10 + 0x170) == '\0')) ||
               (*(char *)(temp_v10 + 0xb1) != '\0')) {
              temp_v19 = randRange(200);
              temp_v17 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = *(float *)(temp_v10 + 0xe8) + *(float *)(DAT_005f18bf * 0x1c + 0x580ba0) +
                       temp_v17 * 0.01f;
              *(float *)(temp_v10 + 0xe8) = temp_v17;
              temp_v20 = *(float *)(temp_v10 + 0xec);
              temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 < temp_v20) << 0x1f) |
                      ((unsigned int)(temp_v17 == temp_v20) << 0x1e);
              in_fpscr = temp_v2 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v20 != temp_v20)) << 0x1c);
              temp_v14 = (unsigned char)(temp_v2 >> 0x18);
              if (!(unsigned char)((temp_v14 >> 6) & 1) && temp_v14 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v17 = temp_v20;
              }
              *(float *)(temp_v10 + 0xe8) = temp_v17;
            }
            else {
              if ((int)*(float *)(temp_v10 + 0xe8) < 0x40a00001) {
                *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
                *(unsigned int *)(temp_v10 + 0xb8) = 9;
                *(unsigned int *)(temp_v10 + 0xbc) = 0;
                break;
              }
              *(float *)(temp_v10 + 0xe8) = *(float *)(temp_v10 + 0xe8) - 1.0f;
            }
            if (*(char *)(temp_v10 + 0x171) == '\0') {
              temp_v3 = *(int *)(temp_v10 + 0x3c);
              FUN_002b5cb4();
              if (temp_v3 >= 0x451c4001) {
                *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
                *(unsigned int *)(temp_v10 + 0xb8) = 9;
                *(unsigned int *)(temp_v10 + 0xbc) = 0;
                break;
              }
            }
            if (*(char *)(temp_v10 + 0xb1) == '\0') {
              temp_v12 = *(int *)(g_lmapScene + 0x1c);
              FUN_002b5cb4();
              temp_v16 = SBORROW4(temp_v12,0x453b8000);
              temp_v3 = temp_v12 - 0x453b8000;
              temp_v15 = temp_v12 == 0x453b8000;
              if (temp_v12 < 0x453b8001) {
                temp_v12 = *(int *)(temp_v10 + 0xd4);
                temp_v16 = SBORROW4(temp_v12,0x5a);
                temp_v3 = temp_v12 - 0x5a;
                temp_v15 = temp_v12 == 0x5a;
              }
              if (!temp_v15 && temp_v3 < 0 == temp_v16) {
                *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
                *(unsigned int *)(temp_v10 + 0xb8) = 9;
                *(unsigned int *)(temp_v10 + 0xbc) = 0;
                break;
              }
            }
            temp_v42 = temp_v30;
            temp_v44 = temp_v32;
            temp_v34 = *(float *)(g_lmapScene + 0x1c);
            temp_v36 = *(float *)(g_lmapScene + 0x24);
            temp_v43 = temp_v31 + 25.0f;
            temp_v35 = *(float *)(g_lmapScene + 0x20) + 25.0f;
            temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0);
            if (temp_v3 != -1) {
              *(unsigned int *)(temp_v10 + 0xd4) = 0;
              temp_v3 = randRange(2);
              *(int *)(temp_v10 + 0xf0) = temp_v3 + 2;
              *(unsigned int *)(temp_v10 + 0xf4) = *(unsigned int *)(temp_v10 + 0xdc);
              *(unsigned int *)(temp_v10 + 0xf8) = *(unsigned int *)(temp_v10 + 0xe0);
              *(unsigned int *)(temp_v10 + 0xfc) = *(unsigned int *)(temp_v10 + 0xe4);
              goto LAB_002d4fec;
            }
          }
          else {
LAB_002d4fec:
            temp_v17 = *(float *)(temp_v10 + 0xdc);
            FUN_002b5cb4();
            temp_v20 = *(float *)(temp_v10 + 0xe8);
            temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 < temp_v17) << 0x1f) |
                    ((unsigned int)(temp_v20 == temp_v17) << 0x1e);
            in_fpscr = temp_v2 | ((unsigned int)((temp_v20 != temp_v20) || (temp_v17 != temp_v17)) << 0x1c);
            temp_v14 = (unsigned char)(temp_v2 >> 0x18);
            if ((unsigned char)((temp_v14 >> 6) & 1) || temp_v14 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              if (((*(char *)(temp_v10 + 0xb1) == '\0') &&
                  (temp_v3 = *(int *)(temp_v10 + 0x100) - 1, *(int *)(temp_v10 + 0x100) = temp_v3, temp_v3 < 0
                  )) && ((int)temp_v20 >= 0x40a00001)) {
                *(float *)(temp_v10 + 0xe8) = temp_v20 - 1.0f;
              }
              if (*(int *)(temp_v10 + 0xd4) >= 0xf) {
                *(unsigned int *)(temp_v10 + 100) = 1;
                *(unsigned int *)(temp_v10 + 0x6c) = 1;
              }
              else {
                FUN_002b5cb4();
                FUN_0050d8e4();
                temp_v17 = *(float *)(temp_v10 + 0x60);
                FUN_00303a5c();
                temp_v20 = 0.017453292f;
                *(float *)(temp_v10 + 0x60) = temp_v17;
                temp_v17 = temp_v17 * 0.017453292f;
                FUN_001bc124();
                temp_v30 = temp_v30 + temp_v17 * *(float *)(temp_v10 + 0xe8);
                temp_v20 = *(float *)(temp_v10 + 0x60) * temp_v20;
                FUN_001bbf0c();
                temp_v32 = temp_v32 + temp_v20 * *(float *)(temp_v10 + 0xe8);
              }
              temp_v3 = 0;
              do {
                if ((temp_v3 != temp_v11) &&
                   (temp_v12 = temp_v4 + temp_v3 * 0x188, *(char *)(temp_v12 + 0x34) != '\0')) {
                  temp_v17 = (float)temp_v24;
                  FUN_002b5cb4();
                  if ((int)temp_v17 < 0x3f800000) {
                    temp_v17 = 1.0f;
                  }
                  else if ((int)temp_v17 >= 0x42480000) goto LAB_002d5218;
                  temp_v17 = 1.0f / temp_v17;
                  temp_v30 = temp_v30 - (*(float *)(temp_v12 + 0x54) - (float)temp_v24) * temp_v17 * 5.0f;
                  temp_v31 = temp_v31 -
                             (*(float *)(temp_v12 + 0x58) - (float)((unsigned long long)temp_v24 >> 0x20)) *
                             temp_v17 * 5.0f;
                  temp_v32 = temp_v32 - (*(float *)(temp_v12 + 0x5c) - temp_v8) * temp_v17 * 5.0f;
                  break;
                }
LAB_002d5218:
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 0x28);
              temp_v31 = temp_v31 - 5.0f;
              FUN_002826dc(&temp_v30,&temp_v37,0);
              *(float *)(temp_v10 + 0x54) = temp_v37;
              *(float *)(temp_v10 + 0x58) = fStack_bc;
              *(float *)(temp_v10 + 0x5c) = fStack_b8;
              temp_v1 = *(short *)(temp_v10 + 0x16c) - 1;
              *(short *)(temp_v10 + 0x16c) = temp_v1;
              if (temp_v1 < 1) {
                FUN_00303e88();
                temp_v1 = randRange(2);
                *(short *)(temp_v10 + 0x16c) = temp_v1 + 9;
              }
              temp_v3 = *(int *)(temp_v10 + 0xbc);
              if (temp_v3 < 0x1e) {
                vec4Forward(*(unsigned int *)(temp_v10 + 0x1a0));
              }
              break;
            }
          }
          *(unsigned int *)(temp_v10 + 0xd4) = 0;
          temp_v19 = 7;
          *(unsigned int *)(temp_v10 + 0xf0) = 0;
          *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        break;
      case 9:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        temp_v3 = FUN_0033b100(pcVar15);
        if (temp_v3 != 0) {
          *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        temp_v30 = *(float *)(temp_v10 + 0x54);
        temp_v31 = *(float *)(temp_v10 + 0x58);
        temp_v32 = *(float *)(temp_v10 + 0x5c);
        *(unsigned int *)(temp_v10 + 100) = 1;
        *(unsigned int *)(temp_v10 + 0x6c) = 1;
        if ((*(char *)(temp_v10 + 0xb1) != '\0') || (*(int *)(temp_v10 + 0xbc) >= 0x1f)) {
          *(unsigned int *)(temp_v10 + 0xb8) = 10;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        break;
      case 10:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        temp_v3 = FUN_0033b100(pcVar15);
        if (temp_v3 != 0) {
          *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        temp_v7 = '\x06';
        if (*(char *)(temp_v10 + 0xb1) != '\0') {
          *(unsigned int *)(temp_v10 + 0x6c) = 2;
          *(unsigned int *)(temp_v10 + 100) = 6;
          if (*(int *)(temp_v10 + 0xbc) >= 0x10) {
            temp_v3 = *(int *)(temp_v10 + 0x1b4);
            if (temp_v3 != 0) {
              temp_v7 = *(char *)(temp_v10 + 0x1b8);
            }
            if (temp_v3 != 0 && temp_v7 != '\0') {
              if (*(char *)(temp_v10 + 0x1b9) == '\0') goto LAB_002d54c4;
              temp_v3 = *(int *)(temp_v3 + 4);
              if (temp_v3 != 0) {
                ptrListRemoveClearOwner(g_handleRegistry);
              }
              *(unsigned char *)(temp_v10 + 0x1b8) = 0;
            }
            *(unsigned int *)(temp_v10 + 0xb8) = 0xc;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
          }
        }
        else {
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          *(unsigned int *)(temp_v10 + 100) = 6;
          if (*(int *)(temp_v10 + 0xbc) >= 0x1f) {
            temp_v3 = *(int *)(temp_v10 + 0x1b4);
            if (temp_v3 != 0) {
              temp_v7 = *(char *)(temp_v10 + 0x1b8);
            }
            if (temp_v3 != 0 && temp_v7 != '\0') {
              if (*(char *)(temp_v10 + 0x1b9) != '\0') {
                temp_v3 = *(int *)(temp_v3 + 4);
                if (temp_v3 != 0) {
                  ptrListRemoveClearOwner(g_handleRegistry);
                }
                *(unsigned char *)(temp_v10 + 0x1b8) = 0;
              }
              else {
LAB_002d54c4:
                temp_v12 = DAT_005806d4;
                *(unsigned int *)(*(int *)(temp_v3 + 4) + 4) = *(unsigned int *)(*(int *)(temp_v3 + 4) + 4) | 3;
                *(unsigned char *)(temp_v10 + 0x1b8) = 0;
                *(unsigned char *)(temp_v12 + *(int *)(temp_v10 + 0x1b0) * 8 + 0x3d91) = 0;
              }
            }
            *(unsigned int *)(temp_v10 + 0xb8) = 0xc;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
          }
        }
        break;
      case 0xb:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        temp_v7 = '\x06';
        temp_v3 = *(int *)(temp_v10 + 0xbc) + 1;
        *(int *)(temp_v10 + 0xbc) = temp_v3;
        *(unsigned int *)(temp_v10 + 0x6c) = 2;
        *(unsigned int *)(temp_v10 + 100) = 6;
        if (temp_v3 >= 0x10) {
          temp_v3 = *(int *)(temp_v10 + 0x1b4);
          if (temp_v3 != 0) {
            temp_v7 = *(char *)(temp_v10 + 0x1b8);
          }
          if (temp_v3 != 0 && temp_v7 != '\0') {
            if (*(char *)(temp_v10 + 0x1b9) != '\0') {
              temp_v3 = *(int *)(temp_v3 + 4);
              if (temp_v3 != 0) {
                ptrListRemoveClearOwner(g_handleRegistry);
              }
              *(unsigned char *)(temp_v10 + 0x1b8) = 0;
            }
            else {
              temp_v12 = DAT_005806d4;
              *(unsigned int *)(*(int *)(temp_v3 + 4) + 4) = *(unsigned int *)(*(int *)(temp_v3 + 4) + 4) | 3;
              *(unsigned char *)(temp_v10 + 0x1b8) = 0;
              *(unsigned char *)(temp_v12 + *(int *)(temp_v10 + 0x1b0) * 8 + 0x3d91) = 0;
            }
          }
          *(unsigned int *)(temp_v10 + 0xb8) = 0xc;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        break;
      case 0xc:
        temp_v12 = *(int *)(temp_v10 + 0xbc) + 1;
        *(int *)(temp_v10 + 0xbc) = temp_v12;
        temp_v3 = DAT_005806d4;
        if (temp_v12 >= 3) {
          if (*(int **)(temp_v10 + 0x1b4) != (int *)0x0) {
            if (*(char *)(temp_v10 + 0x1b9) != '\0') {
              (**(romwright_code **)(**(int **)(temp_v10 + 0x1b4) + 4))();
              *(unsigned int *)(temp_v10 + 0x1b4) = 0;
            }
            *(unsigned int *)(temp_v10 + 0x1b4) = 0;
            *pcVar15 = '\0';
            *(unsigned int *)(temp_v10 + 100) = 0;
            *(unsigned int *)(temp_v10 + 0x68) = 0xffffffff;
            *(unsigned int *)(temp_v10 + 0x6c) = 1;
            *(unsigned char *)(temp_v10 + 0x170) = 0;
            *(unsigned char *)(temp_v10 + 0x171) = 0;
            *(unsigned char *)(temp_v10 + 0x173) = 0;
            *(unsigned char *)(temp_v10 + 0x174) = 0;
            *(int *)(temp_v3 + 0x3d78) = *(int *)(temp_v3 + 0x3d78) - 1;
          }
          temp_v7 = *(char *)(temp_v10 + 0x84);
          *(unsigned int *)(temp_v10 + 0xb8) = 0;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          *(unsigned char *)(temp_v10 + 0x170) = 0;
          *(unsigned char *)(temp_v10 + 0x171) = 0;
          *(unsigned char *)(temp_v10 + 0x173) = 0;
          temp_v15 = temp_v7 == '\0';
          *(unsigned char *)(temp_v10 + 0x174) = 0;
          if (temp_v15) {
            temp_v7 = *(char *)(temp_v10 + 0xb1);
          }
          if (!(temp_v15 && temp_v7 == '\0')) {
            *pcVar15 = '\x01';
            temp_v3 = gameFlagsGetBlock();
            *(unsigned int *)(temp_v10 + 0x3c) = *(unsigned int *)(temp_v10 + 0x48);
            *(unsigned int *)(temp_v10 + 0x40) = *(unsigned int *)(temp_v10 + 0x4c);
            *(unsigned int *)(temp_v10 + 0x44) = *(unsigned int *)(temp_v10 + 0x50);
            *(unsigned int *)(temp_v10 + 0x54) = *(unsigned int *)(temp_v10 + 0x48);
            *(unsigned int *)(temp_v10 + 0x58) = *(unsigned int *)(temp_v10 + 0x4c);
            *(unsigned int *)(temp_v10 + 0x5c) = *(unsigned int *)(temp_v10 + 0x50);
            temp_v19 = randRange(0x168);
            temp_v19 = VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v10 + 0x60) = temp_v19;
            *(unsigned int *)(temp_v10 + 100) = 1;
            *(unsigned int *)(temp_v10 + 0x6c) = 1;
            *(unsigned int *)(temp_v10 + 0x70) = 0;
            *(unsigned char *)(temp_v10 + 0x17c) = 0;
            *(unsigned short *)(temp_v10 + 0x1aa) = 0;
            *(unsigned int *)(temp_v10 + 0xb8) = 2;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            temp_v12 = randRange(200);
            *(int *)(temp_v10 + 0xc0) = temp_v12 + 0x3c;
            *(unsigned int *)(temp_v10 + 0xc4) = 0;
            *(unsigned int *)(temp_v10 + 0x1a4) = 0;
            temp_v12 = randRange(0x78);
            *(int *)(temp_v10 + 0xd8) = temp_v12 + 0x1e;
            *(unsigned char *)(temp_v10 + 0x170) = 0;
            *(unsigned char *)(temp_v10 + 0x171) = 0;
            *(unsigned char *)(temp_v10 + 0x173) = 0;
            *(unsigned char *)(temp_v10 + 0x174) = 0;
            temp_v12 = *(int *)(g_lmapScene + 0x1c);
            FUN_002b5cb4();
            if (temp_v12 < 0x43fa0000) {
              *(int *)(temp_v10 + 0xd8) = *(int *)(temp_v10 + 0xd8) + 300;
              if (*(int *)(temp_v3 + 0x14e8) != 0) {
                temp_v3 = randRange(0x1e);
                *(int *)(temp_v10 + 0xd8) = temp_v3 + 1;
              }
            }
            else if (temp_v12 < 0x44480000) {
              *(int *)(temp_v10 + 0xd8) = *(int *)(temp_v10 + 0xd8) + 0xd2;
              if (*(int *)(temp_v3 + 0x14e8) != 0) {
                temp_v3 = randRange(0x3c);
                *(int *)(temp_v10 + 0xd8) = temp_v3 + 1;
              }
            }
            else if (temp_v12 < 0x447a0000) {
              *(int *)(temp_v10 + 0xd8) = *(int *)(temp_v10 + 0xd8) + 0x96;
              if (*(int *)(temp_v3 + 0x14e8) != 0) {
                temp_v3 = randRange(0x5a);
                *(int *)(temp_v10 + 0xd8) = temp_v3 + 1;
              }
            }
            else if ((temp_v12 < 0x44960000) &&
                    (*(int *)(temp_v10 + 0xd8) = *(int *)(temp_v10 + 0xd8) + 0x96,
                    *(int *)(temp_v3 + 0x14e8) != 0)) {
              temp_v3 = randRange(0x78);
              *(int *)(temp_v10 + 0xd8) = temp_v3 + 1;
            }
            temp_v3 = 0xf0;
            *(int *)(temp_v10 + 0xd8) = temp_v3;
          }
          else {
            *pcVar15 = '\x01';
            temp_v3 = DAT_005806d4;
            temp_v12 = gameFlagsGetBlock();
            if (DAT_005f1623 != '\0') {
              temp_v29 = (float)(int)*(char *)(temp_v12 + 0x3a);
              temp_v33 = (int)*(char *)(temp_v12 + 0x3b);
            }
            else {
              temp_v29 = *(float *)(temp_v3 + 0xc);
              temp_v33 = *(int *)(temp_v3 + 0x10);
            }
            *(unsigned char *)(temp_v10 + 0x1ae) = 0;
            do {
              temp_v8 = temp_v29;
              FUN_004bc420(temp_v29,temp_v33,0);
              *(float *)(temp_v10 + 0xa4) = temp_v8;
              temp_v3 = FUN_004bc850();
              *(int *)(temp_v10 + 0xa8) = temp_v3;
              dataTable00FindById();
              *(unsigned short *)(temp_v10 + 0x1a8) = *(unsigned short *)(temp_v3 + 2) & 0x7fff;
              temp_v3 = FUN_004bb510(*(unsigned int *)(temp_v10 + 0xa4));
              if (temp_v3 != 0) {
                if ((*(int *)(temp_v10 + 0xa8) < 0x3e9) && (temp_v12 = gameFlagIsSet(0x52a), temp_v12 != 0)
                   ) {
                  *(int *)(temp_v10 + 0x1b0) = temp_v3;
                  temp_v3 = FUN_004bc5a4(*(unsigned int *)(temp_v10 + 0xa4));
                  if (temp_v3 != 0) {
                    *(unsigned char *)(temp_v10 + 0x1ae) = 1;
                  }
                }
                else {
                  *(unsigned int *)(temp_v10 + 0x1b0) = 1;
                }
              }
              else if ((0x4b0 >= *(int *)(temp_v10 + 0xa8)) &&
                      (temp_v3 = gameFlagIsSet(0x52a), temp_v3 != 0)) {
                *(unsigned int *)(temp_v10 + 0x1b0) = (unsigned int)*(unsigned char *)(*(int *)(temp_v10 + 0xa8) + 0x5806e0);
              }
              else {
                *(unsigned int *)(temp_v10 + 0x1b0) = 1;
              }
              temp_v3 = FUN_004bb870(*(unsigned int *)(temp_v10 + 0xa4));
              if (temp_v3 != 0) {
                *(char *)(temp_v10 + 0x1af) = (char)temp_v3;
              }
              temp_v3 = FUN_002d7c88(*(unsigned int *)(temp_v10 + 0x1b0));
            } while (temp_v3 == 0);
            temp_v3 = gameFlagsGetBlock();
            *(unsigned int *)(temp_v10 + 0x3c) = *(unsigned int *)(temp_v10 + 0x48);
            *(unsigned int *)(temp_v10 + 0x40) = *(unsigned int *)(temp_v10 + 0x4c);
            *(unsigned int *)(temp_v10 + 0x44) = *(unsigned int *)(temp_v10 + 0x50);
            *(unsigned int *)(temp_v10 + 0x54) = *(unsigned int *)(temp_v10 + 0x48);
            *(unsigned int *)(temp_v10 + 0x58) = *(unsigned int *)(temp_v10 + 0x4c);
            *(unsigned int *)(temp_v10 + 0x5c) = *(unsigned int *)(temp_v10 + 0x50);
            temp_v19 = randRange(0x168);
            temp_v19 = VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(unsigned int *)(temp_v10 + 0x60) = temp_v19;
            *(unsigned int *)(temp_v10 + 100) = 1;
            *(unsigned int *)(temp_v10 + 0x6c) = 1;
            *(unsigned int *)(temp_v10 + 0x70) = 0;
            *(unsigned char *)(temp_v10 + 0x17c) = 0;
            *(unsigned short *)(temp_v10 + 0x1aa) = 0;
            *(unsigned int *)(temp_v10 + 0xb8) = 2;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            temp_v12 = randRange(200);
            *(int *)(temp_v10 + 0xc0) = temp_v12 + 0x3c;
            *(unsigned int *)(temp_v10 + 0xc4) = 0;
            *(unsigned int *)(temp_v10 + 0x1a4) = 0;
            temp_v12 = randRange(0x78);
            *(int *)(temp_v10 + 0xd8) = temp_v12 + 0x1e;
            *(unsigned char *)(temp_v10 + 0x170) = 0;
            *(unsigned char *)(temp_v10 + 0x171) = 0;
            *(unsigned char *)(temp_v10 + 0x173) = 0;
            *(unsigned char *)(temp_v10 + 0x174) = 0;
            temp_v12 = *(int *)(g_lmapScene + 0x1c);
            FUN_002b5cb4();
            if (temp_v12 < 0x43fa0000) {
              *(int *)(temp_v10 + 0xd8) = *(int *)(temp_v10 + 0xd8) + 300;
              if (*(int *)(temp_v3 + 0x14e8) != 0) {
                temp_v3 = randRange(0x1e);
                temp_v3 = temp_v3 + 1;
                *(int *)(temp_v10 + 0xd8) = temp_v3;
              }
            }
            else if (temp_v12 < 0x44480000) {
              *(int *)(temp_v10 + 0xd8) = *(int *)(temp_v10 + 0xd8) + 0xd2;
              if (*(int *)(temp_v3 + 0x14e8) != 0) {
                temp_v3 = randRange(0x3c);
                *(int *)(temp_v10 + 0xd8) = temp_v3 + 1;
              }
            }
            else if (temp_v12 < 0x447a0000) {
              *(int *)(temp_v10 + 0xd8) = *(int *)(temp_v10 + 0xd8) + 0x96;
              if (*(int *)(temp_v3 + 0x14e8) != 0) {
                temp_v3 = randRange(0x5a);
                *(int *)(temp_v10 + 0xd8) = temp_v3 + 1;
              }
            }
            else if ((temp_v12 < 0x44960000) &&
                    (*(int *)(temp_v10 + 0xd8) = *(int *)(temp_v10 + 0xd8) + 0x96,
                    *(int *)(temp_v3 + 0x14e8) != 0)) {
              temp_v3 = randRange(0x78);
              *(int *)(temp_v10 + 0xd8) = temp_v3 + 1;
            }
          }
        }
        break;
      case 0xd:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        temp_v3 = gameFlagIsSet(0x300);
        if ((temp_v3 != 0) || (temp_v3 = gameFlagIsSet(0x301), temp_v3 != 0)) {
          if ((g_gameState != 0x29 && g_gameState != 0x2a) &&
             ((g_gameState != 0x2b && g_gameState != 0x2c &&
              ((g_gameState != 0x2d && g_gameState != 0x2e) && g_gameState != 0x2f)))) {
            *(unsigned int *)(temp_v10 + 0xb8) = 4;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
          }
        }
        else {
          *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
          temp_v3 = FUN_0033b100(pcVar15);
          if (temp_v3 != 0) {
            *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
            *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          temp_v30 = *(float *)(temp_v10 + 0x54);
          temp_v31 = *(float *)(temp_v10 + 0x58);
          temp_v24 = *(unsigned long long *)(temp_v10 + 0x54);
          temp_v8 = *(float *)(temp_v10 + 0x5c);
          *(unsigned int *)(temp_v10 + 100) = 4;
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          temp_v32 = temp_v8;
          if (*(char *)(temp_v10 + 0x171) == '\0') {
            temp_v3 = *(int *)(temp_v10 + 0x3c);
            FUN_002b5cb4();
            if (temp_v3 >= 0x44e10001) {
              *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
              *(unsigned int *)(temp_v10 + 0xb8) = 9;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
          }
          temp_v3 = *(int *)(temp_v10 + 0x130) - 1;
          *(int *)(temp_v10 + 0x130) = temp_v3;
          if (temp_v3 < 1) {
            if ((*(int *)(temp_v10 + 0x100) < 0) || (*(char *)(temp_v10 + 0x170) != '\0')) {
              if ((int)*(float *)(temp_v10 + 0x108) < 0x40a00001) {
                *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
                *(unsigned int *)(temp_v10 + 0xb8) = 9;
                *(unsigned int *)(temp_v10 + 0xbc) = 0;
                break;
              }
              *(float *)(temp_v10 + 0x108) = *(float *)(temp_v10 + 0x108) - 1.0f;
            }
            else {
              temp_v19 = randRange(200);
              temp_v17 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = *(float *)(temp_v10 + 0x108) + *(float *)(DAT_005f18bf * 0x1c + 0x580ba8) +
                       temp_v17 * 0.01f;
              *(float *)(temp_v10 + 0x108) = temp_v17;
              temp_v20 = *(float *)(temp_v10 + 0x10c);
              temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 < temp_v20) << 0x1f) |
                      ((unsigned int)(temp_v17 == temp_v20) << 0x1e);
              in_fpscr = temp_v2 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v20 != temp_v20)) << 0x1c);
              temp_v14 = (unsigned char)(temp_v2 >> 0x18);
              if (!(unsigned char)((temp_v14 >> 6) & 1) && temp_v14 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v17 = temp_v20;
              }
              *(float *)(temp_v10 + 0x108) = temp_v17;
            }
            temp_v19 = *(unsigned int *)(temp_v4 + 0x14);
            FUN_00384830();
            *(unsigned int *)(temp_v10 + 300) = temp_v19;
            temp_v17 = *(float *)(temp_v4 + 0x20) - *(float *)(temp_v10 + 0x108);
            *(float *)(temp_v10 + 0x110) = temp_v17;
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v17) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              temp_v17 = -temp_v17;
              *(float *)(temp_v10 + 0x110) = temp_v17;
            }
            if ((int)temp_v17 < 0x3f800001) {
              temp_v17 = 1.0f;
            }
            *(float *)(temp_v10 + 0x110) = temp_v17;
            temp_v17 = *(float *)(temp_v4 + 0x14);
            FUN_002b5cb4();
            *(float *)(temp_v10 + 0x114) = temp_v17;
            temp_v17 = temp_v17 / *(float *)(temp_v10 + 0x110);
            temp_v20 = 25.0f;
            *(float *)(temp_v10 + 0x118) = temp_v17;
            if ((int)temp_v17 >= 0x42200001) {
              temp_v17 = 40.0f;
            }
            *(float *)(temp_v10 + 0x118) = temp_v17;
            temp_v21 = *(float *)(temp_v4 + 0x2c);
            temp_v18 = *(float *)(temp_v4 + 0x30);
            temp_v22 = *(float *)(temp_v4 + 0x18);
            temp_v23 = *(float *)(temp_v4 + 0x1c);
            *(float *)(temp_v10 + 0x11c) =
                 *(float *)(temp_v4 + 0x14) + *(float *)(temp_v4 + 0x28) * temp_v17;
            *(float *)(temp_v10 + 0x120) = temp_v22 + temp_v21 * temp_v17;
            *(float *)(temp_v10 + 0x124) = temp_v23 + temp_v18 * temp_v17;
            temp_v42 = *(float *)(temp_v4 + 0x14);
            temp_v44 = *(float *)(temp_v4 + 0x1c);
            temp_v34 = *(float *)(temp_v10 + 0x11c);
            temp_v36 = *(float *)(temp_v10 + 0x124);
            temp_v43 = *(float *)(temp_v4 + 0x18) + 25.0f;
            temp_v35 = *(float *)(temp_v10 + 0x120) + 25.0f;
            temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,&temp_v38);
            if (temp_v3 != -1) {
              *(unsigned int *)(temp_v10 + 0x11c) = temp_v38;
              *(unsigned int *)(temp_v10 + 0x120) = uStack_b0;
              *(unsigned int *)(temp_v10 + 0x124) = uStack_ac;
            }
            if (*(int *)(temp_v10 + 0x114) < 0x44960001) {
              if (*(int *)(temp_v10 + 0x114) < 0x43fa0000) {
                if (*(int *)(temp_v10 + 300) < 0x42a00000) goto LAB_002d5d90;
              }
              else if (*(int *)(temp_v10 + 0x108) >= 0x41700001) {
                temp_v17 = *(float *)(temp_v10 + 0x11c);
                FUN_002b5cb4();
                in_fpscr = (in_fpscr & 0xfffffff) |
                           ((unsigned int)(*(float *)(temp_v10 + 0x114) <= temp_v17) << 0x1d);
                if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) goto LAB_002d5d90;
              }
            }
            else {
LAB_002d5d90:
              temp_v19 = *(unsigned int *)(temp_v4 + 0x18);
              temp_v9 = *(unsigned int *)(temp_v4 + 0x1c);
              *(unsigned int *)(temp_v10 + 0x11c) = *(unsigned int *)(temp_v4 + 0x14);
              *(unsigned int *)(temp_v10 + 0x120) = temp_v19;
              *(unsigned int *)(temp_v10 + 0x124) = temp_v9;
            }
            temp_v12 = *(int *)(temp_v10 + 0x114);
            temp_v16 = SBORROW4(temp_v12,0x453b8000);
            temp_v3 = temp_v12 - 0x453b8000;
            temp_v15 = temp_v12 == 0x453b8000;
            if (temp_v12 < 0x453b8001) {
              temp_v12 = *(int *)(temp_v10 + 0xd4);
              temp_v16 = SBORROW4(temp_v12,0x5a);
              temp_v3 = temp_v12 - 0x5a;
              temp_v15 = temp_v12 == 0x5a;
            }
            if (!temp_v15 && temp_v3 < 0 == temp_v16) {
              *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
              *(unsigned int *)(temp_v10 + 0xb8) = 9;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
            temp_v42 = temp_v30;
            temp_v44 = temp_v32;
            temp_v34 = *(float *)(temp_v10 + 0x11c);
            temp_v36 = *(float *)(temp_v10 + 0x124);
            temp_v43 = temp_v31 + temp_v20;
            temp_v35 = *(float *)(temp_v10 + 0x120) + temp_v20;
            temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0);
            if (temp_v3 != -1) {
              *(int *)(temp_v10 + 0xd4) = *(int *)(temp_v10 + 0xd4) + 1;
              *(unsigned int *)(temp_v10 + 0x130) = 0;
              temp_v17 = temp_v30;
              FUN_00352bc4();
              temp_v17 = temp_v17 * 0.017453292f;
              temp_v42 = temp_v30;
              temp_v43 = temp_v31;
              temp_v44 = temp_v32;
              temp_v34 = temp_v30;
              temp_v35 = temp_v31;
              temp_v36 = temp_v32;
              temp_v21 = temp_v17;
              FUN_001bc124();
              temp_v18 = 100.0f;
              temp_v34 = temp_v34 + temp_v17 * 100.0f;
              FUN_001bbf0c();
              temp_v36 = temp_v36 + temp_v21 * temp_v18;
              temp_v43 = temp_v43 + temp_v20;
              temp_v35 = temp_v35 + temp_v20;
              temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0);
              if (temp_v3 != -1) {
                if (*(char *)(temp_v10 + 0x171) == '\0') {
                  temp_v42 = temp_v30;
                  temp_v44 = temp_v32;
                  temp_v34 = *(float *)(temp_v4 + 0x14);
                  temp_v36 = *(float *)(temp_v4 + 0x1c);
                  temp_v43 = temp_v31 + temp_v20;
                  temp_v35 = *(float *)(temp_v4 + 0x18) + temp_v20;
                  if (((unsigned int)(temp_v43 - temp_v35) < 0xc1200000) &&
                     ((int)(temp_v43 - temp_v35) < 0x41200000)) {
                    temp_v24 = CONCAT44(temp_v30,temp_v32);
                    temp_v8 = *(float *)(g_lmapScene + 0x20);
                    temp_v19 = *(unsigned int *)(g_lmapScene + 0x1c);
                    temp_v26 = CONCAT44(temp_v20,*(unsigned int *)(g_lmapScene + 0x24));
                    temp_v40 = temp_v8 + temp_v20;
                    temp_v41 = temp_v32;
                    temp_v39 = temp_v19;
                    temp_v3 = FUN_0036d984(&temp_v39,&temp_v42,0);
                    if ((temp_v3 == -1) && (temp_v3 = FUN_0036d984(&temp_v39,&temp_v34,0), temp_v3 == -1))
                    {
                      *(unsigned int *)(temp_v10 + 0xb8) = 0xe;
                      *(unsigned int *)(temp_v10 + 0xdc) = temp_v19;
                      *(unsigned int *)(temp_v10 + 0xbc) = 0;
                      *(float *)(temp_v10 + 0xe0) = temp_v8;
                      *(int *)(temp_v10 + 0xe4) = (int)temp_v24;
                      break;
                    }
                    temp_v40 = temp_v8 + (float)((unsigned long long)temp_v26 >> 0x20);
                    temp_v39 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
                    temp_v41 = (float)temp_v26;
                    temp_v19 = temp_v39;
                    temp_v3 = FUN_0036d984(&temp_v39,&temp_v42,0);
                    temp_v9 = (unsigned int)temp_v26;
                    if ((temp_v3 == -1) && (temp_v3 = FUN_0036d984(&temp_v39,&temp_v34,0), temp_v3 == -1))
                    {
                      *(unsigned int *)(temp_v10 + 0xb8) = 0xe;
                      *(unsigned int *)(temp_v10 + 0xdc) = temp_v19;
                      *(unsigned int *)(temp_v10 + 0xbc) = 0;
                      *(float *)(temp_v10 + 0xe0) = temp_v8;
                      *(unsigned int *)(temp_v10 + 0xe4) = temp_v9;
                      break;
                    }
                  }
                }
                *(unsigned int *)(temp_v10 + 100) = 1;
                *(unsigned int *)(temp_v10 + 0x6c) = 1;
                break;
              }
              *(float *)(temp_v10 + 0x11c) = temp_v34;
              *(float *)(temp_v10 + 0x120) = temp_v35;
              *(float *)(temp_v10 + 0x124) = temp_v36;
              *(float *)(temp_v10 + 0x120) = temp_v31;
            }
            else {
              *(unsigned int *)(temp_v10 + 0xd4) = 0;
              temp_v3 = randRange(2);
              *(int *)(temp_v10 + 0x130) = temp_v3 + 2;
            }
          }
          temp_v3 = *(int *)(temp_v10 + 0x134) - 1;
          *(int *)(temp_v10 + 0x134) = temp_v3;
          if ((temp_v3 < 0) && ((int)*(float *)(temp_v10 + 0x108) >= 0x40a00001)) {
            *(float *)(temp_v10 + 0x108) = *(float *)(temp_v10 + 0x108) - 1.0f;
          }
          temp_v3 = *(int *)(temp_v10 + 0x11c);
          FUN_002b5cb4();
          if (temp_v3 >= 0x3f800001) {
            FUN_0050d8e4();
            temp_v19 = *(unsigned int *)(temp_v10 + 0x128);
            FUN_00303a5c();
            *(unsigned int *)(temp_v10 + 0x128) = temp_v19;
          }
          temp_v12 = *(int *)(temp_v10 + 0x114);
          temp_v16 = SBORROW4(0x43c80000,temp_v12);
          temp_v3 = 0x43c80000 - temp_v12;
          temp_v15 = temp_v12 == 0x43c80000;
          if (temp_v12 >= 0x43c80000) {
            temp_v12 = *(int *)(temp_v10 + 0xd4);
            temp_v16 = SBORROW4(temp_v12,0xf);
            temp_v3 = temp_v12 - 0xf;
            temp_v15 = temp_v12 == 0xf;
          }
          if (!(temp_v15 || temp_v3 < 0 != temp_v16)) {
            FUN_002b5cb4();
            FUN_0050d8e4();
            temp_v19 = *(unsigned int *)(temp_v10 + 0x60);
            FUN_00303a5c();
            *(unsigned int *)(temp_v10 + 0x60) = temp_v19;
          }
          else {
            temp_v3 = *(int *)(temp_v10 + 0x60);
            FUN_00303a5c();
            *(int *)(temp_v10 + 0x60) = temp_v3;
            FUN_0033abb4();
            if ((temp_v3 >= 0x41200001) && ((int)*(float *)(temp_v10 + 0x108) >= 0x40a00001)) {
              *(float *)(temp_v10 + 0x108) = *(float *)(temp_v10 + 0x108) - 1.0f;
            }
          }
          temp_v20 = 0.017453292f;
          temp_v17 = *(float *)(temp_v10 + 0x128) * 0.017453292f;
          FUN_001bc124();
          temp_v30 = temp_v30 + temp_v17 * *(float *)(temp_v10 + 0x108);
          temp_v20 = *(float *)(temp_v10 + 0x128) * temp_v20;
          FUN_001bbf0c();
          temp_v3 = 0;
          temp_v32 = temp_v32 + temp_v20 * *(float *)(temp_v10 + 0x108);
          do {
            if ((temp_v3 != temp_v11) &&
               (temp_v12 = temp_v4 + temp_v3 * 0x188, *(char *)(temp_v12 + 0x34) != '\0')) {
              temp_v17 = (float)temp_v24;
              FUN_002b5cb4();
              if ((int)temp_v17 < 0x3f800000) {
                temp_v17 = 1.0f;
              }
              else if ((int)temp_v17 >= 0x42480000) goto LAB_002d62e4;
              temp_v17 = 1.0f / temp_v17;
              temp_v30 = temp_v30 - (*(float *)(temp_v12 + 0x54) - (float)temp_v24) * temp_v17 * 5.0f;
              temp_v31 = temp_v31 -
                         (*(float *)(temp_v12 + 0x58) - (float)((unsigned long long)temp_v24 >> 0x20)) * temp_v17 *
                         5.0f;
              temp_v32 = temp_v32 - (*(float *)(temp_v12 + 0x5c) - temp_v8) * temp_v17 * 5.0f;
              break;
            }
LAB_002d62e4:
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 0x28);
          temp_v31 = temp_v31 - 5.0f;
          FUN_002826dc(&temp_v30,&temp_v37,0);
          *(float *)(temp_v10 + 0x54) = temp_v37;
          *(float *)(temp_v10 + 0x58) = fStack_bc;
          *(float *)(temp_v10 + 0x5c) = fStack_b8;
          temp_v1 = *(short *)(temp_v10 + 0x16c) - 1;
          *(short *)(temp_v10 + 0x16c) = temp_v1;
          if (temp_v1 < 1) {
            FUN_00303e88();
            temp_v1 = randRange(2);
            *(short *)(temp_v10 + 0x16c) = temp_v1 + 9;
          }
          temp_v3 = *(int *)(temp_v10 + 0xbc);
          if (temp_v3 < 0x1e) {
            vec4Forward(*(unsigned int *)(temp_v10 + 0x1a0));
          }
        }
        break;
      case 0xe:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        temp_v3 = gameFlagIsSet(0x300);
        if ((temp_v3 == 0) && (temp_v3 = gameFlagIsSet(0x301), temp_v3 == 0)) {
          *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
          temp_v3 = FUN_0033b100(pcVar15);
          if (temp_v3 != 0) {
            *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
            *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          temp_v30 = *(float *)(temp_v10 + 0x54);
          temp_v31 = *(float *)(temp_v10 + 0x58);
          temp_v24 = *(unsigned long long *)(temp_v10 + 0x54);
          temp_v8 = *(float *)(temp_v10 + 0x5c);
          *(unsigned int *)(temp_v10 + 100) = 4;
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          temp_v32 = temp_v8;
          if (*(char *)(temp_v10 + 0x171) == '\0') {
            temp_v3 = *(int *)(temp_v10 + 0x3c);
            FUN_002b5cb4();
            if (temp_v3 >= 0x44e10001) {
              *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
              *(unsigned int *)(temp_v10 + 0xb8) = 9;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
          }
          temp_v3 = *(int *)(temp_v10 + 0x130) - 1;
          *(int *)(temp_v10 + 0x130) = temp_v3;
          if (temp_v3 < 1) {
            if ((*(int *)(temp_v10 + 0x100) < 0) || (*(char *)(temp_v10 + 0x170) != '\0')) {
              if ((int)*(float *)(temp_v10 + 0x108) < 0x40a00001) {
                *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
                *(unsigned int *)(temp_v10 + 0xb8) = 9;
                *(unsigned int *)(temp_v10 + 0xbc) = 0;
                break;
              }
              *(float *)(temp_v10 + 0x108) = *(float *)(temp_v10 + 0x108) - 1.0f;
            }
            else {
              temp_v19 = randRange(200);
              temp_v17 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = *(float *)(temp_v10 + 0x108) + *(float *)(DAT_005f18bf * 0x1c + 0x580ba8) +
                       temp_v17 * 0.01f;
              *(float *)(temp_v10 + 0x108) = temp_v17;
              temp_v20 = *(float *)(temp_v10 + 0x10c);
              temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 < temp_v20) << 0x1f) |
                      ((unsigned int)(temp_v17 == temp_v20) << 0x1e);
              in_fpscr = temp_v2 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v20 != temp_v20)) << 0x1c);
              temp_v14 = (unsigned char)(temp_v2 >> 0x18);
              if (!(unsigned char)((temp_v14 >> 6) & 1) && temp_v14 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v17 = temp_v20;
              }
              *(float *)(temp_v10 + 0x108) = temp_v17;
            }
            temp_v19 = *(unsigned int *)(temp_v4 + 0x14);
            FUN_00384830();
            *(unsigned int *)(temp_v10 + 300) = temp_v19;
            temp_v17 = *(float *)(temp_v4 + 0x20) - *(float *)(temp_v10 + 0x108);
            *(float *)(temp_v10 + 0x110) = temp_v17;
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v17) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              temp_v17 = -temp_v17;
              *(float *)(temp_v10 + 0x110) = temp_v17;
            }
            if ((int)temp_v17 < 0x3f800001) {
              temp_v17 = 1.0f;
            }
            *(float *)(temp_v10 + 0x110) = temp_v17;
            temp_v17 = *(float *)(temp_v4 + 0x14);
            FUN_002b5cb4();
            *(float *)(temp_v10 + 0x114) = temp_v17;
            temp_v20 = temp_v17 / *(float *)(temp_v10 + 0x110);
            *(float *)(temp_v10 + 0x118) = temp_v20;
            if ((int)temp_v20 >= 0x42200001) {
              temp_v20 = 40.0f;
            }
            temp_v16 = SBORROW4((int)temp_v17,0x453b8000);
            temp_v3 = (int)temp_v17 - 0x453b8000;
            temp_v15 = temp_v17 == 3000.0f;
            *(float *)(temp_v10 + 0x118) = temp_v20;
            *(unsigned int *)(temp_v10 + 0x11c) = *(unsigned int *)(temp_v10 + 0xdc);
            *(unsigned int *)(temp_v10 + 0x120) = *(unsigned int *)(temp_v10 + 0xe0);
            *(unsigned int *)(temp_v10 + 0x124) = *(unsigned int *)(temp_v10 + 0xe4);
            if ((int)temp_v17 < 0x453b8001) {
              temp_v12 = *(int *)(temp_v10 + 0xd4);
              temp_v16 = SBORROW4(temp_v12,0x5a);
              temp_v3 = temp_v12 - 0x5a;
              temp_v15 = temp_v12 == 0x5a;
            }
            if (!temp_v15 && temp_v3 < 0 == temp_v16) {
              *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
              *(unsigned int *)(temp_v10 + 0xb8) = 9;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
            temp_v42 = temp_v30;
            temp_v44 = temp_v32;
            temp_v34 = *(float *)(temp_v4 + 0x14);
            temp_v36 = *(float *)(temp_v4 + 0x1c);
            temp_v43 = temp_v31 + 25.0f;
            temp_v35 = *(float *)(temp_v4 + 0x18) + 25.0f;
            temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0);
            if (temp_v3 != -1) {
              *(unsigned int *)(temp_v10 + 0xd4) = 0;
              temp_v3 = randRange(2);
              *(int *)(temp_v10 + 0xf0) = temp_v3 + 2;
              goto LAB_002d6644;
            }
          }
          else {
LAB_002d6644:
            temp_v17 = *(float *)(temp_v10 + 0xdc);
            FUN_002b5cb4();
            temp_v20 = *(float *)(temp_v10 + 0x108);
            temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v20 < temp_v17) << 0x1f) |
                    ((unsigned int)(temp_v20 == temp_v17) << 0x1e);
            in_fpscr = temp_v2 | ((unsigned int)((temp_v20 != temp_v20) || (temp_v17 != temp_v17)) << 0x1c);
            temp_v14 = (unsigned char)(temp_v2 >> 0x18);
            if ((unsigned char)((temp_v14 >> 6) & 1) || temp_v14 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v3 = *(int *)(temp_v10 + 0x134) - 1;
              *(int *)(temp_v10 + 0x134) = temp_v3;
              if ((temp_v3 < 0) && ((int)temp_v20 >= 0x40a00001)) {
                *(float *)(temp_v10 + 0x108) = temp_v20 - 1.0f;
              }
              temp_v3 = *(int *)(temp_v10 + 0x11c);
              FUN_002b5cb4();
              if (temp_v3 >= 0x3f800001) {
                FUN_0050d8e4();
                temp_v19 = *(unsigned int *)(temp_v10 + 0x128);
                FUN_00303a5c();
                *(unsigned int *)(temp_v10 + 0x128) = temp_v19;
              }
              temp_v12 = *(int *)(temp_v10 + 0x114);
              temp_v16 = SBORROW4(0x43c80000,temp_v12);
              temp_v3 = 0x43c80000 - temp_v12;
              temp_v15 = temp_v12 == 0x43c80000;
              if (temp_v12 >= 0x43c80000) {
                temp_v12 = *(int *)(temp_v10 + 0xd4);
                temp_v16 = SBORROW4(temp_v12,0xf);
                temp_v3 = temp_v12 - 0xf;
                temp_v15 = temp_v12 == 0xf;
              }
              if (!(temp_v15 || temp_v3 < 0 != temp_v16)) {
                FUN_002b5cb4();
                FUN_0050d8e4();
                temp_v19 = *(unsigned int *)(temp_v10 + 0x60);
                FUN_00303a5c();
                *(unsigned int *)(temp_v10 + 0x60) = temp_v19;
              }
              else {
                temp_v3 = *(int *)(temp_v10 + 0x60);
                FUN_00303a5c();
                *(int *)(temp_v10 + 0x60) = temp_v3;
                FUN_0033abb4();
                if ((temp_v3 >= 0x41200001) && ((int)*(float *)(temp_v10 + 0x108) >= 0x40a00001)) {
                  *(float *)(temp_v10 + 0x108) = *(float *)(temp_v10 + 0x108) - 1.0f;
                }
              }
              temp_v20 = 0.017453292f;
              temp_v17 = *(float *)(temp_v10 + 0x128) * 0.017453292f;
              FUN_001bc124();
              temp_v30 = temp_v30 + temp_v17 * *(float *)(temp_v10 + 0x108);
              temp_v20 = *(float *)(temp_v10 + 0x128) * temp_v20;
              FUN_001bbf0c();
              temp_v3 = 0;
              temp_v32 = temp_v32 + temp_v20 * *(float *)(temp_v10 + 0x108);
              do {
                if ((temp_v3 != temp_v11) &&
                   (temp_v12 = temp_v4 + temp_v3 * 0x188, *(char *)(temp_v12 + 0x34) != '\0')) {
                  temp_v17 = (float)temp_v24;
                  FUN_002b5cb4();
                  if ((int)temp_v17 < 0x3f800000) {
                    temp_v17 = 1.0f;
                  }
                  else if ((int)temp_v17 >= 0x42480000) goto LAB_002d68ec;
                  temp_v17 = 1.0f / temp_v17;
                  temp_v30 = temp_v30 - (*(float *)(temp_v12 + 0x54) - (float)temp_v24) * temp_v17 * 5.0f;
                  temp_v31 = temp_v31 -
                             (*(float *)(temp_v12 + 0x58) - (float)((unsigned long long)temp_v24 >> 0x20)) *
                             temp_v17 * 5.0f;
                  temp_v32 = temp_v32 - (*(float *)(temp_v12 + 0x5c) - temp_v8) * temp_v17 * 5.0f;
                  break;
                }
LAB_002d68ec:
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 0x28);
              temp_v31 = temp_v31 - 5.0f;
              FUN_002826dc(&temp_v30,&temp_v37,0);
              *(float *)(temp_v10 + 0x54) = temp_v37;
              *(float *)(temp_v10 + 0x58) = fStack_bc;
              *(float *)(temp_v10 + 0x5c) = fStack_b8;
              temp_v1 = *(short *)(temp_v10 + 0x16c) - 1;
              *(short *)(temp_v10 + 0x16c) = temp_v1;
              if (temp_v1 < 1) {
                FUN_00303e88();
                temp_v1 = randRange(2);
                *(short *)(temp_v10 + 0x16c) = temp_v1 + 9;
              }
              temp_v3 = *(int *)(temp_v10 + 0xbc);
              if (temp_v3 < 0x1e) {
                vec4Forward(*(unsigned int *)(temp_v10 + 0x1a0));
              }
              break;
            }
          }
          *(unsigned int *)(temp_v10 + 0xd4) = 0;
          temp_v19 = 0xd;
          *(unsigned int *)(temp_v10 + 0xf0) = 0;
          *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        if (((g_gameState != 0x29 && g_gameState != 0x2a) &&
            (g_gameState != 0x2b && g_gameState != 0x2c)) &&
           ((g_gameState != 0x2d && g_gameState != 0x2e) && g_gameState != 0x2f)) {
          *(unsigned int *)(temp_v10 + 0xb8) = 4;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        break;
      case 0xf:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        temp_v3 = gameFlagIsSet(0x300);
        if ((temp_v3 != 0) || (temp_v3 = gameFlagIsSet(0x301), temp_v3 != 0)) {
          if ((g_gameState != 0x29 && g_gameState != 0x2a) &&
             ((g_gameState != 0x2b && g_gameState != 0x2c &&
              ((g_gameState != 0x2d && g_gameState != 0x2e) && g_gameState != 0x2f)))) {
            *(unsigned int *)(temp_v10 + 0xb8) = 4;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
          }
        }
        else {
          *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
          temp_v3 = FUN_0033b100(pcVar15);
          if (temp_v3 == 0) {
            temp_v21 = *(float *)(temp_v10 + 0x54);
            temp_v31 = *(float *)(temp_v10 + 0x58);
            temp_v32 = *(float *)(temp_v10 + 0x5c);
            *(unsigned int *)(temp_v10 + 100) = 4;
            *(unsigned int *)(temp_v10 + 0x6c) = 1;
            temp_v8 = temp_v21;
            temp_v30 = temp_v21;
            temp_v17 = temp_v32;
            temp_v20 = temp_v31;
            if (*(int *)(temp_v10 + 0xf0) < 8) {
              temp_v19 = *(unsigned int *)(g_lmapScene + 0x20);
              temp_v9 = *(unsigned int *)(g_lmapScene + 0x24);
              *(unsigned int *)(temp_v10 + 0xf4) = *(unsigned int *)(g_lmapScene + 0x1c);
              *(unsigned int *)(temp_v10 + 0xf8) = temp_v19;
              *(unsigned int *)(temp_v10 + 0xfc) = temp_v9;
              FUN_00352bc4();
              *(float *)(temp_v10 + 0x104) = temp_v21;
              *(int *)(temp_v10 + 0xf0) = *(int *)(temp_v10 + 0xf0) + 1;
            }
            temp_v3 = *(int *)(temp_v10 + 0x100) - 1;
            *(int *)(temp_v10 + 0x100) = temp_v3;
            if ((-1 < temp_v3) && (*(char *)(temp_v10 + 0x170) == '\0')) {
              temp_v19 = *(unsigned int *)(temp_v10 + 0x60);
              FUN_00303a5c();
              *(unsigned int *)(temp_v10 + 0x60) = temp_v19;
              temp_v18 = 0.017453292f;
              temp_v42 = temp_v30;
              temp_v43 = temp_v31;
              temp_v44 = temp_v32;
              temp_v21 = *(float *)(temp_v10 + 0x104) * 0.017453292f;
              FUN_001bc124();
              temp_v22 = 100.0f;
              temp_v42 = temp_v42 + temp_v21 * 100.0f;
              temp_v21 = *(float *)(temp_v10 + 0x104) * temp_v18;
              FUN_001bbf0c();
              temp_v36 = temp_v17;
              temp_v44 = temp_v44 + temp_v21 * temp_v22;
              temp_v43 = temp_v43 + 25.0f;
              temp_v35 = temp_v20 + 25.0f;
              temp_v34 = temp_v8;
              temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0);
              if (temp_v3 == -1) {
                temp_v8 = *(float *)(temp_v10 + 0x60) * temp_v18;
                FUN_001bc124();
                temp_v30 = temp_v30 + temp_v8 * *(float *)(temp_v10 + 0xe8);
                temp_v18 = *(float *)(temp_v10 + 0x60) * temp_v18;
                FUN_001bbf0c();
                temp_v32 = temp_v32 + temp_v18 * *(float *)(temp_v10 + 0xe8);
                temp_v31 = temp_v31 - 5.0f;
                FUN_002826dc(&temp_v30,&temp_v37,0);
                *(float *)(temp_v10 + 0x54) = temp_v37;
                *(float *)(temp_v10 + 0x58) = fStack_bc;
                *(float *)(temp_v10 + 0x5c) = fStack_b8;
                temp_v1 = *(short *)(temp_v10 + 0x16c) - 1;
                *(short *)(temp_v10 + 0x16c) = temp_v1;
                if (temp_v1 < 1) {
                  FUN_00303e88();
                  temp_v1 = randRange(2);
                  *(short *)(temp_v10 + 0x16c) = temp_v1 + 5;
                }
                if (*(int *)(temp_v10 + 0xbc) < 0x1e) {
                  vec4Forward(*(unsigned int *)(temp_v10 + 0x1a0));
                }
                break;
              }
            }
            *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
            *(unsigned int *)(temp_v10 + 0xb8) = 9;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
          *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        break;
      case 0x10:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        if (*(int *)(temp_v10 + 0xbc) == 0) {
          *(unsigned int *)(temp_v10 + 0x80) = 10;
          *(unsigned int *)(temp_v10 + 0x74) = *(unsigned int *)(temp_v10 + 0x54);
          *(unsigned int *)(temp_v10 + 0x78) = *(unsigned int *)(temp_v10 + 0x58);
          *(unsigned int *)(temp_v10 + 0x7c) = *(unsigned int *)(temp_v10 + 0x5c);
          if (DAT_005f17c9 == '\0') {
            FUN_0020eb44(pcVar15,2);
          }
        }
        temp_v30 = *(float *)(temp_v10 + 0x74);
        temp_v31 = *(float *)(temp_v10 + 0x78);
        temp_v32 = *(float *)(temp_v10 + 0x7c);
        *(unsigned int *)(temp_v10 + 0x6c) = 1;
        *(unsigned int *)(temp_v10 + 100) = 5;
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        temp_v3 = *(int *)(temp_v10 + 0x80);
        if (0 < temp_v3) {
          temp_v17 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          if ((*(unsigned int *)(temp_v10 + 0xbc) & 1) != 0) {
            temp_v30 = temp_v30 + temp_v17;
            temp_v32 = temp_v32 + temp_v8;
          }
          else {
            temp_v30 = temp_v30 - temp_v17;
            temp_v32 = temp_v32 - temp_v8;
          }
          *(int *)(temp_v10 + 0x80) = *(int *)(temp_v10 + 0x80) - 1;
        }
        *(float *)(temp_v10 + 0x54) = temp_v30;
        *(float *)(temp_v10 + 0x58) = temp_v31;
        *(float *)(temp_v10 + 0x5c) = temp_v32;
        break;
      case 0x11:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        temp_v3 = FUN_0033b100(pcVar15);
        if (temp_v3 != 0) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        break;
      case 0x13:
      case 0x14:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        temp_v30 = *(float *)(temp_v10 + 0x54);
        temp_v31 = *(float *)(temp_v10 + 0x58);
        temp_v32 = *(float *)(temp_v10 + 0x5c);
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        *(unsigned int *)(temp_v10 + 100) = 1;
        *(unsigned int *)(temp_v10 + 0x6c) = 1;
        *(unsigned char *)(temp_v10 + 0x171) = 1;
        if (*(int *)(temp_v10 + 0x1b4) == 0) {
          *(unsigned int *)(temp_v10 + 0xb8) = 9;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          temp_v4 = randRange(0x1e);
          *(int *)(temp_v10 + 0xc0) = temp_v4 + 0x1e;
          return;
        }
        temp_v3 = *(int *)(*(int *)(temp_v10 + 0x1b4) + 4);
        *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) & 0xfffffffc;
        temp_v3 = FUN_0033b100(pcVar15);
        if (temp_v3 != 0) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        temp_v42 = temp_v30;
        temp_v44 = temp_v32;
        temp_v34 = *(float *)(g_lmapScene + 0x1c);
        temp_v36 = *(float *)(g_lmapScene + 0x24);
        temp_v43 = temp_v31 + 35.0f;
        temp_v35 = *(float *)(g_lmapScene + 0x20) + 35.0f;
        if ((int)romwright_fabs_4(*(float *)(g_lmapScene + 0x20) - temp_v31) >= 0x42f00000) {
          temp_v19 = 0x15;
          *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        temp_v3 = *(int *)(g_lmapScene + 0x1c);
        FUN_002b5cb4();
        if ((temp_v3 >= 0x44bb8000) || (temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0), temp_v3 != -1)) {
          temp_v19 = 0x15;
          *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        temp_v3 = gameGetPlayerData();
        temp_v12 = gameDataFlagTestBit(0x86);
        if (temp_v12 != 0) {
          temp_v1 = *(short *)(temp_v10 + 0x1a8);
          temp_v5 = FUN_003d21dc();
          temp_v12 = (int)temp_v1;
          if (temp_v5 != 0) {
            temp_v19 = FUN_00261424();
            temp_v8 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v17 = (float)VectorSignedToFloat((int)*(short *)(temp_v10 + 0x1a8),
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (int)(temp_v17 * (temp_v8 * 0.55f + 1.0f) + temp_v8 * temp_v8 * 5.0f);
            if (temp_v12 >= 0x3e7) {
              temp_v12 = 999;
            }
          }
          if (temp_v12 <= (int)(*(unsigned short *)(temp_v3 + 0x62) - 5)) break;
        }
        goto LAB_002d3268;
      case 0x15:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        if ((*(int *)(temp_v10 + 0xbc) >= 0x15) && (temp_v3 = FUN_0033b100(pcVar15), temp_v3 != 0)) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        if (*(int *)(temp_v10 + 0x1b4) == 0) {
          *(unsigned int *)(temp_v10 + 0xb8) = 9;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          temp_v4 = randRange(0x1e);
          *(int *)(temp_v10 + 0xc0) = temp_v4 + 0x1e;
          return;
        }
        *(unsigned int *)(temp_v10 + 0x6c) = 3;
        *(unsigned int *)(temp_v10 + 100) = 0;
        if (*(int *)(temp_v10 + 0xbc) == 0) {
          pcVar8 = pcVar15;
          FUN_00353200();
          if (pcVar8 == (char *)0x0) {
            *(unsigned int *)(temp_v10 + 0xb8) = 0;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            temp_v4 = randRange(0x1e);
            *(int *)(temp_v10 + 0xc0) = temp_v4 + 0x1e;
            return;
          }
          *(unsigned char *)(temp_v10 + 0x171) = 1;
        }
        if (*(int *)(temp_v10 + 0xbc) == 1) {
          FUN_0020eb44(pcVar15,0);
        }
        temp_v3 = *(int *)(temp_v10 + 0xbc) + 1;
        *(int *)(temp_v10 + 0xbc) = temp_v3;
        if (temp_v3 <= temp_v11 * 2 + 0x14) break;
        temp_v42 = *(float *)(temp_v10 + 0x54);
        temp_v44 = *(float *)(temp_v10 + 0x5c);
        temp_v39 = *(unsigned int *)(temp_v10 + 0x54);
        temp_v40 = *(float *)(temp_v10 + 0x58);
        temp_v41 = *(float *)(temp_v10 + 0x5c);
        temp_v34 = *(float *)(g_lmapScene + 0x1c);
        temp_v36 = *(float *)(g_lmapScene + 0x24);
        temp_v43 = *(float *)(temp_v10 + 0x58) + 35.0f;
        temp_v35 = *(float *)(g_lmapScene + 0x20) + 35.0f;
        temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0);
        if (temp_v3 == -1) {
          temp_v3 = gameGetPlayerData();
          temp_v12 = gameDataFlagTestBit(0x86);
          if (temp_v12 != 0) {
            temp_v1 = *(short *)(temp_v10 + 0x1a8);
            temp_v5 = FUN_003d21dc();
            temp_v12 = (int)temp_v1;
            if (temp_v5 != 0) {
              temp_v19 = FUN_00261424();
              temp_v8 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = (float)VectorSignedToFloat((int)*(short *)(temp_v10 + 0x1a8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v12 = (int)(temp_v17 * (temp_v8 * 0.55f + 1.0f) + temp_v8 * temp_v8 * 5.0f);
              if (temp_v12 >= 0x3e7) {
                temp_v12 = 999;
              }
            }
            if (temp_v12 <= (int)(*(unsigned short *)(temp_v3 + 0x62) - 5)) {
              *(unsigned int *)(temp_v10 + 0xb8) = 0;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              temp_v3 = randRange(0x1e);
              *(int *)(temp_v10 + 0xc0) = temp_v3 + 0x1e;
              break;
            }
          }
          *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) + 1;
          *(unsigned int *)(temp_v10 + 0xd4) = 0;
          *(unsigned int *)(temp_v10 + 0xb8) = 6;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          *(unsigned int *)(temp_v10 + 0xc4) = 0;
          *(unsigned int *)(temp_v10 + 0x1a4) = 0;
          *(unsigned int *)(temp_v10 + 0x178) = 0;
        }
        else {
          *(unsigned int *)(temp_v10 + 0xb8) = 0;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          temp_v3 = randRange(0x1e);
          *(int *)(temp_v10 + 0xc0) = temp_v3 + 0x1e;
        }
        break;
      case 0x16:
        piVar13 = (int *)(temp_v4 + 0x3d78);
        if (DAT_005f17f4 <= *piVar13) {
          temp_v19 = 9;
          *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        temp_v3 = *(int *)(temp_v4 + 0x14);
        FUN_002b5cb4();
        if (temp_v3 < 0x44bb8000) {
          *(unsigned int *)(temp_v10 + 0xd8) = 0;
          *piVar13 = *piVar13 + 1;
          *(unsigned int *)(temp_v10 + 0xb8) = 0x15;
          *(unsigned int *)(temp_v10 + 0xbc) = 1;
          *(unsigned int *)(temp_v10 + 0x54) = *(unsigned int *)(temp_v10 + 0x3c);
          *(unsigned int *)(temp_v10 + 0x58) = *(unsigned int *)(temp_v10 + 0x40);
          *(unsigned int *)(temp_v10 + 100) = 0;
          *(unsigned int *)(temp_v10 + 0x5c) = *(unsigned int *)(temp_v10 + 0x44);
          *(unsigned int *)(temp_v10 + 0x6c) = 3;
          *(unsigned char *)(temp_v10 + 0x171) = 1;
          temp_v3 = temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8;
          if (*(char *)(temp_v3 + 0x3d91) != '\0') {
            temp_v3 = 0x20;
            FUN_00178b04(0x20,&LAB_002d38dc,0x19a5);
            temp_v19 = 0;
            if (temp_v3 != 0) {
              temp_v19 = FUN_0040ac08();
            }
            *(unsigned int *)(temp_v10 + 0x1b4) = temp_v19;
            moriModelContentCopyBody();
            FUN_0040ace8(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v10 + 0x1b4) + 4));
            *(unsigned char *)(temp_v10 + 0x1b9) = 1;
          }
          else {
            *(unsigned int *)(temp_v10 + 0x1b4) = *(unsigned int *)(temp_v3 + 0x3d8c);
            *(unsigned char *)(temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8 + 0x3d91) = 1;
            *(unsigned char *)(temp_v10 + 0x1b9) = 0;
          }
          temp_v3 = *(int *)(temp_v10 + 0x1b4);
        }
        else {
          FUN_00353200();
          if (pcVar15 == (char *)0x0) {
            temp_v19 = 9;
            *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          *(unsigned int *)(temp_v10 + 0xd8) = 0;
          *piVar13 = *piVar13 + 1;
          *(unsigned int *)(temp_v10 + 100) = 0;
          *(unsigned int *)(temp_v10 + 0x6c) = 3;
          *(unsigned int *)(temp_v10 + 0xb8) = 0x15;
          *(unsigned int *)(temp_v10 + 0xbc) = 1;
          *(unsigned char *)(temp_v10 + 0x171) = 1;
          temp_v3 = temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8;
          if (*(char *)(temp_v3 + 0x3d91) != '\0') {
            temp_v3 = 0x20;
            FUN_00178b04(0x20,&LAB_002d38dc,0x19d3);
            temp_v19 = 0;
            if (temp_v3 != 0) {
              temp_v19 = FUN_0040ac08();
            }
            *(unsigned int *)(temp_v10 + 0x1b4) = temp_v19;
            moriModelContentCopyBody();
            FUN_0040ace8(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v10 + 0x1b4) + 4));
            *(unsigned char *)(temp_v10 + 0x1b9) = 1;
          }
          else {
            *(unsigned int *)(temp_v10 + 0x1b4) = *(unsigned int *)(temp_v3 + 0x3d8c);
            *(unsigned char *)(temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8 + 0x3d91) = 1;
            *(unsigned char *)(temp_v10 + 0x1b9) = 0;
          }
          temp_v3 = *(int *)(temp_v10 + 0x1b4);
        }
        if (temp_v3 != 0) {
          *(unsigned int *)(*(int *)(temp_v3 + 4) + 4) = *(unsigned int *)(*(int *)(temp_v3 + 4) + 4) & 0xfffffffc;
        }
        *(unsigned char *)(temp_v10 + 0x1b8) = 1;
        break;
      case 0x18:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        if (*(int *)(temp_v10 + 0xbc) == 0) {
          *(int *)(temp_v4 + 0x3d78) = *(int *)(temp_v4 + 0x3d78) + 1;
          temp_v3 = temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8;
          if (*(char *)(temp_v3 + 0x3d91) != '\0') {
            temp_v3 = 0x20;
            FUN_00178b04(0x20,&LAB_002d38dc,0x1a9d);
            temp_v19 = 0;
            if (temp_v3 != 0) {
              temp_v19 = FUN_0040ac08();
            }
            *(unsigned int *)(temp_v10 + 0x1b4) = temp_v19;
            moriModelContentCopyBody();
            FUN_0040ace8(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v10 + 0x1b4) + 4));
            *(unsigned char *)(temp_v10 + 0x1b9) = 1;
          }
          else {
            *(unsigned int *)(temp_v10 + 0x1b4) = *(unsigned int *)(temp_v3 + 0x3d8c);
            *(unsigned char *)(temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8 + 0x3d91) = 1;
            *(unsigned char *)(temp_v10 + 0x1b9) = 0;
          }
          *(unsigned char *)(temp_v10 + 0x1b8) = 1;
          *(unsigned int *)(temp_v10 + 0x6c) = 3;
          *(unsigned int *)(temp_v10 + 100) = 0;
          FUN_0020eb44(pcVar15);
        }
        temp_v30 = *(float *)(temp_v10 + 0x54);
        temp_v31 = *(float *)(temp_v10 + 0x58);
        temp_v32 = *(float *)(temp_v10 + 0x5c);
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        if (*(int *)(temp_v10 + 0xbc) >= 11) {
          temp_v3 = FUN_0033b100(pcVar15);
          if (temp_v3 != 0) {
            temp_v19 = 0x10;
            *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            break;
          }
          if (*(int *)(temp_v10 + 0xbc) >= 0x15) {
            *(unsigned int *)(temp_v10 + 0xb8) = 0;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            *(unsigned int *)(temp_v10 + 0xc0) = 9999;
            *(unsigned int *)(temp_v10 + 0xc4) = 0;
            *(unsigned int *)(temp_v10 + 0x6c) = 1;
            *(unsigned int *)(temp_v10 + 0x1a4) = 0;
          }
        }
        break;
      case 0x1a:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        if (*(int *)(temp_v10 + 0xbc) == 0) {
          *(int *)(temp_v4 + 0x3d78) = *(int *)(temp_v4 + 0x3d78) + 1;
          temp_v3 = temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8;
          if (*(char *)(temp_v3 + 0x3d91) != '\0') {
            temp_v3 = 0x20;
            FUN_00178b04(0x20,&LAB_002d38dc,0x1a0f);
            temp_v19 = 0;
            if (temp_v3 != 0) {
              temp_v19 = FUN_0040ac08();
            }
            *(unsigned int *)(temp_v10 + 0x1b4) = temp_v19;
            moriModelContentCopyBody();
            FUN_0040ace8(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v10 + 0x1b4) + 4));
            *(unsigned char *)(temp_v10 + 0x1b9) = 1;
          }
          else {
            *(unsigned int *)(temp_v10 + 0x1b4) = *(unsigned int *)(temp_v3 + 0x3d8c);
            *(unsigned char *)(temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8 + 0x3d91) = 1;
            *(unsigned char *)(temp_v10 + 0x1b9) = 0;
          }
          *(unsigned char *)(temp_v10 + 0x1b8) = 1;
        }
        temp_v30 = *(float *)(temp_v10 + 0x54);
        temp_v31 = *(float *)(temp_v10 + 0x58);
        temp_v32 = *(float *)(temp_v10 + 0x5c);
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        *(unsigned int *)(temp_v10 + 0x6c) = 1;
        *(unsigned int *)(temp_v10 + 100) = 3;
        *(unsigned char *)(temp_v10 + 0x173) = 1;
        if ((int)*(float *)(temp_v10 + 0x158) >= *(int *)(temp_v10 + 0xbc)) {
          temp_v8 = (float)VectorSignedToFloat(*(int *)(temp_v10 + 0xbc),(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v30 = *(float *)(temp_v10 + 0x138) + *(float *)(temp_v10 + 0x15c) * temp_v8;
          temp_v31 = *(float *)(temp_v10 + 0x13c) + *(float *)(temp_v10 + 0x160) * temp_v8;
          temp_v32 = *(float *)(temp_v10 + 0x140) + *(float *)(temp_v10 + 0x164) * temp_v8;
          temp_v8 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v10 + 0xbc),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = *(float *)(temp_v10 + 0x168);
          temp_v8 = (180.0f / *(float *)(temp_v10 + 0x158)) * temp_v8 * 0.017453292f;
          FUN_001bc124();
          temp_v31 = temp_v31 + temp_v8 * temp_v17;
          *(float *)(temp_v10 + 0x54) = temp_v30;
          *(float *)(temp_v10 + 0x58) = temp_v31;
          *(float *)(temp_v10 + 0x5c) = temp_v32;
        }
        else {
          *(unsigned int *)(temp_v10 + 0x54) = *(unsigned int *)(temp_v10 + 0x148);
          *(unsigned int *)(temp_v10 + 0x58) = *(unsigned int *)(temp_v10 + 0x14c);
          *(unsigned int *)(temp_v10 + 0x5c) = *(unsigned int *)(temp_v10 + 0x150);
        }
        if (*(int *)(temp_v10 + 0xbc) >= (int)*(float *)(temp_v10 + 0x158) - 4) {
          temp_v30 = *(float *)(temp_v10 + 0x54);
          temp_v31 = *(float *)(temp_v10 + 0x58);
          temp_v32 = *(float *)(temp_v10 + 0x5c);
          FUN_002b5cb4();
          FUN_0050d8e4();
          temp_v19 = *(unsigned int *)(temp_v10 + 0x60);
          FUN_00303a5c();
          *(unsigned int *)(temp_v10 + 0x60) = temp_v19;
        }
        else {
          temp_v19 = *(unsigned int *)(temp_v10 + 0x60);
          FUN_00303a5c();
          *(unsigned int *)(temp_v10 + 0x60) = temp_v19;
        }
        if (*(int *)(temp_v10 + 0xbc) == (int)*(float *)(temp_v10 + 0x158) - 4) {
          FUN_00352ff8();
        }
        if (*(int *)(temp_v10 + 0xbc) == (int)*(float *)(temp_v10 + 0x158)) {
          FUN_002d1f40(0xf,0x1e,0);
        }
        if (*(int *)(temp_v10 + 0xbc) == 4) {
          FUN_0020eb44(pcVar15,1);
        }
        if ((int)*(float *)(temp_v10 + 0x158) < *(int *)(temp_v10 + 0xbc)) {
          temp_v42 = *(float *)(temp_v10 + 0x54);
          temp_v44 = *(float *)(temp_v10 + 0x5c);
          temp_v34 = *(float *)(g_lmapScene + 0x1c);
          temp_v36 = *(float *)(g_lmapScene + 0x24);
          temp_v43 = *(float *)(temp_v10 + 0x58) + 35.0f;
          temp_v35 = *(float *)(g_lmapScene + 0x20) + 35.0f;
          temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0);
          if (temp_v3 == -1) {
            temp_v3 = gameGetPlayerData();
            temp_v12 = gameDataFlagTestBit(0x86);
            if (temp_v12 != 0) {
              temp_v1 = *(short *)(temp_v10 + 0x1a8);
              temp_v5 = FUN_003d21dc();
              temp_v12 = (int)temp_v1;
              if (temp_v5 != 0) {
                temp_v19 = FUN_00261424();
                temp_v8 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v17 = (float)VectorSignedToFloat((int)*(short *)(temp_v10 + 0x1a8),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v12 = (int)(temp_v17 * (temp_v8 * 0.55f + 1.0f) + temp_v8 * temp_v8 * 5.0f);
                if (temp_v12 >= 0x3e7) {
                  temp_v12 = 999;
                }
              }
              if (temp_v12 <= (int)(*(unsigned short *)(temp_v3 + 0x62) - 5)) {
                *(unsigned int *)(temp_v10 + 0xb8) = 0;
                *(unsigned int *)(temp_v10 + 0xbc) = 0;
                *(unsigned int *)(temp_v10 + 0xc0) = 10;
                break;
              }
            }
            *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) + 1;
            *(unsigned int *)(temp_v10 + 0xd4) = 0;
            *(unsigned int *)(temp_v10 + 0xb8) = 6;
            *(unsigned int *)(temp_v10 + 0xc4) = 0;
            *(unsigned int *)(temp_v10 + 0xbc) = 6;
            *(unsigned int *)(temp_v10 + 0x1a4) = 0;
            *(unsigned int *)(temp_v10 + 0x178) = 0;
          }
          else {
            *(unsigned int *)(temp_v10 + 0xb8) = 0;
            *(unsigned int *)(temp_v10 + 0xbc) = 0;
            *(unsigned int *)(temp_v10 + 0xc0) = 10;
          }
        }
        break;
      case 0x1c:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        if (*(int *)(temp_v10 + 0xbc) == 0) {
          *(int *)(temp_v4 + 0x3d78) = *(int *)(temp_v4 + 0x3d78) + 1;
          temp_v3 = temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8;
          if (*(char *)(temp_v3 + 0x3d91) != '\0') {
            temp_v3 = 0x20;
            FUN_00178b04(0x20,&LAB_002d38dc,0x1af7);
            temp_v19 = 0;
            if (temp_v3 != 0) {
              temp_v19 = FUN_0040ac08();
            }
            *(unsigned int *)(temp_v10 + 0x1b4) = temp_v19;
            moriModelContentCopyBody();
            FUN_0040ace8(g_handleRegistry,*(unsigned int *)(*(int *)(temp_v10 + 0x1b4) + 4));
            *(unsigned char *)(temp_v10 + 0x1b9) = 1;
          }
          else {
            *(unsigned int *)(temp_v10 + 0x1b4) = *(unsigned int *)(temp_v3 + 0x3d8c);
            *(unsigned char *)(temp_v4 + *(int *)(temp_v10 + 0x1b0) * 8 + 0x3d91) = 1;
            *(unsigned char *)(temp_v10 + 0x1b9) = 0;
          }
          *(unsigned char *)(temp_v10 + 0x1b8) = 1;
          *(unsigned int *)(temp_v10 + 0x6c) = 3;
          *(unsigned int *)(temp_v10 + 100) = 0;
          FUN_0020eb44(pcVar15);
        }
        temp_v30 = *(float *)(temp_v10 + 0x54);
        temp_v31 = *(float *)(temp_v10 + 0x58);
        temp_v32 = *(float *)(temp_v10 + 0x5c);
        *(unsigned char *)(temp_v10 + 0x174) = 1;
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        if (*(int *)(temp_v10 + 0xbc) == 4) {
          FUN_0020eb44(pcVar15,1);
        }
        if ((*(int *)(temp_v10 + 0xbc) >= 11) && (temp_v3 = FUN_0033b100(pcVar15), temp_v3 != 0)) {
          temp_v19 = 0x10;
          *(unsigned int *)(temp_v10 + 0xb8) = temp_v19;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        if (*(int *)(temp_v10 + 0xbc) >= 0x29) {
          temp_v3 = gameGetPlayerData();
          temp_v12 = gameDataFlagTestBit(0x86);
          if (temp_v12 != 0) {
            temp_v1 = *(short *)(temp_v10 + 0x1a8);
            temp_v5 = FUN_003d21dc();
            temp_v12 = (int)temp_v1;
            if (temp_v5 != 0) {
              temp_v19 = FUN_00261424();
              temp_v8 = (float)VectorSignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v17 = (float)VectorSignedToFloat((int)*(short *)(temp_v10 + 0x1a8),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v12 = (int)(temp_v17 * (temp_v8 * 0.55f + 1.0f) + temp_v8 * temp_v8 * 5.0f);
              if (temp_v12 >= 0x3e7) {
                temp_v12 = 999;
              }
            }
            if (temp_v12 <= (int)(*(unsigned short *)(temp_v3 + 0x62) - 5)) {
              *(unsigned int *)(temp_v10 + 0xb8) = 0;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              *(unsigned int *)(temp_v10 + 0xc0) = 9999;
              *(unsigned int *)(temp_v10 + 0xc4) = 0;
              *(unsigned int *)(temp_v10 + 0x6c) = 1;
              *(unsigned int *)(temp_v10 + 0x1a4) = 0;
              break;
            }
          }
          *(unsigned int *)(temp_v10 + 0xb8) = 0xf;
          *(unsigned int *)(temp_v10 + 0x100) = 300;
          *(unsigned int *)(temp_v10 + 0xe8) = 0x41f00000;
          *(unsigned int *)(temp_v10 + 0xec) = 0x41f00000;
          *(unsigned int *)(temp_v10 + 0xf0) = 0;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          *(unsigned int *)(temp_v10 + 0xc0) = 9999;
          *(unsigned int *)(temp_v10 + 0xc4) = 0;
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          *(unsigned int *)(temp_v10 + 0x1a4) = 0;
        }
        break;
      case 0x1e:
        if (*(short *)(temp_v10 + 0x16e) != -1) {
          FUN_00353c20(pcVar15);
        }
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        temp_v3 = FUN_0033b100(pcVar15);
        if (temp_v3 != 0) {
          *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
          *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
          break;
        }
        temp_v30 = *(float *)(temp_v10 + 0x54);
        temp_v31 = *(float *)(temp_v10 + 0x58);
        temp_v24 = *(unsigned long long *)(temp_v10 + 0x54);
        temp_v8 = *(float *)(temp_v10 + 0x5c);
        *(unsigned int *)(temp_v10 + 100) = 4;
        temp_v3 = *(int *)(temp_v10 + 0xf0) - 1;
        *(int *)(temp_v10 + 0xf0) = temp_v3;
        *(unsigned int *)(temp_v10 + 0x6c) = 1;
        temp_v32 = temp_v8;
        if (temp_v3 < 1) {
          temp_v19 = randRange(200);
          temp_v21 = (float)VectorUnsignedToFloat(temp_v19,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v17 = *(float *)(temp_v10 + 0xe8) + *(float *)(DAT_005f18bf * 0x1c + 0x580ba0) +
                   temp_v21 * 0.01f;
          *(float *)(temp_v10 + 0xe8) = temp_v17;
          temp_v20 = *(float *)(temp_v10 + 0xec);
          temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 < temp_v20) << 0x1f) |
                  ((unsigned int)(temp_v17 == temp_v20) << 0x1e);
          in_fpscr = temp_v2 | ((unsigned int)((temp_v17 != temp_v17) || (temp_v20 != temp_v20)) << 0x1c);
          temp_v14 = (unsigned char)(temp_v2 >> 0x18);
          if (!(unsigned char)((temp_v14 >> 6) & 1) && temp_v14 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
            temp_v17 = temp_v20;
          }
          *(float *)(temp_v10 + 0xe8) = temp_v17;
          if (*(char *)(temp_v10 + 0x171) == '\0') {
            temp_v17 = *(float *)(temp_v10 + 0x3c);
            temp_v20 = *(float *)(temp_v10 + 0x40);
            temp_v21 = *(float *)(temp_v10 + 0x44);
            FUN_002b5cb4();
            if ((int)temp_v17 >= 0x451c4001) {
              *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
              *(unsigned int *)(temp_v10 + 0xb8) = 9;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
          }
          if (*(char *)(temp_v10 + 0xb1) == '\0') {
            FUN_00292200();
            FUN_002b5cb4();
            temp_v16 = SBORROW4((int)temp_v17,0x453b8000);
            temp_v3 = (int)temp_v17 - 0x453b8000;
            temp_v15 = temp_v17 == 3000.0f;
            if ((int)temp_v17 < 0x453b8001) {
              temp_v12 = *(int *)(temp_v10 + 0xd4);
              temp_v16 = SBORROW4(temp_v12,0x5a);
              temp_v3 = temp_v12 - 0x5a;
              temp_v15 = temp_v12 == 0x5a;
            }
            if (!temp_v15 && temp_v3 < 0 == temp_v16) {
              *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
              *(unsigned int *)(temp_v10 + 0xb8) = 9;
              *(unsigned int *)(temp_v10 + 0xbc) = 0;
              break;
            }
          }
          temp_v42 = temp_v30;
          temp_v43 = temp_v31;
          temp_v44 = temp_v32;
          FUN_00292200();
          temp_v22 = temp_v43 + 25.0f;
          temp_v18 = temp_v20 + 25.0f;
          temp_v34 = temp_v17;
          temp_v35 = temp_v18;
          temp_v36 = temp_v21;
          temp_v43 = temp_v22;
          temp_v3 = FUN_0036d984(&temp_v34,&temp_v42,0);
          if (temp_v3 != -1) {
            *(int *)(temp_v10 + 0xd4) = *(int *)(temp_v10 + 0xd4) + 1;
            *(unsigned int *)(temp_v10 + 0xf0) = 0;
          }
          else {
            *(unsigned int *)(temp_v10 + 0xd4) = 0;
            temp_v3 = randRange(2);
            *(int *)(temp_v10 + 0xf0) = temp_v3 + 2;
            FUN_00292200();
            *(float *)(temp_v10 + 0xf4) = temp_v18;
            *(float *)(temp_v10 + 0xf8) = temp_v20;
            *(float *)(temp_v10 + 0xfc) = temp_v22;
          }
        }
        if (*(int *)(temp_v10 + 0xd4) >= 0xf) {
          *(unsigned int *)(temp_v10 + 100) = 1;
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
        }
        else {
          FUN_002b5cb4();
          FUN_0050d8e4();
          temp_v17 = *(float *)(temp_v10 + 0x60);
          FUN_00303a5c();
          temp_v20 = 0.017453292f;
          *(float *)(temp_v10 + 0x60) = temp_v17;
          temp_v17 = temp_v17 * 0.017453292f;
          FUN_001bc124();
          temp_v30 = temp_v30 + temp_v17 * *(float *)(temp_v10 + 0xe8);
          temp_v20 = *(float *)(temp_v10 + 0x60) * temp_v20;
          FUN_001bbf0c();
          temp_v32 = temp_v32 + temp_v20 * *(float *)(temp_v10 + 0xe8);
        }
        temp_v3 = 0;
        do {
          if ((temp_v3 != temp_v11) &&
             (temp_v12 = temp_v4 + temp_v3 * 0x188, *(char *)(temp_v12 + 0x34) != '\0')) {
            temp_v17 = (float)temp_v24;
            FUN_002b5cb4();
            if ((int)temp_v17 < 0x3f800000) {
              temp_v17 = 1.0f;
            }
            else if ((int)temp_v17 >= 0x42480000) goto LAB_002d4c0c;
            temp_v17 = 1.0f / temp_v17;
            temp_v30 = temp_v30 - (*(float *)(temp_v12 + 0x54) - (float)temp_v24) * temp_v17 * 5.0f;
            temp_v31 = temp_v31 -
                       (*(float *)(temp_v12 + 0x58) - (float)((unsigned long long)temp_v24 >> 0x20)) * temp_v17 *
                       5.0f;
            temp_v32 = temp_v32 - (*(float *)(temp_v12 + 0x5c) - temp_v8) * temp_v17 * 5.0f;
            break;
          }
LAB_002d4c0c:
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x28);
        temp_v8 = temp_v31 - 5.0f;
        temp_v31 = temp_v8;
        FUN_002826dc(&temp_v30,&temp_v37,0);
        *(float *)(temp_v10 + 0x54) = temp_v37;
        *(float *)(temp_v10 + 0x58) = fStack_bc;
        *(float *)(temp_v10 + 0x5c) = fStack_b8;
        FUN_00292200();
        FUN_002b5cb4();
        if ((int)temp_v8 < 0x43160000) {
          *(unsigned int *)(temp_v10 + 100) = 5;
          *(unsigned int *)(temp_v10 + 0x68) = 0xffffffff;
          *(unsigned int *)(temp_v10 + 0x6c) = 1;
          FUN_00272e0c(9);
          *(unsigned int *)(temp_v10 + 0xb8) = 0x1f;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        temp_v1 = *(short *)(temp_v10 + 0x16c) - 1;
        *(short *)(temp_v10 + 0x16c) = temp_v1;
        if (temp_v1 < 1) {
          FUN_00303e88();
          temp_v1 = randRange(2);
          *(short *)(temp_v10 + 0x16c) = temp_v1 + 9;
        }
        temp_v3 = *(int *)(temp_v10 + 0xbc);
joined_r0x002d4cd0:
        if (temp_v3 >= 0x1e) break;
        vec4Forward(*(unsigned int *)(temp_v10 + 0x1a0));
        break;
      case 0x1f:
        *(int *)(temp_v10 + 0xbc) = *(int *)(temp_v10 + 0xbc) + 1;
        DAT_005f1ad0 = *(unsigned int *)(temp_v10 + 0x38);
        temp_v3 = FUN_0033b100(pcVar15);
        if (temp_v3 != 0) {
          *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
          *(unsigned int *)(temp_v10 + 0xb8) = 0x10;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        else {
          temp_v3 = byte76Get();
          if (temp_v3 != 0) {
            byte76Set(0);
            *(unsigned int *)(temp_v10 + 100) = 5;
            *(unsigned int *)(temp_v10 + 0x68) = 0xffffffff;
          }
          if (*(int *)(temp_v10 + 0xbc) < 0x5b) break;
          *(int *)(temp_v4 + 0x3d7c) = *(int *)(temp_v4 + 0x3d7c) - 1;
          *(unsigned int *)(temp_v10 + 0xb8) = 0xb;
          *(unsigned int *)(temp_v10 + 0xbc) = 0;
        }
        gameDataBlocksAddFloat();
      }
    }
LAB_002d7c04:
    temp_v11 = temp_v11 + 1;
    if (temp_v11 >= 0x28) {
      temp_v11 = 0;
      do {
        temp_v10 = temp_v4 + temp_v11 * 0x188;
        if (*(char *)(temp_v10 + 0x34) != '\0') {
          temp_v30 = *(float *)(temp_v10 + 0x54);
          temp_v31 = *(float *)(temp_v10 + 0x58);
          temp_v32 = *(float *)(temp_v10 + 0x5c);
          temp_v19 = *(unsigned int *)(g_lmapScene + 0x1c);
          FUN_002b5cb4();
          *(unsigned int *)(temp_v10 + 0x70) = temp_v19;
        }
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < 0x28);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
