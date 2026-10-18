/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027eafc` (_code @ 0x27eafc, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned char spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int FUN_002bbaf8(void);
/* Supplied declaration required: FUN_002bbb2c. */
extern int nn_fs_ipc_FileSystem_IsSdmcDetected(unsigned int *, char *);


int FUN_0027eafc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char temp_v2 [12];
  
  temp_v1 = FUN_002bbaf8();
  temp_v0 = nn_fs_ipc_FileSystem_IsSdmcDetected((unsigned int *)&temp_v1,temp_v2);
  if (temp_v0 < 0) {
    FUN_002bbb2c(temp_v0,0x27eb20);
  }
                    /* WARNING: Treating indirect jump as return */
  return (int)temp_v2[0];
}
