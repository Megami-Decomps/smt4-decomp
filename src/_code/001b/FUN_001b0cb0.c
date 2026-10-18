/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b0cb0` (_code @ 0x1b0cb0, 0x28c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_001b0f84; /* 0x1b0f84 */
extern unsigned char LAB_001b0f94; /* 0x1b0f94 */
extern unsigned char LAB_001b0fa4; /* 0x1b0fa4 */
extern unsigned char LAB_001b0fb4; /* 0x1b0fb4 */
extern unsigned char LAB_001b0fc0; /* 0x1b0fc0 */
extern unsigned char LAB_001b0fd0; /* 0x1b0fd0 */
extern unsigned char LAB_001b55f0; /* 0x1b55f0 */
extern unsigned char LAB_001e49c4; /* 0x1e49c4 */
extern unsigned char LAB_001e49cc; /* 0x1e49cc */
extern int FUN_0020eee8(); /* 0x20eee8 */
extern unsigned char LAB_0020f23c; /* 0x20f23c */
extern unsigned char LAB_0020f244; /* 0x20f244 */
extern unsigned int *DAT_00435d90; /* 0x435d90 */
extern unsigned int DAT_00435d94; /* 0x435d94 */
extern unsigned int DAT_00435d98; /* 0x435d98 */

/* Supplied declaration required: FUN_001b6a98. */
extern unsigned int FUN_00282e54(void);
extern unsigned int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002c4b84. */
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002c5ff4. */


void FUN_001b0cb0(unsigned int *param_1,int param_2)

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
  
  puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x4a58,1);
  DAT_00435d90 = puVar2;
  DAT_00435d94 = FUN_002c4b84(0x100,0x100,0,0x97e8,1);
  temp_v1 = FUN_002a8a08();
  FUN_002bcf58(DAT_00435d94,temp_v1,0x97e8);
  DAT_00435d98 = FUN_002c4b84(0x100,0x100,0,0x104a,1);
  temp_v1 = FUN_00282e54();
  FUN_002c5ff4(DAT_00435d98,temp_v1,0x104a);
  FUN_001b6a98();
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
  puVar7 = &LAB_001b0f84;
  FUN_002c5978(&LAB_001b0f84,2,0,0,&LAB_001b55f0,FUN_0020eee8,DAT_00435d90);
  *puVar2 = (unsigned int)puVar7;
  FUN_002c4c00(&LAB_001b0f94,0x73,0,0,&LAB_001e49c4,0,0,puVar7);
  FUN_002c4c00(&LAB_001b0fa4,0xe6,0,0,&LAB_0020f23c,0,0,*puVar2);
  FUN_002c4c00(&LAB_001b0fb4,0x80,0,0,&LAB_001e49cc,0,0,*puVar2);
  FUN_002c4c00(&LAB_001b0fc0,0xde,0,0,&LAB_001e49cc,0,0,*puVar2);
  FUN_002c4c00(&LAB_001b0fd0,0xe9,0,0,&LAB_0020f244,0,0,*puVar2);
  return;
}
