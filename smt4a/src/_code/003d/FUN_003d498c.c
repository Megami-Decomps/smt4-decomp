/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d498c` (_code @ 0x3d498c, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char LAB_003d4b5c; /* 0x3d4b5c */
extern unsigned char LAB_003d4b78; /* 0x3d4b78 */
extern unsigned int DAT_00570280; /* 0x570280 */
extern int DAT_0057f28c; /* 0x57f28c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_0023723c. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_003dc38c. */
extern int FUN_003de464(int, unsigned int);
extern int FUN_003de748(int);
/* Supplied declaration required: FUN_003dea6c. */
/* Supplied declaration required: FUN_003defe0. */
extern int FUN_00418858(int);
extern unsigned char *FUN_0046c0f8(unsigned int, int);


void FUN_003d498c(int param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0057f28c;
  puVar3 = (unsigned int *)&temp_v2;
  if (param_1 != 0) {
    FUN_003dea6c(param_1,1);
    puVar2 = (unsigned char *)FUN_0046c0f8(DAT_00570280,param_1);
    if (puVar2 != (unsigned char *)0x0) {
      *(unsigned char **)(temp_v0 + 0x92c) = puVar2;
      *(unsigned char *)(temp_v0 + 0x943) = 1;
      puVar3 = (unsigned int *)puVar2;
    }
    else {
      FUN_00100388(&temp_v2,&LAB_003d4b5c,param_1);
      FUN_0020214c();
      *(unsigned int **)(temp_v0 + 0x92c) = puVar3;
      *(unsigned char *)(temp_v0 + 0x943) = 0;
    }
    temp_v2 = 3;
    temp_v4 = 0;
    temp_v3 = (unsigned char *)puVar3;
    FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x91c),3,0xffffffff,0);
    temp_v1 = FUN_00418858(param_1);
    if (0 < temp_v1) {
      temp_v3 = *(unsigned char **)(temp_v0 + 0x92c);
      temp_v2 = 3;
      temp_v4 = temp_v1;
      FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x924),3,0xffffffff,0);
    }
    FUN_003dea6c(param_1,1,0);
    temp_v1 = FUN_003de464(param_1,param_2);
    if (temp_v1 < 0) {
      temp_v1 = param_1;
      FUN_001ad9b4();
      temp_v1 = temp_v1 + 0x74;
      FUN_001654f8(temp_v1,0);
      temp_v3 = &LAB_003d4b78;
      temp_v2 = 3;
      temp_v4 = temp_v1;
      FUN_0023723c(*(unsigned int *)(temp_v0 + 0x920),3,0xffffffff,0);
    }
    else {
      temp_v3 = *(unsigned char **)(temp_v0 + 0x930);
      temp_v2 = 3;
      temp_v4 = temp_v1;
      FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x920),3,0xffffffff,0);
    }
    temp_v1 = param_1;
    FUN_003defe0();
    if (temp_v1 != 0) {
      temp_v4 = FUN_003de748(param_1);
      temp_v3 = *(unsigned char **)(temp_v0 + 0x92c);
      temp_v2 = 3;
      FUN_002a1f60(*(unsigned int *)(temp_v0 + 0x928),3,0xffffffff,0);
    }
    FUN_003dc38c(param_1);
    return;
  }
  return;
}
