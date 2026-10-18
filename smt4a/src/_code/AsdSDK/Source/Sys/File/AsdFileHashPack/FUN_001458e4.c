/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001458e4` (_code @ 0x1458e4, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
} param_4_stack;

extern unsigned char LAB_00145a94; /* 0x145a94 */
extern unsigned char LAB_00145ad4; /* 0x145ad4 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0015325c. */
/* Supplied declaration required: FUN_00158900. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001884b0. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_0019a5a0. */
extern int FUN_0019dbb8(unsigned int);
/* Supplied declaration required: FUN_002e6dd0. */


/* WARNING: Type propagation algorithm not settling */

void FUN_001458e4(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 9 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  char *pcVar3;
  unsigned int *puVar4;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4 [3];
  
  temp_v4[0] = 0;
  if (*param_1 != 0) {
    FUN_0019a5a0();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  temp_v1 = param_1[4];
  if (temp_v1 != 0) {
    if ((*(unsigned int *)(temp_v1 + 4) & 0xfffffffe) != 0) {
      if ((*(unsigned int *)(temp_v1 + 4) & 1) != 0) {
        FUN_00195fc8();
      }
      FUN_001884b0(*(unsigned int *)(temp_v1 + 4) & 0xfffffffe);
      *(unsigned int *)(temp_v1 + 4) = 0;
      if (param_1[4] != 0) {
        (**(romwright_code **)(*(int *)param_1[4] + 4))();
      }
    }
    else {
      (**(romwright_code **)(*(int *)param_1[4] + 4))();
    }
    param_1[4] = 0;
  }
  temp_v3 = 4;
  puVar2 = temp_v4;
  temp_v4[1] = 0;
  temp_v2 = param_4;
  FUN_0015325c(puVar2,0,param_2,temp_v4 + 1);
  *param_1 = (int)puVar2;
  if ((temp_v4[0] & 0x80000000) == 0) {
    puVar4 = puVar2 + 6;
    param_1[1] = (int)puVar4;
    temp_v0 = *(unsigned short *)((int)puVar2 + 0x12);
    param_1[2] = (int)(puVar4 + temp_v0);
    param_1[3] = (int)(puVar4 + temp_v0 + (unsigned int)(unsigned short)puVar2[5] * 4);
    pcVar3 = (char *)0x18;
    FUN_00178b04(0x18,&LAB_00145a94,0x9f);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3[4] = '\0';
      pcVar3[5] = '\0';
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
      pcVar3[10] = '\0';
      pcVar3[0xb] = '\0';
      pcVar3[0xc] = '\0';
      pcVar3[0xd] = '\0';
      pcVar3[0xe] = '\0';
      pcVar3[0xf] = '\0';
      pcVar3[0x10] = '\0';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      pcVar3[0] = 'D';
      pcVar3[1] = -0x7f;
      pcVar3[2] = 'U';
      pcVar3[3] = '\0';
      pcVar3[0] = 'D';
      pcVar3[1] = -0x7f;
      pcVar3[2] = 'U';
      pcVar3[3] = '\0';
    }
    param_1[4] = (int)pcVar3;
    temp_v1 = FUN_0019dbb8(param_3);
    if (temp_v1 == 0) {
      FUN_002e6dd0(&temp_v2,0x100);
      FUN_00100388(&temp_v2,&LAB_00145ad4,param_3);
      FUN_00158900(param_1[4] + 4,&temp_v2,1);
      return;
    }
    FUN_00158900(param_1[4] + 4,param_3,1);
  }
  return;
}
