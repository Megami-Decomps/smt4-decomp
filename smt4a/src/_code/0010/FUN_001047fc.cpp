/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001047fc` (_code @ 0x1047fc, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00119f24(void);
int FUN_002e6e34(unsigned char [12], unsigned int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002ea734(int *);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00119f24. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int onlineGetActiveLock(void);
/* Supplied declaration required: FUN_002ea734. */
extern int wordRefsDiffer_002ea764(int *, int *);


unsigned int FUN_001047fc(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [12];
  int temp_v5;
  
  FUN_00119f24();
  temp_v1 = onlineGetActiveLock();
  FUN_002e6e34(temp_v4,temp_v1);
  (**(romwright_code **)(*param_1 + 0x54))(param_1);
  temp_v5 = *(int *)(param_1[0x19] + 8);
  while( 1 ) {
    temp_v3 = param_1[0x19];
    temp_v2 = wordRefsDiffer_002ea764(&temp_v5,&temp_v3);
    temp_v0 = temp_v5;
    if (temp_v2 == 0) break;
    FUN_002ea734(&temp_v5);
    (**(romwright_code **)(**(int **)(temp_v0 + 0x34) + 0x58))(*(int **)(temp_v0 + 0x34),4);
  }
  (**(romwright_code **)(*param_1 + 0x58))(param_1);
  FUN_002e6e5c(temp_v4);
  return 1;
}

} /* extern "C" */
