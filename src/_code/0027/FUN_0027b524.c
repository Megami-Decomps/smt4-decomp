/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027b524` (_code @ 0x27b524, 0x318 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} param_4_stack;

extern unsigned char LAB_0027b840; /* 0x27b840 */
extern unsigned char LAB_0027b85c; /* 0x27b85c */
extern unsigned char LAB_0027b878; /* 0x27b878 */
extern unsigned char DAT_00446fe8; /* 0x446fe8 */
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

/* Supplied declaration required: FUN_001c1de8. */
/* Supplied declaration required: FUN_001c2100. */
/* Supplied declaration required: FUN_001c23e4. */
/* Supplied declaration required: FUN_001c2678. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002c32f0(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c54f0. */


void FUN_0027b524(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

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
  DAT_00446fe8 = 0;
  if (!((param_1 == 0x29 || param_1 == 0x2a) || param_1 == 0x2b)) {
    if (param_1 != 100) {
      if (param_1 - 0x65U < 99) {
        FUN_002be7fc(temp_v5,&LAB_0027b840,param_1 - 100,param_1 - 100,param_2);
      }
      else {
        FUN_002be7fc(temp_v5,&LAB_0027b85c,param_1,param_1,param_2);
      }
    }
    else {
      FUN_002be7fc(temp_v5,&LAB_0027b878);
    }
  }
  else {
    FUN_002be7fc(temp_v5,&LAB_0027b85c,0x24,0x24,1);
  }
  if (param_3 != 0) {
    temp_v0 = 1;
    if (param_3 - 0x65U < 99) {
      FUN_002be7fc(temp_v6,&LAB_0027b840,param_3 - 100,param_3 - 100,param_4);
    }
    else {
      FUN_002be7fc(temp_v6,&LAB_0027b85c,param_3,param_3,param_4);
    }
  }
  temp_v1 = FUN_002c32f0(temp_v5,temp_v4,0);
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
  FUN_002c54f0(0x100,0x100,0,0x15000,1);
  temp_v3 = 0x100;
  DAT_00447000 = temp_v2;
  FUN_002c54f0(0x100,0x100,0,0xfc00,1);
  temp_v2 = 0x100;
  DAT_00447004 = temp_v3;
  FUN_002c54f0(0x100,0x100,0,0x6900,1);
  temp_v3 = 0x100;
  DAT_00447008 = temp_v2;
  FUN_002c54f0(0x100,0x100,0,0x1f800,1);
  DAT_0044700c = temp_v3;
  FUN_001c23e4(0);
  FUN_001c2678(0);
  FUN_001c1de8(0);
  FUN_001c2100(0);
  FUN_002c4360(DAT_00447010);
  DAT_00447010 = 0;
  if (temp_v0) {
    temp_v1 = FUN_002c32f0(temp_v6,temp_v4,0);
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
    FUN_001c23e4(1);
    FUN_001c2678(1);
    FUN_001c1de8(1);
    FUN_001c2100(1);
    FUN_002c4360(DAT_00447010);
  }
  DAT_00447010 = 0;
  return;
}
