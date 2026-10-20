/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303698` (_code @ 0x303698, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012014a(int, unsigned char *[10]);
int FUN_00133b48(int, int, unsigned char *[10]);
int FUN_00133c2c(int, unsigned int);
int FUN_0030d108(int, int);
int FUN_0030d134(unsigned char *[10]);
int FUN_0030d154(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern unsigned char DAT_0055ad28; /* 0x55ad28 */

/* Supplied declaration required: FUN_0012014a. */
/* Supplied declaration required: FUN_00133b48. */
/* Supplied declaration required: FUN_00133c2c. */
extern int FUN_002ed28c(int, unsigned int *);
/* Supplied declaration required: FUN_0030d108. */
/* Supplied declaration required: FUN_0030d134. */
/* Supplied declaration required: FUN_0030d154. */


void FUN_00303698(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *temp_v2 [10];
  unsigned int temp_v3;
  
  FUN_0030d154(param_2);
  temp_v0 = FUN_002ed28c(param_1,&temp_v3);
  if (temp_v0 != 0) {
    FUN_00133c2c(param_2,temp_v3);
    temp_v1 = 0;
    while( 1 ) {
      if (temp_v3 <= temp_v1) {
        return;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      FUN_0030d134(temp_v2);
      FUN_0012014a(param_1,temp_v2);
      if (*(char *)(param_1 + 4) != '\0') break;
      temp_v0 = *(int *)(param_2 + 4);
      if (temp_v0 != *(int *)(param_2 + 8)) {
        *(int *)(param_2 + 4) = temp_v0 + 0x28;
        FUN_0030d108(param_2,temp_v0);
      }
      else {
        FUN_00133b48(param_2,temp_v0,temp_v2);
      }
      temp_v1 = temp_v1 + 1;
      temp_v2[0] = &DAT_0055ad28;
    }
    FUN_0030d154();
  }
  return;
}

} /* extern "C" */
