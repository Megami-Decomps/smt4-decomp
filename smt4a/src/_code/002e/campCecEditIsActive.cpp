#include "common.h"

extern "C" {

typedef struct CampCecEdit {
    /* 0x000 */ u8 unk000[0x10E];
    /* 0x10E */ u8 active;
} CampCecEdit;

extern CampCecEdit *g_campCecEdit;

/* Whether the camp CEC edit screen exists and is active. */
s32 campCecEditIsActive(void)
{
    if (g_campCecEdit == NULL) {
        return 0;
    }
    return g_campCecEdit->active != 0;
}

}
