/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00382cd8` (_code @ 0x382cd8, 0x250 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int messageMainSetTargetFlags(int);
int FUN_002355ac(int);
int FUN_00273c54(void);
int FUN_00273d34(void);
int FUN_00273f5c(void);
int mapClearPendingEntries(void);
int gameFlagSetValue(...);
int FUN_00289c98(int);
int FUN_00296934(void);
int messageTargetSetValue(unsigned int, int);
int FUN_0029e648(int, int);
int FUN_0029ee6c(int, int);

typedef struct fn_00382cd8_arg0 fn_00382cd8_arg0;
struct fn_00382cd8_arg0 {
    unsigned char pad_0x0[0x1];
    unsigned char field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x2];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0xd3c];
    unsigned char field_0xd48; /* +0xd48 */
    unsigned char pad_0xd49[0x1];
    byte field_0xd4a; /* +0xd4a */
    unsigned char pad_0xd4b[0x1];
    byte field_0xd4c; /* +0xd4c */
    unsigned char pad_0xd4d[0x1];
    ushort field_0xd4e; /* +0xd4e */
    ushort field_0xd50; /* +0xd50 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_0049fa1c; /* 0x49fa1c */

extern int questGetPrimaryState(void);
extern unsigned char questGetSecondaryState(void);
/* Supplied declaration required: messageMainSetTargetFlags. */
/* Supplied declaration required: FUN_002355ac. */
extern int FUN_00241990(void);
/* Supplied declaration required: FUN_00273c54. */
/* Supplied declaration required: FUN_00273d34. */
/* Supplied declaration required: FUN_00273f5c. */
/* Supplied declaration required: mapClearPendingEntries. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00289c98. */
/* Supplied declaration required: FUN_00296934. */
/* Supplied declaration required: messageTargetSetValue. */
/* Supplied declaration required: FUN_0029e648. */
/* Supplied declaration required: FUN_0029ee6c. */
extern int gameGetMapBlock(void);
extern int FUN_002cf738(void);
extern unsigned char FUN_002cf750(void);
extern unsigned short FUN_002eff34(void);
extern unsigned short FUN_0030aba4(void);


void FUN_00382cd8(fn_00382cd8_arg0 *param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = FUN_00241990();
  if (temp_v2 == 0) {
    return;
  }
  temp_v0 = FUN_002cf750();
  param_1->field_0xd4c = temp_v0;
  temp_v1 = FUN_0030aba4();
  param_1->field_0xd4e = temp_v1;
  temp_v1 = FUN_002eff34();
  param_1->field_0xd50 = temp_v1;
  temp_v2 = questGetPrimaryState();
  temp_v0 = questGetSecondaryState();
  param_1->field_0xd4a = temp_v0;
  temp_v3 = FUN_002cf738();
  if (temp_v3 != 0) {
    if (param_1->field_0xd50 != 0xca) {
      if (param_1->field_0xd50 == 0xc3) {
        gameFlagSetValue(0x24c,0,1);
        gameFlagSetValue(0x24e,0,1);
        gameFlagSetValue(0x24d,0);
        gameFlagSetValue(0x24f,0,1);
        gameFlagSetValue(0x250,0,1);
        gameFlagSetValue(0x252,0,1);
        gameFlagSetValue(0x251,0);
        temp_v4 = 0x253;
        gameFlagSetValue(temp_v4,0,1);
      }
    }
    else {
      gameFlagSetValue(0x246,0,1);
      gameFlagSetValue(0x274,0,1);
      gameFlagSetValue(0x26b,0,1);
      gameFlagSetValue(0x248,0,1);
      temp_v4 = 0x247;
      gameFlagSetValue(temp_v4,0,1);
    }
  }
  if (param_1->field_0xd4c != 0) {
    temp_v3 = gameGetMapBlock();
    *(unsigned short *)(temp_v3 + 0x22) = 0;
    FUN_00273f5c();
    mapClearPendingEntries();
    if (temp_v2 == 0) {
      *(unsigned short *)(temp_v3 + 0x1e) = param_1->field_0xd4e;
      FUN_00273d34();
      FUN_00273c54();
    }
  }
  FUN_00296934();
  if (param_1->field_0xd4a == 0) {
    if (temp_v2 == 0) {
      if (param_1[1].field_0x1 != '\0') {
        FUN_0029e648(1,0);
        messageTargetSetValue(0xffffff9c,0);
        messageMainSetTargetFlags(1);
        param_1[1].field_0x1 = 0;
      }
      FUN_00296934();
      param_1->field_0x4 = 5;
      param_1->field_0x8 = 0;
      return;
    }
    param_1->field_0xd48 = (char)temp_v2;
    FUN_0029ee6c(0,0x323232ff);
    FUN_00289c98(1);
    param_1->field_0x4 = 0xc;
    param_1->field_0x8 = 0;
    FUN_002355ac(0);
    return;
  }
  (*(unsigned short *)((unsigned char *)&DAT_0049fa1c + 0x78)) = 1;
  param_1->field_0x4 = 0xf;
  param_1->field_0x8 = 0;
  FUN_002355ac(0);
  return;
}

} /* extern "C" */
