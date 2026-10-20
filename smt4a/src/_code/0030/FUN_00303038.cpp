/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303038` (_code @ 0x303038, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002fa010(int);
int streamReaderReadArray(int, int *, int, int);
int FUN_00310dc6(int, int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002fa010. */
extern int FUN_0030fba6(int, int);
/* Supplied declaration required: streamReaderReadArray. */
/* Supplied declaration required: FUN_00310dc6. */


int FUN_00303038(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  streamReaderReadArray(param_1,&temp_v1,4,1);
  temp_v0 = FUN_0030fba6(param_1,temp_v1 << 3);
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 4) == '\0') {
      if (temp_v1 != 0) {
        FUN_002fa010(param_2);
        FUN_00310dc6(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),temp_v1 << 3);
      }
      *(int *)(param_2 + 0x10) = temp_v1;
    }
  }
  else {
    *(unsigned char *)(param_1 + 4) = 1;
  }
  return param_1;
}

} /* extern "C" */
