/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db258` (_code @ 0x3db258, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297468(...);
int FUN_002be624(...);
int FUN_002bf694(...);
int FUN_002c415c(...);
int FUN_002c4938(...);

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

extern int FUN_0024a808(int);
extern int FUN_002522e0(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c4938. */


unsigned int FUN_003db258(int param_1,unsigned int param_2)

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
  
  *(unsigned int *)(param_1 + 0x3028) = *(unsigned int *)(param_1 + 0x3028) & 0xfffcffff;
  *(unsigned char *)(param_1 + 0x3218) = 0xff;
  FUN_002c4938(param_1 + 0x3220,0x80);
  if (*(int *)(param_1 + 0x321c) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0x321c) = 0;
  }
  *(unsigned char *)(param_1 + 0x32a0) = 0;
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
  FUN_002c4938(temp_v17,0x80);
  FUN_002be624(temp_v17,"battle/effect/%s.eft",param_2);
  FUN_002bf694(&temp_v1,temp_v17);
  temp_v0 = FUN_002522e0((unsigned int *)&temp_v1,0x2f);
  FUN_002bf694(param_1 + 0x3220,temp_v0 + 1);
  temp_v0 = FUN_0024a808(param_1 + 0x3220);
  if (temp_v0 == 0xff) {
    FUN_00297468(&temp_v1,param_1 + 0x321c,0);
    *(unsigned char *)(param_1 + 0x32a0) = *(unsigned char *)(param_1 + 0x32a0) | 1;
  }
  return 1;
}

} /* extern "C" */
