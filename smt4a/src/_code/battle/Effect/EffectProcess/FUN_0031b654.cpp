/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031b654` (_code @ 0x31b654, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c884(...);
int FUN_001418fc(...);
int FUN_0014e38c(...);
int FUN_0014f0dc(...);
int FUN_0015155c(...);
int FUN_001523b8(...);
int FUN_00163060(...);
int FUN_002c1650(...);
int FUN_002e6354(...);
int FUN_0031b96c(...);
int FUN_003afc2c(...);
int FUN_003d92dc(...);

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

extern int FUN_001f4c80(...); /* 0x1f4c80 */
extern int FUN_0023799c(...); /* 0x23799c */
extern int FUN_00237ba4(...); /* 0x237ba4 */
extern int FUN_00282c4c(...); /* 0x282c4c */
extern int FUN_00282cf8(...); /* 0x282cf8 */
extern unsigned char LAB_0031b8d0; /* 0x31b8d0 */
extern unsigned char LAB_0031b8e0; /* 0x31b8e0 */
extern unsigned char LAB_0031b8f8; /* 0x31b8f8 */
extern unsigned char LAB_0031b908; /* 0x31b908 */
extern int DAT_005702f4; /* 0x5702f4 */

/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_001418fc. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_002c1650. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0031b96c. */
/* Supplied declaration required: FUN_003afc2c. */
/* Supplied declaration required: FUN_003d92dc. */


unsigned int FUN_0031b654(unsigned char param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = 0x100;
  FUN_00163060(0x100,0x100,0,0x53c,1);
  DAT_005702f4 = temp_v0;
  FUN_002e6354();
  *(unsigned char *)(temp_v0 + 0x538) = param_1;
  FUN_003d92dc();
  FUN_002c1650(0);
  if (*(char *)(temp_v0 + 0x538) == '\0') {
    FUN_003afc2c();
  }
  FUN_0031b96c();
  temp_v1 = 0;
  temp_v2 = 0x3f800000;
  temp_v3 = 0;
  *(unsigned int *)(temp_v0 + 0x50c) = 0;
  *(unsigned int *)(temp_v0 + 0x510) = 0;
  *(unsigned int *)(temp_v0 + 0x514) = 0x40a00000;
  *(unsigned int *)(temp_v0 + 0x518) = 0;
  *(unsigned int *)(temp_v0 + 0x51c) = 0;
  *(unsigned int *)(temp_v0 + 0x520) = 0;
  *(unsigned int *)(temp_v0 + 0x524) = 0x42700000;
  FUN_0013c884(temp_v0,1);
  FUN_001418fc(temp_v0);
  FUN_0014f0dc(temp_v0,(unsigned int *)(temp_v0 + 0x50c),(unsigned int *)(temp_v0 + 0x518),&temp_v1);
  FUN_001523b8(temp_v0,1);
  puVar2 = &LAB_0031b8d0;
  FUN_0014e38c(&LAB_0031b8d0,4,0,0,FUN_001f4c80,FUN_00282c4c,temp_v0);
  *(unsigned char **)(temp_v0 + 0x528) = puVar2;
  if (*(char *)(temp_v0 + 0x538) != '\0') {
    puVar3 = &LAB_0031b8e0;
    FUN_0015155c(&LAB_0031b8e0,0x89,0,0,FUN_0023799c,0,temp_v0,puVar2);
    *(unsigned char **)(temp_v0 + 0x534) = puVar3;
  }
  else {
    puVar3 = &LAB_0031b8f8;
    FUN_0015155c(&LAB_0031b8f8,0x72,0,0,FUN_00237ba4,0,temp_v0,puVar2);
    *(unsigned char **)(temp_v0 + 0x52c) = puVar3;
    puVar2 = &LAB_0031b908;
    FUN_0015155c(&LAB_0031b908,0x89,0,0,FUN_0023799c,0,temp_v0,*(unsigned int *)(temp_v0 + 0x528));
    *(unsigned char **)(temp_v0 + 0x530) = puVar2;
    puVar2 = &LAB_0031b8e0;
    FUN_0015155c(&LAB_0031b8e0,0xec,0,0,FUN_00282cf8,0,temp_v0,*(unsigned int *)(temp_v0 + 0x528));
    *(unsigned char **)(temp_v0 + 0x534) = puVar2;
  }
  return *(unsigned int *)(temp_v0 + 0x528);
}

} /* extern "C" */
