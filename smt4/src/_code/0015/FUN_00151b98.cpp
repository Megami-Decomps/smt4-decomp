/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151b98` (_code @ 0x151b98, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a2e08(unsigned int);
int FUN_002a2f08(unsigned int, unsigned char [4]);
int FUN_002a301c(unsigned char [4]);
int FUN_002ba81c(...);
int FUN_002c30c4(...);

/* stack frame of param_8: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp188; /* 0x188: local_188 */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp198; /* 0x198: local_198 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
} param_8_stack;

/* Supplied declaration required: FUN_002a2e08. */
/* Supplied declaration required: FUN_002a2f08. */
/* Supplied declaration required: FUN_002a301c. */
/* Supplied declaration required: FUN_002ba81c. */
/* Supplied declaration required: FUN_002c30c4. */


void FUN_00151b98(unsigned int param_1,unsigned int param_2,int param_3,unsigned int *param_4,
                 unsigned long long param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0 [4];
  unsigned int temp_v1;
  unsigned int *temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [132];
  unsigned int temp_v8;
  unsigned char temp_v9 [4];
  unsigned int temp_v10;
  unsigned int *temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned char temp_v16 [64];
  unsigned char temp_v17 [68];
  unsigned int temp_v18;
  
  if (param_3 != 0) {
    FUN_002c30c4(param_2);
    FUN_002c30c4(param_3);
    FUN_002a301c(temp_v9);
    FUN_002ba81c(temp_v16,param_2,0x40);
    FUN_002ba81c(temp_v17,param_3,0x40);
    temp_v14 = (unsigned int)param_5;
    temp_v12 = (unsigned int)((unsigned long long)param_5 >> 0x20);
    temp_v10 = temp_v10 | 3;
    if (param_4 != (unsigned int *)0x0) {
      *param_4 = 0;
    }
    temp_v11 = param_4;
    temp_v13 = param_6;
    temp_v15 = param_7;
    temp_v18 = param_8;
    FUN_002a2f08(param_1,temp_v9);
    FUN_002a2e08(param_1);
    return;
  }
  FUN_002c30c4(param_2);
  FUN_002a301c(temp_v0);
  FUN_002ba81c(temp_v7,param_2,0x40);
  temp_v5 = (unsigned int)param_5;
  temp_v3 = (unsigned int)((unsigned long long)param_5 >> 0x20);
  temp_v8 = 0;
  temp_v1 = temp_v1 | 1;
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = 0;
  }
  temp_v2 = param_4;
  temp_v4 = param_6;
  temp_v6 = param_7;
  FUN_002a2f08(param_1,temp_v0);
  FUN_002a2e08(param_1);
  return;
}

} /* extern "C" */
