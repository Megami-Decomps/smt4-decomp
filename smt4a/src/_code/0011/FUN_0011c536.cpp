/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c536` (_code @ 0x11c536, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002ecf70(unsigned char [4], unsigned int *, int *);
int FUN_002ed054(unsigned int *, int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_3_stack;

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002ecf70. */
extern int wordRefsDiffer_002ed044(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002ed054. */


unsigned char FUN_0011c536(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned char temp_v1 [12];
  int temp_v2;
  unsigned char temp_v3 [4];
  int iStack_1c;
  int uStack_18;
  unsigned int uStack_14;
  
  iStack_1c = param_1;
  uStack_18 = param_2;
  uStack_14 = param_3;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v1,temp_v0 + 0x58);
  puVar2 = (unsigned int *)(param_1 + 0x60);
  FUN_002ecf70(temp_v3,puVar2,&uStack_18);
  temp_v2 = *(unsigned int *)(param_1 + 0x70);
  temp_v0 = wordRefsDiffer_002ed044(temp_v3,(unsigned int *)&temp_v2);
  if (temp_v0 != 0) {
    FUN_002e6e5c(temp_v1);
  }
  else {
    FUN_002ed054(puVar2,&uStack_18);
    *puVar2 = param_3;
    FUN_002e6e5c(temp_v1);
  }
  return temp_v0 == 0;
}

} /* extern "C" */
