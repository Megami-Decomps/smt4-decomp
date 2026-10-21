/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049569c` (_code @ 0x49569c, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int placeWinStartText(int);
int FUN_00275bc8(void *, unsigned int);
int FUN_003d54f8(int, int);
int dataTable17Type1GetEntry(...);
int dataTable17Count(void);

typedef struct fn_0049569c_arg0 fn_0049569c_arg0;
struct fn_0049569c_arg0 {
    uint field_0x0; /* +0x0 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    byte field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    int field_0x1c; /* +0x1c */
    unsigned char pad_0x20[0x164];
    void *field_0x184; /* +0x184 */
    unsigned char field_0x188; /* +0x188 */
    unsigned char pad_0x189[0x3];
    int field_0x18c; /* +0x18c */
    int field_0x190; /* +0x190 */
};

extern int gameFlagIsSet(unsigned short);
/* Supplied declaration required: placeWinStartText. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_003d54f8. */
extern int FUN_004962e4(void);
/* Supplied declaration required: dataTable17Type1GetEntry. */
/* Supplied declaration required: dataTable17Count. */


void FUN_0049569c(fn_0049569c_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  void *pvVar3;
  int temp_v2;
  unsigned char *puVar5;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [4];
  unsigned char temp_v8 [8];
  
  puVar5 = temp_v7;
  temp_v1 = FUN_004962e4();
  if (temp_v1 != 0) {
    pvVar3 = param_1->field_0x184;
    FUN_00275bc8(pvVar3,*(unsigned int *)&param_1->field_0x188);
    param_1->field_0x18c = (int)pvVar3;
    *(unsigned int *)((int)pvVar3 + 0x108) = 2;
    pvVar3 = param_1->field_0x184;
    FUN_00275bc8(pvVar3,*(unsigned int *)&param_1->field_0x188);
    param_1->field_0x190 = (int)pvVar3;
    *(unsigned int *)((int)pvVar3 + 0x108) = 2;
    FUN_003d54f8(0,10);
    FUN_003d54f8(1,10);
    temp_v0 = param_1->field_0x18;
    temp_v5 = param_1->field_0x1c;
    temp_v2 = dataTable17Type1GetEntry(temp_v7,0);
    temp_v4 = 0;
    dataTable17Count();
    temp_v1 = -1;
    if (0 < (int)puVar5) {
      do {
        temp_v3 = temp_v2 + temp_v4 * 0x8c;
        temp_v6 = *(unsigned short *)(temp_v3 + 0x24) == (unsigned short)temp_v0;
        if (temp_v6) {
          temp_v3 = *(int *)(temp_v3 + 0x20);
        }
        temp_v1 = temp_v4;
        if (temp_v6 && temp_v3 == temp_v5) break;
        temp_v4 = temp_v4 + 1;
        puVar5 = temp_v7;
        dataTable17Count();
        temp_v1 = -1;
      } while (temp_v4 < (int)puVar5);
    }
    temp_v2 = dataTable17Type1GetEntry(temp_v8,temp_v1);
    temp_v1 = gameFlagIsSet(*(unsigned short *)(temp_v2 + 0x6a));
    if (temp_v1 != 0) {
      temp_v2 = temp_v2 + 0x6c;
    }
    placeWinStartText(temp_v2);
    param_1->field_0x10 = param_1->field_0x4;
    param_1->field_0x4 = 1;
    param_1->field_0x8 = 0;
  }
  return;
}

} /* extern "C" */
