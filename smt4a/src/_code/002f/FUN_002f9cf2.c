/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9cf2` (_code @ 0x2f9cf2, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
extern unsigned int FUN_002ea714(void);
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: FUN_002ea9c0. */
/* Supplied declaration required: FUN_002ea9dc. */
extern int FUN_002f3204(unsigned int **, unsigned int *);


unsigned int FUN_002f9cf2(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [104];
  unsigned int *temp_v3 [2];
  unsigned int temp_v4 [2];
  unsigned char temp_v5 [16];
  
  temp_v0 = FUN_002ea714();
  FUN_002e6e34(temp_v5,temp_v0);
  temp_v3[0] = (unsigned int *)**(unsigned int **)(param_1 + 0xd4);
  while( 1 ) {
    temp_v4[0] = *(unsigned int *)(param_1 + 0xd4);
    temp_v1 = FUN_002f3204(temp_v3,temp_v4);
    if (temp_v1 == 0) {
      FUN_002e6e5c(temp_v5);
      return 1;
    }
    FUN_002ea974(temp_v2);
    FUN_002ea9c0(temp_v2,param_3);
    temp_v1 = (**(romwright_code **)(*(int *)temp_v3[0][2] + 8))((int *)temp_v3[0][2],param_2,temp_v2);
    if (temp_v1 != 0) break;
    temp_v3[0] = (unsigned int *)*temp_v3[0];
    FUN_002ea9dc(temp_v2);
  }
  FUN_002ea9dc(temp_v2);
  FUN_002e6e5c(temp_v5);
  return 0;
}
