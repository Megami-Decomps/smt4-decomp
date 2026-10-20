/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00218480` (_code @ 0x218480, 0x710 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025043c(...);
int FUN_002621b4(...);
int FUN_0028caf8(...);
int FUN_0028cb40(...);
int FUN_0028cdec(...);
int playSceneSetState(int, int, int);
int flaggedEntrySetValueB(...);
int FUN_002ae164(void);
int dataTable08Sub1GetRecord(...);
int buttonHelpSetPreset(int);
int FUN_0033fd64(...);

/* stack frame of param_1: 8 slot(s), 20 byte(s) */
typedef struct {
    unsigned short sp40; /* 0x40: local_40 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned short sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned short sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned short sp68; /* 0x68: local_68 */
} param_1_stack;

/* Supplied declaration required: FUN_0025043c. */
/* Supplied declaration required: FUN_002621b4. */
/* Supplied declaration required: FUN_0028caf8. */
/* Supplied declaration required: FUN_0028cb40. */
/* Supplied declaration required: FUN_0028cdec. */
extern int FUN_00295d08(unsigned int);
/* Supplied declaration required: playSceneSetState. */
/* Supplied declaration required: flaggedEntrySetValueB. */
extern int FUN_0029e908(int);
extern int gameGetSlotTable(void);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: dataTable08Sub1GetRecord. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_0033fd64. */


void FUN_00218480(int param_1)

{
/* irregular: 11 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  unsigned char temp_v7;
  short temp_v8 [2];
  int temp_v9;
  short temp_v10 [2];
  int temp_v11;
  short temp_v12 [4];
  unsigned short temp_v13 [2];
  unsigned short temp_v14 [4];
  unsigned short temp_v15 [14];
  
  temp_v11 = param_1 + 0x33a8;
  flaggedEntrySetValueB(temp_v11,0);
  *(unsigned int *)(param_1 + 0x3064) = 0xffffffff;
  playSceneSetState(param_1,0x22,1);
  buttonHelpSetPreset(0x38);
  temp_v12[0] = 0;
  temp_v8[0] = 0;
  FUN_0028cb40(param_1,temp_v12,temp_v8);
  puVar8 = (unsigned int *)(param_1 + 0x345c);
  *puVar8 = 0x1010101;
  *(unsigned int *)(param_1 + 0x3460) = 0;
  *(unsigned int *)(param_1 + 0x3464) = 0;
  *(unsigned int *)(param_1 + 0x3468) = 0;
  *(unsigned int *)(param_1 + 0x346c) = 0;
  temp_v9 = param_1 + 0x3460;
  if (temp_v12[0] == 2 || temp_v12[0] == 3) {
    temp_v2 = (int)temp_v8[0];
    FUN_002ae164();
    if ((*(unsigned int *)(temp_v2 + 0x28) & 0x1ff) >> 5 == 3) {
      *(unsigned int *)(param_1 + 0x3048) = 0x23;
      temp_v15[0] = 0;
      temp_v10[0] = 0;
      FUN_0028cb40(param_1,temp_v15,temp_v10);
      FUN_002621b4(*(int *)(param_1 + 0x305c) - 1,0xffffffff,(int)temp_v10[0],temp_v9);
      temp_v6 = 1;
      do {
        temp_v3 = gameGetSlotTable();
        FUN_002621b4(*(int *)(param_1 + 0x305c) - 1,(int)*(char *)(temp_v3 + temp_v6 + 0x9107),
                     (int)temp_v10[0],param_1 + temp_v6 * 4 + 0x3460);
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      temp_v6 = (int)temp_v10[0];
      FUN_002ae164();
      if ((((*(unsigned int *)(temp_v6 + 0x38) & 0x600) != 0) && (*(unsigned int *)(param_1 + 0x305c) < 4)) &&
         (*(int *)(param_1 + 0x3504) < 0)) {
        *(int *)(param_1 + *(unsigned int *)(param_1 + 0x305c) * 4 + 0x3460) = *(int *)(param_1 + 0x3504);
      }
    }
    else {
      FUN_0028cdec(param_1);
    }
    if ((*(unsigned int *)(temp_v2 + 0x28) & 0x1ff) >> 5 == 4) {
      *(unsigned int *)(param_1 + 0x3048) = 0x24;
      flaggedEntrySetValueB(temp_v11,*(unsigned int *)(param_1 + 0x305c));
    }
    temp_v6 = FUN_0033fd64(0xffffffff,(int)temp_v8[0]);
    temp_v3 = 0;
    if (temp_v6 != 0) {
      *(unsigned char *)puVar8 = 0;
    }
    do {
      temp_v6 = gameGetSlotTable();
      if ((*(char *)(temp_v6 + temp_v3 + 0x9108) < '\0') ||
         (temp_v6 = FUN_0033fd64(temp_v3,(int)temp_v8[0]), temp_v6 != 0)) {
        *(unsigned char *)(param_1 + temp_v3 + 0x345d) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    if ((*(unsigned int *)(temp_v2 + 0x38) & 0x200) != 0) {
      *(unsigned char *)(*(int *)(param_1 + 0x305c) + (int)puVar8) = 0;
    }
    if (((*(char *)(temp_v2 + 0x23) == '\x03') && ((*(unsigned int *)(temp_v2 + 0x28) & 0x1ff) >> 5 == 2)) &&
       (((*(unsigned short *)(temp_v2 + 0x36) & 0xfff) != 0 &&
        (((*(unsigned int *)(temp_v2 + 0x38) & 0x7f) != 1 && (temp_v2 = FUN_00295d08(1), temp_v2 != 0)))))) {
      temp_v2 = 0;
      do {
        if (*(char *)(param_1 + temp_v2 + 0x345d) != '\0') {
          flaggedEntrySetValueB(temp_v11,temp_v2 + 1);
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 3);
    }
  }
  if (temp_v12[0] == 8) {
    *(unsigned int *)(param_1 + 0x3470) = 0;
    *(unsigned int *)(param_1 + 0x3474) = 0;
    *(unsigned int *)(param_1 + 0x3478) = 0;
    *(unsigned int *)(param_1 + 0x347c) = 0;
    temp_v2 = (int)temp_v8[0];
    dataTable08Sub1GetRecord();
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
    if (temp_v4 != 0) {
      FUN_002ae164();
      if ((*(unsigned int *)(temp_v4 + 0x28) & 0x1ff) >> 5 == 3) {
        *(unsigned int *)(param_1 + 0x3048) = 0x23;
        temp_v13[0] = 0;
        temp_v10[0] = 0;
        FUN_0028cb40(param_1,temp_v13,temp_v10);
        FUN_002621b4(*(int *)(param_1 + 0x305c) - 1,0xffffffff,(int)temp_v10[0],temp_v9);
        temp_v2 = 1;
        do {
          temp_v6 = gameGetSlotTable();
          FUN_002621b4(*(int *)(param_1 + 0x305c) - 1,(int)*(char *)(temp_v6 + temp_v2 + 0x9107),
                       (int)temp_v10[0],param_1 + temp_v2 * 4 + 0x3460);
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 4);
        temp_v2 = (int)temp_v10[0];
        FUN_002ae164();
        if ((((*(unsigned int *)(temp_v2 + 0x38) & 0x600) != 0) && (*(unsigned int *)(param_1 + 0x305c) < 4)) &&
           (*(int *)(param_1 + 0x3504) < 0)) {
          *(int *)(param_1 + *(unsigned int *)(param_1 + 0x305c) * 4 + 0x3460) = *(int *)(param_1 + 0x3504);
        }
      }
      else {
        FUN_0028cdec(param_1);
      }
      if ((*(unsigned int *)(temp_v4 + 0x28) & 0x1ff) >> 5 == 4) {
        *(unsigned int *)(param_1 + 0x3048) = 0x24;
        flaggedEntrySetValueB(temp_v11,*(unsigned int *)(param_1 + 0x305c));
      }
      temp_v2 = FUN_0025043c(0xffffffff,(int)temp_v8[0]);
      temp_v6 = 0;
      if (temp_v2 != 0) {
        *(unsigned char *)puVar8 = 0;
      }
      do {
        temp_v2 = gameGetSlotTable();
        if ((*(char *)(temp_v2 + temp_v6 + 0x9108) < '\0') ||
           (temp_v2 = FUN_0025043c(temp_v6,(int)temp_v8[0]), temp_v2 != 0)) {
          *(unsigned char *)(param_1 + temp_v6 + 0x345d) = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 3);
      if ((*(unsigned int *)(temp_v4 + 0x38) & 0x200) != 0) {
        *(unsigned char *)(*(int *)(param_1 + 0x305c) + (int)puVar8) = 0;
      }
      if (((*(char *)(temp_v4 + 0x23) == '\x03') && ((*(unsigned int *)(temp_v4 + 0x28) & 0x1ff) >> 5 == 2)) &&
         (((*(unsigned short *)(temp_v4 + 0x36) & 0xfff) != 0 &&
          (((*(unsigned int *)(temp_v4 + 0x38) & 0x7f) != 1 && (temp_v2 = FUN_00295d08(1), temp_v2 != 0)))))) {
        temp_v2 = 0;
        do {
          if (*(char *)(param_1 + temp_v2 + 0x345d) != '\0') {
            flaggedEntrySetValueB(temp_v11,temp_v2 + 1);
            return;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 3);
      }
    }
    else {
      temp_v2 = (int)temp_v8[0];
      dataTable08Sub1GetRecord();
      if ((*(unsigned char *)(temp_v2 + 0x6a) & 0x80) != 0) {
        *(unsigned int *)(param_1 + 0x3048) = 0x23;
        temp_v14[0] = 0;
        temp_v10[0] = 0;
        FUN_0028cb40(param_1,temp_v14,temp_v10);
        FUN_0028caf8(0xffffffff,(int)temp_v10[0],temp_v9,param_1 + 0x3470);
        temp_v6 = 1;
        do {
          temp_v3 = gameGetSlotTable();
          temp_v5 = param_1 + temp_v6 * 4;
          FUN_0028caf8((int)*(char *)(temp_v3 + temp_v6 + 0x9107),(int)temp_v10[0],temp_v5 + 0x3460,
                       temp_v5 + 0x3470);
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 4);
      }
      else {
        temp_v14[0] = 0;
        temp_v10[0] = 0;
        FUN_0028cb40(param_1,temp_v14,temp_v10);
        temp_v6 = FUN_0029e908(temp_v11);
        if (temp_v6 != 0) {
          temp_v3 = gameGetSlotTable();
          temp_v5 = param_1 + temp_v6 * 4;
          FUN_0028caf8((int)*(char *)(temp_v3 + temp_v6 + 0x9107),(int)temp_v10[0],temp_v5 + 0x3460,
                       temp_v5 + 0x3470);
          temp_v3 = gameGetSlotTable();
          if (*(char *)(temp_v3 + temp_v6 + 0x9107) < '\0') {
            dataTable08Sub1GetRecord((int)temp_v10[0]);
          }
        }
        else {
          FUN_0028caf8(0xffffffff,(int)temp_v10[0],temp_v9,param_1 + 0x3470);
        }
      }
      temp_v6 = FUN_0025043c(0xffffffff,(int)temp_v8[0]);
      temp_v3 = 0;
      if (temp_v6 != 0) {
        *(unsigned char *)puVar8 = 0;
      }
      do {
        temp_v6 = gameGetSlotTable();
        if ((*(char *)(temp_v6 + temp_v3 + 0x9108) < '\0') ||
           (temp_v6 = FUN_0025043c(temp_v3,(int)temp_v8[0]), temp_v6 != 0)) {
          *(unsigned char *)(param_1 + temp_v3 + 0x345d) = 0;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 3);
      if (((*(unsigned char *)(temp_v2 + 0x6a) & 0x7f) != 1) && ((*(unsigned char *)(temp_v2 + 0x6a) & 0x80) == 0)) {
        temp_v1 = *(short *)(temp_v2 + 100);
        temp_v7 = temp_v1 == 0;
        if (temp_v7) {
          temp_v1 = *(short *)(temp_v2 + 0x66);
        }
        if (temp_v7 && temp_v1 == 0) {
          temp_v0 = *(char *)(temp_v2 + 0x68);
          temp_v7 = temp_v0 == '\0';
          if (temp_v7) {
            temp_v0 = *(char *)(temp_v2 + 0x69);
          }
          if (temp_v7 && temp_v0 == '\0') {
            return;
          }
        }
        temp_v2 = FUN_00295d08(1);
        if (temp_v2 != 0) {
          temp_v2 = 0;
          while (*(char *)(param_1 + temp_v2 + 0x345d) == '\0') {
            temp_v2 = temp_v2 + 1;
            if (temp_v2 >= 3) {
              return;
            }
          }
          flaggedEntrySetValueB(temp_v11,temp_v2 + 1);
          return;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
