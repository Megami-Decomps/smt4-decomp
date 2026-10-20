/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028f740` (_code @ 0x28f740, 0x588 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vec2GetXInt(...);
int efctSetSpeed(void);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_002cc228(char *, int);
int FUN_002fa1b0(int, int, int, int, int);
int FUN_003da6ac(int, int);

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned int DAT_00573be8; /* 0x573be8 */
extern unsigned int DAT_00573bec; /* 0x573bec */

extern int btlGetMainState(void);
/* Supplied declaration required: vec2GetXInt. */
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */
extern int gameFlagIsSet(void);
extern int gameGetSlotRecord(void);
extern int gameGetSlotTable(void);
extern int FUN_00291e14(void);
extern int FUN_002a4878(int);
extern int FUN_002b24fc(void);
extern unsigned int FUN_002c2c4c(int);
/* Supplied declaration required: FUN_002cc228. */
/* Supplied declaration required: FUN_002fa1b0. */
extern int FUN_003bcf2c(int);
/* Supplied declaration required: FUN_003da6ac. */
extern int gameDataFlagTestBit(void);
extern int FUN_004bd748(int);


void FUN_0028f740(int param_1)

{
/* irregular: 4 goto(s); 6 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  char *pcVar12;
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  int *piVar16;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  
  temp_v3 = *(int *)(param_1 + 0x387c);
  temp_v2 = 1;
  if ((temp_v3 == 0x10 || temp_v3 == 0x11) || (temp_v3 == 0x29 || temp_v3 == 0x2d)) {
    temp_v2 = 0;
  }
  temp_v3 = vec2GetXInt(param_1 + 0x20);
  temp_v4 = param_1 + 0x12b8;
  temp_v5 = vec2GetXInt();
  temp_v6 = vec2GetYInt(param_1 + 0x20);
  temp_v7 = vec2GetYInt(temp_v4);
  efctSetSpeed();
  FUN_001835b4(2,0xd,0xdb,temp_v3 + temp_v5,temp_v6 + temp_v7,0x29);
  FUN_001835b4(2,0xd,0xdc,temp_v3 + temp_v5,temp_v6 + temp_v7,0x29);
  efctSetSpeed();
  temp_v3 = FUN_002a4878(param_1 + *(int *)(param_1 + 0x3890) * 100 + 0x38bc);
  temp_v8 = FUN_002c2c4c(param_1 + *(int *)(param_1 + 0x3890) * 100 + 0x38bc);
  temp_v5 = 0;
  if (temp_v5 < (int)temp_v8) {
    do {
      if ((!temp_v2) || (temp_v5 != temp_v3)) {
        temp_v12 = param_1 + temp_v5 * 0x8c;
        temp_v6 = vec2GetXInt(temp_v12 + 0x138);
        temp_v7 = vec2GetXInt(temp_v4);
        temp_v12 = vec2GetYInt(temp_v12 + 0x138);
        temp_v9 = vec2GetYInt(temp_v4);
        if ((temp_v8 & 1) != 0) {
          temp_v16 = FUN_001834a4(0xd,temp_v5 + (int)(7 - temp_v8) / 2 + 0xff);
        }
        else {
          temp_v16 = FUN_001834a4(0xd,temp_v5 + (int)(8 - temp_v8) / 2 + 0x106);
        }
        temp_v1 = '\0';
        temp_v15 = 0;
        temp_v10 = gameGetSlotTable();
        temp_v13 = 0;
        piVar16 = (int *)(param_1 + 0x3890);
        do {
          pcVar12 = (char *)(temp_v13 & 0xff);
          FUN_002cc228(pcVar12,*piVar16 == 0);
          temp_v11 = *piVar16;
          temp_v14 = 0;
          if ((temp_v11 != 4 && temp_v11 != 0) && (-1 < *(char *)(temp_v11 + temp_v10 + 0x1c9f))) {
            temp_v14 = gameGetSlotRecord();
          }
          if ((((pcVar12 != (char *)0x0) && (pcVar12[1] == '\x01')) &&
              ((*(short *)(pcVar12 + 0x5c) == 0 || (temp_v11 = gameFlagIsSet(), temp_v11 != 0)))) &&
             (((*(short *)(pcVar12 + 0x5e) == 0 || (temp_v11 = gameDataFlagTestBit(), temp_v11 != 0)) &&
              ((pcVar12[0x5b] == '\0' ||
               (temp_v11 = btlGetMainState(),
               (*(unsigned int *)(temp_v11 + 0x45a0) & DAT_00573be8) == 0 &&
               (*(unsigned int *)(temp_v11 + 0x45a4) & DAT_00573bec) == 0)))))) {
            temp_v0 = *pcVar12;
            if (temp_v0 != '\x05') {
              if (temp_v0 != '\x02') {
                if (temp_v0 == '\x03') {
                  if ((*(short *)(param_1 + *piVar16 * 2 + 0x4210) == -1) || (temp_v14 == 0))
                  goto LAB_0028fb14;
                  temp_v11 = FUN_004bd748(temp_v14);
                  if ((temp_v11 == 0) &&
                     ((((*pcVar12 != '\x03' || ((*(unsigned int *)(pcVar12 + 0x60) & 1) != 0)) ||
                       (temp_v11 = FUN_00291e14(), temp_v11 == 0)) ||
                      (temp_v11 = FUN_003bcf2c(temp_v14), temp_v11 == 0)))) goto LAB_0028fb5c;
                }
                if (*pcVar12 != '\x06' && *pcVar12 != '\b') goto LAB_0028fb14;
LAB_0028fb40:
                if (((*(unsigned int *)(pcVar12 + 0x60) & 1) == 0) || (temp_v11 = FUN_00291e14(), temp_v11 == 0)
                   ) {
                  if (temp_v15 == temp_v5) {
                    temp_v1 = *pcVar12;
                    break;
                  }
                  temp_v15 = temp_v15 + 1;
                }
              }
            }
            else if ((*(short *)(param_1 + *piVar16 * 2 + 0x4210) == -1) ||
                    (*(char *)(param_1 + 0x41ed) == '\0')) {
LAB_0028fb14:
              if ((*pcVar12 != '\t') || (temp_v11 = FUN_002b24fc(), temp_v11 != 0)) goto LAB_0028fb40;
            }
          }
LAB_0028fb5c:
          temp_v13 = temp_v13 + 1;
        } while ((int)temp_v13 < 10);
        FUN_002fa1b0(param_1,temp_v1,(int)*(short *)(temp_v16 + 8) + temp_v7 + temp_v6,
                     temp_v9 + temp_v12 + (int)*(short *)(temp_v16 + 10),0);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < (int)temp_v8);
  }
  if (temp_v2) {
    temp_v7 = param_1 + temp_v3 * 0x8c;
    temp_v5 = vec2GetXInt(temp_v7 + 0x138);
    temp_v6 = vec2GetXInt(temp_v4);
    temp_v7 = vec2GetYInt(temp_v7 + 0x138);
    temp_v4 = vec2GetYInt(temp_v4);
    if ((temp_v8 & 1) != 0) {
      temp_v12 = FUN_001834a4(0xd,temp_v3 + (int)(7 - temp_v8) / 2 + 0x182);
    }
    else {
      temp_v12 = FUN_001834a4(0xd,temp_v3 + (int)(8 - temp_v8) / 2 + 0x189);
    }
    temp_v9 = param_1;
    FUN_003da6ac(param_1,temp_v3);
    FUN_002fa1b0(param_1,temp_v9,(int)*(short *)(temp_v12 + 8) + temp_v5 + temp_v6,
                 (int)*(short *)(temp_v12 + 10) + temp_v7 + temp_v4,1);
  }
  return;
}

} /* extern "C" */
