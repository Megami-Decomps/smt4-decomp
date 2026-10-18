/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b040` (_code @ 0x38b040, 0x168 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned short sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern int DAT_00432fc8; /* 0x432fc8 */

extern unsigned int FUN_002347ac(unsigned char *);
/* Supplied declaration required: FUN_002347b8. */
/* Supplied declaration required: FUN_00262ac0. */
/* Supplied declaration required: FUN_002a1578. */
extern int FUN_002a308c(unsigned short *);
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_002c6c00. */
/* Supplied declaration required: FUN_00354818. */
/* Supplied declaration required: FUN_003df2f0. */
/* Supplied declaration required: FUN_003df708. */


unsigned char * FUN_0038b040(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int uStack_5c;
  unsigned char temp_v9 [4];
  int temp_v10;
  unsigned int uStack_44;
  unsigned short temp_v11 [12];
  unsigned char temp_v12 [8];
  
  temp_v3 = DAT_00432fc8;
  FUN_00354818(&temp_v8,DAT_00432fc8 + 0x20,DAT_00432fc8 + 0x18);
  *(unsigned int *)(param_1 + 0xc) = temp_v8;
  *(unsigned int *)(param_1 + 0x10) = uStack_5c;
  temp_v0 = FUN_002a1578(param_1 + 0xc);
  if ((unsigned char *)-(temp_v0 >> 0x1f) != (unsigned char *)0x0) {
    return (unsigned char *)-(temp_v0 >> 0x1f);
  }
  FUN_002347b8(temp_v9,*(unsigned int *)(temp_v3 + 0x5a8),*(unsigned int *)(param_1 + 0x14));
  temp_v1 = FUN_002347ac(temp_v9);
  temp_v0 = temp_v1 << 1;
  FUN_00262ac0();
  temp_v5 = 0;
  if (temp_v0 != 0) {
    temp_v4 = 0;
    if (temp_v4 < temp_v1) {
      do {
        temp_v6 = 1;
        temp_v7 = temp_v4;
        FUN_003df2f0(&temp_v10,temp_v9,temp_v12,temp_v11);
        *(unsigned int *)(param_1 + 0xc) = temp_v10;
        *(unsigned int *)(param_1 + 0x10) = uStack_44;
        temp_v2 = FUN_002a1578(param_1 + 0xc);
        if (temp_v2 < 0) {
          FUN_002a1578(param_1 + 0xc);
          FUN_002c6c00(temp_v0);
          return temp_v9;
        }
        temp_v2 = FUN_002a308c(temp_v11);
        if (temp_v2 != 0) {
          temp_v2 = temp_v5 * 2;
          temp_v5 = temp_v5 + 1;
          *(unsigned short *)(temp_v0 + temp_v2) = temp_v11[0];
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v1);
    }
    FUN_003df708(&temp_v6,temp_v3 + 0x20,temp_v0,temp_v5);
    *(unsigned int *)(param_1 + 0xc) = temp_v6;
    *(unsigned int *)(param_1 + 0x10) = temp_v7;
    temp_v3 = FUN_002a1578(param_1 + 0xc);
    if (temp_v3 < 0) {
      FUN_002a1578(param_1 + 0xc);
      FUN_002c6c00(temp_v0);
      return temp_v9;
    }
    FUN_002c583c(0);
    FUN_002c6c00(temp_v0);
  }
  return temp_v9;
}
