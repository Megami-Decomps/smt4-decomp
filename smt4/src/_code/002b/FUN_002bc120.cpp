/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc120` (_code @ 0x2bc120, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013727c(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_004e3a64; /* 0x4e3a64 */
extern unsigned char DAT_004e3a68; /* 0x4e3a68 */
extern unsigned char DAT_004e3aa4; /* 0x4e3aa4 */
extern unsigned char DAT_004e3ae0; /* 0x4e3ae0 */
extern unsigned int DAT_004e3bdc; /* 0x4e3bdc */
extern unsigned char DAT_004e3be0; /* 0x4e3be0 */

/* Supplied declaration required: FUN_0013727c. */


void FUN_002bc120(int *param_1,int param_2)

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
      if (DAT_004e3a64 != 0) {
        puVar4 = (unsigned int *)&DAT_004e3a68;
      }
      else {
        puVar4 = (unsigned int *)&DAT_004e3ae0;
      }
      temp_v0 = puVar4[0xe];
      if ((&DAT_004e3be0)[temp_v1] == '\0') {
        temp_v0 = 0x500;
      }
      FUN_0013727c(puVar4[2],puVar4[0xc],puVar4[0xd],*puVar4,param_1[param_1[5] + 8],param_1[6],
                   param_1[7],DAT_004e3bdc,temp_v0,0,8);
      return;
    }
    if (temp_v2 != 0x410) {
      temp_v0 = puVar4[0xe];
      if ((&DAT_004e3be0)[temp_v1] == '\0') {
        temp_v0 = 0x500;
      }
      FUN_0013727c(puVar4[2],puVar4[0xc],puVar4[0xd],*puVar4,param_1[param_1[5] + 8],param_1[6],
                   param_1[7],DAT_004e3bdc,temp_v0,0,8);
      return;
    }
    if (param_2 != 0) {
      puVar4 = (unsigned int *)&DAT_004e3aa4;
      temp_v0 = puVar4[0xe];
      if ((&DAT_004e3be0)[temp_v1] == '\0') {
        temp_v0 = 0x500;
      }
      FUN_0013727c(puVar4[2],puVar4[0xc],puVar4[0xd],*puVar4,param_1[param_1[5] + 8],param_1[6],
                   param_1[7],DAT_004e3bdc,temp_v0,0,8);
      return;
    }
  }
  puVar4 = (unsigned int *)&DAT_004e3a68;
  temp_v0 = puVar4[0xe];
  if ((&DAT_004e3be0)[temp_v1] == '\0') {
    temp_v0 = 0x500;
  }
  FUN_0013727c(puVar4[2],puVar4[0xc],puVar4[0xd],*puVar4,param_1[param_1[5] + 8],param_1[6],
               param_1[7],DAT_004e3bdc,temp_v0,0,8);
  return;
}

} /* extern "C" */
