/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002218d4` (_code @ 0x2218d4, 0x1e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00200b10(...);
int FUN_00221ba8(...);
int FUN_002c159c(...);
int FUN_002c1e30(...);
int FUN_002c1edc(...);
int FUN_002c2044(...);
int FUN_002c4938(...);
int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);
int FUN_00317a90(...);
int FUN_0032fd74(...);

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

extern int FUN_0017fbe4(...); /* 0x17fbe4 */
extern int FUN_001aa2a0(...); /* 0x1aa2a0 */
extern int FUN_001aa4a8(...); /* 0x1aa4a8 */
extern int FUN_001dc9d0(...); /* 0x1dc9d0 */
extern int FUN_001dca5c(...); /* 0x1dca5c */
extern unsigned char LAB_00221b1c; /* 0x221b1c */
extern unsigned char LAB_00221b2c; /* 0x221b2c */
extern unsigned char LAB_00221b44; /* 0x221b44 */
extern int DAT_00433260; /* 0x433260 */

/* Supplied declaration required: FUN_00200b10. */
/* Supplied declaration required: FUN_00221ba8. */
/* Supplied declaration required: FUN_002c159c. */
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: FUN_00317a90. */
/* Supplied declaration required: FUN_0032fd74. */


unsigned int FUN_002218d4(unsigned char param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = 0x100;
  FUN_002c498c(0x100,0x100,0,0x534,1);
  DAT_00433260 = temp_v0;
  FUN_002c4938();
  *(unsigned char *)(temp_v0 + 0x530) = param_1;
  FUN_0032fd74();
  FUN_00200b10(0);
  if (*(char *)(temp_v0 + 0x530) == '\0') {
    FUN_00317a90();
  }
  FUN_00221ba8();
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
  FUN_002c2044(temp_v0,1);
  FUN_002c159c(temp_v0);
  FUN_002c1edc(temp_v0,(unsigned int *)(temp_v0 + 0x508),(unsigned int *)(temp_v0 + 0x514),&temp_v1);
  FUN_002c1e30(temp_v0,1);
  puVar2 = &LAB_00221b1c;
  FUN_002c5788(&LAB_00221b1c,2,0,0,FUN_0017fbe4,FUN_001dc9d0,temp_v0);
  *(unsigned char **)(temp_v0 + 0x524) = puVar2;
  if (*(char *)(temp_v0 + 0x530) != '\0') {
    puVar3 = &LAB_00221b2c;
    FUN_002c4a08(&LAB_00221b2c,0x84,0,0,FUN_001aa2a0,0,temp_v0,puVar2);
    *(unsigned char **)(temp_v0 + 0x52c) = puVar3;
  }
  else {
    puVar3 = &LAB_00221b44;
    FUN_002c4a08(&LAB_00221b44,0x70,0,0,FUN_001aa4a8,0,temp_v0,puVar2);
    *(unsigned char **)(temp_v0 + 0x528) = puVar3;
    puVar2 = &LAB_00221b2c;
    FUN_002c4a08(&LAB_00221b2c,0xe8,0,0,FUN_001dca5c,0,temp_v0,*(unsigned int *)(temp_v0 + 0x524));
    *(unsigned char **)(temp_v0 + 0x52c) = puVar2;
  }
  return *(unsigned int *)(temp_v0 + 0x524);
}

} /* extern "C" */
