/* NON_MATCHING: 211 lines. Restructured from retail: the message is a local stored once, module 0xD000's service
 * range and module 0x4400's description ranges test the module index and a signed description number, module
 * 0x13800 is tested by its index, and a failed service call is thrown with the caller's pc and the failure bit.
 * Left: retail keeps 0 in r0 from entry and shares the "message = service description" move with the 0xE0A0D0A9
 * case, tests 0xC8A08035 twice (a compare, then an adds), and allocates the module mask in ip. */
#include "classes/WindowStatus.h"

extern "C" {
s32 FUN_00155e14(u32 *description);
void errThrowFatal(s32 error, u32 location, ...); /* also passed the failure bit, as sysReportCheckFailure is */
}

/* Converts an SDK result into the corresponding game message ID. */
WindowStatusResult::WindowStatusResult(u32 value) : code(value)
{
    u32 module = value & 0x3FC00;
    u32 moduleIndex = module >> 10;
    s32 number = value & 0x3FF;
    u32 message = 0x164A3;

    if (module == 0xD000) {
        if (moduleIndex == 0x34 && number >= 100 && number < 300) {
            if (value == 0xE0A0D0A9) {
                message = 0;
            } else {
                u32 serviceDescription;
                s32 error = FUN_00155e14(&serviceDescription);
                u32 location = __current_pc();
                u32 failed = (u32)error >> 31;

                if (failed)
                    errThrowFatal(error, location, failed);
                if (serviceDescription != 0xD909)
                    message = serviceDescription;
            }
        } else {
            switch (value) {
            case 0xC920D019: message = 0x16AFA; break;
            case 0xC8A0D018: message = 0x17FFE; break;
            case 0xC920D017: message = 0x16AFB; break;
            case 0xC960D00C: message = 0x16AFD; break;
            case 0xC960D01B: message = 0x16AFC; break;
            default: message = 0; break;
            }
        }
    } else if (module == 0xA000) {
        message = number + 0x169B8;
    } else if (module == 0xB800) {
        message = number + 0x16A1C;
    } else if (value == 0xC8A08035) {
        message = 0x17F36;
    } else if (module == 0x4400) {
        if (moduleIndex == 0x11 && number >= 260 && number < 280)
            message = 0x16F79;
        else if (moduleIndex == 0x11 && number >= 280 && number <= 0x153)
            message = 0x16F7A;
        else if (moduleIndex == 0x11 && number >= 390 && number < 400)
            message = 0x17F3F;
        else if ((moduleIndex == 0x11 && number >= 220 && number <= 229) || (moduleIndex == 0x11 && number >= 100 && number <= 179))
            message = 0x16F78;
        else
            message = 0x16F7F;
    } else if (moduleIndex == 0x4E && number >= 256) {
        switch (value) {
        case 0xC8A13908: message = 0x16B43; break;
        case 0xC8A13900: message = 0x16440; break;
        case 0xC8A13901: message = 0x16441; break;
        case 0xC8A13902: message = 0x16442; break;
        case 0xC8A13904: message = 0x16443; break;
        case 0xC8A13905: break;
        case 0xC8A13906: message = 0x16446; break;
        case 0xC9413912: message = 0x16957; break;
        case 0xC9413910: message = 0x16379; break;
        case 0xC9413911: message = 0x167C4; break;
        case 0xC961391A: message = 0x17FFF; break;
        case 0xF9613903: message = 0x16447; break;
        default: message = 0; break;
        }
    } else {
        message = 0;
    }
    description = message;
}
