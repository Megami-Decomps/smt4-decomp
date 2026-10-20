/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a4b8` (_code @ 0x11a4b8, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010c97e(unsigned int, unsigned int);
int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e50(int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002e9afe(int, unsigned int);
int FUN_002eac60(unsigned int, unsigned int);
int FUN_002eac8e(unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0010c97e. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e50. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002eac60. */
/* Supplied declaration required: FUN_002eac8e. */


void FUN_0011a4b8(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [12];
  unsigned char temp_v3 [12];
  unsigned int temp_v4 [2];
  
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  if (*(char *)(param_2 + 0x10) != '\x02') {
    temp_v4[0] = 0x80050001;
    temp_v1 = FUN_002e7908(temp_v3,temp_v4);
    FUN_002e9afe(param_1 + 0x228,temp_v1);
  }
  else {
    FUN_0010c97e(*(unsigned int *)(param_1 + 0x1a0),*(unsigned int *)(param_1 + 0x1a4));
    FUN_002eac8e(*(unsigned int *)(param_1 + 0x1a4),*(unsigned int *)(param_1 + 0x2b0));
    FUN_002eac8e(*(unsigned int *)(param_1 + 0x1a0),*(unsigned int *)(param_1 + 0x2b0));
    FUN_002eac60(*(unsigned int *)(param_1 + 0x1a0),*(unsigned int *)(*(int *)(param_1 + 0x1a4) + 0x78))
    ;
  }
  FUN_002e6e50(param_1);
  FUN_002e6e5c(temp_v2);
  return;
}

} /* extern "C" */
