#include "common.h"

extern "C" {

void FUN_003d4ed8(s32 messageId);

/* Show the message for a kind (two kinds share each group of three messages) and a variant index. */
void messageShowForKindVariant(u32 kind, s32 index)
{
    s32 message = 0;

    switch (kind) {
    case 0:
    case 1:
    case 11:
        message = 0x10002ee + index;
        break;
    case 2:
    case 12:
        message = 0x10002f1 + index;
        break;
    case 3:
    case 13:
        message = 0x10002f4 + index;
        break;
    case 4:
    case 6:
    case 14:
    case 16:
        message = 0x10002f7 + index;
        break;
    case 5:
    case 15:
        message = 0x10002fa + index;
        break;
    case 7:
    case 9:
    case 17:
    case 19:
        message = 0x10002fd + index;
        break;
    case 8:
    case 18:
        message = 0x1000300 + index;
        break;
    case 10:
    case 20:
        message = 0x1000303 + index;
        break;
    }
    FUN_003d4ed8(message);
}

} /* extern "C" */
