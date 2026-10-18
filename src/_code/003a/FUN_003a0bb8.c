/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0bb8` (_code @ 0x3a0bb8, 0x1b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_003a0d6c; /* 0x3a0d6c */
extern unsigned char LAB_003a0d7c; /* 0x3a0d7c */

/* Supplied declaration required: FUN_0019dfbc. */
/* Supplied declaration required: FUN_00230f84. */
/* Supplied declaration required: FUN_002313d4. */
/* Supplied declaration required: FUN_002333d4. */
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_0029a2b0. */
extern int FUN_0029e398(void);
/* Supplied declaration required: FUN_002a06c8. */
extern int FUN_002ae16c(void);
/* Supplied declaration required: FUN_002b9220. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);


void FUN_003a0bb8(int param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      temp_v2 = param_1 + 0x3c8;
      FUN_002b9220(temp_v2,0);
      temp_v0 = FUN_002bef70(temp_v2);
      temp_v1 = FUN_002bef7c(temp_v2);
      FUN_002313d4(param_1 + 0x380,temp_v1,temp_v0);
      if (*(char *)(param_1 + 0x452) != '\0') {
        switch(*(unsigned int *)(param_1 + 0x860)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          temp_v2 = FUN_0029e398();
          if (temp_v2 != 0) {
            *(unsigned int *)(param_1 + 4) = 5;
            *(unsigned int *)(param_1 + 8) = 0;
          }
          break;
        case 7:
          *(unsigned int *)(param_1 + 4) = 6;
          *(unsigned int *)(param_1 + 8) = 0;
          temp_v0 = FUN_00291018(*(unsigned int *)(param_1 + 0x160),&LAB_003a0d6c);
          FUN_002971e4(*(unsigned int *)(param_1 + 0x168),temp_v0);
          FUN_0019dfbc(*(unsigned int *)(param_1 + 0x168));
          break;
        case 8:
          *(unsigned int *)(param_1 + 4) = 7;
          *(unsigned int *)(param_1 + 8) = 0;
          temp_v0 = FUN_00291018(*(unsigned int *)(param_1 + 0x160),&LAB_003a0d7c);
          FUN_002971e4(*(unsigned int *)(param_1 + 0x168),temp_v0);
          FUN_0019dfbc(*(unsigned int *)(param_1 + 0x168));
          break;
        default:
        }
      }
    }
  }
  else {
    FUN_00230f84(1);
    FUN_002333d4(param_1 + 0x3a8,0);
    *(unsigned int *)(param_1 + 8) = 1;
  }
  piVar3 = (int *)(param_1 + 0x15d48);
  if (((*piVar3 != 0) && (temp_v2 = FUN_002ae16c(), temp_v2 != 0)) &&
     (*(int *)(*(int *)(*piVar3 + 8) + 0xc) < 0)) {
    FUN_002a06c8(*piVar3,1);
    FUN_0029a2b0(*(unsigned int *)(*piVar3 + 8),0);
    return;
  }
  return;
}
