#include "common.h"

extern "C" {

typedef struct Target {
    /* 0x00 */ u8 unk00[0x2F];
    /* 0x2F */ u8 unk2F;
} Target;

extern struct {
    u8 unk00[8];
    Target *target;
} g_messageMain;

void messageMainSetTargetFlags(u8 value)
{
    if (g_messageMain.target != NULL) {
        g_messageMain.target->unk2F = value;
    }
}

} /* extern "C" */
