/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234528` (_code @ 0x234528, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp98; /* 0x98: local_98 */
} param_2_stack;

extern unsigned char DAT_005612d6; /* 0x5612d6 */
extern unsigned char DAT_005612df; /* 0x5612df */
extern unsigned char DAT_005612f2; /* 0x5612f2 */
extern unsigned char DAT_00561303; /* 0x561303 */
extern unsigned char DAT_00561312; /* 0x561312 */
extern unsigned char DAT_00561325; /* 0x561325 */
extern unsigned char DAT_00561336; /* 0x561336 */
extern unsigned char DAT_00561353; /* 0x561353 */
extern unsigned char DAT_00561366; /* 0x561366 */
extern unsigned char DAT_00561373; /* 0x561373 */
extern unsigned char DAT_00561384; /* 0x561384 */
extern int *DAT_0058104c; /* 0x58104c */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_00152f44. */
extern int FUN_0015688c(void);
extern int FUN_0018719c(unsigned int);
extern int FUN_002d8b58(unsigned int, unsigned short);
/* Supplied declaration required: rt_memcpy. */


unsigned int FUN_00234528(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *temp_v3 [4];
  unsigned char *puStack_88;
  unsigned char *puStack_84;
  unsigned char *puStack_80;
  unsigned char *puStack_7c;
  unsigned char *temp_v4;
  unsigned char *puStack_74;
  unsigned char *puStack_70;
  unsigned char *temp_v5;
  unsigned char temp_v6 [84];
  
  FUN_00152f44();
  if ((((*DAT_0058104c == 0) && (temp_v0 = FUN_0015688c(), temp_v0 != 0)) &&
      ((temp_v1 = FUN_0018719c(0x8d), temp_v1 == 0 ||
       ((temp_v1 = FUN_0018719c(0xc2), temp_v1 != 0 || (*(short *)(temp_v0 + 300) != 0xb1)))))) &&
     ((temp_v1 = FUN_0018719c(0x1a2), temp_v1 == 0 || (temp_v1 = FUN_0014bef4(99), temp_v1 + 1 >= 0x33)))) {
    piVar1 = DAT_0058104c;
    temp_v2 = 0xc;
    temp_v3[0] = &DAT_00561366;
    temp_v3[1] = &DAT_00561366;
    temp_v3[2] = &DAT_00561303;
    temp_v3[3] = &DAT_005612d6;
    puStack_88 = &DAT_00561312;
    puStack_84 = &DAT_00561353;
    puStack_80 = &DAT_00561384;
    puStack_7c = &DAT_005612df;
    if (param_2 >= 3) {
      temp_v2 = 0xd;
    }
    if (param_1 == 0xb) {
      temp_v2 = 0x17;
    }
    temp_v5 = &DAT_00561336;
    temp_v4 = &DAT_00561373;
    puStack_74 = &DAT_005612f2;
    puStack_70 = &DAT_00561325;
    *DAT_0058104c = 8;
    piVar1[1] = 0;
    temp_v1 = FUN_002d8b58(temp_v2,*(unsigned short *)(temp_v0 + 300));
    piVar1 = DAT_0058104c;
    DAT_0058104c[5] = temp_v1;
    piVar1[6] = (unsigned int)*(unsigned short *)(temp_v0 + 300);
    rt_memcpy(temp_v6,temp_v1,0x48);
    FUN_00100388((int)piVar1 + 0x25,temp_v6,temp_v3[param_1]);
    DAT_0058104c[5] = (int)DAT_0058104c + 0x25;
    return 1;
  }
  return 0;
}
