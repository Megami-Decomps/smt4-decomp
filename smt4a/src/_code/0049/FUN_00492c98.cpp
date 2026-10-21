/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00492c98` (_code @ 0x492c98, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_0018291c(int *, int *, int *, int *, int, int);
int FUN_00183bb0(void);
int FUN_00185dd4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int);
int jobGetScalarValue(void);
int FUN_002e129c(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int);
int FUN_002f5020(int *, unsigned char *, int, int);

/* stack frame of param_8: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
} param_8_stack;

extern unsigned char LAB_00192824; /* 0x192824 */

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_0018291c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: jobGetScalarValue. */
/* Supplied declaration required: FUN_002e129c. */
/* Supplied declaration required: FUN_002f5020. */


void FUN_00492c98(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned long long param_6,unsigned int param_7,int param_8)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int temp_v3;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned int temp_v4;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int temp_v5;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  int temp_v6;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  int temp_v7;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  int temp_v8;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int temp_v9;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  jobGetScalarValue();
  temp_v0 = FUN_001834a4(param_2,param_3);
  temp_v1 = *(int *)(temp_v0 + 0xc);
  if ((temp_v1 != 0) && (*(short *)(temp_v1 + 4) == 1)) {
    temp_v2 = (unsigned int)((unsigned long long)param_6 >> 0x20);
    uStack_b4 = param_7;
    FUN_00185dd4(param_1,param_2,param_3,param_4,param_5,(int)param_6);
    return;
  }
  if (param_8 != 0 && temp_v1 != 0) {
    FUN_002f5020(&temp_v2,&LAB_00192824,0x10,4);
    temp_v1 = *(int *)(temp_v0 + 0xc);
    temp_v2 = *(unsigned int *)(temp_v1 + 0x10);
    uStack_b4 = *(unsigned int *)(temp_v1 + 0x14);
    uStack_b0 = *(unsigned int *)(temp_v1 + 0x18);
    uStack_ac = *(unsigned int *)(temp_v1 + 0x1c);
    temp_v1 = *(int *)(temp_v0 + 0xc);
    temp_v3 = *(unsigned int *)(temp_v1 + 0x20);
    uStack_a4 = *(unsigned int *)(temp_v1 + 0x24);
    uStack_a0 = *(unsigned int *)(temp_v1 + 0x28);
    uStack_9c = *(unsigned int *)(temp_v1 + 0x2c);
    temp_v1 = *(int *)(temp_v0 + 0xc);
    temp_v4 = *(unsigned int *)(temp_v1 + 0x30);
    uStack_94 = *(unsigned int *)(temp_v1 + 0x34);
    uStack_90 = *(unsigned int *)(temp_v1 + 0x38);
    uStack_8c = *(unsigned int *)(temp_v1 + 0x3c);
    temp_v0 = *(int *)(temp_v0 + 0xc);
    temp_v5 = *(unsigned int *)(temp_v0 + 0x40);
    uStack_84 = *(unsigned int *)(temp_v0 + 0x44);
    uStack_80 = *(unsigned int *)(temp_v0 + 0x48);
    uStack_7c = *(unsigned int *)(temp_v0 + 0x4c);
    temp_v6 = temp_v5;
    uStack_74 = uStack_84;
    uStack_70 = uStack_80;
    uStack_6c = uStack_7c;
    temp_v7 = temp_v4;
    uStack_64 = uStack_94;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    temp_v8 = temp_v3;
    uStack_54 = uStack_a4;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    temp_v9 = temp_v2;
    uStack_44 = uStack_b4;
    uStack_40 = uStack_b0;
    uStack_3c = uStack_ac;
    FUN_0018291c(&temp_v9,&temp_v8,&temp_v7,&temp_v6,0,0);
    efctSetSpeed();
  }
  temp_v2 = (unsigned int)((unsigned long long)param_6 >> 0x20);
  uStack_b4 = param_7;
  FUN_002e129c(param_1,param_2,param_3,param_4,param_5,(int)param_6);
  efctSetSpeed();
  FUN_00183bb0();
  return;
}

} /* extern "C" */
