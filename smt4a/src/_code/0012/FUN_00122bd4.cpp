/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122bd4` (_code @ 0x122bd4, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefRelease(...);
int FUN_002ec8a8(...);

typedef struct fn_00122bd4_arg1 fn_00122bd4_arg1;
struct fn_00122bd4_arg1 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x3];
    int field_0x18; /* +0x18 */
    byte field_0x1c; /* +0x1c */
};

typedef int romwright_code(...);
/* Supplied declaration required: sharedRefRelease. */
extern int _Znwj(unsigned int);
extern int *FUN_002e7614(int, unsigned int);
extern int FUN_002eb7d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ec8a8. */
extern int *FUN_002eff58(int, int);
extern int FUN_002eff84(void);


unsigned int FUN_00122bd4(int param_1,fn_00122bd4_arg1 *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  if ((int)((unsigned int)param_2->field_0x1c << 0x1d) < 0) {
    temp_v0 = FUN_002eb7d0(0x20,0);
    if ((temp_v0 != 0) &&
       (piVar2 = (int *)FUN_002eff58(temp_v0,param_2->field_0x10 + param_2->field_0x18),
       piVar2 != (int *)0x0)) {
      temp_v0 = FUN_002eff84();
      if (temp_v0 != 0) {
        FUN_002ec8a8(piVar2,param_2);
        sharedRefRelease(*(unsigned int *)(param_1 + 0xd8));
        *(int **)(param_1 + 0xd8) = piVar2;
        return 1;
      }
      (**(romwright_code **)(*piVar2 + 4))(piVar2);
    }
    return 0;
  }
  temp_v0 = _Znwj(0x20);
  if (temp_v0 != 0) {
    piVar2 = (int *)FUN_002e7614(temp_v0,*(unsigned int *)&param_2->field_0x14);
  }
  else {
    piVar2 = (int *)0x0;
  }
  FUN_002ec8a8(piVar2,param_2);
  sharedRefRelease(*(unsigned int *)(param_1 + 0xd8));
  *(int **)(param_1 + 0xd8) = piVar2;
  return 1;
}

} /* extern "C" */
