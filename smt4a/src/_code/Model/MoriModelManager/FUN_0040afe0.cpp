/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040afe0` (_code @ 0x40afe0, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_003fed38(unsigned int, int);
int FUN_00406834(unsigned int, unsigned int);
int FUN_004069b0(unsigned int, int *);

/* stack frame of param_3: 14 slot(s), 32 byte(s) */
typedef struct {
    unsigned char sp23; /* 0x23: local_23 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned char sp25; /* 0x25: local_25 */
    unsigned char sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned char LAB_0040b0c0; /* 0x40b0c0 */

extern unsigned int FUN_001581dc(unsigned int *);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003fed38. */
/* Supplied declaration required: FUN_00406834. */
/* Supplied declaration required: FUN_004069b0. */
extern unsigned int FUN_00406e6c(void);


void FUN_0040afe0(int param_1,unsigned short param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  
  if (*(int *)(param_1 + 4) == 0) {
    temp_v0 = 0x194;
    FUN_00178b04(0x194,&LAB_0040b0c0,0x196);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_00406e6c();
    }
    *(unsigned int *)(param_1 + 4) = temp_v1;
    temp_v14 = 0;
    temp_v15 = 0;
    temp_v17 = 0;
    temp_v11 = 2;
    temp_v10 = 0xffff;
    temp_v13 = 1;
    temp_v16 = 1;
    temp_v12 = param_2;
    FUN_004069b0(*(unsigned int *)(param_1 + 4),&temp_v10);
    temp_v3 = *(unsigned int *)(param_1 + 4);
    temp_v7 = 0x10000;
    temp_v6 = 0x30000;
    temp_v8 = 0x10000;
    temp_v9 = 0;
    temp_v4 = *(unsigned int *)(param_1 + 0x38);
    temp_v5 = 1;
    temp_v1 = FUN_001581dc((unsigned int *)&temp_v4);
    FUN_00406834(temp_v3,temp_v1);
    temp_v0 = temp_v2;
    if (param_3 != 0) {
      temp_v0 = *(int *)(param_1 + 4);
    }
    if (param_3 != 0 && temp_v0 != 0) {
      FUN_003fed38(*(unsigned int *)(param_1 + 0x14),temp_v0 + 0x10);
    }
  }
  return;
}

} /* extern "C" */
