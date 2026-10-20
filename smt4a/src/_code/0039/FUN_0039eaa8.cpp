/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039eaa8` (_code @ 0x39eaa8, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020ad6c(int, int, int);
int FUN_00371c3c(int, int);
int FUN_0038b3f8(int, int);
int FUN_0038e4cc(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_0020ad6c. */
extern int btlMainGetUnk14(void);
/* Supplied declaration required: FUN_00371c3c. */
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: FUN_0038e4cc. */


void FUN_0039eaa8(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  if (*(int *)(param_1 + 0x4bac) == param_2) {
    FUN_0020ad6c(param_1,0x30,1);
    return;
  }
  *(int *)(param_1 + 0x4bac) = param_2;
  *(unsigned int *)(param_1 + 0x4bc0) = 0xffffffff;
  FUN_0038e4cc(param_1,9);
  temp_v2 = 0;
  do {
    temp_v3 = 0;
    if (temp_v2 == 0 && param_2 == 0) {
      temp_v3 = 0xffffffff;
    }
    else if (!(temp_v2 == 0 && param_2 == 1)) {
      temp_v0 = FUN_001ab888();
      if (*(char *)(temp_v0 + temp_v2 + 0x1c9f) >= '\0') {
        temp_v0 = FUN_001ab854();
        if (temp_v0 != 0) {
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 0x62);
        }
      }
    }
    else {
      temp_v0 = btlMainGetUnk14();
      if (temp_v0 != 0) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 0x62);
      }
    }
    puVar5 = (unsigned int *)(param_1 + temp_v2 * 4 + 0x4bb0);
    temp_v1 = *puVar5;
    if (temp_v1 != temp_v3) {
      if (temp_v1 != 0) {
        FUN_0038b3f8((int)(short)temp_v1,1);
        *puVar5 = 0;
      }
      if (temp_v3 != 0) {
        FUN_00371c3c((int)(short)temp_v3,1);
      }
      *puVar5 = temp_v3;
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 4) {
      FUN_0020ad6c(param_1,0x2e,1);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
