/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ece60` (_code @ 0x2ece60, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int cecProcessStart(void);
int cecProcessDestroy(void);
int FUN_00254600(int);
int FUN_0025461c(void);
int objectFlagsClear(unsigned int, int);
int FUN_0026b9bc(void);
int scrScriptProcessStartEntry(...);
int FUN_00297060(void);
int gameGetUnitRecord(...);
int buttonHelpSetPreset(int);

typedef struct fn_002ece60_arg0 fn_002ece60_arg0;
struct fn_002ece60_arg0 {
    unsigned char pad_0x0[0xcf4];
    int field_0xcf4; /* +0xcf4 */
    int field_0xcf8; /* +0xcf8 */
    unsigned char pad_0xcfc[0x8];
    int field_0xd04; /* +0xd04 */
    unsigned char pad_0xd08[0x24];
    undefined4 field_0xd2c; /* +0xd2c */
    unsigned char pad_0xd30[0x8];
    int field_0xd38; /* +0xd38 */
    unsigned char pad_0xd3c[0x20];
    undefined4 field_0xd5c; /* +0xd5c */
};

extern int scrRunOpcodesStub(int);
/* Supplied declaration required: cecProcessStart. */
/* Supplied declaration required: cecProcessDestroy. */
/* Supplied declaration required: FUN_00254600. */
/* Supplied declaration required: FUN_0025461c. */
/* Supplied declaration required: objectFlagsClear. */
/* Supplied declaration required: FUN_0026b9bc. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
extern int flagWordTestBit(unsigned int, unsigned int);
/* Supplied declaration required: gameGetUnitRecord. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: buttonHelpSetPreset. */


unsigned int FUN_002ece60(fn_002ece60_arg0 *param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = param_1->field_0xd38;
  temp_v4 = 0;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if ((temp_v0 == 2) && (temp_v0 = scrRunOpcodesStub(param_1->field_0xd04), temp_v0 == 2)) {
        param_1->field_0xd2c = 0xf;
        temp_v4 = 2;
        param_1->field_0xd38 = 0;
      }
    }
    else {
      temp_v0 = scrRunOpcodesStub(param_1->field_0xd04);
      if (temp_v0 == 2) {
        temp_v0 = gameGetSlotTable();
        temp_v3 = 0;
        do {
          if (-1 < *(char *)(temp_v0 + temp_v3 + 0x90f0)) {
            temp_v1 = gameGetUnitRecord();
            temp_v2 = flagWordTestBit(temp_v1,2);
            if (temp_v2 != 0) {
              temp_v1 = gameGetUnitRecord((int)*(char *)(temp_v0 + temp_v3 + 0x90f0));
              objectFlagsClear(temp_v1,4);
            }
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x18);
        FUN_00254600(0);
        FUN_0026b9bc();
        scrScriptProcessStartEntry(param_1->field_0xd04,0x1e);
        param_1->field_0xd38 = param_1->field_0xd38 + 1;
      }
    }
  }
  else {
    temp_v0 = param_1->field_0xcf4;
    if ((temp_v0 != 0) && (param_1->field_0xcf8 != 0)) {
      FUN_00297060();
      param_1->field_0xd04 = temp_v0;
      scrScriptProcessStartEntry();
      buttonHelpSetPreset(0x3c);
      cecProcessStart();
      FUN_0025461c();
      cecProcessDestroy();
      FUN_00254600(0);
      param_1->field_0xd38 = param_1->field_0xd38 + 1;
    }
  }
  return temp_v4;
}

} /* extern "C" */
