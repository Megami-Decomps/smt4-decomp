/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033062c` (_code @ 0x33062c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0057f58c; /* 0x57f58c */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_0021bdac. */
extern unsigned int FUN_00236038(unsigned int);
extern unsigned int FUN_002deb84(void);


void FUN_0033062c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_0014aa78();
  temp_v1 = *(unsigned int *)(temp_v0 + 0x226c);
  temp_v2 = FUN_00236038(0);
  temp_v3 = FUN_002deb84();
  if (DAT_0057f58c != 0) {
    *(unsigned char *)(DAT_0057f58c + 0x19c5) = 0x15;
  }
  FUN_0021bdac(temp_v1,temp_v2,temp_v3,0xb,0,0);
  return;
}

} /* extern "C" */
