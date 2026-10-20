/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00305394` (_code @ 0x305394, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011d518(int, unsigned char **);
int FUN_00133734(int, int, unsigned char **);
int FUN_00133810(int, unsigned int);
int FUN_0030d200(int, int);
int FUN_0030d228(...);

/* stack frame of param_2: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char DAT_0055a170; /* 0x55a170 */

/* Supplied declaration required: FUN_0011d518. */
/* Supplied declaration required: FUN_00133734. */
/* Supplied declaration required: FUN_00133810. */
extern int FUN_002ed28c(int, unsigned int *);
/* Supplied declaration required: FUN_0030d200. */
/* Supplied declaration required: FUN_0030d228. */


void FUN_00305394(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2 [2];
  unsigned char *temp_v3;
  unsigned char temp_v4;
  
  FUN_0030d228(param_2);
  temp_v0 = FUN_002ed28c(param_1,temp_v2);
  if (temp_v0 != 0) {
    FUN_00133810(param_2,temp_v2[0]);
    temp_v1 = 0;
    while( 1 ) {
      if (temp_v2[0] <= temp_v1) {
        return;
      }
      if (*(char *)(param_1 + 4) != '\0') {
        return;
      }
      temp_v4 = 0;
      temp_v3 = &DAT_0055a170;
      FUN_0011d518(param_1,&temp_v3);
      if (*(char *)(param_1 + 4) != '\0') break;
      temp_v0 = *(int *)(param_2 + 4);
      if (temp_v0 != *(int *)(param_2 + 8)) {
        *(int *)(param_2 + 4) = temp_v0 + 0x18;
        FUN_0030d200(param_2,temp_v0);
      }
      else {
        FUN_00133734(param_2,temp_v0,&temp_v3);
      }
      temp_v1 = temp_v1 + 1;
    }
    FUN_0030d228();
  }
  return;
}

} /* extern "C" */
