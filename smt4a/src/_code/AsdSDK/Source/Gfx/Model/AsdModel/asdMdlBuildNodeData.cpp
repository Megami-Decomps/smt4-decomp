/* NON_MATCHING: romwright 0.5.0 decompilation of `asdMdlBuildNodeData` (_code @ 0x1847c4, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(int, int, int, int, int);
int asdListAdd(unsigned char *, unsigned int *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_005b3c2c; /* 0x5b3c2c */
extern unsigned char DAT_00636ebc; /* 0x636ebc */

/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: asdListAdd. */
extern int rt_memcmp(int, char *, unsigned int);


unsigned int * asdMdlBuildNodeData(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAlloc(0x100,0x100,0,0x1c,1);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = 1;
  *(unsigned char *)(puVar1 + 1) = 1;
  temp_v2 = 0;
  puVar1[3] = param_1;
  temp_v0 = rt_memcmp(param_1,"ATBC",4);
  if ((temp_v0 == 0) || (temp_v1 = rt_memcmp(param_1,"ABCH",4), temp_v0 = param_1, temp_v1 == 0)) {
    temp_v0 = *(int *)(param_1 + 0x14);
    if (temp_v0 == 0) {
      temp_v0 = *(int *)(param_1 + 0x10);
    }
    temp_v0 = param_1 + temp_v0;
    temp_v1 = rt_memcmp(temp_v0,"MDLSIGN",7);
    if (temp_v1 == 0) {
      temp_v2 = *(int *)(temp_v0 + 8);
      temp_v0 = temp_v0 + 0x80;
    }
    else {
      temp_v0 = 0;
    }
  }
  puVar1[2] = temp_v0;
  temp_v1 = 0;
  temp_v0 = rt_memcmp(param_1,"ATBC",4);
  if ((temp_v0 == 0) || (temp_v0 = rt_memcmp(param_1,"ABCH",4), temp_v0 == 0)) {
    temp_v1 = *(int *)(param_1 + 0xc) + param_1;
  }
  puVar1[4] = temp_v1;
  if (temp_v2 == 0) {
    puVar1[5] = param_2;
  }
  asdListAdd(&DAT_00636ebc,puVar1,0);
  DAT_005b3c2c = DAT_005b3c2c + 1;
  return puVar1;
}

} /* extern "C" */
