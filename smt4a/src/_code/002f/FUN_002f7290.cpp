/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7290` (_code @ 0x2f7290, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9c0c(void);
int FUN_002e9c64(int, unsigned char *, int *, int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char LAB_0010cff9; /* 0x10cff9 */

extern int FUN_002e789a(unsigned int);
/* Supplied declaration required: FUN_002e9c0c. */
/* Supplied declaration required: FUN_002e9c64. */
extern unsigned int FUN_002f6eda(int);


unsigned int FUN_002f7290(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  temp_v0 = FUN_002e789a(param_2);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    *(unsigned int *)(param_1 + 0x70) = param_2;
    if (*(char *)(param_1 + 0xc) == '\0') {
      temp_v1 = FUN_002f6eda(param_1);
      return temp_v1;
    }
    FUN_002e9c0c();
    temp_v2 = param_1;
    FUN_002e9c64(param_1 + 0x10,&LAB_0010cff9,&temp_v2,1);
    (**(romwright_code **)(param_1 + 4))(param_1 + 0x10,param_1 + 8);
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
