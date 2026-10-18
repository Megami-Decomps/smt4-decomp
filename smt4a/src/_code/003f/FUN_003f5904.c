/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5904` (_code @ 0x3f5904, 0x20c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_001643b4. */
extern int FUN_0018206c(unsigned int, int);
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_00275bc8. */
extern int FUN_00341940(unsigned int);
/* Supplied declaration required: FUN_003f5268. */
/* Supplied declaration required: FUN_003f5bd8. */


void FUN_003f5904(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v5 = *(int *)(param_1 + 0x28) != 0;
  temp_v1 = 0;
  if (temp_v5) {
    temp_v1 = *(int *)(param_1 + 0x2c);
  }
  if (((!temp_v5 || temp_v1 == 0) || (*(int *)(param_1 + 0x30) == 0)) ||
     (temp_v1 = FUN_00341940(0x31), temp_v1 == 0)) {
    return;
  }
  temp_v1 = 0;
  do {
    temp_v2 = FUN_0018206c(0x31,temp_v1);
    if (temp_v2 == 0) {
      return;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v3 = FUN_00187180(0x44,0);
  temp_v4 = FUN_00192798();
  *(unsigned int *)(param_1 + 0x20) = temp_v4;
  temp_v3 = FUN_00192748(temp_v3);
  *(unsigned int *)(param_1 + 0x38) = temp_v3;
  temp_v1 = *(int *)(param_1 + 0x30);
  FUN_00275bc8(temp_v1,*(unsigned int *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x34) = temp_v1;
  *(unsigned int *)(temp_v1 + 0x108) = 2;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  FUN_003f5bd8(param_1,*(unsigned int *)(param_1 + 0x38));
  *(int *)(param_1 + 0x6b4) = *(int *)(param_1 + 0x48) - 5;
  *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x48) - 4;
  *(int *)(param_1 + 0x6bc) = *(int *)(param_1 + 0x48) - 3;
  *(int *)(param_1 + 0x6c0) = *(int *)(param_1 + 0x48) - 2;
  *(int *)(param_1 + 0x6c4) = *(int *)(param_1 + 0x48) - 1;
  *(int *)(param_1 + 0x6c8) = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x6cc) = *(int *)(param_1 + 0x48) + 1;
  *(int *)(param_1 + 0x6d0) = *(int *)(param_1 + 0x48) + 2;
  *(int *)(param_1 + 0x6d4) = *(int *)(param_1 + 0x48) + 3;
  *(unsigned int *)(param_1 + 0x5e0) = *(int *)(param_1 + 0x20) + (unsigned int)*(unsigned short *)(param_1 + 0x5e6) * 0x34;
  *(unsigned int *)(param_1 + 0x4c) = 4;
  temp_v2 = *(int *)(param_1 + 0x6b0);
  temp_v1 = 4;
  if (temp_v2 < 4) {
    temp_v1 = temp_v2;
  }
  *(int *)(param_1 + 0x4c) = temp_v1;
  FUN_00203b40(param_1 + 0x58,temp_v2,temp_v1,1,1,1);
  temp_v1 = 0;
  do {
    if (*(int *)(param_1 + 0x4c) <= temp_v1) break;
    temp_v0 = FUN_001643b4(0x31,temp_v1 + 0x88);
    temp_v2 = temp_v1 * 2;
    temp_v1 = temp_v1 + 1;
    *(unsigned short *)(param_1 + temp_v2 + 300) = temp_v0;
    *(short *)(param_1 + 0x148) = *(short *)(param_1 + 0x148) + 1;
  } while (temp_v1 < 4);
  temp_v0 = FUN_001643b4(0x31,0xa9);
  *(unsigned short *)(param_1 + 0x142) = temp_v0;
  temp_v0 = FUN_001643b4(0x31,0xaa);
  *(unsigned short *)(param_1 + 0x144) = temp_v0;
  temp_v0 = FUN_001643b4(0x31,0xab);
  *(unsigned short *)(param_1 + 0x146) = temp_v0;
  *(short *)(param_1 + 0x148) = *(short *)(param_1 + 0x148) + 3;
  FUN_003f5268(param_1,2,3);
  return;
}
