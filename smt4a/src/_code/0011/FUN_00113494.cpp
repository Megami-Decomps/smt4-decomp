/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00113494` (_code @ 0x113494, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002ea446(int, int);
int FUN_002fdce8(int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

extern unsigned char LAB_0011330d; /* 0x11330d */
extern unsigned char LAB_00113500; /* 0x113500 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int FUN_002e7908(int *, unsigned int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
extern unsigned int FUN_002ea3c0(int *, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea446. */
/* Supplied declaration required: FUN_002fdce8. */


unsigned long long FUN_00113494(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  int iStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  int temp_v3;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  temp_v3 = param_4;
  temp_v1 = FUN_002e9af4();
  FUN_002e9ec8(temp_v1,*(unsigned int *)(param_1 + 0xd0));
  if (temp_v1 != 0) {
    temp_v0 = *(char *)(param_1 + 0x150);
    if (temp_v0 == '\x01') {
      FUN_002ea446(param_1,10);
      return romwright_piece_4_4(uStack_14,iStack_18);
    }
    if ((temp_v0 != '\x02') && (temp_v0 == '\x03')) {
      temp_v3 = 0x80050014;
      temp_v2 = FUN_002e7908(&iStack_18,(unsigned int *)&temp_v3);
      FUN_002fdce8(param_1,temp_v2);
      return romwright_piece_4_4(uStack_14,iStack_18);
    }
    puVar4 = &LAB_0011330d;
  }
  else {
    puVar4 = (unsigned char *)0x116a5d;
  }
  temp_v2 = FUN_002ea3c0(&iStack_18,puVar4,0,&LAB_00113500);
  FUN_002ea3d0(param_1,temp_v2);
  return romwright_piece_4_4(uStack_14,iStack_18);
}

} /* extern "C" */
