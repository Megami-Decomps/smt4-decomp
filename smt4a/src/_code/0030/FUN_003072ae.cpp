/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003072ae` (_code @ 0x3072ae, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011786c(int, unsigned char [24]);
int FUN_00133304(unsigned int, unsigned int);
int FUN_002f79dc(unsigned int);
int FUN_002f7b60(unsigned int, unsigned char [24]);
int FUN_002f7b80(unsigned char [24]);
int initVtable00559504(unsigned char [24]);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0011786c. */
/* Supplied declaration required: FUN_00133304. */
extern int FUN_002ed28c(int, unsigned int *);
/* Supplied declaration required: FUN_002f79dc. */
/* Supplied declaration required: FUN_002f7b60. */
/* Supplied declaration required: FUN_002f7b80. */
/* Supplied declaration required: initVtable00559504. */


void FUN_003072ae(int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [24];
  unsigned int temp_v3 [2];
  
  FUN_002f79dc(param_2);
  temp_v0 = FUN_002ed28c(param_1,temp_v3);
  if (temp_v0 != 0) {
    FUN_00133304(param_2,temp_v3[0]);
    temp_v1 = 0;
    while( 1 ) {
      if (temp_v3[0] <= temp_v1) {
        return;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      initVtable00559504(temp_v2);
      FUN_0011786c(param_1,temp_v2);
      if (*(char *)(param_1 + 4) != '\0') break;
      FUN_002f7b60(param_2,temp_v2);
      FUN_002f7b80(temp_v2);
      temp_v1 = temp_v1 + 1;
    }
    FUN_002f79dc(param_2);
    FUN_002f7b80(temp_v2);
  }
  return;
}

} /* extern "C" */
