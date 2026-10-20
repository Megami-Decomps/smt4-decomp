/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b020` (_code @ 0x11b020, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001327b4(int, int);
int FUN_00307084(void);
int FUN_003070aa(...);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_0011b0c8; /* 0x11b0c8 */

/* Supplied declaration required: FUN_001327b4. */
extern int FUN_002f7896(unsigned int *, unsigned char *);
/* Supplied declaration required: FUN_00307084. */
/* Supplied declaration required: FUN_003070aa. */
extern int wordRefsDiffer_003070ec(unsigned int **, unsigned int *);


unsigned int FUN_0011b020(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [4];
  unsigned int *temp_v6;
  int temp_v7;
  unsigned int *temp_v8;
  unsigned char temp_v9 [4];
  
  if (*(int *)(param_2 + 0xc) - 4000U < 1000) {
    puVar1 = (unsigned int *)(param_2 + 0x18);
    temp_v0 = FUN_002f7896(puVar1,&LAB_0011b0c8);
    if ((temp_v0 == 0) && (FUN_00307084(), puVar1 != (unsigned int *)0x0 || temp_v2 != 0)) {
      temp_v6 = (unsigned int *)**(unsigned int **)(param_1 + 0x70);
      temp_v0 = param_1 + 0x60;
      while( 1 ) {
        temp_v7 = *(unsigned int *)(param_1 + 0x70);
        temp_v1 = wordRefsDiffer_003070ec(&temp_v6,(unsigned int *)&temp_v7);
        if (temp_v1 == 0) break;
        if (*(int *)(param_2 + 0x10) == temp_v6[6]) {
          puVar3 = temp_v6 + 8;
          FUN_00307084();
          if (temp_v2 < temp_v3 ||
              temp_v3 - temp_v2 < (unsigned int)(puVar1 <= puVar3)) {
            return 0;
          }
          temp_v8 = temp_v6;
          FUN_003070aa(temp_v9,temp_v0,&temp_v8);
          break;
        }
        temp_v6 = (unsigned int *)*temp_v6;
      }
      FUN_001327b4(temp_v0,param_2);
      if (*(unsigned int *)(param_1 + 0x74) >= 6) {
        temp_v4 = *(unsigned int *)(*(int *)(param_1 + 0x70) + 4);
        FUN_003070aa(temp_v5,temp_v0,&temp_v4);
      }
    }
  }
  return 1;
}

} /* extern "C" */
