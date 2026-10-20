/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002981e0` (_code @ 0x2981e0, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNew(void);

typedef int romwright_code(...);
/* Supplied declaration required: asdOperatorNew. */
extern int *FUN_004a4588(void);
extern int *FUN_004a6880(void);
extern int *FUN_004a68cc(void);


unsigned int FUN_002981e0(unsigned int param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = *param_2;
  temp_v0 = *(char *)(temp_v3 + 0xd);
  if (temp_v0 != '\0') {
    if (temp_v0 == '\x01') {
      if (*(int **)(temp_v3 + 0x18) == (int *)0x0) {
        return 0;
      }
      temp_v1 = (**(romwright_code **)(**(int **)(temp_v3 + 0x18) + 0x1c))();
      if (temp_v1 == 0) {
        return 0;
      }
      *(unsigned char *)(temp_v3 + 0xd) = 2;
      return 0;
    }
    if (temp_v0 == '\x02') {
      if (*(int *)(temp_v3 + 0x18) == 0) {
        return 0;
      }
      *(unsigned char *)(temp_v3 + 0xd) = 3;
      *(unsigned char *)(temp_v3 + 0xc) = 1;
      param_2[1] = -1;
      (**(romwright_code **)(**(int **)(temp_v3 + 0x18) + 0x10))();
      if (*(int **)(temp_v3 + 0x18) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v3 + 0x18) + 4))();
      }
      *(unsigned int *)(temp_v3 + 0x18) = 0;
      return 0;
    }
    if (temp_v0 != '\x03') {
      return 0;
    }
    return 0xffffffff;
  }
  temp_v2 = param_2[1];
  temp_v1 = 0xa9f8;
  if (temp_v2 != 0) {
    if (temp_v2 != 1) {
      temp_v1 = 0xaa58;
      if (temp_v2 != 2) {
        if (temp_v2 != 3) {
          piVar2 = *(int **)(temp_v3 + 0x18);
          (**(romwright_code **)(*piVar2 + 8))();
          *(unsigned char *)(temp_v3 + 0xd) = 1;
          return 0;
        }
        asdOperatorNew();
        piVar2 = (int *)0x0;
        if (temp_v1 != 0) {
          piVar2 = (int *)FUN_004a6880();
        }
      }
      else {
        asdOperatorNew();
        piVar2 = (int *)0x0;
        if (temp_v1 != 0) {
          piVar2 = (int *)FUN_004a68cc();
        }
      }
    }
    else {
      asdOperatorNew();
      if (temp_v1 != 0) {
        piVar2 = (int *)FUN_004a4588();
        *(int **)(temp_v3 + 0x18) = piVar2;
        (**(romwright_code **)(*piVar2 + 8))();
        *(unsigned char *)(temp_v3 + 0xd) = 1;
        return 0;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    asdOperatorNew();
    piVar2 = (int *)0x0;
    if (temp_v1 != 0) {
      piVar2 = (int *)FUN_004a4588();
    }
  }
  *(int **)(temp_v3 + 0x18) = piVar2;
  (**(romwright_code **)(*piVar2 + 8))();
  *(unsigned char *)(temp_v3 + 0xd) = 1;
  return 0;
}

} /* extern "C" */
