/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b5bc` (_code @ 0x10b5bc, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9318(unsigned char [8]);
int FUN_002f4d64(unsigned char [4], int, unsigned int **);

typedef int romwright_code(...);
/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char g_systemTable; /* 0x59935c */

/* Supplied declaration required: FUN_002e9318. */
extern int FUN_002ee96a(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002f4d64. */
extern int FUN_002f4d8c(unsigned int **, unsigned int *);


unsigned int FUN_0010b5bc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *temp_v1;
  unsigned char temp_v2 [8];
  int temp_v3;
  unsigned int *temp_v4;
  unsigned char temp_v5 [4];
  
  temp_v1 = *(unsigned int **)((*(int *)((unsigned char *)&g_systemTable + 0x1c)) + 0x10);
  do {
    temp_v1 = (unsigned int *)*temp_v1;
    temp_v3 = *(unsigned int *)((*(int *)((unsigned char *)&g_systemTable + 0x1c)) + 0x10);
    temp_v0 = FUN_002f4d8c(&temp_v1,(unsigned int *)&temp_v3);
    if (temp_v0 == 0) {
      return 0;
    }
    (**(romwright_code **)(*(int *)temp_v1[2] + 0xc))(temp_v2);
    temp_v0 = FUN_002ee96a(temp_v2,param_2);
    FUN_002e9318(temp_v2);
  } while (temp_v0 == 0);
  if ((int *)temp_v1[2] != (int *)0x0) {
    (**(romwright_code **)(*(int *)temp_v1[2] + 4))();
  }
  temp_v4 = temp_v1;
  FUN_002f4d64(temp_v5,(*(int *)((unsigned char *)&g_systemTable + 0x1c)),&temp_v4);
  return 1;
}

} /* extern "C" */
