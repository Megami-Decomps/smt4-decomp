/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b66c` (_code @ 0x33b66c, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_003406b4(); /* 0x3406b4 */
extern int FUN_003472f0(); /* 0x3472f0 */
extern int FUN_00349500(); /* 0x349500 */
extern int FUN_00376974(); /* 0x376974 */
extern int FUN_00376d74(); /* 0x376d74 */
extern int FUN_0038097c(); /* 0x38097c */
extern unsigned char DAT_0042198c; /* 0x42198c */
extern unsigned char DAT_004219ac; /* 0x4219ac */
extern unsigned char DAT_00421c78; /* 0x421c78 */

/* Supplied declaration required: FUN_00140f3c. */
/* Supplied declaration required: FUN_002c66cc. */
extern int FUN_00377414(int);
extern int FUN_00378b40(int);
/* Supplied declaration required: func_0x001404c4. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


unsigned int * FUN_0033b66c(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  FUN_002c66cc(param_1 + 0x1000,FUN_00376974,4,0x10);
  FUN_002c66cc(param_1 + 0x7c0,FUN_00376d74,0x84,0x10);
  *(unsigned char **)(param_1 + 0x784) = &DAT_0042198c;
  *(unsigned char **)(param_1 + 0x788) = &DAT_004219ac;
  FUN_002c66cc(param_1 + 0x694,FUN_003472f0,0x3c,4);
  FUN_002c66cc(param_1 + 0x674,FUN_00349500,0x10,2);
  FUN_002c66cc(param_1 + 0x5fc,FUN_0038097c,0x3c,2);
  FUN_002c66cc(param_1 + 0x4bc,FUN_003406b4,0x50,4);
  temp_v0 = FUN_00377414(param_1 + 0x244);
  temp_v0 = FUN_00378b40(temp_v0 - 0xc0);
  puVar2 = (unsigned int *)(temp_v0 - 0x184);
  *puVar2 = (unsigned int)&DAT_00421c78;
  if (*(char *)(temp_v0 - 4) != '\0') {
    if ((*(unsigned int *)(temp_v0 - 0x74) & 0xfffffffe) != 0) {
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*(unsigned int *)(temp_v0 - 0x74) & 0xfffffffe);
      *(unsigned int *)(temp_v0 - 0x74) = 0;
    }
    FUN_00140f3c(temp_v0 - 0x58);
    *(unsigned char *)(temp_v0 - 4) = 0;
  }
  func_0x001404c4(puVar2);
  *(unsigned int *)(temp_v0 - 8) = 0xffffffff;
  if ((*(unsigned int *)(temp_v0 - 0x74) & 0xfffffffe) != 0) {
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*(unsigned int *)(temp_v0 - 0x74) & 0xfffffffe);
    *(unsigned int *)(temp_v0 - 0x74) = 0;
  }
  return puVar2;
}
