/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cbb38` (_code @ 0x4cbb38, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int sysPlaySe(...);
int FUN_00184310(...);
int FUN_0019de98(...);
int asdLoadFileSyncDefault(...);
int FUN_0022e774(...);
int FUN_002613f0(...);
int FUN_00275bc8(...);
int statusPanelSetOpen(...);
int FUN_002c85b0(...);
int btlTalkBustUpCreate(...);
int statusDisplayBindUnitRecord(...);
int soundChannelRequestIfEnabled(...);

typedef struct fn_004cbb38_arg0 fn_004cbb38_arg0;
typedef struct fn_004cbb38_arg0_p2c fn_004cbb38_arg0_p2c;
struct fn_004cbb38_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3];
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x7];
    fn_004cbb38_arg0_p2c *field_0x2c; /* +0x2c */
    int field_0x30; /* +0x30 */
};
struct fn_004cbb38_arg0_p2c {
    ushort field_0x0; /* +0x0 */
    ushort field_0x2; /* +0x2 */
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x1];
    ushort field_0x6; /* +0x6 */
};

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_0019de98. */
extern int gameGetSlotRecord(int);
/* Supplied declaration required: asdLoadFileSyncDefault. */
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_002613f0. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: statusPanelSetOpen. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: btlTalkBustUpCreate. */
extern int FUN_003316b4(int);
/* Supplied declaration required: statusDisplayBindUnitRecord. */
/* Supplied declaration required: soundChannelRequestIfEnabled. */
extern int loadSlotIsLoaded(unsigned int);
extern unsigned int recordContainsPairedId(int, short);


void FUN_004cbb38(fn_004cbb38_arg0 *param_1)

{
/* irregular: 1 goto(s); 13 native warning(s); review required */
  short temp_v0;
  short *psVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar6;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [64];
  
  puVar6 = temp_v7;
  if (-1 < (int)param_1->field_0x2c) {
    psVar2 = (short *)FUN_002613f0();
    temp_v5 = 0;
    do {
      temp_v1 = gameGetSlotRecord(temp_v5);
      if ((temp_v1 != 0) && (*(short *)(temp_v1 + 0x62) == *psVar2)) {
        if (-1 < temp_v5) {
          temp_v2 = recordContainsPairedId(temp_v1,psVar2[1]);
          temp_v6 = temp_v2 != 0;
          if (!temp_v6) {
            temp_v2 = (unsigned int)(unsigned short)psVar2[3];
          }
          if (temp_v6 || temp_v2 != 0) goto LAB_004cbbbc;
        }
        break;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x18);
    temp_v5 = -1;
LAB_004cbbbc:
    param_1->field_0x30 = temp_v5;
    if (-1 < temp_v5) {
      temp_v6 = *(int *)&param_1->field_0x10 != 0;
      temp_v5 = 0;
      if (temp_v6) {
        temp_v5 = *(int *)&param_1->field_0x18;
      }
      if (!temp_v6 || temp_v5 == 0) {
        return;
      }
      if (*(int *)&param_1->field_0x1c == 0) {
        return;
      }
      temp_v5 = loadSlotIsLoaded(0x14);
      if (temp_v5 == 0) {
        return;
      }
      temp_v5 = loadSlotIsLoaded(0x25);
      if (temp_v5 == 0) {
        return;
      }
      temp_v5 = loadSlotIsLoaded(0x3e);
      if (temp_v5 == 0) {
        return;
      }
      if (*(int *)&param_1->field_0x14 == 0) {
        temp_v5 = *(int *)&param_1->field_0x10;
        FUN_00275bc8(temp_v5,*(unsigned int *)&param_1->field_0x18);
        *(int *)&param_1->field_0x14 = temp_v5;
        *(unsigned int *)(temp_v5 + 0x108) = 0;
      }
      temp_v5 = FUN_002613f0(param_1->field_0x2c);
      temp_v1 = gameGetSlotRecord(param_1->field_0x30);
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
      FUN_00184310();
      temp_v3 = FUN_003316b4((int)*(char *)(temp_v2 + 0x38));
      textFormatBuffer(temp_v7,"battle/DevilMsg/%s.mbm",temp_v3 + 1);
      asdLoadFileSyncDefault();
      *(unsigned char **)&param_1->field_0x24 = puVar6;
      temp_v4 = *(unsigned int *)&param_1->field_0x1c;
      FUN_00275bc8(temp_v4,puVar6);
      *(unsigned int *)&param_1->field_0x20 = temp_v4;
      btlTalkBustUpCreate();
      FUN_002c85b0(6);
      statusDisplayBindUnitRecord(temp_v1,0,0);
      statusPanelSetOpen(1);
      soundChannelRequestIfEnabled(0x100002d,0,0x3c);
      FUN_0022e774();
      FUN_0019de98(0,0xf4f4f4ff);
      temp_v6 = *(short *)(temp_v5 + 2) != 0;
      temp_v0 = 0;
      if (temp_v6) {
        temp_v0 = *(short *)(temp_v5 + 4);
      }
      if (!temp_v6 || temp_v0 == 0) {
        sysPlaySe(0x6c);
        param_1->field_0x8 = 0;
        param_1->field_0x4 = 6;
        return;
      }
      sysPlaySe(0x6a);
      param_1->field_0x8 = 0;
      param_1->field_0x4 = 5;
      return;
    }
  }
  param_1->field_0x8 = 0;
  param_1->field_0x4 = 7;
  return;
}

} /* extern "C" */
