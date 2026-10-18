/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7b84` (_code @ 0x4f7b84, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
} param_2_stack;

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00100d60(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_0035bcdc(int);


unsigned int FUN_004f7b84(int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned char temp_v17 [136];
  
  *(unsigned int *)(param_1 + 0x339c) = *(unsigned int *)(param_1 + 0x339c) & 0xfffcffff;
  *(unsigned char *)(param_1 + 0x358c) = 0xff;
  FUN_002e6354(param_1 + 0x3594,0x80);
  if (*(int *)(param_1 + 0x3590) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x3590) = 0;
  }
  *(unsigned char *)(param_1 + 0x3614) = 0;
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  FUN_002e6354(temp_v17,0x80);
  FUN_00100388(temp_v17,"battle/effect/%s.eft",param_2);
  FUN_002e342c(&temp_v1,temp_v17);
  temp_v0 = FUN_00100d60((unsigned int *)&temp_v1,0x2f);
  FUN_002e342c(param_1 + 0x3594,temp_v0 + 1);
  temp_v0 = FUN_0035bcdc(param_1 + 0x3594);
  if (temp_v0 == 0xff) {
    FUN_002804b0(&temp_v1,param_1 + 0x3590,1);
    *(unsigned char *)(param_1 + 0x3614) = *(unsigned char *)(param_1 + 0x3614) | 1;
  }
  return 1;
}
