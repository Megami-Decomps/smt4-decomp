/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a508` (_code @ 0x12a508, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9318(int **);
int FUN_002e9ec8(int, unsigned int);
int FUN_002e9f00(int, int, int);
int constructObj0055affc(int **);
int FUN_002f6be2(int **, int *);
int FUN_002f6bf0(int);
int FUN_00302428(int, int *, int);

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char LAB_0012a588; /* 0x12a588 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e9318. */
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002e9f00. */
/* Supplied declaration required: constructObj0055affc. */
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: FUN_002f6bf0. */
/* Supplied declaration required: FUN_00302428. */


unsigned long long FUN_0012a508(int param_1,int *param_2,int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piStack_1c;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = param_1;
  piStack_1c = param_2;
  temp_v2 = param_3;
  temp_v3 = param_4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x6c));
  if (temp_v0 != 0) {
    constructObj0055affc(&piStack_1c);
    temp_v0 = (**(romwright_code **)(*param_2 + 0x4c))(param_2,&LAB_0012a588,&piStack_1c);
    if (temp_v0 != 0) {
      temp_v3 = 0;
      temp_v1 = 0;
      FUN_002f6be2(&piStack_1c,&temp_v1);
      temp_v0 = temp_v1;
      FUN_00302428(temp_v1,&temp_v3,10);
      FUN_002f6bf0(temp_v1);
      if ((temp_v0 != 0) && (*(int *)(param_1 + 0x13c) != temp_v0)) {
        temp_v1 = temp_v2;
        *(unsigned char *)(param_1 + 0x191) = 1;
        FUN_002e9f00(param_1 + 0x98,4,temp_v0);
      }
    }
    FUN_002e9318(&piStack_1c);
  }
  return romwright_piece_4_4(piStack_1c,temp_v1);
}

} /* extern "C" */
