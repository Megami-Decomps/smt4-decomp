/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034e64c` (_code @ 0x34e64c, 0x1b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

extern unsigned char LAB_00123bac; /* 0x123bac */
extern unsigned char LAB_00123bc8; /* 0x123bc8 */
extern unsigned char LAB_00123bd8; /* 0x123bd8 */
extern unsigned char LAB_0034e928; /* 0x34e928 */
extern unsigned int *DAT_0044d0fc; /* 0x44d0fc */
extern int DAT_0044d100; /* 0x44d100 */
extern unsigned int DAT_0044d104; /* 0x44d104 */
extern unsigned int *DAT_0044d108; /* 0x44d108 */
extern int DAT_0044d10c; /* 0x44d10c */
extern unsigned int DAT_0044d110; /* 0x44d110 */
extern unsigned int DAT_0044d114; /* 0x44d114 */
extern unsigned int DAT_0044d128; /* 0x44d128 */
extern unsigned int DAT_004c40f8; /* 0x4c40f8 */

/* Supplied declaration required: FUN_0011bd78. */
/* Supplied declaration required: FUN_0011be44. */
/* Supplied declaration required: FUN_0011cb3c. */
/* Supplied declaration required: FUN_002bce38. */
/* Supplied declaration required: FUN_002bce50. */
/* Supplied declaration required: FUN_002bcf34. */
/* Supplied declaration required: FUN_002c23f8. */
extern unsigned int FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3b00. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_0035a52c. */


unsigned int FUN_0034e64c(unsigned int *param_1,int param_2,int param_3,int param_4)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1 [2];
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  
  FUN_0011bd78();
  if (!(param_3 == 0 || param_4 == 0)) {
    FUN_0035a52c(param_3,param_4,0xff);
  }
  else {
    FUN_0011be44();
  }
  FUN_0011cb3c();
  FUN_002bce38();
  if (DAT_0044d0fc != (unsigned int *)0x0) {
    temp_v0 = 0;
  }
  else {
    DAT_0044d0fc = param_1;
    DAT_0044d10c = param_2;
    DAT_0044d100 = (**(romwright_code **)*param_1)(param_1,param_2 * 0x70,4);
    if (DAT_0044d100 == 0) {
      DAT_0044d0fc = (unsigned int *)0x0;
      DAT_0044d10c = 0;
      return 0;
    }
    FUN_002c4b30(DAT_0044d100,DAT_0044d10c * 0x70);
    DAT_0044d110 = 0;
    DAT_0044d114 = 0;
    FUN_002c3b00(&DAT_004c40f8);
    DAT_0044d104 = FUN_002c34a4(0x100,0x100,0,0x1000,0x1000,1);
    puVar2 = (unsigned int *)0x18;
    FUN_002c23f8();
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned char *)(puVar2 + 4) = 0;
    }
    DAT_0044d108 = puVar2;
    FUN_002bcf34();
    temp_v1[0] = 0;
    temp_v2 = 4;
    temp_v3 = &LAB_00123bac;
    puVar2 = &DAT_0044d128;
    temp_v4 = &LAB_00123bd8;
    temp_v5 = &LAB_00123bc8;
    FUN_002bce50(&DAT_0044d128,&temp_v2,&LAB_0034e928,temp_v1,DAT_0044d108[3] + DAT_0044d108[2],2,
                 0xfffffffe,0);
    if ((int)puVar2 < 0) {
      FUN_002c5468();
    }
    temp_v0 = 1;
  }
  return temp_v0;
}
