/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00253968` (_code @ 0x253968, 0x214 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00287a78(void);
int FUN_00287aec(void);
int mathPositionHeadingDegrees(void);
int FUN_00291e40(unsigned int);

typedef struct fn_00253968_arg0 fn_00253968_arg0;
struct fn_00253968_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x18];
    float field_0x20; /* +0x20 */
    float field_0x24; /* +0x24 */
    float field_0x28; /* +0x28 */
    float field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x1c];
    byte field_0x50; /* +0x50 */
    unsigned char pad_0x51[0x25];
    byte field_0x76; /* +0x76 */
    unsigned char pad_0x77[0xf9];
    int field_0x170; /* +0x170 */
    int field_0x174; /* +0x174 */
    unsigned char pad_0x178[0xc48];
    undefined4 field_0xdc0; /* +0xdc0 */
};

extern signed char DAT_0049fa98; /* 0x49fa98 */
extern int DAT_0049fa9c; /* 0x49fa9c */
extern short DAT_0049faae; /* 0x49faae */
extern short DAT_0049fab0; /* 0x49fab0 */
extern unsigned short DAT_0049fab2; /* 0x49fab2 */
extern signed char DAT_0049fab5; /* 0x49fab5 */
extern float DAT_0049fac4; /* 0x49fac4 */
extern float DAT_0049fac8; /* 0x49fac8 */
extern float DAT_0049facc; /* 0x49facc */
extern float DAT_0049fad0; /* 0x49fad0 */

/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00287a78. */
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: FUN_00291e40. */
extern int gameGetPlayerData(void);
extern int gameGetMapBlock(void);


unsigned int FUN_00253968(fn_00253968_arg0 *param_1)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v1 = gameGetMapBlock();
  temp_v2 = gameGetPlayerData();
  temp_v0 = 0;
  if (DAT_0049fa98 != '\0') {
    temp_v0 = DAT_0049faae;
  }
  if (DAT_0049fa98 != '\0' && temp_v0 != 0) {
    temp_v3 = DAT_0049fa9c;
    FUN_00287aec();
    if ((temp_v3 < 0x437a0000) && (temp_v3 = DAT_0049fa9c, FUN_00287a78(), temp_v3 < 0x428c0000)) {
LAB_00253a80:
      if (DAT_0049fab0 == 0) {
        DAT_0049fab0 = 8;
        DAT_0049fab2 = (unsigned short)param_1->field_0x4;
        temp_v6 = param_1->field_0x20;
        mathPositionHeadingDegrees();
        DAT_0049fac4 = param_1->field_0x20;
        DAT_0049fac8 = param_1->field_0x24 + 110.0f;
        DAT_0049facc = param_1->field_0x28;
        DAT_0049fab5 = '\0';
        temp_v7 = param_1->field_0x20;
        DAT_0049fad0 = temp_v6;
        mathPositionHeadingDegrees();
        param_1->field_0x2c = temp_v7;
        if ((param_1->field_0x50 == 0) && (*(int *)(temp_v1 + 0xdc0) != 0)) {
          if ((param_1->field_0x174 == 0) ||
             ((param_1->field_0x174 >= 11 ||
              ((int)(unsigned int)*(unsigned char *)(temp_v2 + 0x76) <= param_1->field_0x170)))) {
            DAT_0049fab5 = '\0';
          }
          else {
            DAT_0049fab5 = '\x01';
          }
        }
        if (DAT_0049fab5 == '\0') {
          temp_v4 = 0x1000185;
        }
        else {
          temp_v4 = 0x1000187;
        }
        FUN_00291e40(temp_v4);
      }
      return 1;
    }
    temp_v3 = param_1->field_0x174;
    temp_v5 = temp_v3 == 6 || temp_v3 == 0x10;
    if (temp_v3 == 6 || temp_v3 == 0x10) {
      temp_v5 = param_1->field_0x30 == 4;
    }
    if (temp_v5) {
      FUN_0028250c();
      FUN_00282390();
      temp_v3 = DAT_0049fa9c;
      FUN_00287aec();
      if ((temp_v3 < 0x437a0000) && (temp_v3 = DAT_0049fa9c, FUN_00287a78(), temp_v3 < 0x428c0000))
      goto LAB_00253a80;
    }
  }
  return 0;
}

} /* extern "C" */
