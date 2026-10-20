/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a09b4` (_code @ 0x2a09b4, 0x164 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021f6e4(void);
int asdOperatorNew(int, unsigned int);
int memClear(...);

typedef struct fn_002a09b4_arg1 fn_002a09b4_arg1;
struct fn_002a09b4_arg1 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    undefined4 *field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char g_asdModelBanks; /* 0x4d9880 */
extern unsigned char DAT_004d9d88; /* 0x4d9d88 */
extern unsigned char g_asdModelIdLists; /* 0x4daca0 */

/* Supplied declaration required: FUN_0021f6e4. */
extern int asdModelGetSlotArray2(fn_002a09b4_arg1 *);
extern int asdModelGetSlotArray1(fn_002a09b4_arg1 *);
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memClear. */
extern unsigned int asdLoadFileSync(unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_002a09b4(unsigned int param_1,fn_002a09b4_arg1 *param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  
  memClear(&g_asdModelBanks + (int)param_2 * 0x284,0x284);
  memClear(&DAT_004d9d88 + (int)param_2 * 0x284,0x284);
  memClear((int)param_2 * 0x284 + 0x4da290,0x284);
  memClear((int)param_2 * 0x284 + 0x4da798,0x284);
  temp_v0 = (int)param_2 * 0x14;
  *(unsigned int *)(&g_asdModelIdLists + temp_v0) = 0;
  *(unsigned int *)(temp_v0 + 0x4daca4) = 0;
  *(unsigned int *)(temp_v0 + 0x4daca8) = 0;
  *(unsigned int *)(temp_v0 + 0x4dacac) = 0;
  *(unsigned int *)(temp_v0 + 0x4dacb0) = 0;
  temp_v1 = asdModelGetSlotArray1(param_2);
  piVar3 = *(int **)(temp_v1 + 0x18);
  temp_v3 = 1;
  temp_v0 = (*(int *)(temp_v1 + 0x1c) - (int)piVar3) >> 2;
  if (temp_v0 + 1 >= 2) {
    do {
      temp_v4 = *piVar3;
      temp_v3 = temp_v3 + 1;
      piVar3 = piVar3 + 1;
      if (temp_v4 != 0) {
        *(unsigned int *)(temp_v4 + 0xc) = 0;
      }
    } while (temp_v3 < temp_v0 + 1);
  }
  *(unsigned int *)(temp_v1 + 0x1c) = *(unsigned int *)(temp_v1 + 0x18);
  temp_v1 = asdModelGetSlotArray2(param_2);
  temp_v3 = 1;
  piVar3 = *(int **)(temp_v1 + 0x18);
  temp_v0 = (*(int *)(temp_v1 + 0x1c) - (int)piVar3) >> 2;
  if (temp_v0 + 1 >= 2) {
    do {
      temp_v4 = *piVar3;
      temp_v3 = temp_v3 + 1;
      piVar3 = piVar3 + 1;
      if (temp_v4 != 0) {
        *(unsigned int *)(temp_v4 + 0xc) = 0;
      }
    } while (temp_v3 < temp_v0 + 1);
  }
  *(unsigned int *)(temp_v1 + 0x1c) = *(unsigned int *)(temp_v1 + 0x18);
  temp_v2 = asdLoadFileSync(param_1,0,1,0x80);
  *(unsigned int *)((int)param_2 * 4 + 0x464a9c) = temp_v2;
  puVar5 = (unsigned int *)0x4;
  asdOperatorNew(4,param_1);
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = *(unsigned int *)((int)param_2 * 4 + 0x464a9c);
  }
  *(unsigned int **)((int)param_2 * 4 + 0x464aa4) = puVar5;
  FUN_0021f6e4();
  return;
}

} /* extern "C" */
