/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2e64` (_code @ 0x3a2e64, 0x31c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_003a3180; /* 0x3a3180 */
extern unsigned char LAB_003a3194; /* 0x3a3194 */

/* Supplied declaration required: FUN_0019dfbc. */
/* Supplied declaration required: FUN_00230ae8. */
/* Supplied declaration required: FUN_002313d4. */
/* Supplied declaration required: FUN_00232a48. */
/* Supplied declaration required: FUN_002333d4. */
/* Supplied declaration required: FUN_002334d8. */
/* Supplied declaration required: FUN_002335a4. */
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002339ac. */
/* Supplied declaration required: FUN_002339e8. */
extern int FUN_0027f10c(void);
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002923d0. */
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_0029c68c(void);
/* Supplied declaration required: FUN_0029c6dc. */
/* Supplied declaration required: FUN_0029e8c0. */
extern int FUN_002a0f88(void);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002b9220. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);
/* Supplied declaration required: FUN_003a1594. */


void FUN_003a2e64(int param_1)

{
/* irregular: 18 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  switch(*(unsigned int *)(param_1 + 8)) {
  case 0:
    temp_v0 = FUN_00291018(*(unsigned int *)(param_1 + 0x160),&LAB_003a3180);
    FUN_002971e4(*(unsigned int *)(param_1 + 0x168),temp_v0);
    FUN_0019dfbc(*(unsigned int *)(param_1 + 0x168));
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x15d58) = 0;
    *(unsigned int *)(param_1 + 0x15d5c) = 0;
    *(unsigned int *)(param_1 + 0x15d60) = 0;
    *(unsigned char *)(param_1 + 0x15d64) = 0;
    *(unsigned char *)(param_1 + 0x15d65) = 0;
    *(unsigned int *)(param_1 + 0x15d68) = 0xffffffff;
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  case 1:
    FUN_0019dfbc(*(unsigned int *)(param_1 + 0x168));
    temp_v2 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = temp_v2;
    if ((temp_v2 >= 10) &&
       ((temp_v2 = FUN_0027f10c(), temp_v2 != 0 ||
        (temp_v2 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x168)), temp_v2 == 2)))) {
      FUN_00232a48();
      FUN_00297128();
      *(unsigned int *)(param_1 + 8) = 2;
      *(unsigned int *)(param_1 + 0xc) = 0;
      return;
    }
    break;
  case 2:
    temp_v2 = FUN_002a0f88();
    if (temp_v2 != 0) {
      temp_v0 = FUN_00291018(*(unsigned int *)(param_1 + 0x160),&LAB_003a3194);
      FUN_002971e4(*(unsigned int *)(param_1 + 0x168),temp_v0);
      FUN_0019dfbc(*(unsigned int *)(param_1 + 0x168));
      FUN_002333d4(param_1 + 0x3a8,0);
      FUN_002b8b78(0x77);
      *(unsigned int *)(param_1 + 8) = 3;
      return;
    }
    break;
  case 3:
    temp_v2 = param_1 + 0x3c8;
    FUN_002b9220(temp_v2,0);
    temp_v0 = FUN_002bef70(temp_v2);
    temp_v1 = FUN_002bef7c(temp_v2);
    FUN_002313d4(param_1 + 0x380,temp_v1,temp_v0);
    FUN_0019dfbc(*(unsigned int *)(param_1 + 0x168));
    if (*(char *)(param_1 + 0x452) != '\0') {
      FUN_0029e8c0(*(unsigned int *)(param_1 + 0x15d20),0);
      *(unsigned int *)(param_1 + 8) = 4;
      return;
    }
    break;
  case 4:
    FUN_0019dfbc(*(unsigned int *)(param_1 + 0x168));
    temp_v2 = param_1 + 0x9ca8;
    FUN_00230ae8(param_1 + 0x828);
    (**(romwright_code **)(**(int **)(param_1 + 0x85c) + 0xc))(*(int **)(param_1 + 0x85c),temp_v2);
    FUN_002335a4(temp_v2);
    FUN_002334d8(param_1 + 0x3a8,2);
    FUN_002334d8(param_1 + 0x3a8,3);
    temp_v2 = FUN_002337a0(temp_v2);
    FUN_002923d0(*(unsigned short *)(param_1 + temp_v2 * 6 + 0x9d1e));
    temp_v2 = FUN_0027f10c();
    if (temp_v2 != 0) {
      FUN_00232a48();
      FUN_00297128();
      *(unsigned int *)(param_1 + 8) = 5;
      *(unsigned int *)(param_1 + 0xc) = 0;
      FUN_0029c6dc(*(unsigned int *)(param_1 + 0x15d20),0);
      return;
    }
    break;
  case 5:
    temp_v2 = FUN_002a0f88();
    if ((temp_v2 != 0) && (temp_v2 = FUN_0029c68c(), temp_v2 == 1)) {
      FUN_003a1594(param_1);
      FUN_002339e8(*(unsigned int *)(param_1 + 0x85c));
      FUN_002339ac(param_1 + 0x828);
      temp_v2 = 0;
      if (temp_v2 < *(short *)(param_1 + 0x15d50)) {
        do {
          FUN_002b9008();
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *(short *)(param_1 + 0x15d50));
      }
      *(unsigned int *)(param_1 + 4) = 3;
      *(unsigned int *)(param_1 + 8) = 0;
      return;
    }
  }
  return;
}
