/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d881c` (_code @ 0x4d881c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_001cd3ec(void);
int libc_strcpy(unsigned int *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char LAB_004d8858; /* 0x4d8858 */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: libc_strcpy. */
extern unsigned int FUN_0040ac08(void);


void FUN_004d881c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  libc_strcpy(param_1 + 1);
  temp_v0 = 0x20;
  FUN_00178b04(0x20,&LAB_004d8858,0x44);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0040ac08();
  }
  *param_1 = temp_v1;
  FUN_001cd3ec();
  return;
}

} /* extern "C" */
