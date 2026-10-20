/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebbfc` (_code @ 0x2ebbfc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002eba78(unsigned int **);
int FUN_002ebab4(unsigned int **, int *);
int FUN_002ebacc(unsigned int *, unsigned int **, unsigned int, unsigned int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern signed char DAT_00594961; /* 0x594961 */
extern unsigned int DAT_00594b38; /* 0x594b38 */
extern unsigned int DAT_00594b3c; /* 0x594b3c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002eba78. */
/* Supplied declaration required: FUN_002ebab4. */
/* Supplied declaration required: FUN_002ebacc. */


unsigned long long
FUN_002ebbfc(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puStack_20;
  unsigned int uStack_1c;
  int temp_v0;
  unsigned int temp_v1;
  
  puStack_20 = param_1;
  uStack_1c = param_2;
  if (DAT_00594961 != '\0') {
    temp_v0 = param_3;
    temp_v1 = param_4;
    FUN_002eba78(&puStack_20);
    FUN_002ebacc(param_1,&puStack_20,DAT_00594b38,DAT_00594b3c);
    return romwright_piece_4_4(uStack_1c,puStack_20);
  }
  DAT_00594961 = 1;
  temp_v1 = 0;
  temp_v0 = 1;
  FUN_002eba78(&puStack_20);
  FUN_002ebab4(&puStack_20,&temp_v0);
  param_1[1] = 0;
  *param_1 = 1;
  return romwright_piece_4_4(uStack_1c,puStack_20);
}

} /* extern "C" */
