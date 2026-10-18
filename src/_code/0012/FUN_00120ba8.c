/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120ba8` (_code @ 0x120ba8, 0x210 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char DAT_0044e908; /* 0x44e908 */
extern signed char DAT_0044e909; /* 0x44e909 */
extern signed char DAT_0044e90a; /* 0x44e90a */
extern unsigned int DAT_0044e90c; /* 0x44e90c */
extern int DAT_0044e910; /* 0x44e910 */
extern unsigned int DAT_0044e914; /* 0x44e914 */
extern unsigned char DAT_004ea168; /* 0x4ea168 */

extern unsigned int FUN_00130498(void);
/* Supplied declaration required: FUN_00130514. */
/* Supplied declaration required: FUN_00130df4. */
/* Supplied declaration required: FUN_00130eec. */
/* Supplied declaration required: FUN_00130ef4. */
/* Supplied declaration required: FUN_00130f48. */
/* Supplied declaration required: FUN_00131084. */
/* Supplied declaration required: FUN_001310c4. */
/* Supplied declaration required: FUN_001310d4. */
/* Supplied declaration required: FUN_00131204. */
/* Supplied declaration required: FUN_0013127c. */
/* Supplied declaration required: FUN_00131288. */
/* Supplied declaration required: FUN_0014486c. */
extern unsigned int FUN_002bae7c(void);
extern unsigned int FUN_002baed8(void);
extern unsigned int FUN_002baf30(void);
extern unsigned int FUN_002bafb0(void);
/* Supplied declaration required: FUN_002bb020. */
/* Supplied declaration required: FUN_002bd440. */


void FUN_00120ba8(unsigned int *param_1,int param_2)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  if (DAT_0044e909 == '\0') {
    FUN_001310d4(&DAT_004ea168);
    if (DAT_0044e90a == '\0') {
      temp_v0 = param_1[3];
      temp_v4 = param_1[6];
      temp_v1 = FUN_002baed8();
      FUN_00130df4(temp_v1,param_2,param_1[3]);
      temp_v1 = FUN_002bae7c();
      FUN_00130df4(temp_v1,temp_v0 + param_2,param_1[6]);
      param_2 = param_2 + temp_v0 + temp_v4;
      DAT_0044e90a = '\x01';
    }
    temp_v4 = 0;
    temp_v0 = param_2;
    temp_v6 = 0;
    if (*(char *)(param_1 + 7) != '\0') {
      temp_v5 = param_1[2] + param_2;
      temp_v0 = temp_v5;
      temp_v6 = param_2;
      if ((param_1[1] == 1) && (*(char *)((int)param_1 + 0x1e) != '\0')) {
        temp_v0 = param_1[2] + temp_v5;
        temp_v4 = temp_v5;
      }
    }
    FUN_002bd440();
    FUN_00130eec();
    temp_v5 = param_1[5];
    FUN_002bb020();
    FUN_0014486c();
    DAT_0044e914 = param_1[5];
    DAT_0044e910 = temp_v0;
    temp_v1 = FUN_002baf30();
    temp_v2 = FUN_0013127c(temp_v1,DAT_0044e90c);
    temp_v2 = temp_v2 + temp_v5 + temp_v0;
    temp_v1 = FUN_002baf30();
    temp_v1 = FUN_0013127c(temp_v1,DAT_0044e90c);
    temp_v3 = FUN_002baf30();
    FUN_00131204(temp_v3,temp_v5 + temp_v0,temp_v1);
    temp_v1 = FUN_002bafb0();
    temp_v0 = FUN_001310c4(temp_v1,DAT_0044e90c);
    temp_v1 = FUN_002bafb0();
    temp_v1 = FUN_001310c4(temp_v1,DAT_0044e90c);
    temp_v3 = FUN_002bafb0();
    FUN_00131084(temp_v3,temp_v2,temp_v1);
    FUN_00131288();
    temp_v1 = FUN_00130498();
    FUN_00130514(temp_v1,param_1[4],&DAT_0044e910);
    if (*(char *)(param_1 + 7) != '\0') {
      temp_v1 = FUN_002bd440();
      FUN_00130f48(temp_v1,temp_v6,param_1[2],*param_1,temp_v4,param_1[2],*param_1,param_1[1],
                   (int)*(char *)((int)param_1 + 0x1d));
    }
    temp_v7 = *(char *)((int)param_1 + 0x1d) != '\0';
    temp_v4 = 0;
    if (temp_v7) {
      temp_v4 = param_1[8];
    }
    if (temp_v7 && 0 < temp_v4) {
      temp_v1 = FUN_002bd440();
      FUN_00130ef4(temp_v1,temp_v0 + temp_v2,param_1[8]);
    }
    DAT_0044e908 = *(unsigned char *)(param_1 + 7);
    DAT_0044e909 = '\x01';
  }
  return;
}
