/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416e60` (_code @ 0x416e60, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275bc8(...);
int FUN_00416d30(...);

typedef struct fn_00416e60_arg0 fn_00416e60_arg0;
struct fn_00416e60_arg0 {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    int field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x4];
    ushort field_0x38; /* +0x38 */
    unsigned char pad_0x3a[0x2];
    unsigned char field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0x3];
    ushort field_0x40; /* +0x40 */
    unsigned char pad_0x42[0x2];
    undefined4 field_0x44; /* +0x44 */
};

extern int gameGetPlayerData(void);
/* Supplied declaration required: FUN_00275bc8. */
extern int FUN_003df4a4(unsigned short);
extern int playerStockHasFreeSlot(void);
extern unsigned long long countUnlockedSlots(void);
extern int loadSlotIsLoaded(unsigned int);
/* Supplied declaration required: FUN_00416d30. */


unsigned int FUN_00416e60(fn_00416e60_arg0 *param_1,int param_2)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned long long temp_v8;
  
  temp_v0 = param_1->field_0xc;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        return 0;
      }
      goto LAB_00416f38;
    }
  }
  else {
    temp_v0 = loadSlotIsLoaded(0x25);
    if (temp_v0 == 0) {
      return 0;
    }
    FUN_00416d30(param_1);
    param_1->field_0xc = param_1->field_0xc + 1;
    param_2 = temp_v2;
  }
  temp_v0 = param_1->field_0x18;
  if (temp_v0 != 0) {
    param_2 = param_1->field_0x20;
  }
  if (temp_v0 == 0 || param_2 == 0) {
    return 0;
  }
  if ((char)param_1->field_0x40 == '\0') {
    temp_v7 = param_1->field_0x24 != 0;
    temp_v4 = 0;
    if (temp_v7) {
      temp_v4 = param_1->field_0x2c;
    }
    if (!temp_v7 || temp_v4 == 0) {
      return 0;
    }
  }
  FUN_00275bc8();
  param_1->field_0x1c = temp_v0;
  if ((char)param_1->field_0x40 != '\0') {
    param_1->field_0x30 = 0xd;
    temp_v0 = param_1->field_0x18;
    FUN_00275bc8(temp_v0,param_1->field_0x20);
    param_1->field_0x28 = temp_v0;
  }
  else {
    param_1->field_0x30 = 0x12;
    temp_v0 = param_1->field_0x24;
    FUN_00275bc8(temp_v0,param_1->field_0x2c);
    param_1->field_0x28 = temp_v0;
  }
LAB_00416f38:
  if ((char)param_1->field_0x40 != '\0') {
    temp_v0 = FUN_003df4a4(param_1->field_0x38);
    if (temp_v0 != 0) {
      temp_v0 = gameGetPlayerData();
      temp_v6 = 0;
      temp_v8 = countUnlockedSlots();
      temp_v3 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
      temp_v4 = (int)temp_v8;
      if (0 < temp_v4) {
        temp_v3 = (unsigned int)param_1->field_0x38;
      }
      temp_v1 = 0;
      if (temp_v1 < temp_v4) {
        do {
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v6 * 2 + 0x34);
          if (temp_v5 == temp_v3 || temp_v5 == 0) break;
          temp_v1 = temp_v1 + 1;
          temp_v6 = temp_v6 + 1;
        } while (temp_v1 < temp_v4);
      }
    }
    else {
      temp_v0 = playerStockHasFreeSlot();
      if (temp_v0 == 0) {
        param_1->field_0x10 = 4;
        param_1->field_0x8 = 2;
        param_1->field_0xc = 0;
        return 0;
      }
      temp_v0 = gameGetPlayerData();
      temp_v6 = 0;
      temp_v8 = countUnlockedSlots();
      temp_v3 = (unsigned int)((unsigned long long)temp_v8 >> 0x20);
      temp_v4 = (int)temp_v8;
      if (0 < temp_v4) {
        temp_v3 = (unsigned int)param_1->field_0x38;
      }
      temp_v1 = 0;
      if (temp_v1 < temp_v4) {
        do {
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + temp_v6 * 2 + 0x34);
          if (temp_v5 == temp_v3 || temp_v5 == 0) break;
          temp_v1 = temp_v1 + 1;
          temp_v6 = temp_v6 + 1;
        } while (temp_v1 < temp_v4);
      }
    }
    param_1->field_0x10 = 3;
    *(int *)&param_1->field_0x3c = temp_v6;
    param_1->field_0x8 = 2;
    param_1->field_0xc = 0;
  }
  else {
    param_1->field_0x10 = 3;
    param_1->field_0x8 = 2;
    param_1->field_0xc = 0;
  }
  return 0;
}

} /* extern "C" */
