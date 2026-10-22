/* NON_MATCHING: result translation retains unrecovered fatal-reporting ABI and retail branch scheduling. */
#include "classes/WindowStatus.h"

extern "C" {
s32 FUN_00155e14(u32 *description);
void FUN_002c131c(s32 error, u32 returnAddress);
}

/* Converts an SDK result into the corresponding game message ID. */
WindowStatusResult::WindowStatusResult(u32 value) : code(value)
{
    u32 module = value & 0x3fc00;
    u32 number = value & 0x3ff;
    description = 0x164a3;
    if (module == 0xd000) {
        if (number >= 100 && number < 300) {
            if (value == 0xe0a0d0a9) {
                description = 0;
            } else {
                u32 serviceDescription;
                s32 error = FUN_00155e14(&serviceDescription);
                if (error < 0) {
                    FUN_002c131c(error, 0x2baae4);
                }
                if (serviceDescription != 0xd909) {
                    description = serviceDescription;
                }
            }
            return;
        }
        switch (value) {
        case 0xc920d019: description = 0x16afa; break;
        case 0xc8a0d018: description = 0x17ffe; break;
        case 0xc920d017: description = 0x16afb; break;
        case 0xc960d00c: description = 0x16afd; break;
        case 0xc960d01b: description = 0x16afc; break;
        default: description = 0; break;
        }
        return;
    }
    if (module == 0xa000) {
        description = number + 0x169b8;
    } else if (module == 0xb800) {
        description = number + 0x16a1c;
    } else if (value == 0xc8a08035) {
        description = 0x17f36;
    } else if (module != 0x4400) {
        if (module != 0x13800 || number < 0x100) {
            description = 0;
            return;
        }
        switch (value) {
        case 0xc8a13908: description = 0x16b43; break;
        case 0xc8a13900: description = 0x16440; break;
        case 0xc8a13901: description = 0x16441; break;
        case 0xc8a13902: description = 0x16442; break;
        case 0xc8a13904: description = 0x16443; break;
        case 0xc8a13905: break;
        case 0xc8a13906: description = 0x16446; break;
        case 0xc9413912: description = 0x16957; break;
        case 0xc9413910: description = 0x16379; break;
        case 0xc9413911: description = 0x167c4; break;
        case 0xc961391a: description = 0x17fff; break;
        case 0xf9613903: description = 0x16447; break;
        default: description = 0; break;
        }
    } else if (number >= 0x104 && number <= 0x117) {
        description = 0x16f79;
    } else if (number >= 0x118 && number <= 0x153) {
        description = 0x16f7a;
    } else if (number >= 0x186 && number <= 399) {
        description = 0x17f3f;
    } else {
        description = 0x16f78;
        if ((number < 0xdc || number >= 0xe6) && (number < 100 || number >= 0xb4)) {
            description = 0x16f7f;
        }
    }
}
