/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010aef6` (_code @ 0x10aef6, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002eb164(unsigned char [8], unsigned int);
int FUN_002f035c(unsigned int, unsigned char [8]);
int FUN_002f3df8(int *, int, unsigned int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002eb164. */
/* Supplied declaration required: FUN_002f035c. */
/* Supplied declaration required: FUN_002f3df8. */
extern int wordRefsDiffer_002f3e5a(int *, unsigned int *);


unsigned int FUN_0010aef6(int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [12];
  int temp_v3;
  unsigned char temp_v4 [8];
  int temp_v5;
  
  temp_v0 = FUN_002ea714();
  FUN_002e6e34(temp_v2,temp_v0);
  FUN_002f3df8(&temp_v3,param_1 + 4,param_2);
  temp_v5 = *(unsigned int *)(param_1 + 0x14);
  temp_v1 = wordRefsDiffer_002f3e5a(&temp_v3,(unsigned int *)&temp_v5);
  if (temp_v1 != 0) {
    FUN_002eb164(temp_v4,*(unsigned int *)(temp_v3 + 0x18));
    FUN_002f035c(param_2,temp_v4);
    temp_v0 = *(unsigned int *)(temp_v3 + 0x18);
    FUN_002e6e5c(temp_v2);
  }
  else {
    FUN_002e6e5c(temp_v2);
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
