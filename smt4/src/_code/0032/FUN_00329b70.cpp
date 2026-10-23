/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00329b70` (_code @ 0x329b70, 0xce0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00241d58(...);
int statusCameraDestroy(void);
int FUN_0028bf2c(void);
int statusCameraSelectPreset(...);
int FUN_00294f64(...);
int FUN_002958f8(...);

int FUN_00258170(...);
int FUN_00258408(...);
int FUN_00258618(...);
int FUN_00282bfc(...);
int btlTalkBustUpSetUnk2F4(...);
int FUN_002954f4(...);
int textEncodeFontSlot(...);
int soundChannelStopAll(...);
int slotSetRequest(...);
int scrScriptProcessDestroy(...);
int FUN_002bd06c(...);
int FUN_002bee58(...);
int libc_strcpy(...);
int asdMemFree(...);

int asdMdlManagerMarkDestroy(...);
int FUN_00210194(...);
int gfxObjectDestroy(...);
int asdAnimGetTrackLastFrame(unsigned int, int);
int soundSlotStopById(void);
int scrScriptProcessStartEntry(...);
int asdMdlManagerCreateLoaded(...);
void FUN_0029c2cc(...);
int soundChannelRequestIfEnabled(int, int, int);
int FUN_002a03d8(...);
int FUN_002a0428(...);
int modelSlotAttachChild(...);
int asdMdlManagerDestroy(...);
int sndObjectForwardField8(void);
int buttonHelpSetPreset(...);
int FUN_002b8ee0(int, int);
int FUN_002bf810(...);
int FUN_002bf818(...);
int FUN_002c1658(...);
int VectorSignedToFloat(...);
int __aeabi_idivmod(unsigned int, double);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

extern unsigned char LAB_0032a054; /* 0x32a054 */
extern unsigned char LAB_0032a074; /* 0x32a074 */
extern unsigned char LAB_0032a098; /* 0x32a098 */
extern unsigned char LAB_0032a0b4; /* 0x32a0b4 */
extern unsigned char LAB_0032a0d4; /* 0x32a0d4 */
extern unsigned char LAB_0032a0f0; /* 0x32a0f0 */
extern unsigned char LAB_0032a110; /* 0x32a110 */
extern unsigned char LAB_0032a12c; /* 0x32a12c */
extern unsigned char LAB_0032a7ec; /* 0x32a7ec */
extern unsigned char LAB_0032a7f8; /* 0x32a7f8 */
extern unsigned char LAB_0032a804; /* 0x32a804 */
extern int g_screenStateWork; /* 0x43dd90 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: asdMdlManagerMarkDestroy. */
extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: FUN_00210194. */
/* Supplied declaration required: FUN_00241d58. */
/* Supplied declaration required: FUN_00258170. */
/* Supplied declaration required: FUN_00258408. */
/* Supplied declaration required: FUN_00258618. */
/* Supplied declaration required: gfxObjectDestroy. */
extern int effectAreAllCompletionChecksReady(unsigned int);
extern unsigned int FUN_00263c1c(unsigned char *);
/* Supplied declaration required: FUN_00282bfc. */
/* Supplied declaration required: statusCameraDestroy. */
/* Supplied declaration required: FUN_0028bf2c. */
/* Supplied declaration required: asdAnimGetTrackLastFrame. */
/* Supplied declaration required: statusCameraSelectPreset. */
/* Supplied declaration required: FUN_00294f64. */
/* Supplied declaration required: btlTalkBustUpSetUnk2F4. */
/* Supplied declaration required: FUN_002954f4. */
extern int FUN_00295618(void);
/* Supplied declaration required: textEncodeFontSlot. */
/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: soundSlotStopById. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: FUN_0029c2cc. */
/* Supplied declaration required: soundChannelStopAll. */
/* Supplied declaration required: slotSetRequest. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: modelSlotAttachChild. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: sndObjectForwardField8. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int FUN_002b89a4(unsigned int);
/* Supplied declaration required: FUN_002b8ee0. */
extern unsigned int demonGetRaceLabel(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: FUN_002bee58. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_002bf810. */
/* Supplied declaration required: FUN_002bf818. */
/* Supplied declaration required: FUN_002c1658. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: __aeabi_idivmod. */


unsigned int FUN_00329b70(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 43 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned char *puVar7;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned short *puVar11;
  int temp_v9;
  int temp_v10;
  char *pcVar14;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  int temp_v14 [35];
  
  temp_v2 = g_screenStateWork;
  FUN_002bf818(g_screenStateWork + 0x8cc);
  *(int *)(temp_v2 + 0x7c) = *(int *)(temp_v2 + 0x7c) + 2;
  asdAnimGetTrackLastFrame(*(unsigned int *)(temp_v2 + 0x80),0);
  temp_v11 = (float)(int)in_s0;
  __aeabi_idivmod(*(unsigned int *)(temp_v2 + 0x7c),temp_v11);
  *(unsigned int *)(temp_v2 + 0x7c) = temp_v8;
  switch(*(unsigned int *)(temp_v2 + 4)) {
  case 1:
    temp_v7 = FUN_00295618();
    if (temp_v7 == 0) break;
    FUN_002a03d8(0,10);
    FUN_002a03d8(1,10);
    soundChannelRequestIfEnabled(0x100006b,10,0x3c);
    temp_v0 = *(short *)(temp_v2 + 0x1e);
    *(unsigned int *)(temp_v2 + 0x24) = 0xffffffff;
    if (temp_v0 != 2) {
      if (temp_v0 == 3) {
        temp_v6 = 0x10000ab;
      }
      else {
        if (temp_v0 != 4) {
          temp_v7 = g_screenStateWork;
          *(unsigned int *)(g_screenStateWork + 4) = 2;
          *(unsigned int *)(temp_v7 + 8) = 0;
          break;
        }
        temp_v6 = 0x10000ac;
      }
      FUN_002bf810(temp_v6);
    }
    else {
      FUN_002bf810(0x10000aa);
    }
    temp_v7 = g_screenStateWork;
    *(unsigned int *)(g_screenStateWork + 4) = 2;
    *(unsigned int *)(temp_v7 + 8) = 0;
    break;
  case 2:
    temp_v7 = 0;
    do {
      if (temp_v7 <= *(int *)(temp_v2 + 8) - 1) {
        FUN_002b8ee0(temp_v2 + temp_v7 * 0x8c + 0x2c8,0);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 5);
    FUN_002bf818(temp_v2 + 0x840);
    temp_v7 = FUN_002b89a4(0);
    if (((temp_v7 != 0) && (temp_v7 = FUN_002b89a4(1), temp_v7 != 0)) &&
       (*(char *)(temp_v2 + 0x582) != '\0')) {
      FUN_002a0428(*(unsigned int *)(temp_v2 + 0x84),1);
      modelSlotAttachChild(*(unsigned int *)(temp_v2 + 0x8c),0);
      temp_v7 = g_screenStateWork;
      *(unsigned int *)(g_screenStateWork + 4) = 3;
      *(unsigned int *)(temp_v7 + 8) = 0;
    }
    break;
  case 3:
    *(int *)(temp_v2 + 0x78) = *(int *)(temp_v2 + 0x78) + 1;
    temp_v7 = g_screenStateWork;
    temp_v10 = FUN_002bf4f8(0x24,0x20b);
    temp_v14[0] = FUN_002bf4f8(0x24,0x20e);
    temp_v0 = *(short *)(temp_v7 + 0x1e);
    pcVar14 = (char *)0x0;
    if (temp_v0 == 2) {
      pcVar14 = (char *)0x4033b0;
    }
    else if (temp_v0 == 3) {
      pcVar14 = (char *)0x4033c0;
    }
    else if (temp_v0 == 4) {
      pcVar14 = "A\xa0ÍĘĬŨŲƮŀ";
    }
    temp_v9 = 0;
    if (temp_v0 != 0) {
      do {
        puVar11 = (unsigned short *)(pcVar14 + temp_v9 * 4);
        temp_v3 = *(int *)(temp_v7 + 8);
        temp_v5 = (unsigned int)*puVar11;
        if ((int)(temp_v5 - 5) <= temp_v3) {
          if (temp_v3 < (int)temp_v5) {
            *(unsigned int *)(temp_v7 + temp_v9 * 4 + 0x58) =
                 ((int)**(short **)(temp_v10 + 0xc) / 5) * ((temp_v3 - temp_v5) + 5);
          }
          else {
            temp_v5 = (unsigned int)puVar11[1];
            if (temp_v3 < (int)temp_v5) {
              temp_v3 = temp_v7 + temp_v9 * 4;
              *(int *)(temp_v3 + 0x58) = (int)**(short **)(temp_v10 + 0xc);
              temp_v12 = (float)VectorSignedToFloat((unsigned int)puVar11[1] - (unsigned int)*puVar11,
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v14[0] + 0xc) + 2),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = (float)VectorSignedToFloat(*(int *)(temp_v7 + 8) - (unsigned int)*puVar11,
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v11 = (float)(int)-((temp_v13 / temp_v12) * temp_v11);
              *(float *)(temp_v3 + 0x68) = temp_v11;
            }
            else if (temp_v3 < (int)(temp_v5 + 5)) {
              temp_v4 = temp_v7 + temp_v9 * 4;
              *(unsigned int *)(temp_v4 + 0x58) =
                   ((int)**(short **)(temp_v10 + 0xc) / 5) * (5 - (temp_v3 - temp_v5));
              *(int *)(temp_v4 + 0x68) = -(int)*(short *)(*(int *)(temp_v14[0] + 0xc) + 2);
            }
            else {
              *(unsigned int *)(temp_v7 + temp_v9 * 4 + 0x58) = 0;
              FUN_002bf818(temp_v7 + temp_v9 * 0x8c + 0x610);
            }
          }
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < (int)(unsigned int)*(unsigned short *)(temp_v7 + 0x1e));
    }
    temp_v7 = effectAreAllCompletionChecksReady(*(unsigned int *)(temp_v2 + 0x84));
    puVar6 = *(unsigned int **)(temp_v2 + 0x84);
    if (temp_v7 != 0) {
      *puVar6 = *puVar6 | 2;
      *(unsigned char *)(*(int *)(puVar6[2] + 0x2c) + 0x1f6) = 0;
      if (*(short *)(temp_v2 + 0x1e) == 2) {
        if (*(char *)(temp_v2 + 0x20) != '\0') {
          puVar7 = &LAB_0032a054;
          asdMdlManagerCreateLoaded(&LAB_0032a054,7);
          *(unsigned char **)(temp_v2 + 0x88) = puVar7;
          temp_v6 = FUN_00263c1c(&LAB_0032a074);
          *(unsigned int *)(temp_v2 + 0x90) = temp_v6;
        }
        else {
          puVar7 = &LAB_0032a098;
          asdMdlManagerCreateLoaded(&LAB_0032a098,7);
          *(unsigned char **)(temp_v2 + 0x88) = puVar7;
          temp_v6 = FUN_00263c1c(&LAB_0032a0b4);
          *(unsigned int *)(temp_v2 + 0x90) = temp_v6;
        }
      }
      if (*(short *)(temp_v2 + 0x1e) == 3) {
        puVar7 = &LAB_0032a0d4;
        asdMdlManagerCreateLoaded(&LAB_0032a0d4,7);
        *(unsigned char **)(temp_v2 + 0x88) = puVar7;
        temp_v6 = FUN_00263c1c(&LAB_0032a0f0);
        *(unsigned int *)(temp_v2 + 0x90) = temp_v6;
      }
      if (*(short *)(temp_v2 + 0x1e) == 4) {
        puVar7 = &LAB_0032a110;
        asdMdlManagerCreateLoaded(&LAB_0032a110,7);
        *(unsigned char **)(temp_v2 + 0x88) = puVar7;
        temp_v6 = FUN_00263c1c(&LAB_0032a12c);
        *(unsigned int *)(temp_v2 + 0x90) = temp_v6;
      }
      FUN_0029c2cc(*(unsigned int *)(temp_v2 + 0x8c),0);
      gfxObjectDestroy(*(unsigned int *)(temp_v2 + 0x8c));
      *(unsigned int *)(temp_v2 + 0x8c) = 0;
      FUN_002a0428(*(unsigned int *)(temp_v2 + 0x88),1);
      modelSlotAttachChild(*(unsigned int *)(temp_v2 + 0x90),0);
      asdMdlManagerMarkDestroy(*(unsigned int *)(temp_v2 + 0x84));
      asdMdlManagerDestroy(*(unsigned int *)(temp_v2 + 0x84));
      *(unsigned int *)(temp_v2 + 0x84) = 0;
      temp_v7 = g_screenStateWork;
      if (*(char *)(temp_v2 + 0x20) != '\0') {
        scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x2a0),0x11);
        buttonHelpSetPreset(0x58);
        temp_v7 = g_screenStateWork;
        *(unsigned int *)(g_screenStateWork + 4) = 4;
        *(unsigned int *)(temp_v7 + 8) = 0;
      }
      else {
        *(unsigned int *)(g_screenStateWork + 4) = 5;
        *(unsigned int *)(temp_v7 + 8) = 0;
      }
      break;
    }
    sndObjectForwardField8();
    temp_v10 = 9;
    FUN_002c1658(9,1);
    temp_v7 = 0x28e;
    temp_v9 = 0x311;
    if (temp_v10 == 0) {
      temp_v10 = 6;
      FUN_002c1658(6,1);
      if (temp_v10 != 0) goto LAB_0032a1a4;
    }
    else {
LAB_0032a1a4:
      temp_v0 = *(short *)(temp_v2 + 0x1e);
      temp_v10 = temp_v7;
      if (*(char *)(temp_v2 + 0x20) != '\0') {
        if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
          temp_v10 = temp_v9;
        }
        temp_v12 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11 < temp_v12) << 0x1f) |
                ((unsigned int)(temp_v11 == temp_v12) << 0x1e);
        in_fpscr = temp_v5 | ((unsigned int)((temp_v11 != temp_v11) || (temp_v12 != temp_v12)) << 0x1c);
        temp_v1 = (unsigned char)(temp_v5 >> 0x18);
        if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          if (temp_v0 == 2) {
            temp_v10 = 800;
          }
          else if (temp_v0 == 3 || temp_v0 == 4) {
            temp_v10 = 0x375;
          }
          if (*(int *)(temp_v2 + 0x24) != -1) {
            soundSlotStopById();
            *(unsigned int *)(temp_v2 + 0x24) = 0xffffffff;
            FUN_002bf810(0x10000ad);
          }
        }
      }
      else if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v10 = temp_v9;
      }
      temp_v12 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 <= temp_v11) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v5 >> 0x1d,0)) {
        VectorSignedToFloat(temp_v10,(unsigned char)(temp_v5 >> 0x16) & 3);
        FUN_00210194(*(unsigned int *)(temp_v2 + 0x84));
        temp_v3 = *(int *)(*(int *)(temp_v2 + 0x8c) + 4);
        VectorSignedToFloat(temp_v10,(unsigned char)(temp_v5 >> 0x16) & 3);
        temp_v6 = *(unsigned int *)(temp_v3 + 0x44);
        (**(romwright_code **)(temp_v3 + 0x4c))(*(unsigned int *)(temp_v3 + 0x50));
        *(unsigned int *)(temp_v3 + 0x3c) = *(unsigned int *)(temp_v3 + 0x38);
        *(unsigned int *)(temp_v3 + 0x38) = temp_v6;
        *(unsigned char *)(temp_v3 + 0x58) = 1;
        temp_v3 = 6;
        *(int *)(temp_v2 + 8) = temp_v10;
        do {
          FUN_002bee58(temp_v2 + temp_v3 * 0x8c + 0x2c8,1);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 10);
      }
    }
    if (*(char *)(temp_v2 + 0x20) != '\0') {
      temp_v0 = *(short *)(temp_v2 + 0x1e);
      temp_v10 = temp_v7;
      if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v10 = temp_v9;
      }
      temp_v3 = 0;
      do {
        if (*(int *)(temp_v2 + 8) == temp_v10 + temp_v3 * 4) {
          FUN_002bee58(temp_v2 + temp_v3 * 0x8c + 0x610,0);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 4);
    }
    temp_v0 = *(short *)(temp_v2 + 0x1e);
    if (*(char *)(temp_v2 + 0x20) != '\0') {
      if (temp_v0 == 2) {
        temp_v10 = 800;
      }
      else {
        temp_v10 = 0;
        if (temp_v0 == 3 || temp_v0 == 4) {
          temp_v10 = 0x375;
        }
      }
    }
    else {
      temp_v10 = temp_v7;
      if ((temp_v0 != 2) && (temp_v10 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v10 = temp_v9;
      }
    }
    if (*(int *)(temp_v2 + 8) == temp_v10) {
      FUN_00282bfc(0,0xffffffff);
    }
    if (*(int *)(temp_v2 + 8) == temp_v10 + 5) {
      FUN_002a03d8(0,0x1e);
    }
    if (*(char *)(temp_v2 + 0x20) != '\0') {
      temp_v0 = *(short *)(g_screenStateWork + 0x1e);
      if (temp_v0 == 2) {
        temp_v7 = 0x28f;
      }
      else {
        temp_v7 = 0;
        if (temp_v0 == 3 || temp_v0 == 4) {
          temp_v7 = temp_v9;
        }
      }
      if (*(int *)(temp_v2 + 8) == temp_v7) {
        temp_v6 = FUN_002bf810(0x10000ae);
        *(unsigned int *)(temp_v2 + 0x24) = temp_v6;
      }
    }
    else {
      temp_v0 = *(short *)(temp_v2 + 0x1e);
      if ((temp_v0 != 2) && (temp_v7 = 0, temp_v0 == 3 || temp_v0 == 4)) {
        temp_v7 = temp_v9;
      }
      if (*(int *)(temp_v2 + 8) == temp_v7) {
        FUN_002bf810(0x10000ad);
      }
    }
    if (*(short *)(temp_v2 + 0x1e) == 2) {
      if (*(int *)(temp_v2 + 8) != 0xa0) break;
      *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
      FUN_00258618(temp_v2 + 0x38);
      FUN_00258408(&LAB_0032a7ec);
      FUN_00258170(temp_v2 + 0x38);
    }
    if (*(short *)(temp_v2 + 0x1e) == 3) {
      if (*(int *)(temp_v2 + 8) == 0xa0) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
        FUN_00258618(temp_v2 + 0x38);
        FUN_00258408(&LAB_0032a7ec);
        FUN_00258170(temp_v2 + 0x38);
      }
      if (*(int *)(temp_v2 + 8) == 0x11d) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x30);
        FUN_00258618(temp_v2 + 0x38);
        FUN_00258408(&LAB_0032a7f8);
        FUN_00258170(temp_v2 + 0x38);
      }
    }
    if (*(short *)(temp_v2 + 0x1e) == 4) {
      if (*(int *)(temp_v2 + 8) == 0xa0) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x2c);
        FUN_00258618(temp_v2 + 0x38);
        FUN_00258408(&LAB_0032a7ec);
        FUN_00258170(temp_v2 + 0x38);
      }
      if (*(int *)(temp_v2 + 8) == 0x118) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x30);
        FUN_00258618(temp_v2 + 0x38);
        FUN_00258408(&LAB_0032a7f8);
        FUN_00258170(temp_v2 + 0x38);
      }
      if (*(int *)(temp_v2 + 8) == 0x168) {
        *(unsigned int *)(temp_v2 + 0x3c) = *(unsigned int *)(temp_v2 + 0x34);
        FUN_00258618(temp_v2 + 0x38);
        FUN_00258408(&LAB_0032a804);
        FUN_00258170(temp_v2 + 0x38);
      }
    }
    break;
  case 4:
    FUN_002bf818();
    temp_v7 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x2a0));
    if ((temp_v7 != 2) || (*(char *)(temp_v2 + 0x60e) == '\0')) break;
  case 5:
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v2 + 0xc);
    FUN_002bd06c(temp_v5);
    libc_strcpy(temp_v14,temp_v5);
    textEncodeFontSlot(8,temp_v14);
    temp_v6 = demonGetRaceLabel(*(unsigned short *)(temp_v2 + 0xc),1);
    libc_strcpy(temp_v14,temp_v6);
    textEncodeFontSlot(0x10,temp_v14);
    scrScriptProcessStartEntry(*(unsigned int *)(temp_v2 + 0x2a0),0x10);
    buttonHelpSetPreset(0x58);
    FUN_002954f4(*(unsigned short *)(temp_v2 + 0xc),1);
    btlTalkBustUpSetUnk2F4(1);
    temp_v7 = g_screenStateWork;
    *(unsigned int *)(g_screenStateWork + 4) = 6;
    *(unsigned int *)(temp_v7 + 8) = 0;
    break;
  case 6:
    FUN_002bf818();
    temp_v7 = scrRunOpcodesStub(*(unsigned int *)(temp_v2 + 0x2a0));
    if ((temp_v7 == 2) && (*(char *)(temp_v2 + 0x60e) != '\0')) {
      slotSetRequest(0,10,0xff);
      slotSetRequest(1,10,0xff);
      soundChannelStopAll(10);
      temp_v7 = g_screenStateWork;
      *(unsigned int *)(g_screenStateWork + 4) = 7;
      *(unsigned int *)(temp_v7 + 8) = 0;
    }
    break;
  case 7:
    temp_v7 = FUN_002b89a4(0);
    if ((temp_v7 != 0) && (temp_v7 = FUN_002b89a4(1), temp_v7 != 0)) {
      scrScriptProcessDestroy(*(unsigned int *)(temp_v2 + 0x2a0));
      asdMemFree(*(unsigned int *)(temp_v2 + 0x2a4));
      asdMemFree(*(unsigned int *)(temp_v2 + 0x29c));
      temp_v7 = 0;
      if (*(short *)(temp_v2 + 0x1e) != 0) {
        do {
          FUN_002958f8((int)*(short *)(temp_v2 + temp_v7 * 2 + 0xe),1);
          temp_v10 = temp_v2 + temp_v7 * 4;
          FUN_00294f64(*(unsigned int *)(temp_v10 + 0x28));
          *(unsigned int *)(temp_v10 + 0x28) = 0;
          temp_v7 = temp_v7 + 1;
        } while (temp_v7 < (int)(unsigned int)*(unsigned short *)(temp_v2 + 0x1e));
      }
      FUN_00241d58(temp_v2 + 0x38);
      FUN_00294f64(*(unsigned int *)(temp_v2 + 0x80));
      *(unsigned int *)(temp_v2 + 0x80) = 0;
      FUN_0028bf2c();
      asdMdlManagerMarkDestroy(*(unsigned int *)(temp_v2 + 0x88));
      asdMdlManagerDestroy(*(unsigned int *)(temp_v2 + 0x88));
      *(unsigned int *)(temp_v2 + 0x88) = 0;
      FUN_0029c2cc(*(unsigned int *)(temp_v2 + 0x90),0);
      gfxObjectDestroy(*(unsigned int *)(temp_v2 + 0x90));
      *(unsigned int *)(temp_v2 + 0x90) = 0;
      statusCameraDestroy();
      statusCameraSelectPreset(1);
      temp_v7 = g_screenStateWork;
      *(unsigned int *)(g_screenStateWork + 4) = 8;
      *(unsigned int *)(temp_v7 + 8) = 0;
    }
  }
  *(int *)(temp_v2 + 8) = *(int *)(temp_v2 + 8) + 1;
  return 0;
}

} /* extern "C" */
