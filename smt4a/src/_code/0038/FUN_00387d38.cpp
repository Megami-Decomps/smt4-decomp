/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387d38` (_code @ 0x387d38, 0x1a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int gameGetSlotRecord(...);
int linkHolderApplyFlag(unsigned int, int);
int campCecSetObjectValue(int);
int FUN_00331380(int);
int FUN_003b6fc4(void);
int FUN_003c1060(void);

typedef struct fn_00387d38_arg0 fn_00387d38_arg0;
struct fn_00387d38_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0xdc];
    undefined4 field_0xe8; /* +0xe8 */
    int field_0xec; /* +0xec */
    unsigned char pad_0xf0[0x8];
    undefined4 field_0xf8; /* +0xf8 */
    undefined4 field_0xfc; /* +0xfc */
    unsigned char pad_0x100[0x8];
    short field_0x108; /* +0x108 */
    undefined2 field_0x10a; /* +0x10a */
    unsigned char pad_0x10c[0x40];
    undefined4 field_0x14c; /* +0x14c */
    unsigned char pad_0x150[0x4];
    undefined1 field_0x154; /* +0x154 */
};

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: gameGetSlotRecord. */
extern int gameGetSlotTable(void);
/* Supplied declaration required: linkHolderApplyFlag. */
extern int FUN_00284e94(void);
extern int partyPanelExists(void);
/* Supplied declaration required: campCecSetObjectValue. */
/* Supplied declaration required: FUN_00331380. */
/* Supplied declaration required: FUN_003b6fc4. */
/* Supplied declaration required: FUN_003c1060. */


unsigned int FUN_00387d38(fn_00387d38_arg0 *param_1)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v1 = FUN_003b6fc4();
  if (temp_v1 == 0) {
    temp_v1 = partyPanelExists();
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v1 = FUN_00284e94();
    if (temp_v1 != 0) {
      campCecSetObjectValue(0);
      param_1->field_0x154 = 1;
      FUN_00331380(0);
      linkHolderApplyFlag(*(unsigned int *)&param_1->field_0x4,1);
      param_1->field_0xfc = 1;
      param_1->field_0xe8 = 0xffffffff;
      param_1->field_0xf8 = 5;
      param_1->field_0xec = -1;
      param_1->field_0x14c = 0;
      return 3;
    }
    return 0;
  }
  param_1->field_0x10a = param_1->field_0x108;
  temp_v0 = FUN_003b6fc4();
  param_1->field_0x108 = temp_v0;
  param_1->field_0xec = -1;
  temp_v1 = gameGetSlotTable();
LAB_00387d78:
  if (((-1 >= *(char *)(temp_v1 + temp_v3 + 0x1ca0)) ||
      (temp_v2 = gameGetSlotRecord(), (unsigned int)*(unsigned short *)(temp_v2 + 0x62) != (int)param_1->field_0x108)) ||
     (temp_v2 = gameGetSlotRecord((int)*(char *)(temp_v1 + temp_v3 + 0x1ca0)),
     *(short *)(temp_v2 + 0x62) != *(short *)((int)param_1->field_0x8 + 0x60))) {
    temp_v3 = temp_v3 + 1;
    if (temp_v3 < 3) goto LAB_00387d78;
    if (param_1->field_0xec == -1) {
      temp_v3 = 0;
      do {
        if (((-1 < *(char *)(temp_v1 + temp_v3 + 0x1c88)) &&
            (temp_v2 = gameGetSlotRecord(), (unsigned int)*(unsigned short *)(temp_v2 + 0x62) == (int)param_1->field_0x108))
           && (temp_v2 = gameGetSlotRecord((int)*(char *)(temp_v1 + temp_v3 + 0x1c88)),
              *(short *)(temp_v2 + 0x62) == *(short *)((int)param_1->field_0x8 + 0x60))) {
          FUN_003c1060();
          param_1->field_0xec = 5;
          sysPlaySe(0xe4);
          param_1->field_0xf8 = 2;
          return 3;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x18);
      if (param_1->field_0xec == -1) {
        FUN_00331380(0);
        param_1->field_0xec = 4;
      }
    }
    sysPlaySe(0xe4);
    param_1->field_0xf8 = 2;
    return 3;
  }
  FUN_003c1060();
  param_1->field_0xec = 5;
  sysPlaySe(0xe4);
  param_1->field_0xf8 = 2;
  return 3;
}

} /* extern "C" */
