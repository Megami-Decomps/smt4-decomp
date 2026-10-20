/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027b2b4` (_code @ 0x27b2b4, 0x318 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c1ee8(int);
int FUN_001c2200(int);
int FUN_001c24e4(int);
int FUN_001c2778(int);
int FUN_002be624(...);
int asdMemFree(int);
int asdMemoryAlloc(int, int, int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} param_4_stack;

extern unsigned char LAB_0027b5d0; /* 0x27b5d0 */
extern unsigned char LAB_0027b5ec; /* 0x27b5ec */
extern unsigned char LAB_0027b608; /* 0x27b608 */
extern unsigned char g_mapCollision; /* 0x446fe8 */
extern unsigned int DAT_00446fec; /* 0x446fec */
extern unsigned int DAT_00446ff0; /* 0x446ff0 */
extern unsigned int DAT_00446ff4; /* 0x446ff4 */
extern unsigned int DAT_00446ff8; /* 0x446ff8 */
extern unsigned int DAT_00446ffc; /* 0x446ffc */
extern unsigned int DAT_00447000; /* 0x447000 */
extern unsigned int DAT_00447004; /* 0x447004 */
extern unsigned int DAT_00447008; /* 0x447008 */
extern unsigned int DAT_0044700c; /* 0x44700c */
extern int DAT_00447010; /* 0x447010 */
extern int DAT_00447014; /* 0x447014 */
extern int *DAT_00447018; /* 0x447018 */

/* Supplied declaration required: FUN_001c1ee8. */
/* Supplied declaration required: FUN_001c2200. */
/* Supplied declaration required: FUN_001c24e4. */
/* Supplied declaration required: FUN_001c2778. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002c3124(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: asdMemoryAlloc. */


void FUN_0027b2b4(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [64];
  unsigned char temp_v6 [68];
  
  DAT_00446fec = 0;
  DAT_00446ff0 = 0;
  DAT_00446ff4 = 0;
  DAT_00446ff8 = 0;
  DAT_00446ffc = 0;
  temp_v0 = 0;
  g_mapCollision = 0;
  if (!((param_1 == 0x29 || param_1 == 0x2a) || param_1 == 0x2b)) {
    if (param_1 != 100) {
      if (param_1 - 0x65U < 99) {
        FUN_002be624(temp_v5,&LAB_0027b5d0,param_1 - 100,param_1 - 100,param_2);
      }
      else {
        FUN_002be624(temp_v5,&LAB_0027b5ec,param_1,param_1,param_2);
      }
    }
    else {
      FUN_002be624(temp_v5,&LAB_0027b608);
    }
  }
  else {
    FUN_002be624(temp_v5,&LAB_0027b5ec,0x24,0x24,1);
  }
  if (param_3 != 0) {
    temp_v0 = 1;
    if (param_3 - 0x65U < 99) {
      FUN_002be624(temp_v6,&LAB_0027b5d0,param_3 - 100,param_3 - 100,param_4);
    }
    else {
      FUN_002be624(temp_v6,&LAB_0027b5ec,param_3,param_3,param_4);
    }
  }
  temp_v1 = FUN_002c3124(temp_v5,temp_v4,0);
  piVar5 = (int *)(*(int *)(temp_v1 + 0xc) + temp_v1);
  DAT_00447010 = temp_v1;
  DAT_00447014 = temp_v1;
  DAT_00447018 = piVar5;
  *piVar5 = *piVar5 + temp_v1;
  piVar5[2] = piVar5[2] + temp_v1;
  piVar5[4] = piVar5[4] + temp_v1;
  piVar5[6] = piVar5[6] + temp_v1;
  piVar5[8] = piVar5[8] + temp_v1;
  piVar5[10] = temp_v1 + piVar5[10];
  temp_v2 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0x15000,1);
  temp_v3 = 0x100;
  DAT_00447000 = temp_v2;
  asdMemoryAlloc(0x100,0x100,0,0xfc00,1);
  temp_v2 = 0x100;
  DAT_00447004 = temp_v3;
  asdMemoryAlloc(0x100,0x100,0,0x6900,1);
  temp_v3 = 0x100;
  DAT_00447008 = temp_v2;
  asdMemoryAlloc(0x100,0x100,0,0x1f800,1);
  DAT_0044700c = temp_v3;
  FUN_001c24e4(0);
  FUN_001c2778(0);
  FUN_001c1ee8(0);
  FUN_001c2200(0);
  asdMemFree(DAT_00447010);
  DAT_00447010 = 0;
  if (temp_v0) {
    temp_v1 = FUN_002c3124(temp_v6,temp_v4,0);
    piVar5 = (int *)(*(int *)(temp_v1 + 0xc) + temp_v1);
    DAT_00447010 = temp_v1;
    DAT_00447014 = temp_v1;
    DAT_00447018 = piVar5;
    *piVar5 = *piVar5 + temp_v1;
    piVar5[2] = piVar5[2] + temp_v1;
    piVar5[4] = piVar5[4] + temp_v1;
    piVar5[6] = piVar5[6] + temp_v1;
    piVar5[8] = piVar5[8] + temp_v1;
    piVar5[10] = temp_v1 + piVar5[10];
    FUN_001c24e4(1);
    FUN_001c2778(1);
    FUN_001c1ee8(1);
    FUN_001c2200(1);
    asdMemFree(DAT_00447010);
  }
  DAT_00447010 = 0;
  return;
}

} /* extern "C" */
