/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f5dc` (_code @ 0x10f5dc, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_0044e640; /* 0x44e640 */
extern int DAT_0044e644; /* 0x44e644 */
extern unsigned char *DAT_0044e648; /* 0x44e648 */

/* Supplied declaration required: FUN_0011bb34. */
/* Supplied declaration required: FUN_0011bb90. */
extern unsigned int FUN_002bbaf8(void);
/* Supplied declaration required: FUN_002bbb2c. */
extern int FUN_002c1364(unsigned int *, char *, unsigned int, unsigned int);
extern int FUN_002c1398(void);
extern unsigned int FUN_002c30c4(char *);
extern int nn_fs_ipc_FileSystem_SetPriority(unsigned int *, unsigned int);


void FUN_0010f5dc(void)

{
/* irregular: irregular input(s): in_r3; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_r3;
  int temp_v2;
  
  if (DAT_0044e644 != 0) {
    return;
  }
  temp_v2 = in_r3;
  temp_v0 = FUN_002c1398();
  if (temp_v0 != 0x8a067f9) {
    if (temp_v0 < 0) {
      FUN_002bbb2c(temp_v0,0x10f608);
    }
  }
  temp_v1 = FUN_002c30c4("fs:USER");
  temp_v0 = FUN_002c1364((unsigned int *)&DAT_0044e644,"fs:USER",temp_v1,0);
  if (temp_v0 < 0) {
    FUN_002bbb2c(temp_v0,0x10f630);
  }
  FUN_0011bb34(DAT_0044e644);
  DAT_0044e648 = &DAT_0044e640;
  FUN_0011bb90(&DAT_0044e648);
  temp_v2 = FUN_002bbaf8();
  temp_v0 = nn_fs_ipc_FileSystem_SetPriority((unsigned int *)&temp_v2,0);
  if (-(temp_v0 >> 0x1f) != 0) {
    FUN_002bbb2c(temp_v0,0x10f678,-(temp_v0 >> 0x1f),temp_v2);
    return;
  }
  return;
}
