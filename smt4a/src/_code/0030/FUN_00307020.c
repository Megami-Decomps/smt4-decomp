/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307020` (_code @ 0x307020, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_0062d704; /* 0x62d704 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002f3dc4. */
/* Supplied declaration required: FUN_002f3dde. */
extern int FUN_002f4e86(int *);
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: FUN_002f6bf0. */


unsigned long long FUN_00307020(int param_1,int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piStack_1c;
  int iStack_18;
  int temp_v3;
  
  temp_v2 = param_1;
  piStack_1c = param_2;
  iStack_18 = param_3;
  temp_v3 = param_4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v1 = FUN_002f4e86(param_2);
    if (temp_v1 != 0) {
      temp_v3 = 0;
      FUN_002f6be2(*(unsigned int *)(param_1 + 0x78),&temp_v3);
      strncpy(&DAT_0062d704,temp_v3,0x40);
      FUN_002f6bf0(temp_v3);
      temp_v2 = *param_2;
      piStack_1c = (int *)param_2[1];
      iStack_18 = param_2[2];
      FUN_002f3dc4(temp_v0,&temp_v2,iStack_18,&temp_v3);
    }
    else {
      temp_v2 = *param_2;
      piStack_1c = (int *)param_2[1];
      iStack_18 = param_2[2];
      FUN_002f3dde(temp_v0,&temp_v2,iStack_18,&temp_v3);
    }
  }
  FUN_002ea43c(param_1);
  return romwright_piece_4_4(piStack_1c,temp_v2);
}
