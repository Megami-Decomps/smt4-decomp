/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154ca4` (_code @ 0x154ca4, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_0063fe0c; /* 0x63fe0c */
extern unsigned char DAT_0063fe10; /* 0x63fe10 */
extern unsigned char DAT_0063fe4c; /* 0x63fe4c */
extern unsigned char DAT_0063fe88; /* 0x63fe88 */
extern unsigned int DAT_0063ff84; /* 0x63ff84 */
extern unsigned char DAT_0063ff88; /* 0x63ff88 */

/* Supplied declaration required: FUN_0017ce88. */


void FUN_00154ca4(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  puVar4 = (unsigned int *)0x0;
  temp_v2 = *param_1;
  temp_v1 = 0;
  if (temp_v2 != 0x400) {
    if (temp_v2 == 0x401) {
      temp_v1 = 1;
      if (DAT_0063fe0c != 0) {
        puVar4 = (unsigned int *)&DAT_0063fe10;
      }
      else {
        puVar4 = (unsigned int *)&DAT_0063fe88;
      }
      temp_v0 = puVar4[0xe];
      if ((&DAT_0063ff88)[temp_v1] == '\0') {
        temp_v0 = 0x500;
      }
      FUN_0017ce88(puVar4[2],puVar4[0xc],puVar4[0xd],*puVar4,param_1[param_1[5] + 8],param_1[6],
                   param_1[7],DAT_0063ff84,temp_v0,0,8);
      return;
    }
    if (temp_v2 != 0x410) {
      temp_v0 = puVar4[0xe];
      if ((&DAT_0063ff88)[temp_v1] == '\0') {
        temp_v0 = 0x500;
      }
      FUN_0017ce88(puVar4[2],puVar4[0xc],puVar4[0xd],*puVar4,param_1[param_1[5] + 8],param_1[6],
                   param_1[7],DAT_0063ff84,temp_v0,0,8);
      return;
    }
    if (param_2 != 0) {
      puVar4 = (unsigned int *)&DAT_0063fe4c;
      temp_v0 = puVar4[0xe];
      if ((&DAT_0063ff88)[temp_v1] == '\0') {
        temp_v0 = 0x500;
      }
      FUN_0017ce88(puVar4[2],puVar4[0xc],puVar4[0xd],*puVar4,param_1[param_1[5] + 8],param_1[6],
                   param_1[7],DAT_0063ff84,temp_v0,0,8);
      return;
    }
  }
  puVar4 = (unsigned int *)&DAT_0063fe10;
  temp_v0 = puVar4[0xe];
  if ((&DAT_0063ff88)[temp_v1] == '\0') {
    temp_v0 = 0x500;
  }
  FUN_0017ce88(puVar4[2],puVar4[0xc],puVar4[0xd],*puVar4,param_1[param_1[5] + 8],param_1[6],
               param_1[7],DAT_0063ff84,temp_v0,0,8);
  return;
}
