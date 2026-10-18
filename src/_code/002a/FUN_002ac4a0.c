/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac4a0` (_code @ 0x2ac4a0, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
/* Supplied declaration required: FUN_0014c494. */
extern int FUN_0014d390(unsigned char *);
/* Supplied declaration required: FUN_00150f34. */
extern int FUN_00152394(int, unsigned int, unsigned int *);
extern unsigned int FUN_002a7a3c(unsigned char *, unsigned int);
extern int FUN_002a7a94(unsigned int);
/* Supplied declaration required: FUN_002a7ac4. */
/* Supplied declaration required: FUN_002c5df8. */


void FUN_002ac4a0(int *param_1,unsigned int param_2,int *param_3)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  char temp_v7;
  unsigned char temp_v8 [16];
  unsigned char temp_v9 [20];
  
  temp_v7 = '\0';
  temp_v5 = 0xffffffff;
  temp_v1 = FUN_00152394(param_1[1],param_2,(unsigned int *)&temp_v5);
  temp_v0 = '\0';
  if (temp_v1 != 0) {
    temp_v0 = temp_v7;
  }
  if (temp_v1 != 0 && temp_v0 != '\0') {
    temp_v2 = (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v5);
    FUN_002a7ac4(temp_v8,temp_v2,0);
    temp_v1 = FUN_0014d390(temp_v8);
    if (temp_v1 == 0) {
      temp_v1 = FUN_002a7a94(temp_v2);
      temp_v3 = (**(romwright_code **)(*param_3 + 8))(param_3,temp_v1 + temp_v6 * 4 + 4);
      if (temp_v3 != 0) {
        FUN_002c5df8(temp_v3,temp_v2,temp_v1);
        builtin_strncpy((char *)(temp_v3 + temp_v1),"CWAT",4);
        FUN_002a7ac4(temp_v9,temp_v3,1);
        FUN_00150f34(temp_v9);
        temp_v4 = 0;
        if (temp_v4 < temp_v6) {
          do {
            temp_v2 = FUN_002a7a3c(temp_v8,temp_v4);
            FUN_0014c494(temp_v9,temp_v4,temp_v2);
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < temp_v6);
        }
        (**(romwright_code **)(*param_1 + 8))(param_1,temp_v5,temp_v3);
      }
    }
  }
  return;
}
