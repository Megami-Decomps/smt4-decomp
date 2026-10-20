#include "common.h"

extern "C" {

typedef struct StateValidator {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[4];
    /* 0x08 */ u8 member08[4];
    /* 0x0C */ u8 member0C[1];
} StateValidator;

void FUN_00178bc8(u8 *member);
void FUN_0017909c(u8 *member);
void FUN_0017cbb4(void);
void FUN_00195ae4(u8 *member);
extern StateValidator *DAT_00589188;

/* Installs the validator state and initialises its three members; always returns 0. */
u32 vldtr_initializeStateValidator(StateValidator *validator)
{
    DAT_00589188 = validator;
    FUN_0017cbb4();
    FUN_00178bc8(DAT_00589188->member04);
    FUN_00195ae4(DAT_00589188->member08);
    FUN_0017909c(DAT_00589188->member0C);
    return 0;
}

} /* extern "C" */
