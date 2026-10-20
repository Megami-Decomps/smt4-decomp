/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00461004` (_code @ 0x461004, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001907a4(unsigned char [12]);
int FUN_001a5c44(int, unsigned int, unsigned int, unsigned int, int);
int nw_snd_internal_SoundArchiveLoader_LoadImpl(int, unsigned int, unsigned int, int, int);

/* stack frame of param_3: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Supplied declaration required: FUN_001907a4. */
extern unsigned int *FUN_00194834(unsigned char *);
/* Supplied declaration required: FUN_001a5c44. */
extern int FUN_001a8930(unsigned int, unsigned int, unsigned int *);
extern unsigned int FUN_001a8e14(unsigned int, unsigned int);
/* Supplied declaration required: nw_snd_internal_SoundArchiveLoader_LoadImpl. */


unsigned int FUN_00461004(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5 [2];
  char temp_v6;
  unsigned char temp_v7 [12];
  
  if (param_2 != 0) {
    FUN_001907a4(temp_v7);
    puVar1 = (unsigned int *)FUN_00194834(temp_v7);
    if (puVar1 != (unsigned int *)0x0) {
      temp_v2 = 0;
      if (temp_v2 < *puVar1) {
        do {
          if (*puVar1 <= temp_v2) {
            return 0;
          }
          if (puVar1 + temp_v2 * 2 + 1 == (unsigned int *)0x0) {
            return 0;
          }
          temp_v3 = puVar1[temp_v2 * 2 + 1];
          temp_v4 = puVar1[temp_v2 * 2 + 2];
          temp_v5[0] = 0xffffffff;
          temp_v6 = '\0';
          temp_v0 = FUN_001a8930(*(unsigned int *)(param_1 + 4),temp_v3,temp_v5);
          if (temp_v0 == 0) {
            return 0;
          }
          temp_v0 = param_1;
          if (temp_v6 != '\0') {
            FUN_001a5c44(param_1,temp_v3,temp_v4,param_3,0);
          }
          else {
            temp_v1 = FUN_001a8e14(*(unsigned int *)(param_1 + 4),temp_v3);
            nw_snd_internal_SoundArchiveLoader_LoadImpl(param_1,temp_v1,param_3,0,1);
          }
          if (temp_v0 == 0) {
            return 0;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *puVar1);
      }
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
