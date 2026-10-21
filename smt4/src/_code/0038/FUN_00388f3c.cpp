/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00388f3c` (_code @ 0x388f3c, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);
int FUN_003df5d0(int *, int, int [2], unsigned int [192], int, int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp330; /* 0x330: local_330 */
} param_2_stack;

extern int g_aocMain; /* 0x432fc8 */

extern unsigned char *FUN_002a1130(unsigned int, unsigned int);
extern int legacyResourceIdRemap(unsigned char *);
extern int objGetFlagBit0(unsigned int *);
extern int objGetFlagBit1(void);
/* Supplied declaration required: jyoucyuGetTableEntry. */
/* Supplied declaration required: FUN_003df5d0. */


void FUN_00388f3c(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7 [192];
  int temp_v8 [2];
  int temp_v9;
  unsigned int uStack_1c;
  
  puVar1 = (unsigned char *)FUN_002a1130(param_1,0);
  temp_v8[0] = 0;
  FUN_003df5d0(&temp_v9,param_2 + 8,temp_v8,temp_v7,0x20,0);
  *(unsigned int *)(puVar1 + 4) = temp_v9;
  *(unsigned int *)(puVar1 + 8) = uStack_1c;
  temp_v0 = legacyResourceIdRemap(puVar1 + 4);
  if (temp_v0 < 0) {
    *puVar1 = 100;
    temp_v0 = legacyResourceIdRemap(puVar1 + 4);
    if (temp_v0 != -0x36bec6eb) {
      if ((*(unsigned int *)(g_aocMain + 0x754) & 0x100) == 0) {
        temp_v1 = 0x96;
      }
      else {
        temp_v1 = 0x32;
      }
      *(unsigned int *)(puVar1 + 0x10) = temp_v1;
      *puVar1 = 0x6a;
      return;
    }
    jyoucyuGetTableEntry(0);
  }
  else {
    *(unsigned int *)(param_2 + 0x310) = 0;
    *(unsigned int *)(param_2 + 0x314) = 0;
    temp_v0 = 0;
    if (0 < temp_v8[0]) {
      do {
        temp_v2 = objGetFlagBit1();
        if (temp_v2 != 0) {
          temp_v2 = *(int *)(param_2 + 0x310);
          *(int *)(param_2 + 0x310) = temp_v2 + 1;
          temp_v1 = temp_v7[temp_v0 * 6 + 1];
          temp_v3 = temp_v7[temp_v0 * 6 + 2];
          temp_v4 = temp_v7[temp_v0 * 6 + 3];
          temp_v5 = temp_v7[temp_v0 * 6 + 4];
          temp_v6 = temp_v7[temp_v0 * 6 + 5];
          temp_v2 = param_2 + temp_v2 * 0x18;
          *(unsigned int *)(temp_v2 + 0x10) = temp_v7[temp_v0 * 6];
          *(unsigned int *)(temp_v2 + 0x14) = temp_v1;
          *(unsigned int *)(temp_v2 + 0x18) = temp_v3;
          *(unsigned int *)(temp_v2 + 0x1c) = temp_v4;
          *(unsigned int *)(temp_v2 + 0x20) = temp_v5;
          *(unsigned int *)(temp_v2 + 0x24) = temp_v6;
          temp_v2 = objGetFlagBit0(temp_v7 + temp_v0 * 6);
          if (temp_v2 != 0) {
            *(int *)(param_2 + 0x314) = *(int *)(param_2 + 0x314) + 1;
          }
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < temp_v8[0]);
      return;
    }
  }
  return;
}

} /* extern "C" */
