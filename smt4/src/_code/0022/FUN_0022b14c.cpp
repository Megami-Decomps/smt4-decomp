/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b14c` (_code @ 0x22b14c, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8ee0(int, int);
int FUN_002bf818(int);
int SBORROW4(int, int);

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_00233718(int);
extern int asdTMTexTableNodeIsLoaded(unsigned int);
/* Supplied declaration required: FUN_002b8ee0. */
/* Supplied declaration required: FUN_002bf818. */


int FUN_0022b14c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  if (*(int *)(param_1 + 8) == 0) {
    temp_v0 = 1;
  }
  else if ((*(int *)(param_1 + 0xc64) == -1) || (temp_v1 = asdTMTexTableNodeIsLoaded(0x2a), temp_v0 = 0, temp_v1 != 0))
  {
    temp_v0 = FUN_00233718(param_1);
    temp_v1 = 0;
    if (temp_v1 < temp_v0) {
      do {
        if (temp_v1 <= *(int *)(param_1 + 0xc58)) {
          FUN_002bf818(param_1 + temp_v1 * 0x8c + 0x654);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v0);
    }
    *(int *)(param_1 + 0xc58) = *(int *)(param_1 + 0xc58) + 1;
    FUN_002b8ee0(param_1 + 200,0);
    temp_v3 = *(char *)(param_1 + 0x152) != '\0';
    temp_v1 = 0;
    temp_v2 = 0;
    if (temp_v3) {
      temp_v2 = *(int *)(param_1 + 0xc58);
      temp_v1 = temp_v2 - temp_v0;
    }
    if (((temp_v3 && temp_v2 != temp_v0) && temp_v1 < 0 == (temp_v3 && SBORROW4(temp_v2,temp_v0))) &&
       (*(char *)(param_1 + temp_v0 * 0x8c + 0x652) != '\0')) {
      *(unsigned char *)(param_1 + 0x631) = 1;
    }
    temp_v0 = (int)*(char *)(param_1 + 0x631);
  }
  return temp_v0;
}

} /* extern "C" */
