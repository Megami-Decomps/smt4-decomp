/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387f88` (_code @ 0x387f88, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableFileGetTable(unsigned int, unsigned int);
int FUN_002ac0c4(void);
int FUN_002ac0f8(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: dataTableFileGetTable. */
/* Supplied declaration required: FUN_002ac0c4. */
/* Supplied declaration required: FUN_002ac0f8. */
extern int FUN_002ac12c(unsigned int);
extern int dataTableGetCount(void);


int FUN_00387f88(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v5 = 0;
  temp_v6 = 0;
  if (temp_v6 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v4 = *(int *)(param_1 + 0x318) + temp_v6 * 0x50;
      temp_v0 = FUN_002ac12c(temp_v4);
      if (temp_v0 != 0) {
        temp_v1 = temp_v4;
        FUN_002ac0f8();
        temp_v2 = temp_v4;
        FUN_002ac0c4();
        temp_v3 = 0;
        if (temp_v3 < temp_v2) {
          do {
            if ((*(char *)(temp_v1 + temp_v3 * 0x40) == '\x06') &&
               (*(char *)(*(int *)(temp_v4 + 0x4c) + temp_v3 * 0x10 + 0xc) != '\0')) {
              dataTableFileGetTable(*(unsigned int *)(*(int *)(temp_v4 + 0x4c) + temp_v3 * 0x10),param_2);
              temp_v0 = dataTableGetCount();
              temp_v5 = temp_v5 + temp_v0;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v2);
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < *(int *)(param_1 + 0x310));
  }
  return temp_v5;
}

} /* extern "C" */
