/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c55e4` (_code @ 0x4c55e4, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int dataTable04FindById(void);
int FUN_002efc44(int, unsigned int, int);
int FUN_0034a304(...);
int FUN_003f0e20(unsigned int *, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_005713f8; /* 0x5713f8 */
extern unsigned int DAT_005713fc; /* 0x5713fc */
extern unsigned int DAT_00571408; /* 0x571408 */
extern unsigned int DAT_0057140c; /* 0x57140c */
extern unsigned int DAT_00571410; /* 0x571410 */
extern unsigned int DAT_00571414; /* 0x571414 */

extern unsigned int *btlGetMainState(void);
/* Supplied declaration required: FUN_00184310. */
extern unsigned int padGetMappedValue(int);
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_002efc44. */
/* Supplied declaration required: FUN_0034a304. */
/* Supplied declaration required: FUN_003f0e20. */
extern unsigned int FUN_004bd098(unsigned int, int);


int FUN_004c55e4(unsigned int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  puVar2 = (unsigned int *)btlGetMainState();
  FUN_003f0e20(puVar2,param_1);
  temp_v1 = *puVar2;
  temp_v3 = puVar2[1];
  if (!((DAT_005713f8 & temp_v1) == 0 && (DAT_005713fc & temp_v3) == 0)) {
    temp_v4 = param_2;
    dataTable04FindById();
    if (temp_v4 != 0) {
      temp_v2 = padGetMappedValue(param_2);
      FUN_002efc44(temp_v4,temp_v2,2);
      return temp_v4;
    }
  }
  else if (!((DAT_00571408 & temp_v1) == 0 && (DAT_0057140c & temp_v3) == 0)) {
    temp_v4 = param_2;
    dataTable04FindById();
    if (temp_v4 != 0) {
      temp_v2 = FUN_004bd098(puVar2[0xff],param_2);
      FUN_0034a304(temp_v4,temp_v2,2);
      return temp_v4;
    }
  }
  else if (((temp_v1 & DAT_00571410) != 0 || (temp_v3 & DAT_00571414) != 0) &&
          (dataTable04FindById(), param_2 != 0)) {
    temp_v4 = 0;
    temp_v0 = *(unsigned short *)(param_2 + 0x26);
    if (temp_v0 < 0x12) {
      temp_v1 = (unsigned int)*(unsigned short *)((int)puVar2 + 0x166);
      FUN_00184310();
      if (temp_v1 != 0) {
        temp_v4 = (int)*(char *)(temp_v1 + temp_v0 + 0xa0);
      }
    }
    FUN_0034a304(param_2,temp_v4,2);
    return param_2;
  }
  return 0;
}

} /* extern "C" */
