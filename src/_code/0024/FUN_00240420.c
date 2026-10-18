/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240420` (_code @ 0x240420, 0x14c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
} param_2_stack;

extern unsigned char LAB_0024056c; /* 0x24056c */

/* Supplied declaration required: FUN_002b93f0. */
extern int FUN_002b9408(unsigned char *, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002b9426. */
/* Supplied declaration required: FUN_002bb8e4. */
/* Supplied declaration required: FUN_002bce48. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c6388. */


int FUN_00240420(unsigned int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned int *puVar3;
  unsigned short *puVar4;
  unsigned char *puVar5;
  unsigned short temp_v1 [264];
  char temp_v2 [4];
  unsigned int temp_v3 [5];
  unsigned char temp_v4 [264];
  int temp_v5;
  unsigned int temp_v6;
  
  puVar4 = temp_v1;
  FUN_002c4b30(temp_v4,0x100);
  FUN_002be7fc(temp_v4,&LAB_0024056c,param_2);
  temp_v3[0] = 0;
  temp_v3[1] = 0;
  temp_v3[2] = 0;
  temp_v3[3] = 0;
  temp_v3[4] = 0;
  puVar5 = temp_v4;
  puVar3 = temp_v3;
  temp_v2[0] = -0x50;
  temp_v2[1] = '\b';
  temp_v2[2] = 'B';
  temp_v2[3] = '\0';
  temp_v5 = 0;
  temp_v6 = 0;
  FUN_002b9426(&temp_v5);
  while ((temp_v0 = FUN_002b9408(puVar5,0x105,(unsigned int *)&temp_v5), temp_v0 != 0 &&
         (puVar2 = puVar4, FUN_002c6388(puVar4,puVar5,temp_v0,&temp_v5), puVar2 != (unsigned short *)0x0)
         )) {
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + temp_v0;
  }
  *puVar4 = 0;
  temp_v3[3] = 0;
  temp_v3[4] = 0;
  temp_v3[1] = 0;
  temp_v3[2] = 0;
  FUN_002bb8e4(puVar3,temp_v1,1);
  if ((temp_v3[0] & 0xfffffffe) != 0) {
    if ((temp_v3[0] & 1) != 0) {
      FUN_002bce48();
    }
    FUN_002b93f0(temp_v3[0] & 0xfffffffe);
    temp_v3[0] = 0;
  }
  if ((temp_v3[0] & 0xfffffffe) != 0) {
    if ((temp_v3[0] & 1) != 0) {
      FUN_002bce48();
    }
    FUN_002b93f0(temp_v3[0] & 0xfffffffe);
  }
  return ((int)puVar3 >> 0x1f) + 1;
}
