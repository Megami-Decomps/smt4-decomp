/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116ebc` (_code @ 0x116ebc, 0xa2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00116cdc(int);
int FUN_002e9af4(void);
int FUN_002e9c0c(void);
int FUN_002e9ec8(int, unsigned int);
int FUN_002f7c94(unsigned int, unsigned int, unsigned int);
int FUN_002f7cb0(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_002f7e84(unsigned char [16], int, int, int);
int FUN_00302f88(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00116d09; /* 0x116d09 */
extern unsigned char LAB_00116f60; /* 0x116f60 */

/* Supplied declaration required: FUN_00116cdc. */
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002e7908(unsigned int *, unsigned int *);
/* Supplied declaration required: FUN_002e9af4. */
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
extern int FUN_002f4e86(unsigned char *);
/* Supplied declaration required: FUN_002f7c94. */
/* Supplied declaration required: FUN_002f7cb0. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_002f7e84. */
/* Supplied declaration required: FUN_00302f88. */


void FUN_00116ebc(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int iStack_2c;
  unsigned int uStack_28;
  int temp_v4;
  unsigned char temp_v5 [16];
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    FUN_00116cdc(param_1);
    FUN_002e9c0c();
    uStack_28 = *(unsigned int *)(param_1 + 0x104);
    temp_v3 = (unsigned int)*(unsigned char *)(param_1 + 0x78);
    iStack_2c = param_1 + 0x68;
    FUN_002f7e84(temp_v5,param_1 + 0xe0,param_1 + 0x80,param_1 + 0x70);
    temp_v0 = FUN_002f4e86(temp_v5);
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(param_1 + 0xc4);
      temp_v1 = FUN_002e9af4();
      FUN_002f7c94(temp_v1,*(unsigned int *)(param_1 + 0x6c),temp_v2);
      FUN_002f7cb0(param_1);
      temp_v0 = FUN_002e760a(0x10);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ea3c0(temp_v0,&LAB_00116d09,0,&LAB_00116f60);
      }
      FUN_002f7cba(param_1,param_1 + 0x80,temp_v1);
      return;
    }
    temp_v4 = 0x8001000d;
  }
  else {
    temp_v4 = 0x80010004;
  }
  temp_v1 = FUN_002e7908(&temp_v3,(unsigned int *)&temp_v4);
  FUN_00302f88(param_1,temp_v1);
  return;
}

} /* extern "C" */
