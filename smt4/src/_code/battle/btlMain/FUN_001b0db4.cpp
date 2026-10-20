/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b0db4` (_code @ 0x1b0db4, 0x28c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6b98(...);
int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);
int rt_memcpy(...);
int rt_memcpy_w(...);

/* stack frame of param_2: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_001b1088; /* 0x1b1088 */
extern unsigned char LAB_001b1098; /* 0x1b1098 */
extern unsigned char LAB_001b10a8; /* 0x1b10a8 */
extern unsigned char LAB_001b10b8; /* 0x1b10b8 */
extern unsigned char LAB_001b10c4; /* 0x1b10c4 */
extern unsigned char LAB_001b10d4; /* 0x1b10d4 */
extern unsigned char LAB_001b56f0; /* 0x1b56f0 */
extern unsigned char LAB_001e4ab8; /* 0x1e4ab8 */
extern unsigned char LAB_001e4ac0; /* 0x1e4ac0 */
extern int FUN_0020f04c(...); /* 0x20f04c */
extern unsigned char LAB_0020f3a0; /* 0x20f3a0 */
extern unsigned char LAB_0020f3a8; /* 0x20f3a8 */
extern unsigned int *DAT_00435d90; /* 0x435d90 */
extern unsigned int DAT_00435d94; /* 0x435d94 */
extern unsigned int DAT_00435d98; /* 0x435d98 */

/* Supplied declaration required: FUN_001b6b98. */
extern unsigned int FUN_00282be4(void);
extern unsigned int FUN_002a8764(void);
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_001b0db4(unsigned int *param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *puVar7;
  unsigned char temp_v5;
  
  puVar2 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x4a58,1);
  temp_v1 = 0x100;
  DAT_00435d90 = puVar2;
  FUN_002c498c(0x100,0x100,0,0x97e8,1);
  DAT_00435d94 = temp_v1;
  temp_v1 = FUN_002a8764();
  rt_memcpy_w(DAT_00435d94,temp_v1,0x97e8);
  temp_v1 = 0x100;
  FUN_002c498c(0x100,0x100,0,0x104a,1);
  DAT_00435d98 = temp_v1;
  temp_v1 = FUN_00282be4();
  rt_memcpy(DAT_00435d98,temp_v1,0x104a);
  FUN_001b6b98();
  temp_v4 = 0;
  if (param_1 != (unsigned int *)0x0) {
    temp_v4 = param_2;
  }
  if (!((param_1 == (unsigned int *)0x0 || param_2 == 0) || temp_v4 < 0)) {
    if (param_2 == 4) {
      puVar2[0x30] = *param_1;
    }
    else if (param_2 == 0x12) {
      temp_v1 = param_1[1];
      temp_v2 = param_1[2];
      temp_v3 = param_1[3];
      temp_v0 = *(short *)(param_1 + 4);
      temp_v5 = (char)*param_1 != '\0';
      temp_v4 = (int)(short)((unsigned int)*param_1 >> 0x10);
      if (temp_v5) {
        puVar2[0x31] = temp_v4;
      }
      else {
        puVar2[0x30] = temp_v4;
      }
      puVar2[0x4f] = (int)(short)temp_v1;
      puVar2[0x50] = (int)(short)((unsigned int)temp_v1 >> 0x10);
      puVar2[0x51] = (int)(short)temp_v2;
      puVar2[0x52] = (int)(short)((unsigned int)temp_v2 >> 0x10);
      *(char *)(puVar2 + 0x53) = (char)temp_v3;
      if (temp_v5) {
        *(unsigned char *)(puVar2 + 0x53) = 0;
      }
      puVar2[0x54] = (int)(short)((unsigned int)temp_v3 >> 0x10);
      puVar2[0x55] = (int)temp_v0;
    }
  }
  else {
    if (DAT_00435d90 != (unsigned int *)0x0) {
      DAT_00435d90[0x1a] = 1;
    }
    puVar2[0x112a] = puVar2[0x112a] | 0x202;
  }
  *(unsigned char *)(puVar2 + 0x18) = 0;
  puVar7 = &LAB_001b1088;
  FUN_002c5788(&LAB_001b1088,2,0,0,&LAB_001b56f0,FUN_0020f04c,DAT_00435d90);
  *puVar2 = (unsigned int)puVar7;
  FUN_002c4a08(&LAB_001b1098,0x73,0,0,&LAB_001e4ab8,0,0,puVar7);
  FUN_002c4a08(&LAB_001b10a8,0xe6,0,0,&LAB_0020f3a0,0,0,*puVar2);
  FUN_002c4a08(&LAB_001b10b8,0x80,0,0,&LAB_001e4ac0,0,0,*puVar2);
  FUN_002c4a08(&LAB_001b10c4,0xde,0,0,&LAB_001e4ac0,0,0,*puVar2);
  FUN_002c4a08(&LAB_001b10d4,0xe9,0,0,&LAB_0020f3a8,0,0,*puVar2);
  return;
}

} /* extern "C" */
