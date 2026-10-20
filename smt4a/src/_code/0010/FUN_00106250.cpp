/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106250` (_code @ 0x106250, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7658(unsigned char [16]);
int FUN_002ed258(unsigned char [16]);
int FUN_002ed294(unsigned int, int);

/* stack frame of param_2: 4 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned char sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_002e7658. */
/* Supplied declaration required: FUN_002ed258. */
extern int FUN_002ed278(unsigned char *, unsigned char *);
extern int FUN_002ed280(unsigned char *, unsigned int);
extern int FUN_002ed28c(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002ed294. */


unsigned int FUN_00106250(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [16];
  unsigned char temp_v2 [4];
  unsigned char temp_v3 [4];
  int temp_v4;
  unsigned int temp_v5 [2];
  
  if (*(unsigned int *)(*(int *)(param_2 + 0xd8) + 0x10) >= 0xc) {
    FUN_002ed258(temp_v1);
    temp_v0 = FUN_002ed278(temp_v1,temp_v2);
    if (temp_v0 != 0) {
      *(unsigned char *)(param_2 + 0xbc) = temp_v2[0];
      temp_v0 = FUN_002ed278(temp_v1,temp_v3);
      if (temp_v0 != 0) {
        *(unsigned char *)(param_2 + 0xbd) = temp_v3[0];
        temp_v0 = FUN_002ed280(temp_v1,2);
        if ((temp_v0 != 0) && (temp_v0 = FUN_002ed28c(temp_v1,(unsigned int *)&temp_v4), temp_v0 != 0)) {
          *(unsigned int *)(param_2 + 0xc0) = temp_v4;
          temp_v0 = FUN_002ed28c(temp_v1,temp_v5);
          if (temp_v0 != 0) {
            *(unsigned int *)(param_2 + 0xc4) = temp_v5[0];
            FUN_002ed294(*(unsigned int *)(param_2 + 0xd8),0xc);
            FUN_002e7658(temp_v1);
            return 1;
          }
        }
      }
    }
    FUN_002e7658(temp_v1);
  }
  return 0;
}

} /* extern "C" */
