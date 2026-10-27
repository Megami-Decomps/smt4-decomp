#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

// Recognize selected remapped result codes or module-0x4e descriptions in [0x60, 0x80).
extern "C" u32 resourceResultMatchesRemappedCodes(const PackedResourceId *result)
{
    const s32 resourceId = (s32)legacyResourceIdRemap(result);

    if ((resourceId & 0x3fc00) == 0x13800) {
        switch (resourceId) {
        case (s32)0xc8a13909u:
        case (s32)0xc8c13885u:
        case (s32)0xc941390du:
        case (s32)0xc9413910u:
        case (s32)0xc9413912u:
        case (s32)0xc961391au:
            return 1;
        }

        const s32 index = resourceId & 0x3ff;
        if (index < 0x60) {
            return 0;
        }
        if (index < 0x80) {
            return 1;
        }
    }
    return 0;
}
