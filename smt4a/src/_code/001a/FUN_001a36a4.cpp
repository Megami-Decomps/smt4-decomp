/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a36a4` (_code @ 0x1a36a4, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4a90(int, int, unsigned int);
int nw_ut_internal_LinkListImpl_insert(unsigned char *, unsigned char *, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

#ifndef ROMWRIGHT_STORAGE_s________005c4bb4_19_1_DEFINED
#define ROMWRIGHT_STORAGE_s________005c4bb4_19_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s________005c4bb4_19_1 {
    char whole[19];
    unsigned char u1[19];
    signed char s1[19];
};
typedef char romwright_storage_s________005c4bb4_19_1_size_check[(sizeof(union romwright_storage_s________005c4bb4_19_1) == 19) ? 1 : -1];
typedef char romwright_storage_s________005c4bb4_19_1_u1_width_check[(sizeof(((union romwright_storage_s________005c4bb4_19_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s________005c4bb4_19_1_s1_width_check[(sizeof(((union romwright_storage_s________005c4bb4_19_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s________005c4bb4_19_1 s________005c4bb4; /* 0x5c4bb4 */
extern unsigned char DAT_0064be60; /* 0x64be60 */

/* Supplied declaration required: FUN_001b4a90. */
extern int nw_ut_HeapBase_FindContainHeap(unsigned char *, int);
/* Supplied declaration required: nw_ut_internal_LinkListImpl_insert. */


void FUN_001a36a4(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  *(unsigned int *)(param_1 + 0x24) = param_5 & 0xff;
  *(unsigned int *)(param_1 + 0x14) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0x10) = param_4;
  if ((param_5 & 2) != 0) {
    FUN_001b4a90(param_3,param_4 - param_3,(*(unsigned int *)&s________005c4bb4.u1[0]));
  }
  puVar2 = &DAT_0064be60;
  temp_v0 = nw_ut_HeapBase_FindContainHeap(&DAT_0064be60,param_1);
  if (temp_v0 != 0) {
    puVar2 = (unsigned char *)(temp_v0 + 0x18);
  }
  nw_ut_internal_LinkListImpl_insert(puVar2,puVar2 + 4,param_1 + 4);
  return;
}

} /* extern "C" */
