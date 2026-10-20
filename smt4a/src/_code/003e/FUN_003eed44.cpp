/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eed44` (_code @ 0x3eed44, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003eaf20(void);
int FUN_003eebf4(int, int);
int FUN_003f1b3c(int, unsigned int, int, unsigned char [8], int *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00573a20; /* 0x573a20 */
extern unsigned int DAT_00573a24; /* 0x573a24 */
extern unsigned int DAT_00573a88; /* 0x573a88 */
extern unsigned int DAT_00573a8c; /* 0x573a8c */

extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003eebf4. */
/* Supplied declaration required: FUN_003f1b3c. */
extern unsigned int FUN_0047f4cc(unsigned int);
extern int FUN_0047f78c(void);
extern int FUN_004ec93c(unsigned int);
extern int btlUnitGet(unsigned int);


void FUN_003eed44(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  unsigned char temp_v4 [8];
  
  if ((*(char *)(param_1 + 0x45b8) == '\0') && (*(char *)(param_1 + 0x45bb) == '\0')) {
    temp_v0 = btlUnitGet(g_btlScriptUnit);
    if (((temp_v0 == 0) || (temp_v0 = FUN_004ec93c(g_btlScriptUnit), temp_v0 == 0)) &&
       (temp_v0 = param_1, FUN_003eebf4(param_1,1), temp_v0 < 0)) {
      puVar4 = (unsigned int *)(param_1 + 0x45a0);
      if ((DAT_00573a24 & *(unsigned int *)(param_1 + 0x45a4)) == 0 && (DAT_00573a20 & *puVar4) == 0) {
        if ((*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a8c) == 0 && (DAT_00573a88 & *puVar4) == 0) {
          temp_v0 = FUN_0047f78c();
          if (temp_v0 != 0) {
            temp_v0 = param_1;
            FUN_003eaf20();
            *(unsigned int *)(param_1 + 0x4cec) = 0;
            if (temp_v0 != 0) {
              temp_v1 = FUN_0019acdc(*(unsigned short *)(*(int *)(temp_v0 + 0x400) + 300),1);
              FUN_003f1b3c(param_1,temp_v1,1,temp_v4,&temp_v3);
              temp_v1 = FUN_0047f4cc(temp_v3);
              *(unsigned int *)(param_1 + 0x4cec) = temp_v1;
            }
          }
          temp_v2 = DAT_00573a8c | *(unsigned int *)(param_1 + 0x45a4);
          *puVar4 = DAT_00573a88 | *puVar4;
          *(unsigned int *)(param_1 + 0x45a4) = temp_v2;
        }
      }
    }
  }
  return;
}

} /* extern "C" */
