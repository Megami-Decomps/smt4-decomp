/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b3160` (_code @ 0x3b3160, 0x170 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022c564(unsigned int *, int, unsigned int);
int treeDestroyAllNodes(void);
int FUN_003fb11c(unsigned char [8], unsigned int *, int *, int *);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char DAT_00422370; /* 0x422370 */

/* Supplied declaration required: FUN_0022c564. */
/* Supplied declaration required: treeDestroyAllNodes. */
/* Supplied declaration required: FUN_003fb11c. */


unsigned int * FUN_003b3160(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [8];
  
  puVar3 = param_1 + 0x505;
  puVar2 = param_1 + 0x50d;
  if (param_1[0x51c] != 0) {
    temp_v2 = param_1[0x50a];
    temp_v1 = *(unsigned int *)(temp_v2 + 8);
    FUN_003fb11c(temp_v3,puVar3,&temp_v1,&temp_v2);
    FUN_0022c564(puVar2,0,param_1[0x510]);
    param_1[0x510] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[0x51e] = 0x40;
    *(unsigned char *)((int)param_1 + 0x1485) = 1;
    *(unsigned char *)((int)param_1 + 0x1486) = 0;
  }
  param_1[0x511] = (unsigned int)&DAT_00422370;
  treeDestroyAllNodes();
  FUN_0022c564(puVar2,0,param_1[0x510]);
  (**(romwright_code **)(*(int *)*puVar2 + 4))((int *)*puVar2,param_1[0x50e]);
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  temp_v2 = param_1[0x50a];
  if (temp_v2 != 0) {
    temp_v1 = *(unsigned int *)(temp_v2 + 8);
    FUN_003fb11c(temp_v3,puVar3,&temp_v1,&temp_v2);
    temp_v0 = param_1[0x50a];
    *(unsigned int *)(temp_v0 + 0xc) = param_1[0x507];
    param_1[0x507] = temp_v0;
    temp_v0 = param_1[0x506];
    while (temp_v0 != 0) {
      puVar2 = (unsigned int *)param_1[0x506];
      param_1[0x506] = *puVar2;
      (**(romwright_code **)(*(int *)*puVar3 + 4))((int *)*puVar3,puVar2[2]);
      (**(romwright_code **)(*(int *)*puVar3 + 4))((int *)*puVar3,puVar2);
      temp_v0 = param_1[0x506];
    }
  }
  return param_1;
}

} /* extern "C" */
