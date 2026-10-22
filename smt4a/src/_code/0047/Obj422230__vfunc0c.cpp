/* NON_MATCHING: Retail instruction scheduling/register allocation differs (74 retail versus 88 compiled rows). */
#include "classes/Obj422230.h"
#include "romwright_types.h"

extern "C" {

int FUN_00161a10(void);
int _ZN18WindowStatusResultC1Ej(int *, int);
int legacyResourceIdRemap(int);
int FUN_00428940(int *, int, int, unsigned char [128]);
int halfwordBufferCopyRange(unsigned char [4], unsigned char [128], unsigned int, int);
int table30GetEntryB(unsigned char [4], unsigned int, unsigned int);

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: FUN_00161a10. */
/* Supplied declaration required: _ZN18WindowStatusResultC1Ej. */
extern unsigned int *_ZN18WindowStatusResultC1Ev(unsigned char *);
/* Supplied declaration required: legacyResourceIdRemap. */
/* Supplied declaration required: FUN_00428940. */
/* Supplied declaration required: halfwordBufferCopyRange. */
extern unsigned int FUN_004ffd4c(unsigned char *);
/* Supplied declaration required: table30GetEntryB. */


} /* extern "C" */

WindowStatusOperationResult Obj422230::vfunc0c(const void *input)

{
    WindowStatusOperationResult output = {1, {0, 0, 0}, WindowStatusResult(0), 0, 0};
    unsigned char *param_1 = (unsigned char *)&output;
    int param_2 = (int)this;
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar6;
  int temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [128];
  int temp_v5;
  unsigned int uStack_1c;
  
  puVar2 = (unsigned int *)&temp_v2;
  puVar1 = (unsigned int *)_ZN18WindowStatusResultC1Ev(param_1 + 4);
  puVar6 = puVar1 + -1;
  _ZN18WindowStatusResultC1Ej(&temp_v2,0);
  temp_v1 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = temp_v1;
  temp_v0 = g_aocMain;
  puVar3 = *(unsigned char **)(param_2 + 4);
  if (puVar3 != (unsigned char *)0x0) {
    if (puVar3 == (unsigned char *)0x1) {
      temp_v0 = legacyResourceIdRemap(param_2 + 0xc);
      puVar3 = (unsigned char *)-(temp_v0 >> 0x1f);
      if (puVar3 != (unsigned char *)0x1) {
        *(unsigned char *)puVar6 = 0;
      }
      else {
        temp_v1 = *(unsigned int *)(param_2 + 0x10);
        *puVar1 = *(unsigned int *)(param_2 + 0xc);
        puVar1[1] = temp_v1;
        temp_v0 = legacyResourceIdRemap(param_2 + 0xc);
        if (temp_v0 != -0x36dec7ff) {
          *(unsigned char *)puVar6 = 100;
          puVar3 = (unsigned char *)legacyResourceIdRemap(param_2 + 0xc);
          return output;
        }
        puVar3 = (unsigned char *)0x67;
        *(unsigned char *)puVar6 = 0x67;
      }
    }
  }
  else {
    table30GetEntryB(temp_v3,*(unsigned int *)(g_aocMain + 0x5a8),*(unsigned int *)(param_2 + 0x14));
    temp_v1 = FUN_004ffd4c(temp_v3);
    halfwordBufferCopyRange(temp_v3,temp_v4,temp_v1,0);
    FUN_00161a10();
    temp_v2 = temp_v1;
    FUN_00428940(&temp_v5,temp_v0 + 0x7c,temp_v0 + 0x18,temp_v4);
    *(unsigned int *)(param_2 + 4) = 1;
    *(unsigned int *)(param_2 + 0xc) = temp_v5;
    *(unsigned int *)(param_2 + 0x10) = uStack_1c;
    puVar3 = temp_v3;
  }
  return output;
}

