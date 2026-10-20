/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00472078` (_code @ 0x472078, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a46c(...);
int FUN_001a6c40(unsigned char [4]);
int FUN_001b9fe4(unsigned int);
int FUN_001ba0c8(unsigned int, unsigned char [4]);
int wstrlen(...);

/* stack frame of param_6: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int sp180; /* 0x180: local_180 */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
} param_6_stack;

/* Supplied declaration required: FUN_0019a46c. */
/* Supplied declaration required: FUN_001a6c40. */
/* Supplied declaration required: FUN_001b9fe4. */
/* Supplied declaration required: FUN_001ba0c8. */
/* Supplied declaration required: wstrlen. */


void FUN_00472078(unsigned int param_1,unsigned int param_2,int param_3,unsigned int *param_4,
                 unsigned long long param_5,unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned int temp_v1;
  unsigned int *temp_v2;
  unsigned int temp_v3;
  unsigned int uStack_17c;
  unsigned char temp_v4 [132];
  unsigned int temp_v5;
  unsigned char temp_v6 [4];
  unsigned int temp_v7;
  unsigned int *temp_v8;
  unsigned int temp_v9;
  unsigned int uStack_c4;
  unsigned char temp_v10 [64];
  unsigned char temp_v11 [68];
  unsigned int temp_v12;
  
  if (param_3 != 0) {
    wstrlen(param_2);
    wstrlen(param_3);
    FUN_001a6c40(temp_v6);
    FUN_0019a46c(temp_v10,param_2,0x40);
    FUN_0019a46c(temp_v11,param_3,0x40);
    temp_v9 = (unsigned int)param_5;
    uStack_c4 = (unsigned int)((unsigned long long)param_5 >> 0x20);
    temp_v7 = temp_v7 | 3;
    if (param_4 != (unsigned int *)0x0) {
      *param_4 = 0;
    }
    temp_v8 = param_4;
    temp_v12 = param_6;
    FUN_001ba0c8(param_1,temp_v6);
    FUN_001b9fe4(param_1);
    return;
  }
  wstrlen(param_2);
  FUN_001a6c40(temp_v0);
  FUN_0019a46c(temp_v4,param_2,0x40);
  temp_v3 = (unsigned int)param_5;
  uStack_17c = (unsigned int)((unsigned long long)param_5 >> 0x20);
  temp_v5 = 0;
  temp_v1 = temp_v1 | 1;
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 0;
  }
  temp_v2 = param_4;
  FUN_001ba0c8(param_1,temp_v0);
  FUN_001b9fe4(param_1);
  return;
}

} /* extern "C" */
