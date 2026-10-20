/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db0b8` (_code @ 0x1db0b8, 0x22c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00263508(...);
int FUN_00282bfc(...);
int FUN_0028975c(...);
int FUN_0029be5c(...);
int FUN_002a71fc(...);
int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001d99c0(...); /* 0x1d99c0 */
extern unsigned char LAB_001db330; /* 0x1db330 */
extern unsigned char LAB_001db33c; /* 0x1db33c */
extern unsigned char LAB_001db34c; /* 0x1db34c */
extern unsigned char LAB_001fe23c; /* 0x1fe23c */
extern unsigned char LAB_0021f33c; /* 0x21f33c */
extern unsigned char LAB_0021f354; /* 0x21f354 */
extern unsigned char LAB_002e0948; /* 0x2e0948 */
extern unsigned int *DAT_00432ce0; /* 0x432ce0 */

/* Supplied declaration required: FUN_00263508. */
extern int FUN_0026354c(unsigned int);
/* Supplied declaration required: FUN_00282bfc. */
/* Supplied declaration required: FUN_0028975c. */
/* Supplied declaration required: FUN_0029be5c. */
/* Supplied declaration required: FUN_002a71fc. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_001db0b8(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x5e8,1);
  DAT_00432ce0 = puVar1;
  temp_v0 = FUN_0026354c(10);
  if (temp_v0 == 0) {
    FUN_00263508(10,1);
  }
  temp_v0 = FUN_0026354c(0xc);
  if (temp_v0 == 0) {
    FUN_00263508(0xc,1);
  }
  temp_v0 = FUN_0026354c(0xb);
  if ((temp_v0 == 0) && (temp_v0 = FUN_002c09d0(0x277), temp_v0 != 0)) {
    FUN_00263508(0xb,1);
  }
  FUN_0028975c(0x465,0,1);
  *(unsigned char *)((int)puVar1 + 5) = 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x154] = 0;
  *(unsigned char *)(puVar1 + 0x155) = 0;
  puVar1[0x156] = 0;
  puVar1[0x15a] = 0;
  puVar1[0x159] = 0;
  puVar1[0x15d] = 0;
  puVar1[0x15c] = 0;
  puVar1[0x160] = 0;
  puVar1[0x15f] = 0;
  puVar1[0x163] = 0;
  puVar1[0x162] = 0;
  FUN_002a71fc(0);
  *(unsigned char *)(puVar1 + 1) = 0;
  if (param_1 != (unsigned int *)0x0) {
    temp_v1 = *param_1;
    *(char *)((int)puVar1 + 9) = (char)temp_v1;
    *(unsigned char *)((int)puVar1 + 5) = 0;
    FUN_00263508(temp_v1 & 0xff,1);
    FUN_0029be5c(0x1c,1);
    puVar1[4] = 0;
    puVar1[5] = 0;
  }
  else {
    puVar1[5] = 0;
    puVar1[4] = 1;
    FUN_00282bfc(0,0xff);
  }
  puVar4 = &LAB_001db330;
  FUN_002c5788(&LAB_001db330,2,0,0,FUN_001d99c0,&LAB_0021f33c,0);
  *puVar1 = (unsigned int)puVar4;
  FUN_002c4a08(&LAB_001db33c,0x75,0,0,&LAB_001fe23c,0,0,puVar4);
  FUN_002c4a08(&LAB_001db33c,0xd3,0,0,&LAB_002e0948,0,0,*puVar1);
  FUN_002c4a08(&LAB_001db34c,0xe7,0,0,&LAB_0021f354,0,0,*puVar1);
  return;
}

} /* extern "C" */
