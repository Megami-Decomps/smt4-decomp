/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002217d8` (_code @ 0x2217d8, 0x1e0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int FUN_0017fae4(); /* 0x17fae4 */
extern int FUN_001aa19c(); /* 0x1aa19c */
extern int FUN_001aa3a4(); /* 0x1aa3a4 */
extern int FUN_001dc8c8(); /* 0x1dc8c8 */
extern int FUN_001dc954(); /* 0x1dc954 */
extern unsigned char LAB_00221a24; /* 0x221a24 */
extern unsigned char LAB_00221a34; /* 0x221a34 */
extern unsigned char LAB_00221a4c; /* 0x221a4c */
extern int DAT_00433260; /* 0x433260 */

/* Supplied declaration required: FUN_002009ac. */
/* Supplied declaration required: FUN_00221ab0. */
/* Supplied declaration required: FUN_002c1774. */
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
/* Supplied declaration required: FUN_002c2210. */
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_00317bd8. */
/* Supplied declaration required: FUN_0032ffa8. */


unsigned int FUN_002217d8(unsigned char param_1)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002c4b84(0x100,0x100,0,0x534,1);
  DAT_00433260 = temp_v0;
  FUN_002c4b30(temp_v0,0x534);
  *(unsigned char *)(temp_v0 + 0x530) = param_1;
  FUN_0032ffa8();
  FUN_002009ac(0);
  if (*(char *)(temp_v0 + 0x530) == '\0') {
    FUN_00317bd8();
  }
  FUN_00221ab0();
  temp_v1 = 0;
  temp_v2 = 0x3f800000;
  temp_v3 = 0;
  *(unsigned int *)(temp_v0 + 0x508) = 0;
  *(unsigned int *)(temp_v0 + 0x50c) = 0;
  *(unsigned int *)(temp_v0 + 0x510) = 0x40a00000;
  *(unsigned int *)(temp_v0 + 0x514) = 0;
  *(unsigned int *)(temp_v0 + 0x518) = 0;
  *(unsigned int *)(temp_v0 + 0x51c) = 0;
  *(unsigned int *)(temp_v0 + 0x520) = 0x42700000;
  FUN_002c2210(temp_v0,1);
  FUN_002c1774(temp_v0);
  FUN_002c20a8(temp_v0,(unsigned int *)(temp_v0 + 0x508),(unsigned int *)(temp_v0 + 0x514),&temp_v1);
  FUN_002c1ffc(temp_v0,1);
  puVar2 = &LAB_00221a24;
  FUN_002c5978(&LAB_00221a24,2,0,0,FUN_0017fae4,FUN_001dc8c8,temp_v0);
  *(unsigned char **)(temp_v0 + 0x524) = puVar2;
  if (*(char *)(temp_v0 + 0x530) != '\0') {
    puVar3 = &LAB_00221a34;
    FUN_002c4c00(&LAB_00221a34,0x84,0,0,FUN_001aa19c,0,temp_v0,puVar2);
    *(unsigned char **)(temp_v0 + 0x52c) = puVar3;
  }
  else {
    puVar3 = &LAB_00221a4c;
    FUN_002c4c00(&LAB_00221a4c,0x70,0,0,FUN_001aa3a4,0,temp_v0,puVar2);
    *(unsigned char **)(temp_v0 + 0x528) = puVar3;
    puVar2 = &LAB_00221a34;
    FUN_002c4c00(&LAB_00221a34,0xe8,0,0,FUN_001dc954,0,temp_v0,*(unsigned int *)(temp_v0 + 0x524));
    *(unsigned char **)(temp_v0 + 0x52c) = puVar2;
  }
  return *(unsigned int *)(temp_v0 + 0x524);
}
