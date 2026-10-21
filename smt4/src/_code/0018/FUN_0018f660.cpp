/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018f660` (_code @ 0x18f660, 0x127c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdAnimGetTrackLastFrame(...);
int statusDownRestoreTabForMode(void);
int FUN_00296284(...);
int statusCameraApply(void);
int eventQueueAddUnique(...);
int FUN_002b8ee0(...);
int eventQueueAddUniqueIfValid(...);
int timerStart(...);
int FUN_002bee58(...);
int FUN_002c1658(...);
int __aeabi_uidivmod(...);

int FUN_0020ffe8(...);
int objSetAnglesDegrees(...);
int FUN_00293e08(...);
int FUN_00293e78(...);
int FUN_00293f10(...);
int aocHandleButtons(...);
int FUN_002942c4(int, int);
int FUN_00294450(...);
int FUN_002945a4(...);
int playerModelListCreate(void);
int FUN_00294834(int, int, int, int);
int FUN_00294d6c(void);
int FUN_00294e18(int);
int FUN_00294f64(void);
int FUN_00294fe0(...);
int FUN_002950e8(...);
int FUN_002958f8(...);
int FUN_00297684(...);
int FUN_0029ae60(int);
int lmapSceneSetUnk134(int);
int FUN_002a09b4(unsigned char *, int);
int dataTable00FindById(void);
int FUN_002bf818(...);
int asdOperatorNew(void);
int VectorSignedToFloat(...);

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned char LAB_0018fd9c; /* 0x18fd9c */
extern unsigned char DAT_004207d8; /* 0x4207d8 */
extern unsigned char DAT_0044e142; /* 0x44e142 */
extern char *DAT_0044e144; /* 0x44e144 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0020ffe8. */
/* Supplied declaration required: asdAnimGetTrackLastFrame. */
extern int FUN_00293a60(void);
extern int FUN_00293a88(void);
extern int FUN_00293aac(void);
extern int FUN_00293ac0(void);
extern int FUN_00293b8c(void);
/* Supplied declaration required: statusDownRestoreTabForMode. */
/* Supplied declaration required: objSetAnglesDegrees. */
/* Supplied declaration required: FUN_00293e08. */
/* Supplied declaration required: FUN_00293e78. */
extern int objSlotsAllEmpty(unsigned int);
/* Supplied declaration required: FUN_00293f10. */
/* Supplied declaration required: aocHandleButtons. */
extern unsigned int FUN_00294090(int, unsigned int);
/* Supplied declaration required: FUN_002942c4. */
/* Supplied declaration required: FUN_00294450. */
/* Supplied declaration required: FUN_002945a4. */
/* Supplied declaration required: playerModelListCreate. */
extern unsigned int *_ZN9Obj4206e8C1Ev(void);
/* Supplied declaration required: FUN_00294834. */
/* Supplied declaration required: FUN_00294d6c. */
/* Supplied declaration required: FUN_00294e18. */
/* Supplied declaration required: FUN_00294f64. */
/* Supplied declaration required: FUN_00294fe0. */
extern int nkdwHeaderParse(unsigned int);
/* Supplied declaration required: FUN_002950e8. */
/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: FUN_00296284. */
/* Supplied declaration required: FUN_00297684. */
/* Supplied declaration required: FUN_0029ae60. */
/* Supplied declaration required: lmapSceneSetUnk134. */
extern int FUN_0029c46c(void);
extern int FUN_0029c48c(void);
extern int useCounterIsFinished(void);
extern int FUN_0029e9cc(unsigned short);
/* Supplied declaration required: FUN_002a09b4. */
extern int lmapSceneGetScript(void);
/* Supplied declaration required: statusCameraApply. */
extern unsigned int categoryGetColor(unsigned int);
/* Supplied declaration required: dataTable00FindById. */
extern int lmapMainIsRunning(void);
/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: FUN_002b8ee0. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: timerStart. */
extern unsigned int vec2GetXInt(char *);
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf818. */
extern int padIsButtonPressed(unsigned int);
extern int FUN_002c15fc(unsigned int);
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: __aeabi_uidivmod. */


unsigned int FUN_0018f660(void)

{
/* irregular: 10 goto(s); irregular input(s): in_fpscr, in_s0; 38 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  char *pcVar4;
  char *pcVar5;
  unsigned int temp_v3;
  unsigned int *puVar7;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned short *puVar12;
  char *pcVar13;
  int *piVar14;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  char *temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  
  pcVar4 = DAT_0044e144;
  pcVar5 = DAT_0044e144 + 0x15c;
  DAT_0044e144[0x12ec] = '\0';
  FUN_002bf818(pcVar5);
  FUN_002bf818(pcVar4 + 0x1e8);
  if (pcVar4[0x1eb4] != '\0') {
    FUN_002bf818(pcVar4 + 0x274);
    FUN_002bf818(pcVar4 + 0x300);
    if ((pcVar4[0x2fe] != '\0') && (pcVar4[0x38a] != '\0')) {
      pcVar4[0x1eb4] = '\0';
    }
  }
  temp_v11 = 0.025f;
  temp_v10 = 0.0f;
  switch(*(unsigned int *)(pcVar4 + 0x12dc)) {
  case 1:
    if (pcVar4[0x1e67] == '\t') {
      pcVar4[0x12dc] = '\0';
      pcVar4[0x12dd] = '\0';
      pcVar4[0x12de] = '\0';
      pcVar4[0x12df] = '\0';
      pcVar4[0x12f2] = '\x01';
      *(int *)(pcVar4 + 0x10) = *(int *)(pcVar4 + 0x10) + 1;
      *(int *)(pcVar4 + 0x14) = *(int *)(pcVar4 + 0x14) + 1;
      return 0;
    }
    FUN_002950e8(pcVar4 + 0x418,1);
    FUN_002950e8(pcVar4 + 0x4a4,0);
    if ((*(int *)(pcVar4 + 0x10) >= 6) && (temp_v7 = FUN_002bf818(pcVar4 + 0x530), temp_v7 != 0)) {
      pcVar4[0x12dc] = '\0';
      pcVar4[0x12dd] = '\0';
      pcVar4[0x12de] = '\0';
      pcVar4[0x12df] = '\0';
      pcVar4[0x12f2] = '\x01';
    }
    break;
  case 2:
    temp_v2 = 1;
    temp_v7 = 6;
    do {
      temp_v4 = FUN_002bf818(pcVar4 + temp_v7 * 0x8c + 0x44);
      if (temp_v4 == 0) {
        temp_v2 = 0;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x22);
    if (temp_v2) {
      if (pcVar4[0x1e7c] != '\0') {
        temp_v7 = nkdwHeaderParse(*(unsigned int *)(pcVar4 + 0x1e74));
        if (temp_v7 == 0) break;
        pcVar4[0x1e7c] = '\0';
      }
      if (pcVar4[0x1e7d] != '\0') {
        temp_v7 = FUN_00294fe0(*(unsigned int *)(pcVar4 + 0x1e74));
        if (temp_v7 == 0) break;
        pcVar4[0x1e7d] = '\0';
      }
      pcVar4[0x1e61] = '\0';
      pcVar4[0x1e60] = '\0';
      pcVar5 = DAT_0044e144;
      pcVar5[0x10] = '\0';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x12dc] = '\x03';
      pcVar5[0x12dd] = '\0';
      pcVar5[0x12de] = '\0';
      pcVar5[0x12df] = '\0';
    }
    break;
  case 4:
    pcVar4[0x1e7c] = '\0';
    pcVar4[0x1e7d] = '\0';
    if (*(int *)(pcVar4 + 0x12e0) == 0) {
      pcVar4[0x1e60] = '\0';
    }
    else {
      pcVar4[0x1e60] = '\x01';
    }
    if (*(short *)(pcVar4 + 0x12fc) != 0) {
      FUN_002958f8((int)*(short *)(pcVar4 + 0x12fc),1);
      pcVar4[0x12fc] = '\0';
      pcVar4[0x12fd] = '\0';
    }
    if ((0 < *(short *)(pcVar4 + 0x12fe)) && (*(int *)(pcVar4 + 0x1e74) != 0)) {
      FUN_00294f64();
      *(int *)(pcVar4 + 0x1e74) = 0;
    }
    if (!(pcVar4[0x1e67] == '\x03' || pcVar4[0x1e67] == '\t')) {
      puVar12 = (unsigned short *)(pcVar4 + 0x1300);
      temp_v14 = DAT_0044e144;
      temp_v3 = (unsigned int)*puVar12;
      dataTable00FindById();
      if ((((temp_v3 == 0) || (temp_v5 = *(unsigned char *)(temp_v3 + 0xa5), (temp_v5 & 1) == 0)) &&
          ((temp_v5 = temp_v14[0x12ed], temp_v5 == 0 ||
           ((temp_v3 != 0 && ((*(unsigned char *)(temp_v3 + 3) & 1) != 0)))))) || ((short)*puVar12 < 0)) {
        temp_v1 = *puVar12;
        temp_v7 = (int)(short)temp_v1;
        if (temp_v7 != 0) {
          temp_v5 = 1;
        }
        *(unsigned short *)(pcVar4 + 0x12fc) = temp_v1;
        if (temp_v7 != 0) {
          FUN_002942c4(temp_v7,temp_v5);
        }
      }
      else {
        temp_v3 = (unsigned int)*puVar12;
        dataTable00FindById();
        if (*(short *)(temp_v3 + 0xa6) < 1) {
          *(unsigned short *)(pcVar4 + 0x12fe) = *(unsigned short *)(temp_v3 + 0x88);
        }
        else {
          *(short *)(pcVar4 + 0x12fe) = *(short *)(temp_v3 + 0xa6);
        }
        if (0 < *(short *)(pcVar4 + 0x12fe)) {
          temp_v6 = FUN_00294090((int)*(short *)(pcVar4 + 0x12fe),1);
          *(unsigned int *)(pcVar4 + 0x1e74) = temp_v6;
          pcVar4[0x1e78] = '\0';
          pcVar4[0x1e79] = '\0';
          pcVar4[0x1e7a] = '\0';
          pcVar4[0x1e7b] = '\0';
          pcVar4[0x1e7c] = '\x01';
          pcVar5 = DAT_0044e144;
          pcVar5[0x10] = '\0';
          pcVar5[0x11] = '\0';
          pcVar5[0x12] = '\0';
          pcVar5[0x13] = '\0';
          pcVar5[0x12dc] = '\x05';
          pcVar5[0x12dd] = '\0';
          pcVar5[0x12de] = '\0';
          pcVar5[0x12df] = '\0';
          break;
        }
      }
    }
    else {
      pcVar4[0x1ea0] = '\0';
      pcVar4[0x1ea1] = '\0';
      pcVar4[0x1ea2] = '\0';
      pcVar4[0x1ea3] = '\0';
      FUN_00294e18(0);
      pcVar4[0x1ea4] = '\0';
      FUN_00294d6c();
      temp_v7 = lmapSceneGetScript();
      if ((temp_v7 != 0) || (temp_v7 = lmapMainIsRunning(), temp_v7 != 0)) {
        temp_v19 = 0x96;
        temp_v20 = 0x96;
        temp_v21 = 0x96;
        temp_v14 = (char *)0x82;
        temp_v15 = 1.82169e-43f;
        temp_v18 = 0x1e;
        temp_v16 = 0x1e;
        temp_v17 = 0x1e;
        FUN_00294834(200,200,200,0x82);
      }
      pcVar4[0x1e9c] = -0x5a;
      pcVar4[0x1e9d] = -0x65;
      pcVar4[0x1e9e] = 'D';
      pcVar4[0x1e9f] = '<';
      pcVar4[0x1e94] = '\0';
      pcVar4[0x1e95] = '\0';
      pcVar4[0x1e96] = -0x51;
      pcVar4[0x1e97] = 'C';
      pcVar4[0x1e84] = -0x66;
      pcVar4[0x1e85] = -0x67;
      pcVar4[0x1e86] = -0x67;
      pcVar4[0x1e87] = '?';
      pcVar4[0x1e88] = -0x66;
      pcVar4[0x1e89] = -0x67;
      pcVar4[0x1e8a] = -0x57;
      pcVar4[0x1e8b] = '@';
      pcVar4[0x1e8c] = '\0';
      pcVar4[0x1e8d] = '\0';
      pcVar4[0x1e8e] = '\0';
      pcVar4[0x1e8f] = '?';
      temp_v7 = lmapSceneGetScript();
      piVar14 = (int *)(pcVar4 + 0x1e80);
      *piVar14 = temp_v7;
      pcVar4[0x12fe] = -1;
      pcVar4[0x12ff] = -1;
      if (temp_v7 != 0) {
        in_s0 = temp_v10;
        lmapSceneSetUnk134(0);
        FUN_0029ae60(*piVar14);
        DAT_0044e142 = 0;
      }
      else {
        temp_v7 = 0x100;
        asdOperatorNew();
        puVar7 = (unsigned int *)0x0;
        if (temp_v7 != 0) {
          puVar7 = (unsigned int *)_ZN9Obj4206e8C1Ev();
          *puVar7 = (unsigned int)&DAT_004207d8;
        }
        *piVar14 = (int)puVar7;
        DAT_0044e142 = 1;
        playerModelListCreate();
        in_s0 = temp_v10;
        temp_v7 = lmapMainIsRunning();
        if (temp_v7 == 0) {
          FUN_002a09b4(&LAB_0018fd9c,0);
        }
      }
      pcVar4[0x12f8] = '\0';
      pcVar4[0x12f9] = '\0';
      pcVar4[0x12fa] = '\0';
      pcVar4[0x12fb] = '\0';
      FUN_0020ffe8(*piVar14,0);
      if (*(unsigned int *)(pcVar4 + 0x1ea8) != 0) {
        FUN_002945a4(*piVar14,0,*(unsigned int *)(pcVar4 + 0x1ea8) & 0xffff,7);
      }
      else {
        FUN_00294450(*piVar14,0,7);
      }
      if (*(unsigned int *)(pcVar4 + 0x1eac) != 0) {
        FUN_002945a4(*piVar14,1,*(unsigned int *)(pcVar4 + 0x1eac) & 0xffff,7);
      }
      else {
        FUN_00294450(*piVar14,1,7);
      }
      if (*(unsigned int *)(pcVar4 + 0x1eb0) != 0) {
        FUN_002945a4(*piVar14,2,*(unsigned int *)(pcVar4 + 0x1eb0) & 0xffff,7);
      }
      else {
        FUN_00294450(*piVar14,2,7);
      }
    }
LAB_0018fbe4:
    pcVar5 = DAT_0044e144;
    pcVar5[0x10] = '\0';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x12dc] = '\x06';
    pcVar5[0x12dd] = '\0';
    pcVar5[0x12de] = '\0';
    pcVar5[0x12df] = '\0';
    break;
  case 5:
    temp_v7 = nkdwHeaderParse(*(unsigned int *)(pcVar4 + 0x1e74));
    if (temp_v7 != 0) {
      pcVar4[0x1e7c] = '\0';
      pcVar4[0x1e7d] = '\x01';
      aocHandleButtons(*(unsigned int *)(pcVar4 + 0x1e74),7);
      goto LAB_0018fbe4;
    }
    break;
  case 6:
    pcVar5 = pcVar4 + 0x1e67;
    if (!(*pcVar5 == '\x03' || *pcVar5 == '\t')) {
      temp_v7 = (int)*(short *)(pcVar4 + 0x12fc);
      if (temp_v7 != 0) {
        FUN_00293f10(temp_v7,1);
        if (temp_v7 != 0) goto LAB_0018fd84;
      }
      else {
        if (*(int *)(pcVar4 + 0x1e74) == 0) {
          pcVar4[0x1e7c] = '\0';
          pcVar4[0x1e7d] = '\0';
          goto LAB_0018fe5c;
        }
        if ((*(short *)(pcVar4 + 0x12fe) < 1) || (temp_v7 = FUN_00294fe0(), temp_v7 != 0)) {
          pcVar4[0x1e7c] = '\0';
          pcVar4[0x1e7d] = '\0';
          goto LAB_0018fd84;
        }
      }
    }
    else {
      pcVar13 = pcVar4 + 0x1e80;
      FUN_00297684(*(unsigned int *)pcVar13);
      temp_v7 = objSlotsAllEmpty(*(unsigned int *)pcVar13);
      if (temp_v7 != 0) {
        temp_v6 = vec2GetXInt(pcVar4 + 0x38c);
        temp_v15 = *(float *)(pcVar4 + 0x1e88);
        temp_v16 = *(unsigned int *)(pcVar4 + 0x1e8c);
        temp_v10 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v14 = (char *)romwright_f2u((float)((*(float *)(pcVar4 + 0x1e84) + temp_v10 * temp_v11)));
        FUN_00293e78(*(unsigned int *)pcVar13,&temp_v14);
        in_s0 = *(float *)(pcVar4 + 0x1e9c);
        FUN_00293e08(*(unsigned int *)pcVar13);
        objSetAnglesDegrees(*(unsigned int *)pcVar13,pcVar4 + 0x1e90);
LAB_0018fd84:
        if ((pcVar4[0x12f2] != '\0') || ((*pcVar5 != '\x03' && (*pcVar5 != '\t')))) {
          timerStart(pcVar4 + 0x38c,1,0);
          pcVar4[0x12f2] = '\0';
        }
        if (*(int *)(pcVar4 + 0x12e0) != 0) {
          pcVar13 = DAT_0044e144;
          if (*(int *)(pcVar4 + 0x12e0) != 4) {
            if (!(*pcVar5 == '\x05' || *pcVar5 == '\x06')) {
              pcVar13[0x10] = '\0';
              pcVar13[0x11] = '\0';
              pcVar13[0x12] = '\0';
              pcVar13[0x13] = '\0';
              pcVar13[0x12dc] = '\b';
              pcVar13[0x12dd] = '\0';
              pcVar13[0x12de] = '\0';
              pcVar13[0x12df] = '\0';
            }
            else {
              pcVar4[0x6cd] = '\0';
              pcVar4[0x759] = '\0';
              pcVar4[0x7e5] = '\0';
              timerStart(pcVar4 + 0x648,8,0);
              timerStart(pcVar4 + 0x6d4,9,0);
              FUN_002bee58(pcVar4 + 0x760,5);
              pcVar5 = DAT_0044e144;
              pcVar5[0x10] = '\0';
              pcVar5[0x11] = '\0';
              pcVar5[0x12] = '\0';
              pcVar5[0x13] = '\0';
              pcVar5[0x12dc] = '\a';
              pcVar5[0x12dd] = '\0';
              pcVar5[0x12de] = '\0';
              pcVar5[0x12df] = '\0';
            }
            temp_v0 = pcVar4[0x1e66];
            if ((temp_v0 == '\b' || temp_v0 == '\t') ||
               ((temp_v0 == '\n' || temp_v0 == '\v') || temp_v0 == '\a')) {
              pcVar4[0x12e8] = '\x01';
              pcVar4[0x12e9] = '\0';
              pcVar4[0x12ea] = '\0';
              pcVar4[0x12eb] = '\0';
              statusDownRestoreTabForMode();
            }
          }
          else {
            pcVar13[0x10] = '\0';
            pcVar13[0x11] = '\0';
            pcVar13[0x12] = '\0';
            pcVar13[0x13] = '\0';
            pcVar13[0x12dc] = '\x04';
            pcVar13[0x12dd] = '\0';
            pcVar13[0x12de] = '\0';
            pcVar13[0x12df] = '\0';
            pcVar4[0x12e0] = '\b';
            pcVar4[0x12e1] = '\0';
            pcVar4[0x12e2] = '\0';
            pcVar4[0x12e3] = '\0';
          }
        }
        else {
LAB_0018fe5c:
          pcVar5 = DAT_0044e144;
          pcVar5[0x10] = '\0';
          pcVar5[0x11] = '\0';
          pcVar5[0x12] = '\0';
          pcVar5[0x13] = '\0';
          pcVar5[0x12dc] = '\0';
          pcVar5[0x12dd] = '\0';
          pcVar5[0x12de] = '\0';
          pcVar5[0x12df] = '\0';
        }
      }
    }
    break;
  case 7:
    temp_v7 = FUN_002bf818(pcVar4 + 0x648);
    if (((temp_v7 != 0) && (temp_v7 = FUN_002bf818(pcVar4 + 0x6d4), temp_v7 != 0)) &&
       (temp_v7 = FUN_002bf818(pcVar4 + 0x760), temp_v7 != 0)) {
      pcVar5 = DAT_0044e144;
      pcVar5[0x10] = '\0';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x12dc] = '\b';
      pcVar5[0x12dd] = '\0';
      pcVar5[0x12de] = '\0';
      pcVar5[0x12df] = '\0';
    }
    break;
  case 8:
    temp_v14 = pcVar4 + 0x1e67;
    pcVar4[0x1e63] = '\0';
    if (*temp_v14 != '\x03') {
      if ((*temp_v14 != '\t') || (pcVar4[0x1e60] == '\0')) goto LAB_00190190;
      if (pcVar4[0x1e64] == '\0') goto LAB_0018ffcc;
    }
    else {
      if (pcVar4[0x1e65] == '\0') {
LAB_0018ffcc:
        if (*(short *)(pcVar4 + 0x12fe) < 0) {
          temp_v7 = FUN_002c15fc(0xe);
          temp_v12 = 0.0005f;
          if (temp_v7 != 0) {
            if ((int)*(float *)(pcVar4 + 0x1e9c) < 0x3cf5c28f) {
              *(float *)(pcVar4 + 0x1e9c) = *(float *)(pcVar4 + 0x1e9c) + 0.0005f;
              *(int *)(pcVar4 + 0x1ea0) = *(int *)(pcVar4 + 0x1ea0) + 1;
            }
            FUN_00293e08(*(unsigned int *)(pcVar4 + 0x1e80));
            FUN_00294d6c();
          }
          temp_v7 = FUN_002c15fc(0xf);
          if (temp_v7 != 0) {
            if ((int)*(float *)(pcVar4 + 0x1e9c) >= 0x3c449ba7) {
              *(float *)(pcVar4 + 0x1e9c) = *(float *)(pcVar4 + 0x1e9c) - temp_v12;
              *(int *)(pcVar4 + 0x1ea0) = *(int *)(pcVar4 + 0x1ea0) - 1;
            }
            FUN_00293e08(*(unsigned int *)(pcVar4 + 0x1e80));
            FUN_00294d6c();
          }
          temp_v7 = FUN_002c15fc(0xd);
          temp_v12 = 5.0f;
          temp_v13 = 360.0f;
          if (temp_v7 != 0) {
            temp_v9 = *(float *)(pcVar4 + 0x1e94) - 5.0f;
            *(float *)(pcVar4 + 0x1e94) = temp_v9;
            temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v10 < temp_v9) << 0x1f) |
                    ((unsigned int)(temp_v10 == temp_v9) << 0x1e);
            in_fpscr = temp_v3 | ((unsigned int)((temp_v10 != temp_v10) || (temp_v9 != temp_v9)) << 0x1c);
            temp_v5 = (unsigned char)(temp_v3 >> 0x18);
            if (!(unsigned char)((temp_v5 >> 6) & 1) && temp_v5 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              *(float *)(pcVar4 + 0x1e94) = temp_v9 + 360.0f;
            }
          }
          temp_v7 = FUN_002c15fc(0xc);
          if (temp_v7 != 0) {
            temp_v12 = *(float *)(pcVar4 + 0x1e94) + temp_v12;
            *(float *)(pcVar4 + 0x1e94) = temp_v12;
            if ((int)temp_v12 >= 0x43b40001) {
              *(float *)(pcVar4 + 0x1e94) = temp_v12 - temp_v13;
            }
          }
          pcVar5 = pcVar4 + 0x1e80;
          objSetAnglesDegrees(*(unsigned int *)pcVar5,pcVar4 + 0x1e90);
          statusCameraApply();
          FUN_00297684(*(unsigned int *)pcVar5);
          temp_v6 = vec2GetXInt(pcVar4 + 0x38c);
          temp_v16 = *(unsigned int *)(pcVar4 + 0x1e88);
          temp_v17 = *(unsigned int *)(pcVar4 + 0x1e8c);
          temp_v12 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = *(float *)(pcVar4 + 0x1e84) + temp_v12 * temp_v11;
          temp_v15 = in_s0;
          FUN_00293e78(*(unsigned int *)pcVar5,&temp_v15);
        }
      }
LAB_00190190:
      if ((pcVar4[0x1e64] == '\0') && (temp_v7 = useCounterIsFinished(), temp_v7 != 0)) {
        temp_v4 = FUN_00293b8c();
        pcVar4[0x12ec] = (char)temp_v4;
        temp_v6 = 0x100016c;
        temp_v7 = temp_v4;
        if (temp_v4 < 0) {
          temp_v7 = -1;
        }
        if (0 < temp_v4) {
          pcVar4[0x12e8] = '\x01';
          pcVar4[0x12e9] = '\0';
          pcVar4[0x12ea] = '\0';
          pcVar4[0x12eb] = '\0';
        }
        if (temp_v4 < 0) {
          *(int *)(pcVar4 + 0x12e8) = temp_v7;
        }
        if (temp_v4 == 0) {
          temp_v7 = padIsButtonPressed(2);
          pcVar5 = DAT_0044e144;
          if (temp_v7 != 0) {
            eventQueueAddUnique(0x100016d);
            if (!(*temp_v14 == '\x03' || *temp_v14 == '\t')) {
              if (*(short *)(pcVar4 + 0x12fc) != 0) {
                FUN_002958f8((int)*(short *)(pcVar4 + 0x12fc),1);
                pcVar4[0x12fc] = '\0';
                pcVar4[0x12fd] = '\0';
              }
              if ((0 < *(short *)(pcVar4 + 0x12fe)) && (*(int *)(pcVar4 + 0x1e74) != 0)) {
                FUN_00294f64();
                *(int *)(pcVar4 + 0x1e74) = 0;
                pcVar4[0x12fe] = -1;
                pcVar4[0x12ff] = -1;
              }
              pcVar4[0x12ed] = pcVar4[0x12ed] ^ 1;
              pcVar5 = DAT_0044e144;
              pcVar5[0x10] = '\0';
              pcVar5[0x11] = '\0';
              pcVar5[0x12] = '\0';
              pcVar5[0x13] = '\0';
              pcVar5[0x12dc] = '\x04';
              pcVar5[0x12dd] = '\0';
              pcVar5[0x12de] = '\0';
              pcVar5[0x12df] = '\0';
            }
            else {
              temp_v14 = (char *)0x0;
              temp_v15 = 2.8026e-45f;
              temp_v16 = 0x12;
              temp_v7 = *(int *)(pcVar4 + 0x12f8);
              *(int *)(pcVar4 + 0x12f8) = temp_v7 + 1;
              if (temp_v7 + 1 >= 3) {
                pcVar4[0x12f8] = '\0';
                pcVar4[0x12f9] = '\0';
                pcVar4[0x12fa] = '\0';
                pcVar4[0x12fb] = '\0';
              }
              FUN_0020ffe8(*(unsigned int *)(pcVar4 + 0x1e80),(&temp_v14)[*(int *)(pcVar4 + 0x12f8)]);
              in_s0 = temp_v10;
            }
          }
          else {
            if ((((((DAT_0044e144[0x1e61] != '\0') && (DAT_0044e144[0x1e60] != '\0')) &&
                  (temp_v7 = FUN_00293ac0(), temp_v7 >= 2)) &&
                 ((temp_v7 = FUN_00293aac(), temp_v7 != 0 || (*(int *)(pcVar5 + 0x14) >= 0xc)))) &&
                (temp_v7 = FUN_0029c46c(), temp_v7 != 0)) &&
               (((temp_v7 = FUN_0029c48c(), temp_v7 != 0 && (temp_v7 = FUN_00293a88(), temp_v7 != 0)) &&
                (temp_v7 = FUN_00293a60(), temp_v7 == 0)))) {
              temp_v7 = 8;
              FUN_002c1658(8,0);
              if (temp_v7 != 0) {
                temp_v7 = FUN_00293ac0();
                temp_v4 = *(int *)(pcVar4 + 0x12e4) - 1;
                if (temp_v4 < 0) {
                  temp_v7 = temp_v7 - 1;
                }
                *(int *)(pcVar4 + 0x12e4) = temp_v4;
                if (temp_v4 < 0) {
                  *(int *)(pcVar4 + 0x12e4) = temp_v7;
                }
                pcVar4[0x12e8] = -1;
                pcVar4[0x12e9] = -1;
                pcVar4[0x12ea] = -1;
                pcVar4[0x12eb] = -1;
                statusDownRestoreTabForMode();
                temp_v6 = 0x100016f;
                goto LAB_001903c0;
              }
            }
            pcVar13 = DAT_0044e144;
            pcVar5 = DAT_0044e144 + 0x1e00;
            if (DAT_0044e144[0x1e61] != '\0') {
              pcVar5 = (char *)(unsigned int)(unsigned char)DAT_0044e144[0x1e60];
            }
            if (((DAT_0044e144[0x1e61] != '\0' && pcVar5 != (char *)0x0) &&
                (temp_v7 = FUN_00293ac0(), temp_v7 >= 2)) &&
               (((temp_v7 = FUN_00293aac(), temp_v7 != 0 || (*(int *)(pcVar13 + 0x14) >= 0xc)) &&
                ((((temp_v7 = FUN_0029c46c(), temp_v7 != 0 && (temp_v7 = FUN_0029c48c(), temp_v7 != 0))
                  && (temp_v7 = FUN_00293a88(), temp_v7 != 0)) &&
                 (temp_v7 = FUN_00293a60(), temp_v7 == 0)))))) {
              temp_v7 = 7;
              FUN_002c1658(7,0);
              if (temp_v7 != 0) {
                temp_v7 = FUN_00293ac0();
                temp_v4 = *(int *)(pcVar4 + 0x12e4);
                *(int *)(pcVar4 + 0x12e4) = temp_v4 + 1;
                if (temp_v7 <= temp_v4 + 1) {
                  pcVar4[0x12e4] = '\0';
                  pcVar4[0x12e5] = '\0';
                  pcVar4[0x12e6] = '\0';
                  pcVar4[0x12e7] = '\0';
                }
                pcVar4[0x12e8] = '\x01';
                pcVar4[0x12e9] = '\0';
                pcVar4[0x12ea] = '\0';
                pcVar4[0x12eb] = '\0';
                statusDownRestoreTabForMode();
                temp_v6 = 0x100016f;
                goto LAB_001903c0;
              }
            }
            pcVar13 = DAT_0044e144;
            pcVar5 = DAT_0044e144 + 0x1e00;
            if (DAT_0044e144[0x1e61] != '\0') {
              pcVar5 = (char *)(unsigned int)(unsigned char)DAT_0044e144[0x1e60];
            }
            if ((((DAT_0044e144[0x1e61] != '\0' && pcVar5 != (char *)0x0) &&
                 (temp_v7 = FUN_00293ac0(), temp_v7 >= 2)) &&
                ((temp_v7 = FUN_00293aac(), temp_v7 != 0 || (*(int *)(pcVar13 + 0x14) >= 0xc)))) &&
               ((((temp_v7 = FUN_0029c46c(), temp_v7 != 0 && (temp_v7 = FUN_0029c48c(), temp_v7 != 0))
                 && (temp_v7 = FUN_00293a88(), temp_v7 != 0)) &&
                ((temp_v7 = FUN_00293a60(), temp_v7 == 0 && (*(int *)(pcVar4 + 0x12e4) != 0)))))) {
              temp_v7 = 1;
              FUN_002c1658();
              if (temp_v7 != 0) {
                pcVar4[0x12e8] = '\x01';
                pcVar4[0x12e9] = '\0';
                pcVar4[0x12ea] = '\0';
                pcVar4[0x12eb] = '\0';
                pcVar4[0x12e4] = '\0';
                pcVar4[0x12e5] = '\0';
                pcVar4[0x12e6] = '\0';
                pcVar4[0x12e7] = '\0';
                statusDownRestoreTabForMode();
                temp_v6 = 0x100016e;
                goto LAB_001903c0;
              }
            }
            if (*temp_v14 == '\x03') {
              temp_v7 = 10;
              FUN_002c1658(10,1);
              if (temp_v7 != 0) {
                pcVar4[0x12f0] = pcVar4[0x12f0] != '\x01';
                timerStart(pcVar4 + 0x5bc,7,0);
                temp_v6 = 0x100016d;
                eventQueueAddUniqueIfValid(temp_v6);
              }
            }
          }
        }
        else {
LAB_001903c0:
          eventQueueAddUniqueIfValid(temp_v6);
        }
      }
    }
    pcVar5 = DAT_0044e144;
    if (pcVar4[0x1e70] != '\0') {
      if ((*(unsigned short *)(pcVar4 + 0x1314) & 2) != 0) {
        temp_v6 = categoryGetColor(1);
        pcVar5 = DAT_0044e144;
        if ((DAT_0044e144 != (char *)0x0) && (DAT_0044e144[0x1e66] != '\r')) {
          if (DAT_0044e144[0x1e66] == '\x06') {
            temp_v7 = FUN_0029e9cc(*(unsigned short *)(DAT_0044e144 + 0x1300));
joined_r0x00190660:
            if (temp_v7 == 0) break;
          }
          *(unsigned int *)(pcVar5 + 0x1898) = temp_v6;
        }
      }
      else {
        temp_v6 = 0xffffffff;
        if ((DAT_0044e144 != (char *)0x0) && (DAT_0044e144[0x1e66] != '\r')) {
          if (DAT_0044e144[0x1e66] == '\x06') {
            temp_v7 = FUN_0029e9cc(*(unsigned short *)(DAT_0044e144 + 0x1300));
            goto joined_r0x00190660;
          }
          *(unsigned int *)(pcVar5 + 0x1898) = temp_v6;
        }
      }
    }
  }
  if (pcVar4[0x1e67] != '\t') {
    if (*(int *)(pcVar4 + 0x12dc) >= 4) {
      if ((*(int *)(pcVar4 + 0x18) >= 10) && (pcVar4[0xd62] != '\0')) {
        FUN_002b8ee0(pcVar4 + 0x7ec,1);
        FUN_002b8ee0(pcVar4 + 0xd64,0);
      }
      else {
        temp_v7 = 0;
        do {
          if (temp_v7 <= *(int *)(pcVar4 + 0x18)) {
            FUN_002b8ee0(pcVar4 + temp_v7 * 0x8c + 0x7ec,1);
            FUN_002b8ee0(pcVar4 + temp_v7 * 0x8c + 0xd64,0);
          }
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < 10);
        *(int *)(pcVar4 + 0x18) = *(int *)(pcVar4 + 0x18) + 1;
      }
    }
  }
  else if (*(int *)(pcVar4 + 0x12dc) >= 8) {
    FUN_002950e8(pcVar4 + 0x418,1);
    FUN_002950e8(pcVar4 + 0x4a4,0);
    if ((*(int *)(pcVar4 + 0x1c) >= 6) && (temp_v7 = FUN_002bf818(pcVar4 + 0x530), temp_v7 != 0)) {
      pcVar4[0x20] = '\x01';
    }
    if (pcVar4[0x20] == '\0') {
      *(int *)(pcVar4 + 0x1c) = *(int *)(pcVar4 + 0x1c) + 1;
    }
    if ((*(int *)(pcVar4 + 0x18) >= 10) && (pcVar4[0xd62] != '\0')) {
      FUN_002b8ee0(pcVar4 + 0x7ec,1);
      FUN_002b8ee0(pcVar4 + 0xd64,0);
    }
    else {
      temp_v7 = 0;
      do {
        if (temp_v7 <= *(int *)(pcVar4 + 0x18)) {
          FUN_002b8ee0(pcVar4 + temp_v7 * 0x8c + 0x7ec,1);
          FUN_002b8ee0(pcVar4 + temp_v7 * 0x8c + 0xd64,0);
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 10);
      *(int *)(pcVar4 + 0x18) = *(int *)(pcVar4 + 0x18) + 1;
    }
  }
  if (*(int *)(pcVar4 + 0x12dc) >= 7) {
    FUN_002bf818(pcVar4 + 0x44);
    FUN_002bf818(pcVar4 + 0xd0);
    temp_v4 = (int)*(short *)(pcVar4 + 0x1300);
    temp_v7 = 0;
    if (temp_v4 != 0x155) {
      temp_v7 = temp_v4 - 0x100;
    }
    if (!(temp_v4 != 0x155 && temp_v7 != 0x56)) {
      FUN_00296284(pcVar4 + 0x38c,1);
    }
    else {
      FUN_00296284(pcVar4 + 0x38c,0);
    }
    if ((0 < *(short *)(pcVar4 + 0x12fe)) && (*(int *)(pcVar4 + 0x1e74) != 0)) {
      piVar14 = (int *)(pcVar4 + 0x1e78);
      *piVar14 = *piVar14 + 2;
      asdAnimGetTrackLastFrame(*(int *)(pcVar4 + 0x1e74),0);
      __aeabi_uidivmod(*piVar14,(int)in_s0);
      *piVar14 = temp_v8;
    }
    FUN_002bf818(pcVar4 + 0x5bc);
  }
  *(int *)(pcVar4 + 0x10) = *(int *)(pcVar4 + 0x10) + 1;
  *(int *)(pcVar4 + 0x14) = *(int *)(pcVar4 + 0x14) + 1;
  return 0;
}

} /* extern "C" */
