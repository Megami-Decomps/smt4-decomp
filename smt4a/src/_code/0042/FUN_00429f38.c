/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429f38` (_code @ 0x429f38, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned char spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_0016e800. */
extern unsigned int FUN_00188688(void);
extern unsigned int nn_fs_ipc_FileSystem_IsSdmcDetected(unsigned int, unsigned char *);


int FUN_00429f38(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [12];
  
  temp_v1 = FUN_00188688();
  temp_v0 = nn_fs_ipc_FileSystem_IsSdmcDetected((unsigned int)&temp_v1,temp_v2);
  if ((int)temp_v0 < 0) {
    FUN_0016e800(temp_v0,0x429f5c);
  }
                    /* WARNING: Treating indirect jump as return */
  return (int)temp_v2[0];
}
