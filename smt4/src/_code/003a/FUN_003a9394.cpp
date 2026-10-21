/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9394` (_code @ 0x3a9394, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pointConvertToFloat(int, unsigned int, unsigned int);
int FUN_0029e874(int);
int FUN_002bf818(int);

extern int utilityReturnSuccess(int);
/* Supplied declaration required: pointConvertToFloat. */
extern int FUN_0026b564(void);
extern int FUN_00295618(void);
/* Supplied declaration required: FUN_0029e874. */
extern unsigned int vec2GetYInt(int);
extern unsigned int vec2GetXInt(int);
/* Supplied declaration required: FUN_002bf818. */


void FUN_003a9394(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00295618();
  if (temp_v0 != 0) {
    FUN_0029e874(0);
  }
  temp_v0 = param_1 + 0x188;
  FUN_002bf818(temp_v0);
  temp_v1 = vec2GetYInt(temp_v0);
  temp_v2 = vec2GetXInt(temp_v0);
  pointConvertToFloat(param_1 + 200,temp_v2,temp_v1);
  temp_v0 = FUN_00295618();
  if ((((temp_v0 != 0) && (*(char *)(param_1 + 0x212) != '\0')) &&
      (temp_v0 = FUN_0026b564(), temp_v0 != 0)) && (temp_v0 = utilityReturnSuccess(param_1 + 0x96), temp_v0 == 0)) {
    *(unsigned int *)(param_1 + 0x14) = 7;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
