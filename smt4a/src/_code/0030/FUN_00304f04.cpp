/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00304f04` (_code @ 0x304f04, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001201d8(int, unsigned char [28]);
int FUN_00133db6(int, int, unsigned char [28]);
int FUN_00133e90(int, unsigned int);
int FUN_0030d09c(int, int);
int FUN_0030d0ac(unsigned char [28]);
int FUN_0030d0bc(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_001201d8. */
/* Supplied declaration required: FUN_00133db6. */
/* Supplied declaration required: FUN_00133e90. */
extern int FUN_002ed28c(int, unsigned int *);
/* Supplied declaration required: FUN_0030d09c. */
/* Supplied declaration required: FUN_0030d0ac. */
/* Supplied declaration required: FUN_0030d0bc. */


void FUN_00304f04(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [28];
  
  FUN_0030d0bc(param_2);
  temp_v0 = FUN_002ed28c(param_1,&temp_v2);
  if (temp_v0 != 0) {
    FUN_00133e90(param_2,temp_v2);
    temp_v1 = 0;
    while( 1 ) {
      if (temp_v2 <= temp_v1) {
        return;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      FUN_0030d0ac(temp_v3);
      FUN_001201d8(param_1,temp_v3);
      if (*(char *)(param_1 + 4) != '\0') break;
      temp_v0 = *(int *)(param_2 + 4);
      if (temp_v0 != *(int *)(param_2 + 8)) {
        *(int *)(param_2 + 4) = temp_v0 + 0x18;
        FUN_0030d09c(param_2,temp_v0);
      }
      else {
        FUN_00133db6(param_2,temp_v0,temp_v3);
      }
      temp_v1 = temp_v1 + 1;
    }
    FUN_0030d0bc();
  }
  return;
}

} /* extern "C" */
