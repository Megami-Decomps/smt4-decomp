/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117620` (_code @ 0x117620, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00128fd8(unsigned char [12], int, unsigned int *);
int FUN_002e6e34(unsigned char [12], unsigned int);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002f9dd4(...);

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00128fd8. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern unsigned int onlineGetActiveLock(void);
extern unsigned char *packNibbles(unsigned int *, unsigned char, unsigned int);
/* Supplied declaration required: FUN_002f9dd4. */


unsigned int FUN_00117620(int param_1,int param_2,unsigned int param_3,unsigned char *param_4)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [12];
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [12];
  int iStack_20;
  int temp_v8;
  unsigned int uStack_18;
  unsigned char *puStack_14;
  
  iStack_20 = param_1;
  temp_v8 = param_2;
  uStack_18 = param_3;
  puStack_14 = param_4;
  temp_v0 = onlineGetActiveLock();
  FUN_002e6e34(temp_v4,temp_v0);
  temp_v5 = temp_v5 & 0xffffff00;
  if (param_3 != 0) {
    puVar2 = (unsigned char *)packNibbles(&temp_v2,*(unsigned char *)(temp_v8 + 4),param_3);
    temp_v5 = romwright_piece_3_1((((unsigned int)(temp_v5) >> 8) & 0xffffffU),*puVar2);
LAB_00117688:
    temp_v6 = temp_v5;
    temp_v1 = param_1;
    FUN_002f9dd4(param_1,&temp_v6);
    if (temp_v1 == 0) {
      temp_v2 = romwright_piece_3_1((((unsigned int)(temp_v2) >> 8) & 0xffffffU),(unsigned char)temp_v5);
      temp_v3 = temp_v8;
      FUN_00128fd8(temp_v7,param_1 + 4,&temp_v2);
      if (param_4 != (unsigned char *)0x0) {
        *param_4 = (char)param_3;
      }
      _ZN9Obj55b28cD1Ev(temp_v4);
      return 1;
    }
  }
  else {
    param_3 = 0xf;
    temp_v2 = temp_v2 & 0xffffff00;
    do {
      puVar2 = (unsigned char *)packNibbles(&temp_v2,*(unsigned char *)(temp_v8 + 4),param_3);
      temp_v5 = romwright_piece_3_1((((unsigned int)(temp_v5) >> 8) & 0xffffffU),*puVar2);
      temp_v2 = temp_v5;
      temp_v1 = param_1;
      FUN_002f9dd4();
      if (temp_v1 == 0) {
        if (param_3 != 0) goto LAB_00117688;
        break;
      }
      param_3 = (param_3 - 1) & 0xff;
    } while (param_3 != 0);
  }
  _ZN9Obj55b28cD1Ev(temp_v4);
  return 0;
}

} /* extern "C" */
