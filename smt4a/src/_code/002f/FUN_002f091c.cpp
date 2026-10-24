/* NON_MATCHING: BLOCKED: Thumb resize of five container members (two vectors via _ZNSt6vectorIi12AsdAllocatorIiEE7reserveEj/_ZNSt6vectorIj12AsdAllocatorIjEE7reserveEj, a bit vector, a vector<u32> resize with inlined erase and an object-pushing loop) whose out-of-line instantiations (FUN_00134b44, FUN_00134a06, FUN_00134812, FUN_002f1370, FUN_002f13c2) need mangled names and element types first. */
#include "romwright_types.h"

extern "C" {

int FUN_00105e0c(int, unsigned int);
int FUN_00134812(int, int *, int [2]);
int _ZNSt6vectorIj12AsdAllocatorIjEE7reserveEj(int, int);
int FUN_00134a06(int, unsigned int *, int *);
int _ZNSt6vectorIi12AsdAllocatorIiEE7reserveEj(int, int);
int _ZNSt6vectorIi12AsdAllocatorIiEE13_C_insert_auxEPijRKi(int *, unsigned int, unsigned int, int *);
int bitVectorResizeFill(int, int, int);
int vectorResizeBytes(int, int, int);
int _ZNKSt6vectorIi12AsdAllocatorIiEE4sizeEv(int *);
int FUN_002f13c2(int, unsigned int, unsigned int);

/* stack frame of param_2: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: FUN_00105e0c. */
/* Supplied declaration required: FUN_00134812. */
/* Supplied declaration required: _ZNSt6vectorIj12AsdAllocatorIjEE7reserveEj. */
/* Supplied declaration required: FUN_00134a06. */
/* Supplied declaration required: _ZNSt6vectorIi12AsdAllocatorIiEE7reserveEj. */
/* Supplied declaration required: _ZNSt6vectorIi12AsdAllocatorIiEE13_C_insert_auxEPijRKi. */
/* Supplied declaration required: bitVectorResizeFill. */
extern int _Znwj(unsigned int);
/* Supplied declaration required: vectorResizeBytes. */
extern int FUN_002ef01c(unsigned int);
/* Supplied declaration required: _ZNKSt6vectorIi12AsdAllocatorIiEE4sizeEv. */
extern unsigned int FUN_002f1378(void);
/* Supplied declaration required: FUN_002f13c2. */


void FUN_002f091c(int param_1,int param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int *piVar10;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7 [2];
  
  *(short *)(param_1 + 0x104) = (short)param_2;
  _ZNSt6vectorIi12AsdAllocatorIiEE7reserveEj(param_1 + 0x90,param_2 + 1);
  _ZNSt6vectorIj12AsdAllocatorIjEE7reserveEj(param_1 + 0x9c,param_2 + 1);
  bitVectorResizeFill(param_1 + 0x164,param_2 + 1,0);
  piVar10 = (int *)(param_1 + 0x130);
  temp_v6 = 0;
  temp_v5 = param_2 + 1;
  temp_v0 = _ZNKSt6vectorIi12AsdAllocatorIiEE4sizeEv(piVar10);
  if (temp_v0 < temp_v5) {
    temp_v1 = *(unsigned int *)(param_1 + 0x134);
    temp_v2 = _ZNKSt6vectorIi12AsdAllocatorIiEE4sizeEv(piVar10);
    _ZNSt6vectorIi12AsdAllocatorIiEE13_C_insert_auxEPijRKi(piVar10,temp_v1,temp_v5 - temp_v2,&temp_v6);
  }
  else {
    temp_v0 = _ZNKSt6vectorIi12AsdAllocatorIiEE4sizeEv(piVar10);
    if (temp_v5 < temp_v0) {
      puVar6 = (unsigned int *)*piVar10 + temp_v5;
      puVar7 = *(unsigned int **)(param_1 + 0x134);
      puVar8 = puVar6;
      puVar9 = puVar7;
      if ((unsigned int *)*piVar10 != puVar7) {
        for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
          *puVar8 = *puVar9;
          puVar8 = puVar8 + 1;
        }
        for (; puVar8 != *(unsigned int **)(param_1 + 0x134); puVar8 = puVar8 + 1) {
        }
        *(unsigned int *)(param_1 + 0x134) =
             (int)*(unsigned int **)(param_1 + 0x134) - (((int)puVar7 - (int)puVar6) & 0xfffffffcU);
      }
    }
  }
  vectorResizeBytes(param_1 + 0x13c,param_2 + 1,1);
  FUN_00105e0c(param_1 + 0x200,(param_2 + 1U) & 0xffff);
  for (temp_v2 = 0; temp_v2 < (int)(param_2 + 1U); temp_v2 = temp_v2 + 1) {
    temp_v3 = _Znwj(0x28);
    temp_v1 = 0;
    if (temp_v3 != 0) {
      temp_v1 = FUN_002f1378();
    }
    puVar8 = *(unsigned int **)(param_1 + 0x94);
    temp_v6 = temp_v1;
    if (puVar8 != *(unsigned int **)(param_1 + 0x98)) {
      *(unsigned int **)(param_1 + 0x94) = puVar8 + 1;
      if (puVar8 != (unsigned int *)0x0) {
        *puVar8 = temp_v1;
      }
    }
    else {
      FUN_00134a06(param_1 + 0x90,puVar8,&temp_v6);
    }
    temp_v3 = _Znwj(0x74);
    if (temp_v3 != 0) {
      temp_v4 = FUN_002ef01c(*(unsigned int *)(param_1 + 4));
      temp_v1 = *(unsigned int *)(temp_v4 + 0x7c);
      temp_v4 = FUN_002ef01c(*(unsigned int *)(param_1 + 4));
      FUN_002f13c2(temp_v3,*(unsigned int *)(temp_v4 + 0x78) & 0xffff,temp_v1);
    }
    piVar10 = *(int **)(param_1 + 0xa0);
    temp_v7[0] = temp_v3;
    if (piVar10 != *(int **)(param_1 + 0xa4)) {
      *(int **)(param_1 + 0xa0) = piVar10 + 1;
      if (piVar10 != (int *)0x0) {
        *piVar10 = temp_v3;
      }
    }
    else {
      FUN_00134812(param_1 + 0x9c,piVar10,temp_v7);
    }
  }
  return;
}

} /* extern "C" */
