/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00392060` (_code @ 0x392060, 0x26c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_003922d8; /* 0x3922d8 */
extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_00433130; /* 0x433130 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00126edc. */
extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_002339ac. */
/* Supplied declaration required: FUN_002339e8. */
/* Supplied declaration required: FUN_00233ac0. */
/* Supplied declaration required: FUN_0023554c. */
/* Supplied declaration required: FUN_00262bcc. */
extern int FUN_0026b7cc(void);
/* Supplied declaration required: FUN_00289984. */
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_002a150c. */
/* Supplied declaration required: FUN_002b8584. */
/* Supplied declaration required: FUN_002b9008. */
extern unsigned int *FUN_002bad80(unsigned char *, unsigned int);
extern unsigned int *FUN_002bb09c(unsigned char *);
/* Supplied declaration required: FUN_002bc200. */
extern int FUN_002c1830(unsigned int);
extern int FUN_002f61a4(void);
/* Supplied declaration required: FUN_002fea30. */


void FUN_00392060(unsigned int *param_1)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [20];
  unsigned char temp_v8 [12];
  
  temp_v0 = param_1[2];
  if (temp_v0 == 0) {
    FUN_002b8584(0);
    FUN_002a150c(temp_v6,DAT_00433158);
    *param_1 = *param_1 & 0xffffffef;
    *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xfffffeff;
    *(unsigned char *)(DAT_00433130 + 0x450c) = 0;
    FUN_002339e8(param_1 + 0xba);
    FUN_002339ac(param_1 + 0xad);
    *(unsigned char *)(DAT_00432fc8 + 0xd50) = 2;
    temp_v2 = FUN_00291018(param_1[0xd4],&LAB_003922d8);
    FUN_002971e4(param_1[0xd6],temp_v2);
    FUN_00233ac0(param_1,0,1);
    param_1[2] = 1;
    return;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      return;
    }
    temp_v1 = FUN_0026b7cc();
    if (temp_v1 == 0) {
      return;
    }
    piVar3 = (int *)param_1[0x82];
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    temp_v1 = FUN_0019dfbc(param_1[0xd6]);
    if (temp_v1 == 2) {
      temp_v1 = FUN_00297674();
      if (temp_v1 == 0) {
        param_1[2] = 2;
        FUN_00126edc(DAT_00432fc8 + 0x80);
        temp_v6[0] = 0;
        puVar5 = (unsigned int *)FUN_002bb09c(temp_v7);
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar6 = (unsigned int *)FUN_002bad80(temp_v8,0);
        temp_v3 = *puVar6;
        temp_v0 = puVar6[1];
        puVar5[1] = temp_v0;
        *puVar5 = temp_v3;
        temp_v4 = puVar5[2];
        temp_v5 = puVar5[3];
        param_1[0x84] = puVar5[-1];
        param_1[0x85] = temp_v3;
        param_1[0x86] = temp_v0;
        param_1[0x87] = temp_v4;
        param_1[0x88] = temp_v5;
        FUN_00233ac0(param_1,0xffffffff,0);
        FUN_00262bcc(0x1000001,10);
        return;
      }
      if (temp_v1 != 1) {
        return;
      }
      piVar3 = (int *)param_1[0x82];
      param_1[1] = 0xf;
      param_1[2] = 0;
      if (piVar3 == (int *)0x0) {
        return;
      }
      (**(romwright_code **)(*piVar3 + 4))();
      param_1[0x82] = 0;
      return;
    }
    temp_v1 = FUN_002f61a4();
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_002c1830(1);
    if (temp_v1 == 0) {
      return;
    }
    FUN_002bc200(0x100016d);
    FUN_00289984();
    FUN_0023554c();
    FUN_002fea30();
    FUN_002b9008();
    FUN_002b9008();
    piVar3 = (int *)param_1[0x82];
    param_1[1] = 0xf;
    param_1[2] = 0;
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  (**(romwright_code **)(*piVar3 + 4))();
  param_1[0x82] = 0;
  return;
}
